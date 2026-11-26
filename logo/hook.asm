option casemap:none

EXTERN SkyfallLogoOnText:PROC
EXTERN SkyfallLogoAfterRender:PROC
EXTERN SkyfallLogoResume:QWORD
EXTERN SkyfallRenderDrawDataTrampoline:QWORD
EXTERN SkyfallRenderDrawDataReturn:QWORD
EXTERN SkyfallDrawData:QWORD
PUBLIC SkyfallLogoStub
PUBLIC SkyfallRenderDrawDataStub
PUBLIC SkyfallRenderDrawDataAfter

.code
SkyfallLogoStub PROC
    push    rbp
    mov     rbp, rsp
    sub     rsp, 100h

    mov     [rbp-08h], rcx
    mov     [rbp-10h], rdx
    mov     [rbp-18h], r8
    mov     [rbp-20h], r9
    movd    dword ptr [rbp-24h], xmm2
    movd    dword ptr [rbp-28h], xmm3
    movaps  [rbp-40h], xmm0
    movaps  [rbp-50h], xmm1

    ; OnText(draw_list, position, size_bits, text_begin, text_end)
    mov     rcx, [rbp-10h]
    mov     rdx, [rbp-20h]
    mov     r8d, [rbp-24h]
    mov     r9,  [rbp+40h]
    mov     rax, [rbp+48h]
    mov     [rsp+20h], rax
    call    SkyfallLogoOnText

    mov     rcx, [rbp-08h]
    mov     rdx, [rbp-10h]
    mov     r8,  [rbp-18h]
    mov     r9,  [rbp-20h]
    movd    xmm2, dword ptr [rbp-24h]
    movd    xmm3, dword ptr [rbp-28h]
    movaps  xmm0, [rbp-40h]
    movaps  xmm1, [rbp-50h]

    mov     rsp, rbp
    pop     rbp

    ; Resume m64's ImFont::RenderText after the 12-byte prologue.
    mov     r11, rsp
    mov     [r11+20h], r9
    movss   dword ptr [rsp+18h], xmm2
    jmp     qword ptr [SkyfallLogoResume]
SkyfallLogoStub ENDP

SkyfallRenderDrawDataStub PROC
    ; Entry has original rsp with the caller's return address. Save it,
    ; replace it with the post-render stub, and let the original body return
    ; through us. The trampoline executes the copied prologue at the original
    ; stack position and then jumps back to +13.
    mov     rax, [rsp]
    mov     [SkyfallRenderDrawDataReturn], rax
    mov     [SkyfallDrawData], rcx
    lea     rax, SkyfallRenderDrawDataAfter
    mov     [rsp], rax
    jmp     qword ptr [SkyfallRenderDrawDataTrampoline]
SkyfallRenderDrawDataStub ENDP

SkyfallRenderDrawDataAfter PROC
    ; Original returned with rsp pointing past its return address. Draw the
    ; logo, then continue the caller exactly as the original would have.
    sub     rsp, 20h
    call    SkyfallLogoAfterRender
    add     rsp, 20h
    jmp     qword ptr [SkyfallRenderDrawDataReturn]
SkyfallRenderDrawDataAfter ENDP
end
