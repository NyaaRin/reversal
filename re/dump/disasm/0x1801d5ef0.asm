
m64.dll:     file format pei-x86-64


Disassembly of section .text:

00000001801d5ef0 <.text+0x1d4ef0>:
   1801d5ef0:	40 55                	rex push rbp
   1801d5ef2:	53                   	push   rbx
   1801d5ef3:	56                   	push   rsi
   1801d5ef4:	57                   	push   rdi
   1801d5ef5:	41 54                	push   r12
   1801d5ef7:	41 55                	push   r13
   1801d5ef9:	41 56                	push   r14
   1801d5efb:	41 57                	push   r15
   1801d5efd:	48 8d ac 24 b8 e6 ff 	lea    rbp,[rsp-0x1948]
   1801d5f04:	ff 
   1801d5f05:	b8 48 1a 00 00       	mov    eax,0x1a48
   1801d5f0a:	e8 91 2e 10 00       	call   0x1802d8da0
   1801d5f0f:	48 2b e0             	sub    rsp,rax
   1801d5f12:	0f 29 b4 24 30 1a 00 	movaps XMMWORD PTR [rsp+0x1a30],xmm6
   1801d5f19:	00 
   1801d5f1a:	0f 29 bc 24 20 1a 00 	movaps XMMWORD PTR [rsp+0x1a20],xmm7
   1801d5f21:	00 
   1801d5f22:	44 0f 29 84 24 10 1a 	movaps XMMWORD PTR [rsp+0x1a10],xmm8
   1801d5f29:	00 00 
   1801d5f2b:	44 0f 29 8c 24 00 1a 	movaps XMMWORD PTR [rsp+0x1a00],xmm9
   1801d5f32:	00 00 
   1801d5f34:	44 0f 29 94 24 f0 19 	movaps XMMWORD PTR [rsp+0x19f0],xmm10
   1801d5f3b:	00 00 
   1801d5f3d:	44 0f 29 9c 24 e0 19 	movaps XMMWORD PTR [rsp+0x19e0],xmm11
   1801d5f44:	00 00 
   1801d5f46:	44 0f 29 a4 24 d0 19 	movaps XMMWORD PTR [rsp+0x19d0],xmm12
   1801d5f4d:	00 00 
   1801d5f4f:	44 0f 29 ac 24 c0 19 	movaps XMMWORD PTR [rsp+0x19c0],xmm13
   1801d5f56:	00 00 
   1801d5f58:	44 0f 29 b4 24 b0 19 	movaps XMMWORD PTR [rsp+0x19b0],xmm14
   1801d5f5f:	00 00 
   1801d5f61:	44 0f 29 bc 24 a0 19 	movaps XMMWORD PTR [rsp+0x19a0],xmm15
   1801d5f68:	00 00 
   1801d5f6a:	48 8b 05 4f 45 20 00 	mov    rax,QWORD PTR [rip+0x20454f]        # 0x1803da4c0
   1801d5f71:	48 33 c4             	xor    rax,rsp
   1801d5f74:	48 89 85 90 18 00 00 	mov    QWORD PTR [rbp+0x1890],rax
   1801d5f7b:	45 33 ed             	xor    r13d,r13d
   1801d5f7e:	41 8b c5             	mov    eax,r13d
   1801d5f81:	89 45 80             	mov    DWORD PTR [rbp-0x80],eax
   1801d5f84:	89 45 84             	mov    DWORD PTR [rbp-0x7c],eax
   1801d5f87:	c7 45 98 04 00 00 00 	mov    DWORD PTR [rbp-0x68],0x4
   1801d5f8e:	44 89 ad 18 03 00 00 	mov    DWORD PTR [rbp+0x318],r13d
   1801d5f95:	8b 15 b1 52 22 00    	mov    edx,DWORD PTR [rip+0x2252b1]        # 0x1803fb24c
   1801d5f9b:	48 8d 05 aa 52 22 00 	lea    rax,[rip+0x2252aa]        # 0x1803fb24c
   1801d5fa2:	48 8d 8d 18 03 00 00 	lea    rcx,[rbp+0x318]
   1801d5fa9:	85 d2                	test   edx,edx
   1801d5fab:	48 0f 49 c8          	cmovns rcx,rax
   1801d5faf:	48 8d 45 98          	lea    rax,[rbp-0x68]
   1801d5fb3:	83 fa 04             	cmp    edx,0x4
   1801d5fb6:	48 0f 4e c1          	cmovle rax,rcx
   1801d5fba:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d5fbd:	89 05 89 52 22 00    	mov    DWORD PTR [rip+0x225289],eax        # 0x1803fb24c
   1801d5fc3:	4c 69 f0 c8 00 00 00 	imul   r14,rax,0xc8
   1801d5fca:	48 8d 05 9f 69 20 00 	lea    rax,[rip+0x20699f]        # 0x1803dc970
   1801d5fd1:	4c 03 f0             	add    r14,rax
   1801d5fd4:	8b 3d c2 2f 22 00    	mov    edi,DWORD PTR [rip+0x222fc2]        # 0x1803f8f9c
   1801d5fda:	65 48 8b 34 25 58 00 	mov    rsi,QWORD PTR gs:0x58
   1801d5fe1:	00 00 
   1801d5fe3:	41 bf 10 00 00 00    	mov    r15d,0x10
   1801d5fe9:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d5fed:	45 38 2c 07          	cmp    BYTE PTR [r15+rax*1],r13b
   1801d5ff1:	75 05                	jne    0x1801d5ff8
   1801d5ff3:	e8 fc 22 10 00       	call   0x1802d82f4
   1801d5ff8:	41 bc c0 0e 00 00    	mov    r12d,0xec0
   1801d5ffe:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6002:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d6006:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d600d:	4c 39 a8 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],r13
   1801d6014:	75 10                	jne    0x1801d6026
   1801d6016:	4c 39 a9 68 23 00 00 	cmp    QWORD PTR [rcx+0x2368],r13
   1801d601d:	48 8d 88 80 02 00 00 	lea    rcx,[rax+0x280]
   1801d6024:	74 07                	je     0x1801d602d
   1801d6026:	48 8d 88 50 02 00 00 	lea    rcx,[rax+0x250]
   1801d602d:	f3 44 0f 10 19       	movss  xmm11,DWORD PTR [rcx]
   1801d6032:	f3 44 0f 5c 98 18 01 	subss  xmm11,DWORD PTR [rax+0x118]
   1801d6039:	00 00 
   1801d603b:	f3 44 0f 10 2d 9c af 	movss  xmm13,DWORD PTR [rip+0x1aaf9c]        # 0x180380fe0
   1801d6042:	1a 00 
   1801d6044:	f3 45 0f 5c dd       	subss  xmm11,xmm13
   1801d6049:	f3 0f 10 35 6f aa 1a 	movss  xmm6,DWORD PTR [rip+0x1aaa6f]        # 0x180380ac0
   1801d6050:	00 
   1801d6051:	f3 44 0f 59 de       	mulss  xmm11,xmm6
   1801d6056:	44 0f 29 5c 24 60    	movaps XMMWORD PTR [rsp+0x60],xmm11
   1801d605c:	45 0f 57 c0          	xorps  xmm8,xmm8
   1801d6060:	4c 89 ad 40 03 00 00 	mov    QWORD PTR [rbp+0x340],r13
   1801d6067:	48 8d 95 40 03 00 00 	lea    rdx,[rbp+0x340]
   1801d606e:	bb 02 00 00 00       	mov    ebx,0x2
   1801d6073:	8b cb                	mov    ecx,ebx
   1801d6075:	e8 56 4a 09 00       	call   0x18026aad0
   1801d607a:	f3 44 0f 11 9d 48 03 	movss  DWORD PTR [rbp+0x348],xmm11
   1801d6081:	00 00 
   1801d6083:	c7 85 4c 03 00 00 00 	mov    DWORD PTR [rbp+0x34c],0xbf800000
   1801d608a:	00 80 bf 
   1801d608d:	41 b9 18 00 00 00    	mov    r9d,0x18
   1801d6093:	45 33 c0             	xor    r8d,r8d
   1801d6096:	48 8d 95 48 03 00 00 	lea    rdx,[rbp+0x348]
   1801d609d:	48 8d 0d 7c c5 19 00 	lea    rcx,[rip+0x19c57c]        # 0x180372620
   1801d60a4:	e8 f7 ce 09 00       	call   0x180272fa0
   1801d60a9:	b9 01 00 00 00       	mov    ecx,0x1
   1801d60ae:	e8 fd 4a 09 00       	call   0x18026abb0
   1801d60b3:	f3 0f 10 05 39 b1 1a 	movss  xmm0,DWORD PTR [rip+0x1ab139]        # 0x1803811f4
   1801d60ba:	00 
   1801d60bb:	45 33 c9             	xor    r9d,r9d
   1801d60be:	41 0f 28 cb          	movaps xmm1,xmm11
   1801d60c2:	0f 14 c8             	unpcklps xmm1,xmm0
   1801d60c5:	66 49 0f 7e c8       	movq   r8,xmm1
   1801d60ca:	8b d3                	mov    edx,ebx
   1801d60cc:	48 8d 0d 5d c5 19 00 	lea    rcx,[rip+0x19c55d]        # 0x180372630
   1801d60d3:	e8 e8 9a fc ff       	call   0x18019fbc0
   1801d60d8:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d60df:	56 fd 93 
   1801d60e2:	f3 44 0f 10 25 65 ab 	movss  xmm12,DWORD PTR [rip+0x1aab65]        # 0x180380c50
   1801d60e9:	1a 00 
   1801d60eb:	f3 44 0f 10 0d 2c aa 	movss  xmm9,DWORD PTR [rip+0x1aaa2c]        # 0x180380b20
   1801d60f2:	1a 00 
   1801d60f4:	f3 44 0f 10 35 8b b0 	movss  xmm14,DWORD PTR [rip+0x1ab08b]        # 0x180381188
   1801d60fb:	1a 00 
   1801d60fd:	f3 44 0f 10 3d 36 b0 	movss  xmm15,DWORD PTR [rip+0x1ab036]        # 0x18038113c
   1801d6104:	1a 00 
   1801d6106:	84 c0                	test   al,al
   1801d6108:	0f 84 81 2d 00 00    	je     0x1801d8e8f
   1801d610e:	48 89 9d a8 16 00 00 	mov    QWORD PTR [rbp+0x16a8],rbx
   1801d6115:	4c 8d 85 a8 16 00 00 	lea    r8,[rbp+0x16a8]
   1801d611c:	48 8d 95 10 08 00 00 	lea    rdx,[rbp+0x810]
   1801d6123:	48 8d 0d c6 4c 22 00 	lea    rcx,[rip+0x224cc6]        # 0x1803fadf0
   1801d612a:	e8 01 b9 06 00       	call   0x180241a30
   1801d612f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6132:	48 83 c1 28          	add    rcx,0x28
   1801d6136:	48 b8 b8 f3 ff 21 12 	movabs rax,0x5635981221fff3b8
   1801d613d:	98 35 56 
   1801d6140:	48 89 85 b0 16 00 00 	mov    QWORD PTR [rbp+0x16b0],rax
   1801d6147:	4c 8d 85 b0 16 00 00 	lea    r8,[rbp+0x16b0]
   1801d614e:	48 8d 95 20 08 00 00 	lea    rdx,[rbp+0x820]
   1801d6155:	e8 d6 b8 06 00       	call   0x180241a30
   1801d615a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d615d:	48 83 c1 28          	add    rcx,0x28
   1801d6161:	e8 5a 6e 02 00       	call   0x1801fcfc0
   1801d6166:	48 8b d0             	mov    rdx,rax
   1801d6169:	48 8d 0d d0 c4 19 00 	lea    rcx,[rip+0x19c4d0]        # 0x180372640
   1801d6170:	e8 eb a9 fc ff       	call   0x1801a0b60
   1801d6175:	c7 45 a0 00 00 c0 3f 	mov    DWORD PTR [rbp-0x60],0x3fc00000
   1801d617c:	c7 45 9c 00 00 40 3f 	mov    DWORD PTR [rbp-0x64],0x3f400000
   1801d6183:	f3 0f 10 05 19 45 20 	movss  xmm0,DWORD PTR [rip+0x204519]        # 0x1803da6a4
   1801d618a:	00 
   1801d618b:	48 8d 4d 9c          	lea    rcx,[rbp-0x64]
   1801d618f:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d6193:	48 8d 05 0a 45 20 00 	lea    rax,[rip+0x20450a]        # 0x1803da6a4
   1801d619a:	48 0f 46 c8          	cmovbe rcx,rax
   1801d619e:	48 8d 45 a0          	lea    rax,[rbp-0x60]
   1801d61a2:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d61a6:	48 0f 46 c1          	cmovbe rax,rcx
   1801d61aa:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801d61ae:	f3 44 0f 10 2d 4d ae 	movss  xmm13,DWORD PTR [rip+0x1aae4d]        # 0x180381004
   1801d61b5:	1a 00 
   1801d61b7:	f3 41 0f 59 cd       	mulss  xmm1,xmm13
   1801d61bc:	0f 57 c0             	xorps  xmm0,xmm0
   1801d61bf:	e8 ec 93 0a 00       	call   0x18027f5b0
   1801d61c4:	48 89 9d c0 16 00 00 	mov    QWORD PTR [rbp+0x16c0],rbx
   1801d61cb:	4c 8d 85 c0 16 00 00 	lea    r8,[rbp+0x16c0]
   1801d61d2:	48 8d 95 30 08 00 00 	lea    rdx,[rbp+0x830]
   1801d61d9:	48 8d 0d 10 4c 22 00 	lea    rcx,[rip+0x224c10]        # 0x1803fadf0
   1801d61e0:	e8 4b b8 06 00       	call   0x180241a30
   1801d61e5:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d61e8:	48 83 c1 28          	add    rcx,0x28
   1801d61ec:	48 b8 16 b8 c0 43 bf 	movabs rax,0xc98eafbf43c0b816
   1801d61f3:	af 8e c9 
   1801d61f6:	48 89 85 c8 16 00 00 	mov    QWORD PTR [rbp+0x16c8],rax
   1801d61fd:	4c 8d 85 c8 16 00 00 	lea    r8,[rbp+0x16c8]
   1801d6204:	48 8d 95 40 08 00 00 	lea    rdx,[rbp+0x840]
   1801d620b:	e8 20 b8 06 00       	call   0x180241a30
   1801d6210:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6213:	48 83 c1 28          	add    rcx,0x28
   1801d6217:	e8 a4 6d 02 00       	call   0x1801fcfc0
   1801d621c:	48 8b d0             	mov    rdx,rax
   1801d621f:	48 8d 0d 2a c4 19 00 	lea    rcx,[rip+0x19c42a]        # 0x180372650
   1801d6226:	e8 35 a9 fc ff       	call   0x1801a0b60
   1801d622b:	33 c9                	xor    ecx,ecx
   1801d622d:	e8 2e 8c 09 00       	call   0x18026ee60
   1801d6232:	84 c0                	test   al,al
   1801d6234:	74 0c                	je     0x1801d6242
   1801d6236:	48 8d 0d 23 c4 19 00 	lea    rcx,[rip+0x19c423]        # 0x180372660
   1801d623d:	e8 be aa 0a 00       	call   0x180280d00
   1801d6242:	48 89 9d 50 11 00 00 	mov    QWORD PTR [rbp+0x1150],rbx
   1801d6249:	4c 8d 85 50 11 00 00 	lea    r8,[rbp+0x1150]
   1801d6250:	48 8d 95 50 08 00 00 	lea    rdx,[rbp+0x850]
   1801d6257:	48 8d 0d 92 4b 22 00 	lea    rcx,[rip+0x224b92]        # 0x1803fadf0
   1801d625e:	e8 cd b7 06 00       	call   0x180241a30
   1801d6263:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6266:	48 83 c1 28          	add    rcx,0x28
   1801d626a:	48 b8 e8 d4 38 9a 89 	movabs rax,0x2deb6b899a38d4e8
   1801d6271:	6b eb 2d 
   1801d6274:	48 89 85 58 11 00 00 	mov    QWORD PTR [rbp+0x1158],rax
   1801d627b:	4c 8d 85 58 11 00 00 	lea    r8,[rbp+0x1158]
   1801d6282:	48 8d 95 60 08 00 00 	lea    rdx,[rbp+0x860]
   1801d6289:	e8 a2 b7 06 00       	call   0x180241a30
   1801d628e:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6291:	48 83 c1 28          	add    rcx,0x28
   1801d6295:	e8 26 6d 02 00       	call   0x1801fcfc0
   1801d629a:	48 8b d0             	mov    rdx,rax
   1801d629d:	48 8d 0d 2c c4 19 00 	lea    rcx,[rip+0x19c42c]        # 0x1803726d0
   1801d62a4:	e8 b7 a8 fc ff       	call   0x1801a0b60
   1801d62a9:	f3 44 0f 10 15 d2 b0 	movss  xmm10,DWORD PTR [rip+0x1ab0d2]        # 0x180381384
   1801d62b0:	1a 00 
   1801d62b2:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d62b6:	0f 57 c0             	xorps  xmm0,xmm0
   1801d62b9:	e8 f2 92 0a 00       	call   0x18027f5b0
   1801d62be:	0f 57 c0             	xorps  xmm0,xmm0
   1801d62c1:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801d62c5:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d62ca:	ba 04 00 00 00       	mov    edx,0x4
   1801d62cf:	48 8d 0d 0a c4 19 00 	lea    rcx,[rip+0x19c40a]        # 0x1803726e0
   1801d62d6:	e8 25 79 fc ff       	call   0x18019dc00
   1801d62db:	84 c0                	test   al,al
   1801d62dd:	74 0c                	je     0x1801d62eb
   1801d62df:	48 8d 0d 0a c4 19 00 	lea    rcx,[rip+0x19c40a]        # 0x1803726f0
   1801d62e6:	e8 e5 ac 0a 00       	call   0x180280fd0
   1801d62eb:	48 8d 0d fe c3 19 00 	lea    rcx,[rip+0x19c3fe]        # 0x1803726f0
   1801d62f2:	e8 89 43 fc ff       	call   0x18019a680
   1801d62f7:	84 c0                	test   al,al
   1801d62f9:	0f 84 bc 04 00 00    	je     0x1801d67bb
   1801d62ff:	48 89 9d 60 11 00 00 	mov    QWORD PTR [rbp+0x1160],rbx
   1801d6306:	4c 8d 85 60 11 00 00 	lea    r8,[rbp+0x1160]
   1801d630d:	48 8d 95 70 08 00 00 	lea    rdx,[rbp+0x870]
   1801d6314:	48 8d 0d d5 4a 22 00 	lea    rcx,[rip+0x224ad5]        # 0x1803fadf0
   1801d631b:	e8 10 b7 06 00       	call   0x180241a30
   1801d6320:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6323:	48 83 c1 28          	add    rcx,0x28
   1801d6327:	48 b8 5f ed 48 57 72 	movabs rax,0x207b6d725748ed5f
   1801d632e:	6d 7b 20 
   1801d6331:	48 89 85 68 11 00 00 	mov    QWORD PTR [rbp+0x1168],rax
   1801d6338:	4c 8d 85 68 11 00 00 	lea    r8,[rbp+0x1168]
   1801d633f:	48 8d 95 80 08 00 00 	lea    rdx,[rbp+0x880]
   1801d6346:	e8 e5 b6 06 00       	call   0x180241a30
   1801d634b:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d634e:	48 83 c1 28          	add    rcx,0x28
   1801d6352:	e8 69 c6 02 00       	call   0x1802029c0
   1801d6357:	48 8b d8             	mov    rbx,rax
   1801d635a:	83 38 04             	cmp    DWORD PTR [rax],0x4
   1801d635d:	7c 06                	jl     0x1801d6365
   1801d635f:	c7 00 02 00 00 00    	mov    DWORD PTR [rax],0x2
   1801d6365:	c7 45 a8 00 00 c0 3f 	mov    DWORD PTR [rbp-0x58],0x3fc00000
   1801d636c:	c7 45 a4 00 00 40 3f 	mov    DWORD PTR [rbp-0x5c],0x3f400000
   1801d6373:	f3 0f 10 05 29 43 20 	movss  xmm0,DWORD PTR [rip+0x204329]        # 0x1803da6a4
   1801d637a:	00 
   1801d637b:	48 8d 4d a4          	lea    rcx,[rbp-0x5c]
   1801d637f:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d6383:	48 8d 05 1a 43 20 00 	lea    rax,[rip+0x20431a]        # 0x1803da6a4
   1801d638a:	48 0f 46 c8          	cmovbe rcx,rax
   1801d638e:	48 8d 45 a8          	lea    rax,[rbp-0x58]
   1801d6392:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d6396:	48 0f 46 c1          	cmovbe rax,rcx
   1801d639a:	f3 0f 10 30          	movss  xmm6,DWORD PTR [rax]
   1801d639e:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d63a2:	45 38 2c 07          	cmp    BYTE PTR [r15+rax*1],r13b
   1801d63a6:	75 05                	jne    0x1801d63ad
   1801d63a8:	e8 47 1f 10 00       	call   0x1802d82f4
   1801d63ad:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d63b1:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d63b5:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d63bc:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d63c1:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d63c8:	00 
   1801d63c9:	c7 44 24 20 04 00 00 	mov    DWORD PTR [rsp+0x20],0x4
   1801d63d0:	00 
   1801d63d1:	4c 8d 0d c0 15 21 00 	lea    r9,[rip+0x2115c0]        # 0x1803e7998
   1801d63d8:	48 8b d3             	mov    rdx,rbx
   1801d63db:	48 8d 0d 1e c3 19 00 	lea    rcx,[rip+0x19c31e]        # 0x180372700
   1801d63e2:	e8 19 ae 0d 00       	call   0x1802b1200
   1801d63e7:	c7 45 b0 03 00 00 00 	mov    DWORD PTR [rbp-0x50],0x3
   1801d63ee:	44 89 6d ac          	mov    DWORD PTR [rbp-0x54],r13d
   1801d63f2:	8b 13                	mov    edx,DWORD PTR [rbx]
   1801d63f4:	48 8d 4d ac          	lea    rcx,[rbp-0x54]
   1801d63f8:	85 d2                	test   edx,edx
   1801d63fa:	48 0f 49 cb          	cmovns rcx,rbx
   1801d63fe:	48 8d 45 b0          	lea    rax,[rbp-0x50]
   1801d6402:	83 fa 03             	cmp    edx,0x3
   1801d6405:	48 0f 4e c1          	cmovle rax,rcx
   1801d6409:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d640b:	89 03                	mov    DWORD PTR [rbx],eax
   1801d640d:	83 f8 02             	cmp    eax,0x2
   1801d6410:	0f 85 2b 01 00 00    	jne    0x1801d6541
   1801d6416:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d641d:	56 fd 93 
   1801d6420:	48 89 85 70 11 00 00 	mov    QWORD PTR [rbp+0x1170],rax
   1801d6427:	4c 8d 85 70 11 00 00 	lea    r8,[rbp+0x1170]
   1801d642e:	48 8d 95 90 08 00 00 	lea    rdx,[rbp+0x890]
   1801d6435:	48 8d 0d b4 49 22 00 	lea    rcx,[rip+0x2249b4]        # 0x1803fadf0
   1801d643c:	e8 ef b5 06 00       	call   0x180241a30
   1801d6441:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6444:	48 83 c1 28          	add    rcx,0x28
   1801d6448:	48 b8 b0 e6 2b c9 76 	movabs rax,0xb84e8776c92be6b0
   1801d644f:	87 4e b8 
   1801d6452:	48 89 85 78 11 00 00 	mov    QWORD PTR [rbp+0x1178],rax
   1801d6459:	4c 8d 85 78 11 00 00 	lea    r8,[rbp+0x1178]
   1801d6460:	48 8d 95 a0 08 00 00 	lea    rdx,[rbp+0x8a0]
   1801d6467:	e8 c4 b5 06 00       	call   0x180241a30
   1801d646c:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d646f:	48 83 c1 28          	add    rcx,0x28
   1801d6473:	e8 48 c5 02 00       	call   0x1802029c0
   1801d6478:	4c 8b e8             	mov    r13,rax
   1801d647b:	c7 45 b8 00 00 c0 3f 	mov    DWORD PTR [rbp-0x48],0x3fc00000
   1801d6482:	c7 45 b4 00 00 40 3f 	mov    DWORD PTR [rbp-0x4c],0x3f400000
   1801d6489:	f3 0f 10 05 13 42 20 	movss  xmm0,DWORD PTR [rip+0x204213]        # 0x1803da6a4
   1801d6490:	00 
   1801d6491:	48 8d 55 b4          	lea    rdx,[rbp-0x4c]
   1801d6495:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d6499:	48 8d 05 04 42 20 00 	lea    rax,[rip+0x204204]        # 0x1803da6a4
   1801d64a0:	48 0f 46 d0          	cmovbe rdx,rax
   1801d64a4:	48 8d 4d b8          	lea    rcx,[rbp-0x48]
   1801d64a8:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d64ac:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d64b0:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d64b4:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d64b8:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d64bd:	75 05                	jne    0x1801d64c4
   1801d64bf:	e8 30 1e 10 00       	call   0x1802d82f4
   1801d64c4:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d64c8:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d64cc:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d64d3:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d64d8:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d64df:	00 
   1801d64e0:	48 8d 05 89 90 16 00 	lea    rax,[rip+0x169089]        # 0x18033f570
   1801d64e7:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d64ec:	c7 44 24 20 5a 00 00 	mov    DWORD PTR [rsp+0x20],0x5a
   1801d64f3:	00 
   1801d64f4:	41 b9 0a 00 00 00    	mov    r9d,0xa
   1801d64fa:	4d 8b c5             	mov    r8,r13
   1801d64fd:	48 8d 15 0c c2 19 00 	lea    rdx,[rip+0x19c20c]        # 0x180372710
   1801d6504:	48 8d 0d 15 c2 19 00 	lea    rcx,[rip+0x19c215]        # 0x180372720
   1801d650b:	e8 90 20 fd ff       	call   0x1801a85a0
   1801d6510:	c7 45 c0 5a 00 00 00 	mov    DWORD PTR [rbp-0x40],0x5a
   1801d6517:	c7 45 bc 0a 00 00 00 	mov    DWORD PTR [rbp-0x44],0xa
   1801d651e:	48 8d 4d bc          	lea    rcx,[rbp-0x44]
   1801d6522:	41 83 7d 00 0a       	cmp    DWORD PTR [r13+0x0],0xa
   1801d6527:	49 0f 4d cd          	cmovge rcx,r13
   1801d652b:	48 8d 45 c0          	lea    rax,[rbp-0x40]
   1801d652f:	41 83 7d 00 5a       	cmp    DWORD PTR [r13+0x0],0x5a
   1801d6534:	48 0f 4e c1          	cmovle rax,rcx
   1801d6538:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d653a:	41 89 45 00          	mov    DWORD PTR [r13+0x0],eax
   1801d653e:	45 33 ed             	xor    r13d,r13d
   1801d6541:	8b 03                	mov    eax,DWORD PTR [rbx]
   1801d6543:	ff c8                	dec    eax
   1801d6545:	a9 fd ff ff ff       	test   eax,0xfffffffd
   1801d654a:	0f 85 7c 01 00 00    	jne    0x1801d66cc
   1801d6550:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d6557:	56 fd 93 
   1801d655a:	48 89 85 80 11 00 00 	mov    QWORD PTR [rbp+0x1180],rax
   1801d6561:	4c 8d 85 80 11 00 00 	lea    r8,[rbp+0x1180]
   1801d6568:	48 8d 95 b0 08 00 00 	lea    rdx,[rbp+0x8b0]
   1801d656f:	48 8d 0d 7a 48 22 00 	lea    rcx,[rip+0x22487a]        # 0x1803fadf0
   1801d6576:	e8 b5 b4 06 00       	call   0x180241a30
   1801d657b:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d657e:	48 83 c1 28          	add    rcx,0x28
   1801d6582:	48 b8 da e8 4d 16 af 	movabs rax,0x9d365af164de8da
   1801d6589:	65 d3 09 
   1801d658c:	48 89 85 88 11 00 00 	mov    QWORD PTR [rbp+0x1188],rax
   1801d6593:	4c 8d 85 88 11 00 00 	lea    r8,[rbp+0x1188]
   1801d659a:	48 8d 95 c0 08 00 00 	lea    rdx,[rbp+0x8c0]
   1801d65a1:	e8 8a b4 06 00       	call   0x180241a30
   1801d65a6:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d65a9:	48 83 c1 28          	add    rcx,0x28
   1801d65ad:	e8 0e c4 02 00       	call   0x1802029c0
   1801d65b2:	48 8b d8             	mov    rbx,rax
   1801d65b5:	c7 45 c8 00 00 c0 3f 	mov    DWORD PTR [rbp-0x38],0x3fc00000
   1801d65bc:	c7 45 c4 00 00 40 3f 	mov    DWORD PTR [rbp-0x3c],0x3f400000
   1801d65c3:	f3 0f 10 05 d9 40 20 	movss  xmm0,DWORD PTR [rip+0x2040d9]        # 0x1803da6a4
   1801d65ca:	00 
   1801d65cb:	48 8d 55 c4          	lea    rdx,[rbp-0x3c]
   1801d65cf:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d65d3:	48 8d 05 ca 40 20 00 	lea    rax,[rip+0x2040ca]        # 0x1803da6a4
   1801d65da:	48 0f 46 d0          	cmovbe rdx,rax
   1801d65de:	48 8d 4d c8          	lea    rcx,[rbp-0x38]
   1801d65e2:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d65e6:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d65ea:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d65ee:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d65f3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d65f7:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d65fc:	75 05                	jne    0x1801d6603
   1801d65fe:	e8 f1 1c 10 00       	call   0x1802d82f4
   1801d6603:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6607:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d660b:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d6612:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d6619:	00 
   1801d661a:	48 8d 05 e7 2b 19 00 	lea    rax,[rip+0x192be7]        # 0x180369208
   1801d6621:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d6626:	c7 44 24 20 12 00 00 	mov    DWORD PTR [rsp+0x20],0x12
   1801d662d:	00 
   1801d662e:	41 b9 02 00 00 00    	mov    r9d,0x2
   1801d6634:	4c 8b c3             	mov    r8,rbx
   1801d6637:	48 8d 15 fa c0 19 00 	lea    rdx,[rip+0x19c0fa]        # 0x180372738
   1801d663e:	48 8d 0d 03 c1 19 00 	lea    rcx,[rip+0x19c103]        # 0x180372748
   1801d6645:	e8 56 1f fd ff       	call   0x1801a85a0
   1801d664a:	c7 45 d0 12 00 00 00 	mov    DWORD PTR [rbp-0x30],0x12
   1801d6651:	c7 45 cc 02 00 00 00 	mov    DWORD PTR [rbp-0x34],0x2
   1801d6658:	48 8d 4d cc          	lea    rcx,[rbp-0x34]
   1801d665c:	83 3b 02             	cmp    DWORD PTR [rbx],0x2
   1801d665f:	48 0f 4d cb          	cmovge rcx,rbx
   1801d6663:	48 8d 45 d0          	lea    rax,[rbp-0x30]
   1801d6667:	83 3b 12             	cmp    DWORD PTR [rbx],0x12
   1801d666a:	48 0f 4e c1          	cmovle rax,rcx
   1801d666e:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d6670:	89 03                	mov    DWORD PTR [rbx],eax
   1801d6672:	48 8d 1d d3 4b 22 00 	lea    rbx,[rip+0x224bd3]        # 0x1803fb24c
   1801d6679:	83 f8 09             	cmp    eax,0x9
   1801d667c:	7e 55                	jle    0x1801d66d3
   1801d667e:	c7 45 d8 04 00 00 00 	mov    DWORD PTR [rbp-0x28],0x4
   1801d6685:	44 89 6d d4          	mov    DWORD PTR [rbp-0x2c],r13d
   1801d6689:	8b 15 bd 4b 22 00    	mov    edx,DWORD PTR [rip+0x224bbd]        # 0x1803fb24c
   1801d668f:	48 8d 4d d4          	lea    rcx,[rbp-0x2c]
   1801d6693:	85 d2                	test   edx,edx
   1801d6695:	48 0f 49 cb          	cmovns rcx,rbx
   1801d6699:	48 8d 45 d8          	lea    rax,[rbp-0x28]
   1801d669d:	83 fa 04             	cmp    edx,0x4
   1801d66a0:	48 0f 4e c1          	cmovle rax,rcx
   1801d66a4:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d66a7:	89 05 9f 4b 22 00    	mov    DWORD PTR [rip+0x224b9f],eax        # 0x1803fb24c
   1801d66ad:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d66b4:	48 8d 05 4d 63 20 00 	lea    rax,[rip+0x20634d]        # 0x1803dca08
   1801d66bb:	48 03 c8             	add    rcx,rax
   1801d66be:	48 8d 15 93 c0 19 00 	lea    rdx,[rip+0x19c093]        # 0x180372758
   1801d66c5:	e8 e6 44 0d 00       	call   0x1802aabb0
   1801d66ca:	eb 07                	jmp    0x1801d66d3
   1801d66cc:	48 8d 1d 79 4b 22 00 	lea    rbx,[rip+0x224b79]        # 0x1803fb24c
   1801d66d3:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d66da:	56 fd 93 
   1801d66dd:	48 89 85 90 11 00 00 	mov    QWORD PTR [rbp+0x1190],rax
   1801d66e4:	4c 8d 85 90 11 00 00 	lea    r8,[rbp+0x1190]
   1801d66eb:	48 8d 95 d0 08 00 00 	lea    rdx,[rbp+0x8d0]
   1801d66f2:	48 8d 0d f7 46 22 00 	lea    rcx,[rip+0x2246f7]        # 0x1803fadf0
   1801d66f9:	e8 32 b3 06 00       	call   0x180241a30
   1801d66fe:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6701:	48 83 c1 28          	add    rcx,0x28
   1801d6705:	48 b8 cf 4a fe c7 e0 	movabs rax,0x7b225fe0c7fe4acf
   1801d670c:	5f 22 7b 
   1801d670f:	48 89 85 98 11 00 00 	mov    QWORD PTR [rbp+0x1198],rax
   1801d6716:	4c 8d 85 98 11 00 00 	lea    r8,[rbp+0x1198]
   1801d671d:	48 8d 95 e0 08 00 00 	lea    rdx,[rbp+0x8e0]
   1801d6724:	e8 07 b3 06 00       	call   0x180241a30
   1801d6729:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d672c:	48 83 c1 28          	add    rcx,0x28
   1801d6730:	e8 8b 68 02 00       	call   0x1801fcfc0
   1801d6735:	48 8b d0             	mov    rdx,rax
   1801d6738:	48 8d 0d 39 c0 19 00 	lea    rcx,[rip+0x19c039]        # 0x180372778
   1801d673f:	e8 1c a4 fc ff       	call   0x1801a0b60
   1801d6744:	c7 45 e0 04 00 00 00 	mov    DWORD PTR [rbp-0x20],0x4
   1801d674b:	44 89 6d dc          	mov    DWORD PTR [rbp-0x24],r13d
   1801d674f:	8b 15 f7 4a 22 00    	mov    edx,DWORD PTR [rip+0x224af7]        # 0x1803fb24c
   1801d6755:	48 8d 4d dc          	lea    rcx,[rbp-0x24]
   1801d6759:	85 d2                	test   edx,edx
   1801d675b:	48 0f 49 cb          	cmovns rcx,rbx
   1801d675f:	48 8d 45 e0          	lea    rax,[rbp-0x20]
   1801d6763:	83 fa 04             	cmp    edx,0x4
   1801d6766:	48 0f 4e c1          	cmovle rax,rcx
   1801d676a:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d676d:	89 05 d9 4a 22 00    	mov    DWORD PTR [rip+0x224ad9],eax        # 0x1803fb24c
   1801d6773:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d677a:	48 8d 05 a7 62 20 00 	lea    rax,[rip+0x2062a7]        # 0x1803dca28
   1801d6781:	48 03 c8             	add    rcx,rax
   1801d6784:	48 8d 15 05 c0 19 00 	lea    rdx,[rip+0x19c005]        # 0x180372790
   1801d678b:	e8 20 44 0d 00       	call   0x1802aabb0
   1801d6790:	80 3d 66 45 22 00 00 	cmp    BYTE PTR [rip+0x224566],0x0        # 0x1803facfd
   1801d6797:	74 1d                	je     0x1801d67b6
   1801d6799:	48 8b 05 58 64 22 00 	mov    rax,QWORD PTR [rip+0x226458]        # 0x1803fcbf8
   1801d67a0:	48 39 05 49 64 22 00 	cmp    QWORD PTR [rip+0x226449],rax        # 0x1803fcbf0
   1801d67a7:	74 12                	je     0x1801d67bb
   1801d67a9:	48 83 e8 08          	sub    rax,0x8
   1801d67ad:	48 89 05 44 64 22 00 	mov    QWORD PTR [rip+0x226444],rax        # 0x1803fcbf8
   1801d67b4:	eb 05                	jmp    0x1801d67bb
   1801d67b6:	e8 45 b0 0a 00       	call   0x180281800
   1801d67bb:	c7 45 e8 00 00 c0 3f 	mov    DWORD PTR [rbp-0x18],0x3fc00000
   1801d67c2:	c7 45 e4 00 00 40 3f 	mov    DWORD PTR [rbp-0x1c],0x3f400000
   1801d67c9:	f3 0f 10 05 d3 3e 20 	movss  xmm0,DWORD PTR [rip+0x203ed3]        # 0x1803da6a4
   1801d67d0:	00 
   1801d67d1:	48 8d 4d e4          	lea    rcx,[rbp-0x1c]
   1801d67d5:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d67d9:	48 8d 05 c4 3e 20 00 	lea    rax,[rip+0x203ec4]        # 0x1803da6a4
   1801d67e0:	48 0f 46 c8          	cmovbe rcx,rax
   1801d67e4:	48 8d 45 e8          	lea    rax,[rbp-0x18]
   1801d67e8:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d67ec:	48 0f 46 c1          	cmovbe rax,rcx
   1801d67f0:	f3 44 0f 10 18       	movss  xmm11,DWORD PTR [rax]
   1801d67f5:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d67f9:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d67fe:	75 05                	jne    0x1801d6805
   1801d6800:	e8 ef 1a 10 00       	call   0x1802d82f4
   1801d6805:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6809:	49 8b 1c 04          	mov    rbx,QWORD PTR [r12+rax*1]
   1801d680d:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d6812:	75 05                	jne    0x1801d6819
   1801d6814:	e8 db 1a 10 00       	call   0x1802d82f4
   1801d6819:	48 8b 0c fe          	mov    rcx,QWORD PTR [rsi+rdi*8]
   1801d681d:	49 8b 04 0c          	mov    rax,QWORD PTR [r12+rcx*1]
   1801d6821:	f3 0f 10 b8 c8 0c 00 	movss  xmm7,DWORD PTR [rax+0xcc8]
   1801d6828:	00 
   1801d6829:	f3 0f 58 ff          	addss  xmm7,xmm7
   1801d682d:	f3 0f 58 b8 38 12 00 	addss  xmm7,DWORD PTR [rax+0x1238]
   1801d6834:	00 
   1801d6835:	41 0f 28 f3          	movaps xmm6,xmm11
   1801d6839:	f3 0f 59 35 9f a7 1a 	mulss  xmm6,DWORD PTR [rip+0x1aa79f]        # 0x180380fe0
   1801d6840:	00 
   1801d6841:	0f 28 c7             	movaps xmm0,xmm7
   1801d6844:	f3 0f 59 05 ac a2 1a 	mulss  xmm0,DWORD PTR [rip+0x1aa2ac]        # 0x180380af8
   1801d684b:	00 
   1801d684c:	0f 2f f0             	comiss xmm6,xmm0
   1801d684f:	77 10                	ja     0x1801d6861
   1801d6851:	41 0f 28 f3          	movaps xmm6,xmm11
   1801d6855:	f3 0f 59 35 c7 a7 1a 	mulss  xmm6,DWORD PTR [rip+0x1aa7c7]        # 0x180381024
   1801d685c:	00 
   1801d685d:	f3 0f 5d f0          	minss  xmm6,xmm0
   1801d6861:	41 80 3c 0f 00       	cmp    BYTE PTR [r15+rcx*1],0x0
   1801d6866:	75 05                	jne    0x1801d686d
   1801d6868:	e8 87 1a 10 00       	call   0x1802d82f4
   1801d686d:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6871:	49 8b 14 04          	mov    rdx,QWORD PTR [r12+rax*1]
   1801d6875:	44 89 6c 24 50       	mov    DWORD PTR [rsp+0x50],r13d
   1801d687a:	4c 89 6c 24 40       	mov    QWORD PTR [rsp+0x40],r13
   1801d687f:	4c 89 6c 24 38       	mov    QWORD PTR [rsp+0x38],r13
   1801d6884:	4c 89 6c 24 30       	mov    QWORD PTR [rsp+0x30],r13
   1801d6889:	48 8d 05 00 c0 19 00 	lea    rax,[rip+0x19c000]        # 0x180372890
   1801d6890:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d6895:	f3 44 0f 11 54 24 20 	movss  DWORD PTR [rsp+0x20],xmm10
   1801d689c:	f3 0f 10 1d 64 aa 1a 	movss  xmm3,DWORD PTR [rip+0x1aaa64]        # 0x180381308
   1801d68a3:	00 
   1801d68a4:	f3 0f 10 92 38 12 00 	movss  xmm2,DWORD PTR [rdx+0x1238]
   1801d68ab:	00 
   1801d68ac:	48 8b 92 28 12 00 00 	mov    rdx,QWORD PTR [rdx+0x1228]
   1801d68b3:	48 8d 4d 90          	lea    rcx,[rbp-0x70]
   1801d68b7:	e8 94 7a 0c 00       	call   0x18029e350
   1801d68bc:	f3 0f 59 35 24 a4 1a 	mulss  xmm6,DWORD PTR [rip+0x1aa424]        # 0x180380ce8
   1801d68c3:	00 
   1801d68c4:	f3 0f 58 b3 dc 0c 00 	addss  xmm6,DWORD PTR [rbx+0xcdc]
   1801d68cb:	00 
   1801d68cc:	f3 0f 10 45 90       	movss  xmm0,DWORD PTR [rbp-0x70]
   1801d68d1:	f3 0f 58 05 cf a2 1a 	addss  xmm0,DWORD PTR [rip+0x1aa2cf]        # 0x180380ba8
   1801d68d8:	00 
   1801d68d9:	f3 0f 2c c0          	cvttss2si eax,xmm0
   1801d68dd:	66 0f 6e c8          	movd   xmm1,eax
   1801d68e1:	0f 5b c9             	cvtdq2ps xmm1,xmm1
   1801d68e4:	f3 0f 58 f1          	addss  xmm6,xmm1
   1801d68e8:	f3 0f 58 b3 d4 0c 00 	addss  xmm6,DWORD PTR [rbx+0xcd4]
   1801d68ef:	00 
   1801d68f0:	f3 0f 58 f7          	addss  xmm6,xmm7
   1801d68f4:	0f 57 c9             	xorps  xmm1,xmm1
   1801d68f7:	0f 57 c0             	xorps  xmm0,xmm0
   1801d68fa:	e8 b1 8c 0a 00       	call   0x18027f5b0
   1801d68ff:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6903:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d6908:	75 05                	jne    0x1801d690f
   1801d690a:	e8 e5 19 10 00       	call   0x1802d82f4
   1801d690f:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801d6913:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801d6917:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801d691e:	f3 44 0f 10 91 18 01 	movss  xmm10,DWORD PTR [rcx+0x118]
   1801d6925:	00 00 
   1801d6927:	f3 44 0f 5c 51 28    	subss  xmm10,DWORD PTR [rcx+0x28]
   1801d692d:	f3 44 0f 58 91 98 00 	addss  xmm10,DWORD PTR [rcx+0x98]
   1801d6934:	00 00 
   1801d6936:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801d693b:	75 05                	jne    0x1801d6942
   1801d693d:	e8 b2 19 10 00       	call   0x1802d82f4
   1801d6942:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801d6946:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801d694a:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801d6951:	41 0f 28 fb          	movaps xmm7,xmm11
   1801d6955:	f3 0f 59 3d 3f a5 1a 	mulss  xmm7,DWORD PTR [rip+0x1aa53f]        # 0x180380e9c
   1801d695c:	00 
   1801d695d:	f3 0f 10 89 80 02 00 	movss  xmm1,DWORD PTR [rcx+0x280]
   1801d6964:	00 
   1801d6965:	f3 0f 5c 49 28       	subss  xmm1,DWORD PTR [rcx+0x28]
   1801d696a:	f3 41 0f 5c ca       	subss  xmm1,xmm10
   1801d696f:	41 0f 28 c3          	movaps xmm0,xmm11
   1801d6973:	f3 41 0f 58 c3       	addss  xmm0,xmm11
   1801d6978:	f3 0f 5c c8          	subss  xmm1,xmm0
   1801d697c:	f3 0f 5c ce          	subss  xmm1,xmm6
   1801d6980:	0f 2f f9             	comiss xmm7,xmm1
   1801d6983:	77 0d                	ja     0x1801d6992
   1801d6985:	41 0f 28 fb          	movaps xmm7,xmm11
   1801d6989:	f3 41 0f 59 fd       	mulss  xmm7,xmm13
   1801d698e:	f3 0f 5d f9          	minss  xmm7,xmm1
   1801d6992:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801d6997:	75 05                	jne    0x1801d699e
   1801d6999:	e8 56 19 10 00       	call   0x1802d82f4
   1801d699e:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d69a2:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d69a6:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d69ad:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801d69b4:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d69bb:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801d69c0:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801d69c7:	00 
   1801d69c8:	f3 41 0f 58 fa       	addss  xmm7,xmm10
   1801d69cd:	f3 0f 58 c7          	addss  xmm0,xmm7
   1801d69d1:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801d69d8:	00 
   1801d69d9:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801d69e0:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d69e7:	56 fd 93 
   1801d69ea:	48 89 9d a0 11 00 00 	mov    QWORD PTR [rbp+0x11a0],rbx
   1801d69f1:	4c 8d 85 a0 11 00 00 	lea    r8,[rbp+0x11a0]
   1801d69f8:	48 8d 95 f0 08 00 00 	lea    rdx,[rbp+0x8f0]
   1801d69ff:	48 8d 0d ea 43 22 00 	lea    rcx,[rip+0x2243ea]        # 0x1803fadf0
   1801d6a06:	e8 25 b0 06 00       	call   0x180241a30
   1801d6a0b:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6a0e:	48 83 c1 28          	add    rcx,0x28
   1801d6a12:	48 b8 03 55 29 5c e7 	movabs rax,0x58109ee75c295503
   1801d6a19:	9e 10 58 
   1801d6a1c:	48 89 85 a8 11 00 00 	mov    QWORD PTR [rbp+0x11a8],rax
   1801d6a23:	4c 8d 85 a8 11 00 00 	lea    r8,[rbp+0x11a8]
   1801d6a2a:	48 8d 95 00 09 00 00 	lea    rdx,[rbp+0x900]
   1801d6a31:	e8 fa af 06 00       	call   0x180241a30
   1801d6a36:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6a39:	48 83 c1 28          	add    rcx,0x28
   1801d6a3d:	e8 7e 65 02 00       	call   0x1801fcfc0
   1801d6a42:	48 8b d0             	mov    rdx,rax
   1801d6a45:	48 8d 0d 44 be 19 00 	lea    rcx,[rip+0x19be44]        # 0x180372890
   1801d6a4c:	e8 0f a1 fc ff       	call   0x1801a0b60
   1801d6a51:	33 c9                	xor    ecx,ecx
   1801d6a53:	e8 08 84 09 00       	call   0x18026ee60
   1801d6a58:	84 c0                	test   al,al
   1801d6a5a:	74 0c                	je     0x1801d6a68
   1801d6a5c:	48 8d 0d 3d be 19 00 	lea    rcx,[rip+0x19be3d]        # 0x1803728a0
   1801d6a63:	e8 98 a2 0a 00       	call   0x180280d00
   1801d6a68:	f3 44 0f 10 15 13 a9 	movss  xmm10,DWORD PTR [rip+0x1aa913]        # 0x180381384
   1801d6a6f:	1a 00 
   1801d6a71:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d6a75:	0f 57 c0             	xorps  xmm0,xmm0
   1801d6a78:	e8 33 8b 0a 00       	call   0x18027f5b0
   1801d6a7d:	0f 57 c0             	xorps  xmm0,xmm0
   1801d6a80:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801d6a84:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d6a89:	ba 04 00 00 00       	mov    edx,0x4
   1801d6a8e:	48 8d 0d 63 bf 19 00 	lea    rcx,[rip+0x19bf63]        # 0x1803729f8
   1801d6a95:	e8 66 71 fc ff       	call   0x18019dc00
   1801d6a9a:	84 c0                	test   al,al
   1801d6a9c:	74 0c                	je     0x1801d6aaa
   1801d6a9e:	48 8d 0d 63 bf 19 00 	lea    rcx,[rip+0x19bf63]        # 0x180372a08
   1801d6aa5:	e8 26 a5 0a 00       	call   0x180280fd0
   1801d6aaa:	48 8d 0d 57 bf 19 00 	lea    rcx,[rip+0x19bf57]        # 0x180372a08
   1801d6ab1:	e8 ca 3b fc ff       	call   0x18019a680
   1801d6ab6:	84 c0                	test   al,al
   1801d6ab8:	0f 84 70 02 00 00    	je     0x1801d6d2e
   1801d6abe:	48 89 9d b0 11 00 00 	mov    QWORD PTR [rbp+0x11b0],rbx
   1801d6ac5:	4c 8d 85 b0 11 00 00 	lea    r8,[rbp+0x11b0]
   1801d6acc:	48 8d 95 10 09 00 00 	lea    rdx,[rbp+0x910]
   1801d6ad3:	48 8d 0d 16 43 22 00 	lea    rcx,[rip+0x224316]        # 0x1803fadf0
   1801d6ada:	e8 51 af 06 00       	call   0x180241a30
   1801d6adf:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6ae2:	48 83 c1 28          	add    rcx,0x28
   1801d6ae6:	48 b8 91 80 2b 3c 6e 	movabs rax,0x1f97d96e3c2b8091
   1801d6aed:	d9 97 1f 
   1801d6af0:	48 89 85 b8 11 00 00 	mov    QWORD PTR [rbp+0x11b8],rax
   1801d6af7:	4c 8d 85 b8 11 00 00 	lea    r8,[rbp+0x11b8]
   1801d6afe:	48 8d 95 20 09 00 00 	lea    rdx,[rbp+0x920]
   1801d6b05:	e8 26 af 06 00       	call   0x180241a30
   1801d6b0a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6b0d:	48 83 c1 28          	add    rcx,0x28
   1801d6b11:	e8 aa be 02 00       	call   0x1802029c0
   1801d6b16:	48 8b d8             	mov    rbx,rax
   1801d6b19:	c7 45 f0 00 00 c0 3f 	mov    DWORD PTR [rbp-0x10],0x3fc00000
   1801d6b20:	c7 45 ec 00 00 40 3f 	mov    DWORD PTR [rbp-0x14],0x3f400000
   1801d6b27:	f3 0f 10 05 75 3b 20 	movss  xmm0,DWORD PTR [rip+0x203b75]        # 0x1803da6a4
   1801d6b2e:	00 
   1801d6b2f:	48 8d 55 ec          	lea    rdx,[rbp-0x14]
   1801d6b33:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d6b37:	48 8d 05 66 3b 20 00 	lea    rax,[rip+0x203b66]        # 0x1803da6a4
   1801d6b3e:	48 0f 46 d0          	cmovbe rdx,rax
   1801d6b42:	48 8d 4d f0          	lea    rcx,[rbp-0x10]
   1801d6b46:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d6b4a:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d6b4e:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d6b52:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6b56:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d6b5b:	75 05                	jne    0x1801d6b62
   1801d6b5d:	e8 92 17 10 00       	call   0x1802d82f4
   1801d6b62:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6b66:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d6b6a:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d6b71:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d6b76:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d6b7d:	00 
   1801d6b7e:	48 8d 05 93 be 19 00 	lea    rax,[rip+0x19be93]        # 0x180372a18
   1801d6b85:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d6b8a:	c7 44 24 20 b0 04 00 	mov    DWORD PTR [rsp+0x20],0x4b0
   1801d6b91:	00 
   1801d6b92:	41 b9 64 00 00 00    	mov    r9d,0x64
   1801d6b98:	4c 8b c3             	mov    r8,rbx
   1801d6b9b:	48 8d 15 7e be 19 00 	lea    rdx,[rip+0x19be7e]        # 0x180372a20
   1801d6ba2:	48 8d 0d 8f be 19 00 	lea    rcx,[rip+0x19be8f]        # 0x180372a38
   1801d6ba9:	e8 f2 19 fd ff       	call   0x1801a85a0
   1801d6bae:	c7 45 f8 d0 07 00 00 	mov    DWORD PTR [rbp-0x8],0x7d0
   1801d6bb5:	c7 45 f4 32 00 00 00 	mov    DWORD PTR [rbp-0xc],0x32
   1801d6bbc:	48 8d 4d f4          	lea    rcx,[rbp-0xc]
   1801d6bc0:	83 3b 32             	cmp    DWORD PTR [rbx],0x32
   1801d6bc3:	48 0f 4d cb          	cmovge rcx,rbx
   1801d6bc7:	48 8d 45 f8          	lea    rax,[rbp-0x8]
   1801d6bcb:	81 3b d0 07 00 00    	cmp    DWORD PTR [rbx],0x7d0
   1801d6bd1:	48 0f 4e c1          	cmovle rax,rcx
   1801d6bd5:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d6bd7:	89 03                	mov    DWORD PTR [rbx],eax
   1801d6bd9:	c7 45 00 04 00 00 00 	mov    DWORD PTR [rbp+0x0],0x4
   1801d6be0:	44 89 6d fc          	mov    DWORD PTR [rbp-0x4],r13d
   1801d6be4:	8b 15 62 46 22 00    	mov    edx,DWORD PTR [rip+0x224662]        # 0x1803fb24c
   1801d6bea:	48 8d 4d fc          	lea    rcx,[rbp-0x4]
   1801d6bee:	85 d2                	test   edx,edx
   1801d6bf0:	48 8d 05 55 46 22 00 	lea    rax,[rip+0x224655]        # 0x1803fb24c
   1801d6bf7:	48 0f 49 c8          	cmovns rcx,rax
   1801d6bfb:	48 8d 45 00          	lea    rax,[rbp+0x0]
   1801d6bff:	83 fa 04             	cmp    edx,0x4
   1801d6c02:	48 0f 4e c1          	cmovle rax,rcx
   1801d6c06:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d6c09:	89 05 3d 46 22 00    	mov    DWORD PTR [rip+0x22463d],eax        # 0x1803fb24c
   1801d6c0f:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d6c16:	48 8d 05 0b 5e 20 00 	lea    rax,[rip+0x205e0b]        # 0x1803dca28
   1801d6c1d:	48 03 c8             	add    rcx,rax
   1801d6c20:	48 8d 15 29 be 19 00 	lea    rdx,[rip+0x19be29]        # 0x180372a50
   1801d6c27:	e8 84 3f 0d 00       	call   0x1802aabb0
   1801d6c2c:	48 8d 0d 5d be 19 00 	lea    rcx,[rip+0x19be5d]        # 0x180372a90
   1801d6c33:	e8 a8 3e 0d 00       	call   0x1802aaae0
   1801d6c38:	c7 45 08 00 00 c0 3f 	mov    DWORD PTR [rbp+0x8],0x3fc00000
   1801d6c3f:	c7 45 04 00 00 40 3f 	mov    DWORD PTR [rbp+0x4],0x3f400000
   1801d6c46:	f3 0f 10 05 56 3a 20 	movss  xmm0,DWORD PTR [rip+0x203a56]        # 0x1803da6a4
   1801d6c4d:	00 
   1801d6c4e:	48 8d 4d 04          	lea    rcx,[rbp+0x4]
   1801d6c52:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d6c56:	48 8d 05 47 3a 20 00 	lea    rax,[rip+0x203a47]        # 0x1803da6a4
   1801d6c5d:	48 0f 46 c8          	cmovbe rcx,rax
   1801d6c61:	48 8d 45 08          	lea    rax,[rbp+0x8]
   1801d6c65:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d6c69:	48 0f 46 c1          	cmovbe rax,rcx
   1801d6c6d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d6c71:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801d6c76:	f3 0f 11 85 50 03 00 	movss  DWORD PTR [rbp+0x350],xmm0
   1801d6c7d:	00 
   1801d6c7e:	c7 85 54 03 00 00 00 	mov    DWORD PTR [rbp+0x354],0x0
   1801d6c85:	00 00 00 
   1801d6c88:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d6c8f:	56 fd 93 
   1801d6c92:	48 89 85 c0 11 00 00 	mov    QWORD PTR [rbp+0x11c0],rax
   1801d6c99:	4c 8d 85 c0 11 00 00 	lea    r8,[rbp+0x11c0]
   1801d6ca0:	48 8d 95 30 09 00 00 	lea    rdx,[rbp+0x930]
   1801d6ca7:	48 8d 0d 42 41 22 00 	lea    rcx,[rip+0x224142]        # 0x1803fadf0
   1801d6cae:	e8 7d ad 06 00       	call   0x180241a30
   1801d6cb3:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6cb6:	48 83 c1 28          	add    rcx,0x28
   1801d6cba:	48 b8 96 c3 0e 27 2c 	movabs rax,0xf500562c270ec396
   1801d6cc1:	56 00 f5 
   1801d6cc4:	48 89 85 c8 11 00 00 	mov    QWORD PTR [rbp+0x11c8],rax
   1801d6ccb:	4c 8d 85 c8 11 00 00 	lea    r8,[rbp+0x11c8]
   1801d6cd2:	48 8d 95 40 09 00 00 	lea    rdx,[rbp+0x940]
   1801d6cd9:	e8 52 ad 06 00       	call   0x180241a30
   1801d6cde:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6ce1:	48 83 c1 28          	add    rcx,0x28
   1801d6ce5:	e8 d6 bc 02 00       	call   0x1802029c0
   1801d6cea:	45 33 c9             	xor    r9d,r9d
   1801d6ced:	4c 8d 85 50 03 00 00 	lea    r8,[rbp+0x350]
   1801d6cf4:	48 8b d0             	mov    rdx,rax
   1801d6cf7:	48 8d 0d b2 bd 19 00 	lea    rcx,[rip+0x19bdb2]        # 0x180372ab0
   1801d6cfe:	e8 9d c4 0f 00       	call   0x1802d31a0
   1801d6d03:	80 3d f3 3f 22 00 00 	cmp    BYTE PTR [rip+0x223ff3],0x0        # 0x1803facfd
   1801d6d0a:	74 1d                	je     0x1801d6d29
   1801d6d0c:	48 8b 05 e5 5e 22 00 	mov    rax,QWORD PTR [rip+0x225ee5]        # 0x1803fcbf8
   1801d6d13:	48 39 05 d6 5e 22 00 	cmp    QWORD PTR [rip+0x225ed6],rax        # 0x1803fcbf0
   1801d6d1a:	74 12                	je     0x1801d6d2e
   1801d6d1c:	48 83 e8 08          	sub    rax,0x8
   1801d6d20:	48 89 05 d1 5e 22 00 	mov    QWORD PTR [rip+0x225ed1],rax        # 0x1803fcbf8
   1801d6d27:	eb 05                	jmp    0x1801d6d2e
   1801d6d29:	e8 d2 aa 0a 00       	call   0x180281800
   1801d6d2e:	e8 0d 8e 0d 00       	call   0x1802afb40
   1801d6d33:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d6d3a:	56 fd 93 
   1801d6d3d:	48 89 85 d0 11 00 00 	mov    QWORD PTR [rbp+0x11d0],rax
   1801d6d44:	4c 8d 85 d0 11 00 00 	lea    r8,[rbp+0x11d0]
   1801d6d4b:	48 8d 95 50 09 00 00 	lea    rdx,[rbp+0x950]
   1801d6d52:	48 8d 0d 97 40 22 00 	lea    rcx,[rip+0x224097]        # 0x1803fadf0
   1801d6d59:	e8 d2 ac 06 00       	call   0x180241a30
   1801d6d5e:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6d61:	48 83 c1 28          	add    rcx,0x28
   1801d6d65:	48 b8 fe 07 9e d0 95 	movabs rax,0x15b58d95d09e07fe
   1801d6d6c:	8d b5 15 
   1801d6d6f:	48 89 85 d8 11 00 00 	mov    QWORD PTR [rbp+0x11d8],rax
   1801d6d76:	4c 8d 85 d8 11 00 00 	lea    r8,[rbp+0x11d8]
   1801d6d7d:	48 8d 95 60 09 00 00 	lea    rdx,[rbp+0x960]
   1801d6d84:	e8 a7 ac 06 00       	call   0x180241a30
   1801d6d89:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6d8c:	48 83 c1 28          	add    rcx,0x28
   1801d6d90:	e8 2b bc 02 00       	call   0x1802029c0
   1801d6d95:	48 8b d8             	mov    rbx,rax
   1801d6d98:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d6d9f:	56 fd 93 
   1801d6da2:	48 89 85 e0 11 00 00 	mov    QWORD PTR [rbp+0x11e0],rax
   1801d6da9:	4c 8d 85 e0 11 00 00 	lea    r8,[rbp+0x11e0]
   1801d6db0:	48 8d 95 70 09 00 00 	lea    rdx,[rbp+0x970]
   1801d6db7:	48 8d 0d 32 40 22 00 	lea    rcx,[rip+0x224032]        # 0x1803fadf0
   1801d6dbe:	e8 6d ac 06 00       	call   0x180241a30
   1801d6dc3:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6dc6:	48 83 c1 28          	add    rcx,0x28
   1801d6dca:	48 b8 cb fe b8 ea 1c 	movabs rax,0x5c61b11ceab8fecb
   1801d6dd1:	b1 61 5c 
   1801d6dd4:	48 89 85 e8 11 00 00 	mov    QWORD PTR [rbp+0x11e8],rax
   1801d6ddb:	4c 8d 85 e8 11 00 00 	lea    r8,[rbp+0x11e8]
   1801d6de2:	48 8d 95 80 09 00 00 	lea    rdx,[rbp+0x980]
   1801d6de9:	e8 42 ac 06 00       	call   0x180241a30
   1801d6dee:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6df1:	48 83 c1 28          	add    rcx,0x28
   1801d6df5:	e8 c6 61 02 00       	call   0x1801fcfc0
   1801d6dfa:	4c 8b cb             	mov    r9,rbx
   1801d6dfd:	4c 8d 05 c4 bc 19 00 	lea    r8,[rip+0x19bcc4]        # 0x180372ac8
   1801d6e04:	48 8b d0             	mov    rdx,rax
   1801d6e07:	48 8d 0d d2 bc 19 00 	lea    rcx,[rip+0x19bcd2]        # 0x180372ae0
   1801d6e0e:	e8 cd a8 fc ff       	call   0x1801a16e0
   1801d6e13:	e8 28 8d 0d 00       	call   0x1802afb40
   1801d6e18:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d6e1f:	56 fd 93 
   1801d6e22:	48 89 9d f0 11 00 00 	mov    QWORD PTR [rbp+0x11f0],rbx
   1801d6e29:	4c 8d 85 f0 11 00 00 	lea    r8,[rbp+0x11f0]
   1801d6e30:	48 8d 95 90 09 00 00 	lea    rdx,[rbp+0x990]
   1801d6e37:	48 8d 0d b2 3f 22 00 	lea    rcx,[rip+0x223fb2]        # 0x1803fadf0
   1801d6e3e:	e8 ed ab 06 00       	call   0x180241a30
   1801d6e43:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6e46:	48 83 c1 28          	add    rcx,0x28
   1801d6e4a:	48 b8 63 0c d0 85 db 	movabs rax,0x42dfcfdb85d00c63
   1801d6e51:	cf df 42 
   1801d6e54:	48 89 85 f8 11 00 00 	mov    QWORD PTR [rbp+0x11f8],rax
   1801d6e5b:	4c 8d 85 f8 11 00 00 	lea    r8,[rbp+0x11f8]
   1801d6e62:	48 8d 95 a0 09 00 00 	lea    rdx,[rbp+0x9a0]
   1801d6e69:	e8 c2 ab 06 00       	call   0x180241a30
   1801d6e6e:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6e71:	48 83 c1 28          	add    rcx,0x28
   1801d6e75:	e8 46 61 02 00       	call   0x1801fcfc0
   1801d6e7a:	48 8b d0             	mov    rdx,rax
   1801d6e7d:	48 8d 0d 6c bc 19 00 	lea    rcx,[rip+0x19bc6c]        # 0x180372af0
   1801d6e84:	e8 d7 9c fc ff       	call   0x1801a0b60
   1801d6e89:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d6e8d:	0f 57 c0             	xorps  xmm0,xmm0
   1801d6e90:	e8 1b 87 0a 00       	call   0x18027f5b0
   1801d6e95:	0f 57 c0             	xorps  xmm0,xmm0
   1801d6e98:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801d6e9c:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d6ea1:	ba 04 00 00 00       	mov    edx,0x4
   1801d6ea6:	48 8d 0d 53 bc 19 00 	lea    rcx,[rip+0x19bc53]        # 0x180372b00
   1801d6ead:	e8 4e 6d fc ff       	call   0x18019dc00
   1801d6eb2:	84 c0                	test   al,al
   1801d6eb4:	74 0c                	je     0x1801d6ec2
   1801d6eb6:	48 8d 0d 53 bc 19 00 	lea    rcx,[rip+0x19bc53]        # 0x180372b10
   1801d6ebd:	e8 0e a1 0a 00       	call   0x180280fd0
   1801d6ec2:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d6ec6:	0f 57 c0             	xorps  xmm0,xmm0
   1801d6ec9:	e8 e2 86 0a 00       	call   0x18027f5b0
   1801d6ece:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6ed2:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d6ed7:	75 05                	jne    0x1801d6ede
   1801d6ed9:	e8 16 14 10 00       	call   0x1802d82f4
   1801d6ede:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6ee2:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d6ee6:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d6eed:	f3 0f 10 b0 80 02 00 	movss  xmm6,DWORD PTR [rax+0x280]
   1801d6ef4:	00 
   1801d6ef5:	f3 0f 5c 70 28       	subss  xmm6,DWORD PTR [rax+0x28]
   1801d6efa:	c7 45 10 00 00 c0 3f 	mov    DWORD PTR [rbp+0x10],0x3fc00000
   1801d6f01:	c7 45 0c 00 00 40 3f 	mov    DWORD PTR [rbp+0xc],0x3f400000
   1801d6f08:	f3 0f 10 05 94 37 20 	movss  xmm0,DWORD PTR [rip+0x203794]        # 0x1803da6a4
   1801d6f0f:	00 
   1801d6f10:	48 8d 4d 0c          	lea    rcx,[rbp+0xc]
   1801d6f14:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d6f18:	48 8d 05 85 37 20 00 	lea    rax,[rip+0x203785]        # 0x1803da6a4
   1801d6f1f:	48 0f 46 c8          	cmovbe rcx,rax
   1801d6f23:	48 8d 45 10          	lea    rax,[rbp+0x10]
   1801d6f27:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d6f2b:	48 0f 46 c1          	cmovbe rax,rcx
   1801d6f2f:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d6f33:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801d6f38:	f3 0f 5c f0          	subss  xmm6,xmm0
   1801d6f3c:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6f40:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d6f45:	75 05                	jne    0x1801d6f4c
   1801d6f47:	e8 a8 13 10 00       	call   0x1802d82f4
   1801d6f4c:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d6f50:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d6f54:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d6f5b:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801d6f62:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d6f69:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801d6f6e:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801d6f75:	00 
   1801d6f76:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801d6f7a:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801d6f81:	00 
   1801d6f82:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801d6f89:	c7 45 18 00 00 c0 3f 	mov    DWORD PTR [rbp+0x18],0x3fc00000
   1801d6f90:	c7 45 14 00 00 40 3f 	mov    DWORD PTR [rbp+0x14],0x3f400000
   1801d6f97:	f3 0f 10 05 05 37 20 	movss  xmm0,DWORD PTR [rip+0x203705]        # 0x1803da6a4
   1801d6f9e:	00 
   1801d6f9f:	48 8d 4d 14          	lea    rcx,[rbp+0x14]
   1801d6fa3:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d6fa7:	48 8d 05 f6 36 20 00 	lea    rax,[rip+0x2036f6]        # 0x1803da6a4
   1801d6fae:	48 0f 46 c8          	cmovbe rcx,rax
   1801d6fb2:	48 8d 45 18          	lea    rax,[rbp+0x18]
   1801d6fb6:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d6fba:	48 0f 46 c1          	cmovbe rax,rcx
   1801d6fbe:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d6fc2:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801d6fc7:	f3 0f 11 85 58 03 00 	movss  DWORD PTR [rbp+0x358],xmm0
   1801d6fce:	00 
   1801d6fcf:	c7 85 5c 03 00 00 00 	mov    DWORD PTR [rbp+0x35c],0x0
   1801d6fd6:	00 00 00 
   1801d6fd9:	48 89 9d 00 12 00 00 	mov    QWORD PTR [rbp+0x1200],rbx
   1801d6fe0:	4c 8d 85 00 12 00 00 	lea    r8,[rbp+0x1200]
   1801d6fe7:	48 8d 95 b0 09 00 00 	lea    rdx,[rbp+0x9b0]
   1801d6fee:	48 8d 0d fb 3d 22 00 	lea    rcx,[rip+0x223dfb]        # 0x1803fadf0
   1801d6ff5:	e8 36 aa 06 00       	call   0x180241a30
   1801d6ffa:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d6ffd:	48 83 c1 28          	add    rcx,0x28
   1801d7001:	48 b8 36 6f 05 12 9e 	movabs rax,0x14aaa39e12056f36
   1801d7008:	a3 aa 14 
   1801d700b:	48 89 85 08 12 00 00 	mov    QWORD PTR [rbp+0x1208],rax
   1801d7012:	4c 8d 85 08 12 00 00 	lea    r8,[rbp+0x1208]
   1801d7019:	48 8d 95 c0 09 00 00 	lea    rdx,[rbp+0x9c0]
   1801d7020:	e8 0b aa 06 00       	call   0x180241a30
   1801d7025:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7028:	48 83 c1 28          	add    rcx,0x28
   1801d702c:	e8 8f b9 02 00       	call   0x1802029c0
   1801d7031:	45 33 c9             	xor    r9d,r9d
   1801d7034:	4c 8d 85 58 03 00 00 	lea    r8,[rbp+0x358]
   1801d703b:	48 8b d0             	mov    rdx,rax
   1801d703e:	48 8d 0d db ba 19 00 	lea    rcx,[rip+0x19badb]        # 0x180372b20
   1801d7045:	e8 56 c1 0f 00       	call   0x1802d31a0
   1801d704a:	48 8d 0d bf ba 19 00 	lea    rcx,[rip+0x19babf]        # 0x180372b10
   1801d7051:	e8 2a 36 fc ff       	call   0x18019a680
   1801d7056:	84 c0                	test   al,al
   1801d7058:	0f 84 94 05 00 00    	je     0x1801d75f2
   1801d705e:	48 89 9d 10 12 00 00 	mov    QWORD PTR [rbp+0x1210],rbx
   1801d7065:	4c 8d 85 10 12 00 00 	lea    r8,[rbp+0x1210]
   1801d706c:	48 8d 95 d0 09 00 00 	lea    rdx,[rbp+0x9d0]
   1801d7073:	48 8d 0d 76 3d 22 00 	lea    rcx,[rip+0x223d76]        # 0x1803fadf0
   1801d707a:	e8 b1 a9 06 00       	call   0x180241a30
   1801d707f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7082:	48 83 c1 28          	add    rcx,0x28
   1801d7086:	48 b8 bd bc 6d f6 31 	movabs rax,0xe6e21531f66dbcbd
   1801d708d:	15 e2 e6 
   1801d7090:	48 89 85 18 12 00 00 	mov    QWORD PTR [rbp+0x1218],rax
   1801d7097:	4c 8d 85 18 12 00 00 	lea    r8,[rbp+0x1218]
   1801d709e:	48 8d 95 e0 09 00 00 	lea    rdx,[rbp+0x9e0]
   1801d70a5:	e8 86 a9 06 00       	call   0x180241a30
   1801d70aa:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d70ad:	48 83 c1 28          	add    rcx,0x28
   1801d70b1:	e8 0a b9 02 00       	call   0x1802029c0
   1801d70b6:	48 8b d8             	mov    rbx,rax
   1801d70b9:	c7 45 20 00 00 c0 3f 	mov    DWORD PTR [rbp+0x20],0x3fc00000
   1801d70c0:	c7 45 1c 00 00 40 3f 	mov    DWORD PTR [rbp+0x1c],0x3f400000
   1801d70c7:	f3 0f 10 05 d5 35 20 	movss  xmm0,DWORD PTR [rip+0x2035d5]        # 0x1803da6a4
   1801d70ce:	00 
   1801d70cf:	48 8d 55 1c          	lea    rdx,[rbp+0x1c]
   1801d70d3:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d70d7:	48 8d 05 c6 35 20 00 	lea    rax,[rip+0x2035c6]        # 0x1803da6a4
   1801d70de:	48 0f 46 d0          	cmovbe rdx,rax
   1801d70e2:	48 8d 4d 20          	lea    rcx,[rbp+0x20]
   1801d70e6:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d70ea:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d70ee:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d70f2:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d70f6:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d70fb:	75 05                	jne    0x1801d7102
   1801d70fd:	e8 f2 11 10 00       	call   0x1802d82f4
   1801d7102:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d7106:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d710a:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d7111:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d7116:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d711d:	00 
   1801d711e:	c7 44 24 20 02 00 00 	mov    DWORD PTR [rsp+0x20],0x2
   1801d7125:	00 
   1801d7126:	4c 8d 0d 1b 24 21 00 	lea    r9,[rip+0x21241b]        # 0x1803e9548
   1801d712d:	48 8b d3             	mov    rdx,rbx
   1801d7130:	48 8d 0d 01 ba 19 00 	lea    rcx,[rip+0x19ba01]        # 0x180372b38
   1801d7137:	e8 c4 a0 0d 00       	call   0x1802b1200
   1801d713c:	c7 45 28 01 00 00 00 	mov    DWORD PTR [rbp+0x28],0x1
   1801d7143:	44 89 6d 24          	mov    DWORD PTR [rbp+0x24],r13d
   1801d7147:	8b 13                	mov    edx,DWORD PTR [rbx]
   1801d7149:	48 8d 4d 24          	lea    rcx,[rbp+0x24]
   1801d714d:	85 d2                	test   edx,edx
   1801d714f:	48 0f 49 cb          	cmovns rcx,rbx
   1801d7153:	48 8d 45 28          	lea    rax,[rbp+0x28]
   1801d7157:	83 fa 01             	cmp    edx,0x1
   1801d715a:	48 0f 4e c1          	cmovle rax,rcx
   1801d715e:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d7160:	89 03                	mov    DWORD PTR [rbx],eax
   1801d7162:	85 c0                	test   eax,eax
   1801d7164:	0f 85 5a 01 00 00    	jne    0x1801d72c4
   1801d716a:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d7171:	56 fd 93 
   1801d7174:	48 89 85 20 12 00 00 	mov    QWORD PTR [rbp+0x1220],rax
   1801d717b:	4c 8d 85 20 12 00 00 	lea    r8,[rbp+0x1220]
   1801d7182:	48 8d 95 f0 09 00 00 	lea    rdx,[rbp+0x9f0]
   1801d7189:	48 8d 0d 60 3c 22 00 	lea    rcx,[rip+0x223c60]        # 0x1803fadf0
   1801d7190:	e8 9b a8 06 00       	call   0x180241a30
   1801d7195:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7198:	48 83 c1 28          	add    rcx,0x28
   1801d719c:	48 b8 af 8f 79 67 7a 	movabs rax,0x57929d7a67798faf
   1801d71a3:	9d 92 57 
   1801d71a6:	48 89 85 28 12 00 00 	mov    QWORD PTR [rbp+0x1228],rax
   1801d71ad:	4c 8d 85 28 12 00 00 	lea    r8,[rbp+0x1228]
   1801d71b4:	48 8d 95 00 0a 00 00 	lea    rdx,[rbp+0xa00]
   1801d71bb:	e8 70 a8 06 00       	call   0x180241a30
   1801d71c0:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d71c3:	48 83 c1 28          	add    rcx,0x28
   1801d71c7:	e8 f4 b7 02 00       	call   0x1802029c0
   1801d71cc:	48 8b d8             	mov    rbx,rax
   1801d71cf:	c7 45 30 00 00 c0 3f 	mov    DWORD PTR [rbp+0x30],0x3fc00000
   1801d71d6:	c7 45 2c 00 00 40 3f 	mov    DWORD PTR [rbp+0x2c],0x3f400000
   1801d71dd:	f3 0f 10 05 bf 34 20 	movss  xmm0,DWORD PTR [rip+0x2034bf]        # 0x1803da6a4
   1801d71e4:	00 
   1801d71e5:	48 8d 55 2c          	lea    rdx,[rbp+0x2c]
   1801d71e9:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d71ed:	48 8d 05 b0 34 20 00 	lea    rax,[rip+0x2034b0]        # 0x1803da6a4
   1801d71f4:	48 0f 46 d0          	cmovbe rdx,rax
   1801d71f8:	48 8d 4d 30          	lea    rcx,[rbp+0x30]
   1801d71fc:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d7200:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d7204:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d7208:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d720c:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d7211:	75 05                	jne    0x1801d7218
   1801d7213:	e8 dc 10 10 00       	call   0x1802d82f4
   1801d7218:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d721c:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d7220:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d7227:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d722c:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d7233:	00 
   1801d7234:	48 8d 05 15 b9 19 00 	lea    rax,[rip+0x19b915]        # 0x180372b50
   1801d723b:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d7240:	c7 44 24 20 90 01 00 	mov    DWORD PTR [rsp+0x20],0x190
   1801d7247:	00 
   1801d7248:	41 b9 05 00 00 00    	mov    r9d,0x5
   1801d724e:	4c 8b c3             	mov    r8,rbx
   1801d7251:	48 8d 15 08 b9 19 00 	lea    rdx,[rip+0x19b908]        # 0x180372b60
   1801d7258:	48 8d 0d 19 b9 19 00 	lea    rcx,[rip+0x19b919]        # 0x180372b78
   1801d725f:	e8 3c 13 fd ff       	call   0x1801a85a0
   1801d7264:	c7 45 38 e8 03 00 00 	mov    DWORD PTR [rbp+0x38],0x3e8
   1801d726b:	c7 45 34 01 00 00 00 	mov    DWORD PTR [rbp+0x34],0x1
   1801d7272:	48 8d 4d 34          	lea    rcx,[rbp+0x34]
   1801d7276:	83 3b 01             	cmp    DWORD PTR [rbx],0x1
   1801d7279:	48 0f 4d cb          	cmovge rcx,rbx
   1801d727d:	48 8d 45 38          	lea    rax,[rbp+0x38]
   1801d7281:	81 3b e8 03 00 00    	cmp    DWORD PTR [rbx],0x3e8
   1801d7287:	48 0f 4e c1          	cmovle rax,rcx
   1801d728b:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d728d:	89 03                	mov    DWORD PTR [rbx],eax
   1801d728f:	c7 45 40 04 00 00 00 	mov    DWORD PTR [rbp+0x40],0x4
   1801d7296:	44 89 6d 3c          	mov    DWORD PTR [rbp+0x3c],r13d
   1801d729a:	8b 15 ac 3f 22 00    	mov    edx,DWORD PTR [rip+0x223fac]        # 0x1803fb24c
   1801d72a0:	48 8d 4d 3c          	lea    rcx,[rbp+0x3c]
   1801d72a4:	85 d2                	test   edx,edx
   1801d72a6:	48 8d 05 9f 3f 22 00 	lea    rax,[rip+0x223f9f]        # 0x1803fb24c
   1801d72ad:	48 0f 49 c8          	cmovns rcx,rax
   1801d72b1:	48 8d 45 40          	lea    rax,[rbp+0x40]
   1801d72b5:	83 fa 04             	cmp    edx,0x4
   1801d72b8:	48 8d 15 d1 b8 19 00 	lea    rdx,[rip+0x19b8d1]        # 0x180372b90
   1801d72bf:	e9 c8 02 00 00       	jmp    0x1801d758c
   1801d72c4:	c7 45 48 04 00 00 00 	mov    DWORD PTR [rbp+0x48],0x4
   1801d72cb:	44 89 6d 44          	mov    DWORD PTR [rbp+0x44],r13d
   1801d72cf:	8b 15 77 3f 22 00    	mov    edx,DWORD PTR [rip+0x223f77]        # 0x1803fb24c
   1801d72d5:	48 8d 4d 44          	lea    rcx,[rbp+0x44]
   1801d72d9:	85 d2                	test   edx,edx
   1801d72db:	48 8d 05 6a 3f 22 00 	lea    rax,[rip+0x223f6a]        # 0x1803fb24c
   1801d72e2:	48 0f 49 c8          	cmovns rcx,rax
   1801d72e6:	48 8d 45 48          	lea    rax,[rbp+0x48]
   1801d72ea:	83 fa 04             	cmp    edx,0x4
   1801d72ed:	48 0f 4e c1          	cmovle rax,rcx
   1801d72f1:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d72f4:	89 05 52 3f 22 00    	mov    DWORD PTR [rip+0x223f52],eax        # 0x1803fb24c
   1801d72fa:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d7301:	48 8d 05 20 57 20 00 	lea    rax,[rip+0x205720]        # 0x1803dca28
   1801d7308:	48 03 c8             	add    rcx,rax
   1801d730b:	48 8d 15 ee b8 19 00 	lea    rdx,[rip+0x19b8ee]        # 0x180372c00
   1801d7312:	e8 99 38 0d 00       	call   0x1802aabb0
   1801d7317:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d731e:	56 fd 93 
   1801d7321:	48 89 85 30 12 00 00 	mov    QWORD PTR [rbp+0x1230],rax
   1801d7328:	4c 8d 85 30 12 00 00 	lea    r8,[rbp+0x1230]
   1801d732f:	48 8d 95 10 0a 00 00 	lea    rdx,[rbp+0xa10]
   1801d7336:	48 8d 0d b3 3a 22 00 	lea    rcx,[rip+0x223ab3]        # 0x1803fadf0
   1801d733d:	e8 ee a6 06 00       	call   0x180241a30
   1801d7342:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7345:	48 83 c1 28          	add    rcx,0x28
   1801d7349:	48 bb 8d b2 4b 27 05 	movabs rbx,0x1f136f05274bb28d
   1801d7350:	6f 13 1f 
   1801d7353:	48 89 9d d8 16 00 00 	mov    QWORD PTR [rbp+0x16d8],rbx
   1801d735a:	4c 8d 85 d8 16 00 00 	lea    r8,[rbp+0x16d8]
   1801d7361:	48 8d 95 20 0a 00 00 	lea    rdx,[rbp+0xa20]
   1801d7368:	e8 c3 a6 06 00       	call   0x180241a30
   1801d736d:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7370:	48 83 c1 28          	add    rcx,0x28
   1801d7374:	e8 47 5c 02 00       	call   0x1801fcfc0
   1801d7379:	48 8b d0             	mov    rdx,rax
   1801d737c:	48 8d 0d cd b8 19 00 	lea    rcx,[rip+0x19b8cd]        # 0x180372c50
   1801d7383:	e8 d8 97 fc ff       	call   0x1801a0b60
   1801d7388:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d738f:	56 fd 93 
   1801d7392:	48 89 85 d0 16 00 00 	mov    QWORD PTR [rbp+0x16d0],rax
   1801d7399:	4c 8d 85 d0 16 00 00 	lea    r8,[rbp+0x16d0]
   1801d73a0:	48 8d 95 30 0a 00 00 	lea    rdx,[rbp+0xa30]
   1801d73a7:	48 8d 0d 42 3a 22 00 	lea    rcx,[rip+0x223a42]        # 0x1803fadf0
   1801d73ae:	e8 7d a6 06 00       	call   0x180241a30
   1801d73b3:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d73b6:	48 83 c1 28          	add    rcx,0x28
   1801d73ba:	48 89 9d b8 16 00 00 	mov    QWORD PTR [rbp+0x16b8],rbx
   1801d73c1:	4c 8d 85 b8 16 00 00 	lea    r8,[rbp+0x16b8]
   1801d73c8:	48 8d 95 40 0a 00 00 	lea    rdx,[rbp+0xa40]
   1801d73cf:	e8 5c a6 06 00       	call   0x180241a30
   1801d73d4:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d73d7:	48 83 c1 28          	add    rcx,0x28
   1801d73db:	e8 e0 5b 02 00       	call   0x1801fcfc0
   1801d73e0:	80 38 00             	cmp    BYTE PTR [rax],0x0
   1801d73e3:	74 57                	je     0x1801d743c
   1801d73e5:	f3 0f 10 15 e7 25 23 	movss  xmm2,DWORD PTR [rip+0x2325e7]        # 0x1804099d4
   1801d73ec:	00 
   1801d73ed:	0f 5a d2             	cvtps2pd xmm2,xmm2
   1801d73f0:	66 49 0f 7e d0       	movq   r8,xmm2
   1801d73f5:	8b 15 f9 08 21 00    	mov    edx,DWORD PTR [rip+0x2108f9]        # 0x1803e7cf4
   1801d73fb:	48 8d 0d 66 b8 19 00 	lea    rcx,[rip+0x19b866]        # 0x180372c68
   1801d7402:	e8 d9 36 0d 00       	call   0x1802aaae0
   1801d7407:	c7 45 50 04 00 00 00 	mov    DWORD PTR [rbp+0x50],0x4
   1801d740e:	44 89 6d 4c          	mov    DWORD PTR [rbp+0x4c],r13d
   1801d7412:	8b 15 34 3e 22 00    	mov    edx,DWORD PTR [rip+0x223e34]        # 0x1803fb24c
   1801d7418:	48 8d 4d 4c          	lea    rcx,[rbp+0x4c]
   1801d741c:	85 d2                	test   edx,edx
   1801d741e:	48 8d 05 27 3e 22 00 	lea    rax,[rip+0x223e27]        # 0x1803fb24c
   1801d7425:	48 0f 49 c8          	cmovns rcx,rax
   1801d7429:	48 8d 45 50          	lea    rax,[rbp+0x50]
   1801d742d:	83 fa 04             	cmp    edx,0x4
   1801d7430:	48 8d 15 59 b8 19 00 	lea    rdx,[rip+0x19b859]        # 0x180372c90
   1801d7437:	e9 50 01 00 00       	jmp    0x1801d758c
   1801d743c:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d7443:	56 fd 93 
   1801d7446:	48 89 85 a0 16 00 00 	mov    QWORD PTR [rbp+0x16a0],rax
   1801d744d:	4c 8d 85 a0 16 00 00 	lea    r8,[rbp+0x16a0]
   1801d7454:	48 8d 95 50 0a 00 00 	lea    rdx,[rbp+0xa50]
   1801d745b:	48 8d 0d 8e 39 22 00 	lea    rcx,[rip+0x22398e]        # 0x1803fadf0
   1801d7462:	e8 c9 a5 06 00       	call   0x180241a30
   1801d7467:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d746a:	48 83 c1 28          	add    rcx,0x28
   1801d746e:	48 b8 ca 8d dd 3d 3d 	movabs rax,0x73634b3d3ddd8dca
   1801d7475:	4b 63 73 
   1801d7478:	48 89 85 70 15 00 00 	mov    QWORD PTR [rbp+0x1570],rax
   1801d747f:	4c 8d 85 70 15 00 00 	lea    r8,[rbp+0x1570]
   1801d7486:	48 8d 95 60 0a 00 00 	lea    rdx,[rbp+0xa60]
   1801d748d:	e8 9e a5 06 00       	call   0x180241a30
   1801d7492:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7495:	48 83 c1 28          	add    rcx,0x28
   1801d7499:	e8 22 b5 02 00       	call   0x1802029c0
   1801d749e:	48 8b d8             	mov    rbx,rax
   1801d74a1:	c7 45 58 00 00 c0 3f 	mov    DWORD PTR [rbp+0x58],0x3fc00000
   1801d74a8:	c7 45 54 00 00 40 3f 	mov    DWORD PTR [rbp+0x54],0x3f400000
   1801d74af:	f3 0f 10 05 ed 31 20 	movss  xmm0,DWORD PTR [rip+0x2031ed]        # 0x1803da6a4
   1801d74b6:	00 
   1801d74b7:	48 8d 55 54          	lea    rdx,[rbp+0x54]
   1801d74bb:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d74bf:	48 8d 05 de 31 20 00 	lea    rax,[rip+0x2031de]        # 0x1803da6a4
   1801d74c6:	48 0f 46 d0          	cmovbe rdx,rax
   1801d74ca:	48 8d 4d 58          	lea    rcx,[rbp+0x58]
   1801d74ce:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d74d2:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d74d6:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d74da:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d74df:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d74e3:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d74e8:	75 05                	jne    0x1801d74ef
   1801d74ea:	e8 05 0e 10 00       	call   0x1802d82f4
   1801d74ef:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d74f3:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d74f7:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d74fe:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d7505:	00 
   1801d7506:	48 8d 05 2f ee 18 00 	lea    rax,[rip+0x18ee2f]        # 0x18036633c
   1801d750d:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d7512:	c7 44 24 20 b8 0b 00 	mov    DWORD PTR [rsp+0x20],0xbb8
   1801d7519:	00 
   1801d751a:	45 33 c9             	xor    r9d,r9d
   1801d751d:	4c 8b c3             	mov    r8,rbx
   1801d7520:	48 8d 15 99 b7 19 00 	lea    rdx,[rip+0x19b799]        # 0x180372cc0
   1801d7527:	48 8d 0d aa b7 19 00 	lea    rcx,[rip+0x19b7aa]        # 0x180372cd8
   1801d752e:	e8 6d 10 fd ff       	call   0x1801a85a0
   1801d7533:	c7 45 60 10 27 00 00 	mov    DWORD PTR [rbp+0x60],0x2710
   1801d753a:	44 89 6d 5c          	mov    DWORD PTR [rbp+0x5c],r13d
   1801d753e:	8b 13                	mov    edx,DWORD PTR [rbx]
   1801d7540:	48 8d 4d 5c          	lea    rcx,[rbp+0x5c]
   1801d7544:	85 d2                	test   edx,edx
   1801d7546:	48 0f 49 cb          	cmovns rcx,rbx
   1801d754a:	48 8d 45 60          	lea    rax,[rbp+0x60]
   1801d754e:	81 fa 10 27 00 00    	cmp    edx,0x2710
   1801d7554:	48 0f 4e c1          	cmovle rax,rcx
   1801d7558:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d755a:	89 03                	mov    DWORD PTR [rbx],eax
   1801d755c:	c7 45 68 04 00 00 00 	mov    DWORD PTR [rbp+0x68],0x4
   1801d7563:	44 89 6d 64          	mov    DWORD PTR [rbp+0x64],r13d
   1801d7567:	8b 15 df 3c 22 00    	mov    edx,DWORD PTR [rip+0x223cdf]        # 0x1803fb24c
   1801d756d:	48 8d 4d 64          	lea    rcx,[rbp+0x64]
   1801d7571:	85 d2                	test   edx,edx
   1801d7573:	48 8d 05 d2 3c 22 00 	lea    rax,[rip+0x223cd2]        # 0x1803fb24c
   1801d757a:	48 0f 49 c8          	cmovns rcx,rax
   1801d757e:	48 8d 45 68          	lea    rax,[rbp+0x68]
   1801d7582:	83 fa 04             	cmp    edx,0x4
   1801d7585:	48 8d 15 64 b7 19 00 	lea    rdx,[rip+0x19b764]        # 0x180372cf0
   1801d758c:	48 0f 4e c1          	cmovle rax,rcx
   1801d7590:	8b 08                	mov    ecx,DWORD PTR [rax]
   1801d7592:	8b c1                	mov    eax,ecx
   1801d7594:	89 0d b2 3c 22 00    	mov    DWORD PTR [rip+0x223cb2],ecx        # 0x1803fb24c
   1801d759a:	48 63 c1             	movsxd rax,ecx
   1801d759d:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d75a4:	48 8d 05 7d 54 20 00 	lea    rax,[rip+0x20547d]        # 0x1803dca28
   1801d75ab:	48 03 c8             	add    rcx,rax
   1801d75ae:	e8 fd 35 0d 00       	call   0x1802aabb0
   1801d75b3:	80 3d 43 37 22 00 00 	cmp    BYTE PTR [rip+0x223743],0x0        # 0x1803facfd
   1801d75ba:	74 27                	je     0x1801d75e3
   1801d75bc:	48 8b 05 35 56 22 00 	mov    rax,QWORD PTR [rip+0x225635]        # 0x1803fcbf8
   1801d75c3:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d75ca:	56 fd 93 
   1801d75cd:	48 39 05 1c 56 22 00 	cmp    QWORD PTR [rip+0x22561c],rax        # 0x1803fcbf0
   1801d75d4:	74 1c                	je     0x1801d75f2
   1801d75d6:	48 83 e8 08          	sub    rax,0x8
   1801d75da:	48 89 05 17 56 22 00 	mov    QWORD PTR [rip+0x225617],rax        # 0x1803fcbf8
   1801d75e1:	eb 0f                	jmp    0x1801d75f2
   1801d75e3:	e8 18 a2 0a 00       	call   0x180281800
   1801d75e8:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d75ef:	56 fd 93 
   1801d75f2:	e8 49 85 0d 00       	call   0x1802afb40
   1801d75f7:	48 89 9d 68 15 00 00 	mov    QWORD PTR [rbp+0x1568],rbx
   1801d75fe:	4c 8d 85 68 15 00 00 	lea    r8,[rbp+0x1568]
   1801d7605:	48 8d 95 70 0a 00 00 	lea    rdx,[rbp+0xa70]
   1801d760c:	48 8d 0d dd 37 22 00 	lea    rcx,[rip+0x2237dd]        # 0x1803fadf0
   1801d7613:	e8 18 a4 06 00       	call   0x180241a30
   1801d7618:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d761b:	48 83 c1 28          	add    rcx,0x28
   1801d761f:	48 b8 6d 7a 55 6f 50 	movabs rax,0x161b55506f557a6d
   1801d7626:	55 1b 16 
   1801d7629:	48 89 85 60 15 00 00 	mov    QWORD PTR [rbp+0x1560],rax
   1801d7630:	4c 8d 85 60 15 00 00 	lea    r8,[rbp+0x1560]
   1801d7637:	48 8d 95 80 0a 00 00 	lea    rdx,[rbp+0xa80]
   1801d763e:	e8 ed a3 06 00       	call   0x180241a30
   1801d7643:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7646:	48 83 c1 28          	add    rcx,0x28
   1801d764a:	e8 71 59 02 00       	call   0x1801fcfc0
   1801d764f:	48 8b d0             	mov    rdx,rax
   1801d7652:	48 8d 0d 13 8f 17 00 	lea    rcx,[rip+0x178f13]        # 0x18035056c
   1801d7659:	e8 02 95 fc ff       	call   0x1801a0b60
   1801d765e:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d7662:	0f 57 c0             	xorps  xmm0,xmm0
   1801d7665:	e8 46 7f 0a 00       	call   0x18027f5b0
   1801d766a:	0f 57 c0             	xorps  xmm0,xmm0
   1801d766d:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801d7671:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d7676:	ba 04 00 00 00       	mov    edx,0x4
   1801d767b:	48 8d 0d c6 b6 19 00 	lea    rcx,[rip+0x19b6c6]        # 0x180372d48
   1801d7682:	e8 79 65 fc ff       	call   0x18019dc00
   1801d7687:	84 c0                	test   al,al
   1801d7689:	74 0c                	je     0x1801d7697
   1801d768b:	48 8d 0d c6 b6 19 00 	lea    rcx,[rip+0x19b6c6]        # 0x180372d58
   1801d7692:	e8 39 99 0a 00       	call   0x180280fd0
   1801d7697:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d769b:	0f 57 c0             	xorps  xmm0,xmm0
   1801d769e:	e8 0d 7f 0a 00       	call   0x18027f5b0
   1801d76a3:	c7 45 70 00 00 c0 3f 	mov    DWORD PTR [rbp+0x70],0x3fc00000
   1801d76aa:	c7 45 6c 00 00 40 3f 	mov    DWORD PTR [rbp+0x6c],0x3f400000
   1801d76b1:	f3 0f 10 05 eb 2f 20 	movss  xmm0,DWORD PTR [rip+0x202feb]        # 0x1803da6a4
   1801d76b8:	00 
   1801d76b9:	48 8d 4d 6c          	lea    rcx,[rbp+0x6c]
   1801d76bd:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d76c1:	48 8d 05 dc 2f 20 00 	lea    rax,[rip+0x202fdc]        # 0x1803da6a4
   1801d76c8:	48 0f 46 c8          	cmovbe rcx,rax
   1801d76cc:	48 8d 45 70          	lea    rax,[rbp+0x70]
   1801d76d0:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d76d4:	48 0f 46 c1          	cmovbe rax,rcx
   1801d76d8:	f3 0f 10 38          	movss  xmm7,DWORD PTR [rax]
   1801d76dc:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d76e0:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d76e5:	75 05                	jne    0x1801d76ec
   1801d76e7:	e8 08 0c 10 00       	call   0x1802d82f4
   1801d76ec:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801d76f0:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801d76f4:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801d76fb:	f3 0f 10 b1 80 02 00 	movss  xmm6,DWORD PTR [rcx+0x280]
   1801d7702:	00 
   1801d7703:	f3 0f 5c 71 28       	subss  xmm6,DWORD PTR [rcx+0x28]
   1801d7708:	f3 41 0f 59 ff       	mulss  xmm7,xmm15
   1801d770d:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801d7711:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801d7716:	75 05                	jne    0x1801d771d
   1801d7718:	e8 d7 0b 10 00       	call   0x1802d82f4
   1801d771d:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d7721:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d7725:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d772c:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801d7733:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d773a:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801d773f:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801d7746:	00 
   1801d7747:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801d774b:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801d7752:	00 
   1801d7753:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801d775a:	c7 45 78 00 00 c0 3f 	mov    DWORD PTR [rbp+0x78],0x3fc00000
   1801d7761:	c7 45 74 00 00 40 3f 	mov    DWORD PTR [rbp+0x74],0x3f400000
   1801d7768:	f3 0f 10 05 34 2f 20 	movss  xmm0,DWORD PTR [rip+0x202f34]        # 0x1803da6a4
   1801d776f:	00 
   1801d7770:	48 8d 4d 74          	lea    rcx,[rbp+0x74]
   1801d7774:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d7778:	48 8d 05 25 2f 20 00 	lea    rax,[rip+0x202f25]        # 0x1803da6a4
   1801d777f:	48 0f 46 c8          	cmovbe rcx,rax
   1801d7783:	48 8d 45 78          	lea    rax,[rbp+0x78]
   1801d7787:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d778b:	48 0f 46 c1          	cmovbe rax,rcx
   1801d778f:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d7793:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801d7798:	f3 0f 11 85 60 03 00 	movss  DWORD PTR [rbp+0x360],xmm0
   1801d779f:	00 
   1801d77a0:	c7 85 64 03 00 00 00 	mov    DWORD PTR [rbp+0x364],0x0
   1801d77a7:	00 00 00 
   1801d77aa:	48 89 9d 58 15 00 00 	mov    QWORD PTR [rbp+0x1558],rbx
   1801d77b1:	4c 8d 85 58 15 00 00 	lea    r8,[rbp+0x1558]
   1801d77b8:	48 8d 95 90 0a 00 00 	lea    rdx,[rbp+0xa90]
   1801d77bf:	48 8d 0d 2a 36 22 00 	lea    rcx,[rip+0x22362a]        # 0x1803fadf0
   1801d77c6:	e8 65 a2 06 00       	call   0x180241a30
   1801d77cb:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d77ce:	48 83 c1 28          	add    rcx,0x28
   1801d77d2:	48 b8 88 bb d9 44 5f 	movabs rax,0xdb9ca35f44d9bb88
   1801d77d9:	a3 9c db 
   1801d77dc:	48 89 85 50 15 00 00 	mov    QWORD PTR [rbp+0x1550],rax
   1801d77e3:	4c 8d 85 50 15 00 00 	lea    r8,[rbp+0x1550]
   1801d77ea:	48 8d 95 a0 0a 00 00 	lea    rdx,[rbp+0xaa0]
   1801d77f1:	e8 3a a2 06 00       	call   0x180241a30
   1801d77f6:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d77f9:	48 83 c1 28          	add    rcx,0x28
   1801d77fd:	e8 be b1 02 00       	call   0x1802029c0
   1801d7802:	45 33 c9             	xor    r9d,r9d
   1801d7805:	4c 8d 85 60 03 00 00 	lea    r8,[rbp+0x360]
   1801d780c:	48 8b d0             	mov    rdx,rax
   1801d780f:	48 8d 0d 52 b5 19 00 	lea    rcx,[rip+0x19b552]        # 0x180372d68
   1801d7816:	e8 85 b9 0f 00       	call   0x1802d31a0
   1801d781b:	48 8d 0d 36 b5 19 00 	lea    rcx,[rip+0x19b536]        # 0x180372d58
   1801d7822:	e8 59 2e fc ff       	call   0x18019a680
   1801d7827:	84 c0                	test   al,al
   1801d7829:	0f 84 7f 05 00 00    	je     0x1801d7dae
   1801d782f:	48 89 9d 48 15 00 00 	mov    QWORD PTR [rbp+0x1548],rbx
   1801d7836:	4c 8d 85 48 15 00 00 	lea    r8,[rbp+0x1548]
   1801d783d:	48 8d 95 b0 0a 00 00 	lea    rdx,[rbp+0xab0]
   1801d7844:	48 8d 0d a5 35 22 00 	lea    rcx,[rip+0x2235a5]        # 0x1803fadf0
   1801d784b:	e8 e0 a1 06 00       	call   0x180241a30
   1801d7850:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7853:	48 83 c1 28          	add    rcx,0x28
   1801d7857:	48 b8 b0 5c 16 52 49 	movabs rax,0x35dd584952165cb0
   1801d785e:	58 dd 35 
   1801d7861:	48 89 85 40 15 00 00 	mov    QWORD PTR [rbp+0x1540],rax
   1801d7868:	4c 8d 85 40 15 00 00 	lea    r8,[rbp+0x1540]
   1801d786f:	48 8d 95 c0 0a 00 00 	lea    rdx,[rbp+0xac0]
   1801d7876:	e8 b5 a1 06 00       	call   0x180241a30
   1801d787b:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d787e:	48 83 c1 28          	add    rcx,0x28
   1801d7882:	e8 39 b1 02 00       	call   0x1802029c0
   1801d7887:	48 8b d8             	mov    rbx,rax
   1801d788a:	c7 85 80 00 00 00 00 	mov    DWORD PTR [rbp+0x80],0x3fc00000
   1801d7891:	00 c0 3f 
   1801d7894:	c7 45 7c 00 00 40 3f 	mov    DWORD PTR [rbp+0x7c],0x3f400000
   1801d789b:	f3 0f 10 05 01 2e 20 	movss  xmm0,DWORD PTR [rip+0x202e01]        # 0x1803da6a4
   1801d78a2:	00 
   1801d78a3:	48 8d 55 7c          	lea    rdx,[rbp+0x7c]
   1801d78a7:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d78ab:	48 8d 05 f2 2d 20 00 	lea    rax,[rip+0x202df2]        # 0x1803da6a4
   1801d78b2:	48 0f 46 d0          	cmovbe rdx,rax
   1801d78b6:	48 8d 8d 80 00 00 00 	lea    rcx,[rbp+0x80]
   1801d78bd:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d78c1:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d78c5:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d78c9:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d78ce:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d78d2:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d78d7:	75 05                	jne    0x1801d78de
   1801d78d9:	e8 16 0a 10 00       	call   0x1802d82f4
   1801d78de:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d78e2:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d78e6:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d78ed:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d78f4:	00 
   1801d78f5:	48 8d 05 74 7c 16 00 	lea    rax,[rip+0x167c74]        # 0x18033f570
   1801d78fc:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d7901:	c7 44 24 20 40 00 00 	mov    DWORD PTR [rsp+0x20],0x40
   1801d7908:	00 
   1801d7909:	41 b9 02 00 00 00    	mov    r9d,0x2
   1801d790f:	4c 8b c3             	mov    r8,rbx
   1801d7912:	48 8d 15 5f b4 19 00 	lea    rdx,[rip+0x19b45f]        # 0x180372d78
   1801d7919:	48 8d 0d 68 b4 19 00 	lea    rcx,[rip+0x19b468]        # 0x180372d88
   1801d7920:	e8 7b 0c fd ff       	call   0x1801a85a0
   1801d7925:	c7 85 88 00 00 00 40 	mov    DWORD PTR [rbp+0x88],0x40
   1801d792c:	00 00 00 
   1801d792f:	c7 85 84 00 00 00 01 	mov    DWORD PTR [rbp+0x84],0x1
   1801d7936:	00 00 00 
   1801d7939:	48 8d 8d 84 00 00 00 	lea    rcx,[rbp+0x84]
   1801d7940:	83 3b 01             	cmp    DWORD PTR [rbx],0x1
   1801d7943:	48 0f 4d cb          	cmovge rcx,rbx
   1801d7947:	48 8d 85 88 00 00 00 	lea    rax,[rbp+0x88]
   1801d794e:	83 3b 40             	cmp    DWORD PTR [rbx],0x40
   1801d7951:	48 0f 4e c1          	cmovle rax,rcx
   1801d7955:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d7957:	89 03                	mov    DWORD PTR [rbx],eax
   1801d7959:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d7960:	56 fd 93 
   1801d7963:	48 89 9d 38 15 00 00 	mov    QWORD PTR [rbp+0x1538],rbx
   1801d796a:	4c 8d 85 38 15 00 00 	lea    r8,[rbp+0x1538]
   1801d7971:	48 8d 95 d0 0a 00 00 	lea    rdx,[rbp+0xad0]
   1801d7978:	48 8d 0d 71 34 22 00 	lea    rcx,[rip+0x223471]        # 0x1803fadf0
   1801d797f:	e8 ac a0 06 00       	call   0x180241a30
   1801d7984:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7987:	48 83 c1 28          	add    rcx,0x28
   1801d798b:	48 b8 fe 5e 62 9e ed 	movabs rax,0xfe939fed9e625efe
   1801d7992:	9f 93 fe 
   1801d7995:	48 89 85 30 15 00 00 	mov    QWORD PTR [rbp+0x1530],rax
   1801d799c:	4c 8d 85 30 15 00 00 	lea    r8,[rbp+0x1530]
   1801d79a3:	48 8d 95 e0 0a 00 00 	lea    rdx,[rbp+0xae0]
   1801d79aa:	e8 81 a0 06 00       	call   0x180241a30
   1801d79af:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d79b2:	48 83 c1 28          	add    rcx,0x28
   1801d79b6:	e8 05 56 02 00       	call   0x1801fcfc0
   1801d79bb:	48 8b d0             	mov    rdx,rax
   1801d79be:	48 8d 0d d3 b3 19 00 	lea    rcx,[rip+0x19b3d3]        # 0x180372d98
   1801d79c5:	e8 96 91 fc ff       	call   0x1801a0b60
   1801d79ca:	48 89 9d 28 15 00 00 	mov    QWORD PTR [rbp+0x1528],rbx
   1801d79d1:	4c 8d 85 28 15 00 00 	lea    r8,[rbp+0x1528]
   1801d79d8:	48 8d 95 f0 0a 00 00 	lea    rdx,[rbp+0xaf0]
   1801d79df:	48 8d 0d 0a 34 22 00 	lea    rcx,[rip+0x22340a]        # 0x1803fadf0
   1801d79e6:	e8 45 a0 06 00       	call   0x180241a30
   1801d79eb:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d79ee:	48 83 c1 28          	add    rcx,0x28
   1801d79f2:	48 b8 36 87 9d f5 42 	movabs rax,0xa447f642f59d8736
   1801d79f9:	f6 47 a4 
   1801d79fc:	48 89 85 20 15 00 00 	mov    QWORD PTR [rbp+0x1520],rax
   1801d7a03:	4c 8d 85 20 15 00 00 	lea    r8,[rbp+0x1520]
   1801d7a0a:	48 8d 95 00 0b 00 00 	lea    rdx,[rbp+0xb00]
   1801d7a11:	e8 1a a0 06 00       	call   0x180241a30
   1801d7a16:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7a19:	48 83 c1 28          	add    rcx,0x28
   1801d7a1d:	e8 9e 55 02 00       	call   0x1801fcfc0
   1801d7a22:	48 8b d0             	mov    rdx,rax
   1801d7a25:	48 8d 0d 84 b3 19 00 	lea    rcx,[rip+0x19b384]        # 0x180372db0
   1801d7a2c:	e8 2f 91 fc ff       	call   0x1801a0b60
   1801d7a31:	c7 85 90 00 00 00 04 	mov    DWORD PTR [rbp+0x90],0x4
   1801d7a38:	00 00 00 
   1801d7a3b:	44 89 ad 8c 00 00 00 	mov    DWORD PTR [rbp+0x8c],r13d
   1801d7a42:	8b 15 04 38 22 00    	mov    edx,DWORD PTR [rip+0x223804]        # 0x1803fb24c
   1801d7a48:	48 8d 8d 8c 00 00 00 	lea    rcx,[rbp+0x8c]
   1801d7a4f:	85 d2                	test   edx,edx
   1801d7a51:	48 8d 05 f4 37 22 00 	lea    rax,[rip+0x2237f4]        # 0x1803fb24c
   1801d7a58:	48 0f 49 c8          	cmovns rcx,rax
   1801d7a5c:	48 8d 85 90 00 00 00 	lea    rax,[rbp+0x90]
   1801d7a63:	83 fa 04             	cmp    edx,0x4
   1801d7a66:	48 0f 4e c1          	cmovle rax,rcx
   1801d7a6a:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d7a6d:	89 05 d9 37 22 00    	mov    DWORD PTR [rip+0x2237d9],eax        # 0x1803fb24c
   1801d7a73:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d7a7a:	48 8d 05 a7 4f 20 00 	lea    rax,[rip+0x204fa7]        # 0x1803dca28
   1801d7a81:	48 03 c8             	add    rcx,rax
   1801d7a84:	48 8d 15 45 b3 19 00 	lea    rdx,[rip+0x19b345]        # 0x180372dd0
   1801d7a8b:	e8 20 31 0d 00       	call   0x1802aabb0
   1801d7a90:	48 89 9d 88 16 00 00 	mov    QWORD PTR [rbp+0x1688],rbx
   1801d7a97:	4c 8d 85 88 16 00 00 	lea    r8,[rbp+0x1688]
   1801d7a9e:	48 8d 95 10 0b 00 00 	lea    rdx,[rbp+0xb10]
   1801d7aa5:	48 8d 0d 44 33 22 00 	lea    rcx,[rip+0x223344]        # 0x1803fadf0
   1801d7aac:	e8 7f 9f 06 00       	call   0x180241a30
   1801d7ab1:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7ab4:	48 83 c1 28          	add    rcx,0x28
   1801d7ab8:	48 b8 3e dd a0 7a ae 	movabs rax,0xbf7c50ae7aa0dd3e
   1801d7abf:	50 7c bf 
   1801d7ac2:	48 89 85 80 16 00 00 	mov    QWORD PTR [rbp+0x1680],rax
   1801d7ac9:	4c 8d 85 80 16 00 00 	lea    r8,[rbp+0x1680]
   1801d7ad0:	48 8d 95 20 0b 00 00 	lea    rdx,[rbp+0xb20]
   1801d7ad7:	e8 54 9f 06 00       	call   0x180241a30
   1801d7adc:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7adf:	48 83 c1 28          	add    rcx,0x28
   1801d7ae3:	e8 d8 54 02 00       	call   0x1801fcfc0
   1801d7ae8:	48 8b d0             	mov    rdx,rax
   1801d7aeb:	48 8d 0d 5e b3 19 00 	lea    rcx,[rip+0x19b35e]        # 0x180372e50
   1801d7af2:	e8 69 90 fc ff       	call   0x1801a0b60
   1801d7af7:	c7 85 98 00 00 00 04 	mov    DWORD PTR [rbp+0x98],0x4
   1801d7afe:	00 00 00 
   1801d7b01:	44 89 ad 94 00 00 00 	mov    DWORD PTR [rbp+0x94],r13d
   1801d7b08:	8b 15 3e 37 22 00    	mov    edx,DWORD PTR [rip+0x22373e]        # 0x1803fb24c
   1801d7b0e:	48 8d 8d 94 00 00 00 	lea    rcx,[rbp+0x94]
   1801d7b15:	85 d2                	test   edx,edx
   1801d7b17:	48 8d 05 2e 37 22 00 	lea    rax,[rip+0x22372e]        # 0x1803fb24c
   1801d7b1e:	48 0f 49 c8          	cmovns rcx,rax
   1801d7b22:	48 8d 85 98 00 00 00 	lea    rax,[rbp+0x98]
   1801d7b29:	83 fa 04             	cmp    edx,0x4
   1801d7b2c:	48 0f 4e c1          	cmovle rax,rcx
   1801d7b30:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d7b33:	89 05 13 37 22 00    	mov    DWORD PTR [rip+0x223713],eax        # 0x1803fb24c
   1801d7b39:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d7b40:	48 8d 05 e1 4e 20 00 	lea    rax,[rip+0x204ee1]        # 0x1803dca28
   1801d7b47:	48 03 c8             	add    rcx,rax
   1801d7b4a:	48 8d 15 2f b3 19 00 	lea    rdx,[rip+0x19b32f]        # 0x180372e80
   1801d7b51:	e8 5a 30 0d 00       	call   0x1802aabb0
   1801d7b56:	e8 e5 7f 0d 00       	call   0x1802afb40
   1801d7b5b:	e8 e0 bb ed ff       	call   0x1800b3740
   1801d7b60:	f3 0f 2c 0d 70 1b 23 	cvttss2si ecx,DWORD PTR [rip+0x231b70]        # 0x1804096d8
   1801d7b67:	00 
   1801d7b68:	41 8b dd             	mov    ebx,r13d
   1801d7b6b:	85 c9                	test   ecx,ecx
   1801d7b6d:	0f 49 d9             	cmovns ebx,ecx
   1801d7b70:	3b d8                	cmp    ebx,eax
   1801d7b72:	0f 4f d8             	cmovg  ebx,eax
   1801d7b75:	e8 c6 bb ed ff       	call   0x1800b3740
   1801d7b7a:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
   1801d7b7e:	44 8b cb             	mov    r9d,ebx
   1801d7b81:	4c 8d 05 e8 b3 19 00 	lea    r8,[rip+0x19b3e8]        # 0x180372f70
   1801d7b88:	ba 40 00 00 00       	mov    edx,0x40
   1801d7b8d:	48 8d 8d 10 18 00 00 	lea    rcx,[rbp+0x1810]
   1801d7b94:	e8 27 af e3 ff       	call   0x180012ac0
   1801d7b99:	c7 85 a0 00 00 00 04 	mov    DWORD PTR [rbp+0xa0],0x4
   1801d7ba0:	00 00 00 
   1801d7ba3:	44 89 ad 9c 00 00 00 	mov    DWORD PTR [rbp+0x9c],r13d
   1801d7baa:	8b 15 9c 36 22 00    	mov    edx,DWORD PTR [rip+0x22369c]        # 0x1803fb24c
   1801d7bb0:	48 8d 8d 9c 00 00 00 	lea    rcx,[rbp+0x9c]
   1801d7bb7:	85 d2                	test   edx,edx
   1801d7bb9:	48 8d 05 8c 36 22 00 	lea    rax,[rip+0x22368c]        # 0x1803fb24c
   1801d7bc0:	48 0f 49 c8          	cmovns rcx,rax
   1801d7bc4:	48 8d 85 a0 00 00 00 	lea    rax,[rbp+0xa0]
   1801d7bcb:	83 fa 04             	cmp    edx,0x4
   1801d7bce:	48 0f 4e c1          	cmovle rax,rcx
   1801d7bd2:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d7bd5:	89 05 71 36 22 00    	mov    DWORD PTR [rip+0x223671],eax        # 0x1803fb24c
   1801d7bdb:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d7be2:	48 8d 1d 3f 4e 20 00 	lea    rbx,[rip+0x204e3f]        # 0x1803dca28
   1801d7be9:	48 03 cb             	add    rcx,rbx
   1801d7bec:	48 8d 15 8d b3 19 00 	lea    rdx,[rip+0x19b38d]        # 0x180372f80
   1801d7bf3:	e8 b8 2f 0d 00       	call   0x1802aabb0
   1801d7bf8:	c7 85 a8 00 00 00 00 	mov    DWORD PTR [rbp+0xa8],0x3fc00000
   1801d7bff:	00 c0 3f 
   1801d7c02:	c7 85 a4 00 00 00 00 	mov    DWORD PTR [rbp+0xa4],0x3f400000
   1801d7c09:	00 40 3f 
   1801d7c0c:	f3 0f 10 05 90 2a 20 	movss  xmm0,DWORD PTR [rip+0x202a90]        # 0x1803da6a4
   1801d7c13:	00 
   1801d7c14:	48 8d 8d a4 00 00 00 	lea    rcx,[rbp+0xa4]
   1801d7c1b:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d7c1f:	48 8d 05 7e 2a 20 00 	lea    rax,[rip+0x202a7e]        # 0x1803da6a4
   1801d7c26:	48 0f 46 c8          	cmovbe rcx,rax
   1801d7c2a:	48 8d 85 a8 00 00 00 	lea    rax,[rbp+0xa8]
   1801d7c31:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d7c35:	48 0f 46 c1          	cmovbe rax,rcx
   1801d7c39:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d7c3d:	f3 41 0f 59 c6       	mulss  xmm0,xmm14
   1801d7c42:	f3 0f 11 85 68 03 00 	movss  DWORD PTR [rbp+0x368],xmm0
   1801d7c49:	00 
   1801d7c4a:	c7 85 6c 03 00 00 00 	mov    DWORD PTR [rbp+0x36c],0x0
   1801d7c51:	00 00 00 
   1801d7c54:	e8 e7 ba ed ff       	call   0x1800b3740
   1801d7c59:	85 c0                	test   eax,eax
   1801d7c5b:	7e 15                	jle    0x1801d7c72
   1801d7c5d:	66 0f 6e c0          	movd   xmm0,eax
   1801d7c61:	0f 5b c0             	cvtdq2ps xmm0,xmm0
   1801d7c64:	f3 0f 10 0d 6c 1a 23 	movss  xmm1,DWORD PTR [rip+0x231a6c]        # 0x1804096d8
   1801d7c6b:	00 
   1801d7c6c:	f3 0f 5e c8          	divss  xmm1,xmm0
   1801d7c70:	eb 03                	jmp    0x1801d7c75
   1801d7c72:	0f 57 c9             	xorps  xmm1,xmm1
   1801d7c75:	4c 8d 85 10 18 00 00 	lea    r8,[rbp+0x1810]
   1801d7c7c:	48 8d 95 68 03 00 00 	lea    rdx,[rbp+0x368]
   1801d7c83:	0f 28 c1             	movaps xmm0,xmm1
   1801d7c86:	e8 75 66 0d 00       	call   0x1802ae300
   1801d7c8b:	33 c9                	xor    ecx,ecx
   1801d7c8d:	e8 ce 71 09 00       	call   0x18026ee60
   1801d7c92:	84 c0                	test   al,al
   1801d7c94:	74 0c                	je     0x1801d7ca2
   1801d7c96:	48 8d 0d f3 b2 19 00 	lea    rcx,[rip+0x19b2f3]        # 0x180372f90
   1801d7c9d:	e8 5e 90 0a 00       	call   0x180280d00
   1801d7ca2:	c7 85 b0 00 00 00 04 	mov    DWORD PTR [rbp+0xb0],0x4
   1801d7ca9:	00 00 00 
   1801d7cac:	44 89 ad ac 00 00 00 	mov    DWORD PTR [rbp+0xac],r13d
   1801d7cb3:	8b 15 93 35 22 00    	mov    edx,DWORD PTR [rip+0x223593]        # 0x1803fb24c
   1801d7cb9:	48 8d 8d ac 00 00 00 	lea    rcx,[rbp+0xac]
   1801d7cc0:	85 d2                	test   edx,edx
   1801d7cc2:	48 8d 05 83 35 22 00 	lea    rax,[rip+0x223583]        # 0x1803fb24c
   1801d7cc9:	48 0f 49 c8          	cmovns rcx,rax
   1801d7ccd:	48 8d 85 b0 00 00 00 	lea    rax,[rbp+0xb0]
   1801d7cd4:	83 fa 04             	cmp    edx,0x4
   1801d7cd7:	48 0f 4e c1          	cmovle rax,rcx
   1801d7cdb:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d7cde:	89 05 68 35 22 00    	mov    DWORD PTR [rip+0x223568],eax        # 0x1803fb24c
   1801d7ce4:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d7ceb:	48 03 cb             	add    rcx,rbx
   1801d7cee:	8b 05 dc 19 23 00    	mov    eax,DWORD PTR [rip+0x2319dc]        # 0x1804096d0
   1801d7cf4:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
   1801d7cf8:	44 8b 0d c1 19 23 00 	mov    r9d,DWORD PTR [rip+0x2319c1]        # 0x1804096c0
   1801d7cff:	44 8b 05 c6 19 23 00 	mov    r8d,DWORD PTR [rip+0x2319c6]        # 0x1804096cc
   1801d7d06:	48 8d 15 1b b3 19 00 	lea    rdx,[rip+0x19b31b]        # 0x180373028
   1801d7d0d:	e8 9e 2e 0d 00       	call   0x1802aabb0
   1801d7d12:	44 8b 05 c7 19 23 00 	mov    r8d,DWORD PTR [rip+0x2319c7]        # 0x1804096e0
   1801d7d19:	45 85 c0             	test   r8d,r8d
   1801d7d1c:	7e 3a                	jle    0x1801d7d58
   1801d7d1e:	66 0f 6f 05 8a 99 1a 	movdqa xmm0,XMMWORD PTR [rip+0x1a998a]        # 0x1803816b0
   1801d7d25:	00 
   1801d7d26:	0f 11 85 90 05 00 00 	movups XMMWORD PTR [rbp+0x590],xmm0
   1801d7d2d:	f3 0f 10 0d 67 fe 20 	movss  xmm1,DWORD PTR [rip+0x20fe67]        # 0x1803e7b9c
   1801d7d34:	00 
   1801d7d35:	f3 0f 59 0d e3 93 1a 	mulss  xmm1,DWORD PTR [rip+0x1a93e3]        # 0x180381120
   1801d7d3c:	00 
   1801d7d3d:	0f 5a d9             	cvtps2pd xmm3,xmm1
   1801d7d40:	66 49 0f 7e d9       	movq   r9,xmm3
   1801d7d45:	48 8d 15 04 b3 19 00 	lea    rdx,[rip+0x19b304]        # 0x180373050
   1801d7d4c:	48 8d 8d 90 05 00 00 	lea    rcx,[rbp+0x590]
   1801d7d53:	e8 58 2e 0d 00       	call   0x1802aabb0
   1801d7d58:	33 c9                	xor    ecx,ecx
   1801d7d5a:	e8 01 71 09 00       	call   0x18026ee60
   1801d7d5f:	84 c0                	test   al,al
   1801d7d61:	74 0c                	je     0x1801d7d6f
   1801d7d63:	48 8d 0d 16 b3 19 00 	lea    rcx,[rip+0x19b316]        # 0x180373080
   1801d7d6a:	e8 91 8f 0a 00       	call   0x180280d00
   1801d7d6f:	80 3d 87 2f 22 00 00 	cmp    BYTE PTR [rip+0x222f87],0x0        # 0x1803facfd
   1801d7d76:	74 27                	je     0x1801d7d9f
   1801d7d78:	48 8b 05 79 4e 22 00 	mov    rax,QWORD PTR [rip+0x224e79]        # 0x1803fcbf8
   1801d7d7f:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d7d86:	56 fd 93 
   1801d7d89:	48 39 05 60 4e 22 00 	cmp    QWORD PTR [rip+0x224e60],rax        # 0x1803fcbf0
   1801d7d90:	74 1c                	je     0x1801d7dae
   1801d7d92:	48 83 e8 08          	sub    rax,0x8
   1801d7d96:	48 89 05 5b 4e 22 00 	mov    QWORD PTR [rip+0x224e5b],rax        # 0x1803fcbf8
   1801d7d9d:	eb 0f                	jmp    0x1801d7dae
   1801d7d9f:	e8 5c 9a 0a 00       	call   0x180281800
   1801d7da4:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d7dab:	56 fd 93 
   1801d7dae:	e8 8d 7d 0d 00       	call   0x1802afb40
   1801d7db3:	48 89 9d 88 14 00 00 	mov    QWORD PTR [rbp+0x1488],rbx
   1801d7dba:	4c 8d 85 88 14 00 00 	lea    r8,[rbp+0x1488]
   1801d7dc1:	48 8d 95 30 0b 00 00 	lea    rdx,[rbp+0xb30]
   1801d7dc8:	48 8d 0d 21 30 22 00 	lea    rcx,[rip+0x223021]        # 0x1803fadf0
   1801d7dcf:	e8 5c 9c 06 00       	call   0x180241a30
   1801d7dd4:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7dd7:	48 83 c1 28          	add    rcx,0x28
   1801d7ddb:	48 b8 9f 12 8b fc 95 	movabs rax,0x2cad3795fc8b129f
   1801d7de2:	37 ad 2c 
   1801d7de5:	48 89 85 78 15 00 00 	mov    QWORD PTR [rbp+0x1578],rax
   1801d7dec:	4c 8d 85 78 15 00 00 	lea    r8,[rbp+0x1578]
   1801d7df3:	48 8d 95 40 0b 00 00 	lea    rdx,[rbp+0xb40]
   1801d7dfa:	e8 31 9c 06 00       	call   0x180241a30
   1801d7dff:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7e02:	48 83 c1 28          	add    rcx,0x28
   1801d7e06:	e8 b5 51 02 00       	call   0x1801fcfc0
   1801d7e0b:	48 8b d0             	mov    rdx,rax
   1801d7e0e:	48 8d 0d 53 b3 19 00 	lea    rcx,[rip+0x19b353]        # 0x180373168
   1801d7e15:	e8 46 8d fc ff       	call   0x1801a0b60
   1801d7e1a:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d7e1e:	0f 57 c0             	xorps  xmm0,xmm0
   1801d7e21:	e8 8a 77 0a 00       	call   0x18027f5b0
   1801d7e26:	0f 57 c0             	xorps  xmm0,xmm0
   1801d7e29:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801d7e2d:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d7e32:	ba 04 00 00 00       	mov    edx,0x4
   1801d7e37:	48 8d 0d 3a b3 19 00 	lea    rcx,[rip+0x19b33a]        # 0x180373178
   1801d7e3e:	e8 bd 5d fc ff       	call   0x18019dc00
   1801d7e43:	84 c0                	test   al,al
   1801d7e45:	74 0c                	je     0x1801d7e53
   1801d7e47:	48 8d 0d 42 b3 19 00 	lea    rcx,[rip+0x19b342]        # 0x180373190
   1801d7e4e:	e8 7d 91 0a 00       	call   0x180280fd0
   1801d7e53:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d7e57:	0f 57 c0             	xorps  xmm0,xmm0
   1801d7e5a:	e8 51 77 0a 00       	call   0x18027f5b0
   1801d7e5f:	c7 85 b8 00 00 00 00 	mov    DWORD PTR [rbp+0xb8],0x3fc00000
   1801d7e66:	00 c0 3f 
   1801d7e69:	c7 85 b4 00 00 00 00 	mov    DWORD PTR [rbp+0xb4],0x3f400000
   1801d7e70:	00 40 3f 
   1801d7e73:	f3 0f 10 05 29 28 20 	movss  xmm0,DWORD PTR [rip+0x202829]        # 0x1803da6a4
   1801d7e7a:	00 
   1801d7e7b:	48 8d 8d b4 00 00 00 	lea    rcx,[rbp+0xb4]
   1801d7e82:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d7e86:	48 8d 05 17 28 20 00 	lea    rax,[rip+0x202817]        # 0x1803da6a4
   1801d7e8d:	48 0f 46 c8          	cmovbe rcx,rax
   1801d7e91:	48 8d 85 b8 00 00 00 	lea    rax,[rbp+0xb8]
   1801d7e98:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d7e9c:	48 0f 46 c1          	cmovbe rax,rcx
   1801d7ea0:	f3 0f 10 38          	movss  xmm7,DWORD PTR [rax]
   1801d7ea4:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d7ea8:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d7ead:	75 05                	jne    0x1801d7eb4
   1801d7eaf:	e8 40 04 10 00       	call   0x1802d82f4
   1801d7eb4:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801d7eb8:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801d7ebc:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801d7ec3:	f3 0f 10 b1 80 02 00 	movss  xmm6,DWORD PTR [rcx+0x280]
   1801d7eca:	00 
   1801d7ecb:	f3 0f 5c 71 28       	subss  xmm6,DWORD PTR [rcx+0x28]
   1801d7ed0:	f3 41 0f 59 ff       	mulss  xmm7,xmm15
   1801d7ed5:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801d7ed9:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801d7ede:	75 05                	jne    0x1801d7ee5
   1801d7ee0:	e8 0f 04 10 00       	call   0x1802d82f4
   1801d7ee5:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d7ee9:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d7eed:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d7ef4:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801d7efb:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d7f02:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801d7f07:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801d7f0e:	00 
   1801d7f0f:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801d7f13:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801d7f1a:	00 
   1801d7f1b:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801d7f22:	c7 85 c0 00 00 00 00 	mov    DWORD PTR [rbp+0xc0],0x3fc00000
   1801d7f29:	00 c0 3f 
   1801d7f2c:	c7 85 bc 00 00 00 00 	mov    DWORD PTR [rbp+0xbc],0x3f400000
   1801d7f33:	00 40 3f 
   1801d7f36:	f3 0f 10 05 66 27 20 	movss  xmm0,DWORD PTR [rip+0x202766]        # 0x1803da6a4
   1801d7f3d:	00 
   1801d7f3e:	48 8d 8d bc 00 00 00 	lea    rcx,[rbp+0xbc]
   1801d7f45:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d7f49:	48 8d 05 54 27 20 00 	lea    rax,[rip+0x202754]        # 0x1803da6a4
   1801d7f50:	48 0f 46 c8          	cmovbe rcx,rax
   1801d7f54:	48 8d 85 c0 00 00 00 	lea    rax,[rbp+0xc0]
   1801d7f5b:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d7f5f:	48 0f 46 c1          	cmovbe rax,rcx
   1801d7f63:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d7f67:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801d7f6c:	f3 0f 11 85 30 03 00 	movss  DWORD PTR [rbp+0x330],xmm0
   1801d7f73:	00 
   1801d7f74:	c7 85 34 03 00 00 00 	mov    DWORD PTR [rbp+0x334],0x0
   1801d7f7b:	00 00 00 
   1801d7f7e:	48 89 9d 80 15 00 00 	mov    QWORD PTR [rbp+0x1580],rbx
   1801d7f85:	4c 8d 85 80 15 00 00 	lea    r8,[rbp+0x1580]
   1801d7f8c:	48 8d 95 50 0b 00 00 	lea    rdx,[rbp+0xb50]
   1801d7f93:	48 8d 0d 56 2e 22 00 	lea    rcx,[rip+0x222e56]        # 0x1803fadf0
   1801d7f9a:	e8 91 9a 06 00       	call   0x180241a30
   1801d7f9f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7fa2:	48 83 c1 28          	add    rcx,0x28
   1801d7fa6:	48 b8 aa 53 bf 9e 21 	movabs rax,0x647450219ebf53aa
   1801d7fad:	50 74 64 
   1801d7fb0:	48 89 85 88 15 00 00 	mov    QWORD PTR [rbp+0x1588],rax
   1801d7fb7:	4c 8d 85 88 15 00 00 	lea    r8,[rbp+0x1588]
   1801d7fbe:	48 8d 95 60 0b 00 00 	lea    rdx,[rbp+0xb60]
   1801d7fc5:	e8 66 9a 06 00       	call   0x180241a30
   1801d7fca:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d7fcd:	48 83 c1 28          	add    rcx,0x28
   1801d7fd1:	e8 ea a9 02 00       	call   0x1802029c0
   1801d7fd6:	45 33 c9             	xor    r9d,r9d
   1801d7fd9:	4c 8d 85 30 03 00 00 	lea    r8,[rbp+0x330]
   1801d7fe0:	48 8b d0             	mov    rdx,rax
   1801d7fe3:	48 8d 0d b6 b1 19 00 	lea    rcx,[rip+0x19b1b6]        # 0x1803731a0
   1801d7fea:	e8 b1 b1 0f 00       	call   0x1802d31a0
   1801d7fef:	48 8d 0d 9a b1 19 00 	lea    rcx,[rip+0x19b19a]        # 0x180373190
   1801d7ff6:	e8 85 26 fc ff       	call   0x18019a680
   1801d7ffb:	84 c0                	test   al,al
   1801d7ffd:	0f 84 35 02 00 00    	je     0x1801d8238
   1801d8003:	48 89 9d 90 15 00 00 	mov    QWORD PTR [rbp+0x1590],rbx
   1801d800a:	4c 8d 85 90 15 00 00 	lea    r8,[rbp+0x1590]
   1801d8011:	48 8d 95 70 0b 00 00 	lea    rdx,[rbp+0xb70]
   1801d8018:	48 8d 0d d1 2d 22 00 	lea    rcx,[rip+0x222dd1]        # 0x1803fadf0
   1801d801f:	e8 0c 9a 06 00       	call   0x180241a30
   1801d8024:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8027:	48 83 c1 28          	add    rcx,0x28
   1801d802b:	48 b8 e3 14 d8 6c 5b 	movabs rax,0x6682ac5b6cd814e3
   1801d8032:	ac 82 66 
   1801d8035:	48 89 85 98 15 00 00 	mov    QWORD PTR [rbp+0x1598],rax
   1801d803c:	4c 8d 85 98 15 00 00 	lea    r8,[rbp+0x1598]
   1801d8043:	48 8d 95 80 0b 00 00 	lea    rdx,[rbp+0xb80]
   1801d804a:	e8 e1 99 06 00       	call   0x180241a30
   1801d804f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8052:	48 83 c1 28          	add    rcx,0x28
   1801d8056:	e8 65 ad 02 00       	call   0x180202dc0
   1801d805b:	48 8b d8             	mov    rbx,rax
   1801d805e:	c7 85 c8 00 00 00 00 	mov    DWORD PTR [rbp+0xc8],0x3fc00000
   1801d8065:	00 c0 3f 
   1801d8068:	c7 85 c4 00 00 00 00 	mov    DWORD PTR [rbp+0xc4],0x3f400000
   1801d806f:	00 40 3f 
   1801d8072:	f3 0f 10 05 2a 26 20 	movss  xmm0,DWORD PTR [rip+0x20262a]        # 0x1803da6a4
   1801d8079:	00 
   1801d807a:	48 8d 95 c4 00 00 00 	lea    rdx,[rbp+0xc4]
   1801d8081:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8085:	48 8d 05 18 26 20 00 	lea    rax,[rip+0x202618]        # 0x1803da6a4
   1801d808c:	48 0f 46 d0          	cmovbe rdx,rax
   1801d8090:	48 8d 8d c8 00 00 00 	lea    rcx,[rbp+0xc8]
   1801d8097:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d809b:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d809f:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d80a3:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d80a8:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d80ac:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d80b1:	75 05                	jne    0x1801d80b8
   1801d80b3:	e8 3c 02 10 00       	call   0x1802d82f4
   1801d80b8:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d80bc:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d80c0:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d80c7:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d80ce:	00 
   1801d80cf:	48 8d 05 d2 42 19 00 	lea    rax,[rip+0x1942d2]        # 0x18036c3a8
   1801d80d6:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d80db:	f3 0f 10 3d 45 8d 1a 	movss  xmm7,DWORD PTR [rip+0x1a8d45]        # 0x180380e28
   1801d80e2:	00 
   1801d80e3:	f3 0f 11 7c 24 20    	movss  DWORD PTR [rsp+0x20],xmm7
   1801d80e9:	f3 0f 10 35 d3 88 1a 	movss  xmm6,DWORD PTR [rip+0x1a88d3]        # 0x1803809c4
   1801d80f0:	00 
   1801d80f1:	0f 28 de             	movaps xmm3,xmm6
   1801d80f4:	4c 8b c3             	mov    r8,rbx
   1801d80f7:	48 8d 15 ba b0 19 00 	lea    rdx,[rip+0x19b0ba]        # 0x1803731b8
   1801d80fe:	48 8d 0d c7 b0 19 00 	lea    rcx,[rip+0x19b0c7]        # 0x1803731cc
   1801d8105:	e8 16 f9 fc ff       	call   0x1801a7a20
   1801d810a:	c7 85 d0 00 00 00 00 	mov    DWORD PTR [rbp+0xd0],0x40400000
   1801d8111:	00 40 40 
   1801d8114:	c7 85 14 03 00 00 cd 	mov    DWORD PTR [rbp+0x314],0x3d4ccccd
   1801d811b:	cc 4c 3d 
   1801d811e:	f3 0f 10 03          	movss  xmm0,DWORD PTR [rbx]
   1801d8122:	48 8d 8d 14 03 00 00 	lea    rcx,[rbp+0x314]
   1801d8129:	0f 2f f0             	comiss xmm6,xmm0
   1801d812c:	48 0f 46 cb          	cmovbe rcx,rbx
   1801d8130:	48 8d 85 d0 00 00 00 	lea    rax,[rbp+0xd0]
   1801d8137:	0f 2f c7             	comiss xmm0,xmm7
   1801d813a:	48 0f 46 c1          	cmovbe rax,rcx
   1801d813e:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d8140:	89 03                	mov    DWORD PTR [rbx],eax
   1801d8142:	c7 85 d8 00 00 00 04 	mov    DWORD PTR [rbp+0xd8],0x4
   1801d8149:	00 00 00 
   1801d814c:	44 89 ad d4 00 00 00 	mov    DWORD PTR [rbp+0xd4],r13d
   1801d8153:	8b 15 f3 30 22 00    	mov    edx,DWORD PTR [rip+0x2230f3]        # 0x1803fb24c
   1801d8159:	48 8d 8d d4 00 00 00 	lea    rcx,[rbp+0xd4]
   1801d8160:	85 d2                	test   edx,edx
   1801d8162:	48 8d 1d e3 30 22 00 	lea    rbx,[rip+0x2230e3]        # 0x1803fb24c
   1801d8169:	48 0f 49 cb          	cmovns rcx,rbx
   1801d816d:	48 8d 85 d8 00 00 00 	lea    rax,[rbp+0xd8]
   1801d8174:	83 fa 04             	cmp    edx,0x4
   1801d8177:	48 0f 4e c1          	cmovle rax,rcx
   1801d817b:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d817e:	89 05 c8 30 22 00    	mov    DWORD PTR [rip+0x2230c8],eax        # 0x1803fb24c
   1801d8184:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d818b:	48 8d 05 96 48 20 00 	lea    rax,[rip+0x204896]        # 0x1803dca28
   1801d8192:	48 03 c8             	add    rcx,rax
   1801d8195:	48 8d 15 44 b0 19 00 	lea    rdx,[rip+0x19b044]        # 0x1803731e0
   1801d819c:	e8 0f 2a 0d 00       	call   0x1802aabb0
   1801d81a1:	c7 85 e0 00 00 00 04 	mov    DWORD PTR [rbp+0xe0],0x4
   1801d81a8:	00 00 00 
   1801d81ab:	44 89 ad dc 00 00 00 	mov    DWORD PTR [rbp+0xdc],r13d
   1801d81b2:	8b 15 94 30 22 00    	mov    edx,DWORD PTR [rip+0x223094]        # 0x1803fb24c
   1801d81b8:	48 8d 8d dc 00 00 00 	lea    rcx,[rbp+0xdc]
   1801d81bf:	85 d2                	test   edx,edx
   1801d81c1:	48 0f 49 cb          	cmovns rcx,rbx
   1801d81c5:	48 8d 85 e0 00 00 00 	lea    rax,[rbp+0xe0]
   1801d81cc:	83 fa 04             	cmp    edx,0x4
   1801d81cf:	48 0f 4e c1          	cmovle rax,rcx
   1801d81d3:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d81d6:	89 05 70 30 22 00    	mov    DWORD PTR [rip+0x223070],eax        # 0x1803fb24c
   1801d81dc:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d81e3:	48 8d 05 1e 48 20 00 	lea    rax,[rip+0x20481e]        # 0x1803dca08
   1801d81ea:	48 03 c8             	add    rcx,rax
   1801d81ed:	48 8d 15 44 b0 19 00 	lea    rdx,[rip+0x19b044]        # 0x180373238
   1801d81f4:	e8 b7 29 0d 00       	call   0x1802aabb0
   1801d81f9:	80 3d fd 2a 22 00 00 	cmp    BYTE PTR [rip+0x222afd],0x0        # 0x1803facfd
   1801d8200:	74 27                	je     0x1801d8229
   1801d8202:	48 8b 05 ef 49 22 00 	mov    rax,QWORD PTR [rip+0x2249ef]        # 0x1803fcbf8
   1801d8209:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d8210:	56 fd 93 
   1801d8213:	48 39 05 d6 49 22 00 	cmp    QWORD PTR [rip+0x2249d6],rax        # 0x1803fcbf0
   1801d821a:	74 1c                	je     0x1801d8238
   1801d821c:	48 83 e8 08          	sub    rax,0x8
   1801d8220:	48 89 05 d1 49 22 00 	mov    QWORD PTR [rip+0x2249d1],rax        # 0x1803fcbf8
   1801d8227:	eb 0f                	jmp    0x1801d8238
   1801d8229:	e8 d2 95 0a 00       	call   0x180281800
   1801d822e:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d8235:	56 fd 93 
   1801d8238:	e8 03 79 0d 00       	call   0x1802afb40
   1801d823d:	48 89 9d a0 15 00 00 	mov    QWORD PTR [rbp+0x15a0],rbx
   1801d8244:	4c 8d 85 a0 15 00 00 	lea    r8,[rbp+0x15a0]
   1801d824b:	48 8d 95 90 0b 00 00 	lea    rdx,[rbp+0xb90]
   1801d8252:	48 8d 0d 97 2b 22 00 	lea    rcx,[rip+0x222b97]        # 0x1803fadf0
   1801d8259:	e8 d2 97 06 00       	call   0x180241a30
   1801d825e:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8261:	48 83 c1 28          	add    rcx,0x28
   1801d8265:	48 b8 0c 8f d5 db 84 	movabs rax,0x46af284dbd58f0c
   1801d826c:	f2 6a 04 
   1801d826f:	48 89 85 a8 15 00 00 	mov    QWORD PTR [rbp+0x15a8],rax
   1801d8276:	4c 8d 85 a8 15 00 00 	lea    r8,[rbp+0x15a8]
   1801d827d:	48 8d 95 a0 0b 00 00 	lea    rdx,[rbp+0xba0]
   1801d8284:	e8 a7 97 06 00       	call   0x180241a30
   1801d8289:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d828c:	48 83 c1 28          	add    rcx,0x28
   1801d8290:	e8 2b 4d 02 00       	call   0x1801fcfc0
   1801d8295:	48 8b d0             	mov    rdx,rax
   1801d8298:	48 8d 0d c1 af 19 00 	lea    rcx,[rip+0x19afc1]        # 0x180373260
   1801d829f:	e8 bc 88 fc ff       	call   0x1801a0b60
   1801d82a4:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d82a8:	0f 57 c0             	xorps  xmm0,xmm0
   1801d82ab:	e8 00 73 0a 00       	call   0x18027f5b0
   1801d82b0:	0f 57 c0             	xorps  xmm0,xmm0
   1801d82b3:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801d82b7:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d82bc:	ba 04 00 00 00       	mov    edx,0x4
   1801d82c1:	48 8d 0d a0 af 19 00 	lea    rcx,[rip+0x19afa0]        # 0x180373268
   1801d82c8:	e8 33 59 fc ff       	call   0x18019dc00
   1801d82cd:	84 c0                	test   al,al
   1801d82cf:	74 0c                	je     0x1801d82dd
   1801d82d1:	48 8d 0d a0 af 19 00 	lea    rcx,[rip+0x19afa0]        # 0x180373278
   1801d82d8:	e8 f3 8c 0a 00       	call   0x180280fd0
   1801d82dd:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d82e1:	0f 57 c0             	xorps  xmm0,xmm0
   1801d82e4:	e8 c7 72 0a 00       	call   0x18027f5b0
   1801d82e9:	c7 85 e8 00 00 00 00 	mov    DWORD PTR [rbp+0xe8],0x3fc00000
   1801d82f0:	00 c0 3f 
   1801d82f3:	c7 85 e4 00 00 00 00 	mov    DWORD PTR [rbp+0xe4],0x3f400000
   1801d82fa:	00 40 3f 
   1801d82fd:	f3 0f 10 05 9f 23 20 	movss  xmm0,DWORD PTR [rip+0x20239f]        # 0x1803da6a4
   1801d8304:	00 
   1801d8305:	48 8d 8d e4 00 00 00 	lea    rcx,[rbp+0xe4]
   1801d830c:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8310:	48 8d 05 8d 23 20 00 	lea    rax,[rip+0x20238d]        # 0x1803da6a4
   1801d8317:	48 0f 46 c8          	cmovbe rcx,rax
   1801d831b:	48 8d 85 e8 00 00 00 	lea    rax,[rbp+0xe8]
   1801d8322:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d8326:	48 0f 46 c1          	cmovbe rax,rcx
   1801d832a:	f3 0f 10 38          	movss  xmm7,DWORD PTR [rax]
   1801d832e:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8332:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d8337:	75 05                	jne    0x1801d833e
   1801d8339:	e8 b6 ff 0f 00       	call   0x1802d82f4
   1801d833e:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801d8342:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801d8346:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801d834d:	f3 0f 10 b1 80 02 00 	movss  xmm6,DWORD PTR [rcx+0x280]
   1801d8354:	00 
   1801d8355:	f3 0f 5c 71 28       	subss  xmm6,DWORD PTR [rcx+0x28]
   1801d835a:	f3 41 0f 59 ff       	mulss  xmm7,xmm15
   1801d835f:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801d8363:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801d8368:	75 05                	jne    0x1801d836f
   1801d836a:	e8 85 ff 0f 00       	call   0x1802d82f4
   1801d836f:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8373:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d8377:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d837e:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801d8385:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d838c:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801d8391:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801d8398:	00 
   1801d8399:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801d839d:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801d83a4:	00 
   1801d83a5:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801d83ac:	c7 85 f0 00 00 00 00 	mov    DWORD PTR [rbp+0xf0],0x3fc00000
   1801d83b3:	00 c0 3f 
   1801d83b6:	c7 85 ec 00 00 00 00 	mov    DWORD PTR [rbp+0xec],0x3f400000
   1801d83bd:	00 40 3f 
   1801d83c0:	f3 0f 10 05 dc 22 20 	movss  xmm0,DWORD PTR [rip+0x2022dc]        # 0x1803da6a4
   1801d83c7:	00 
   1801d83c8:	48 8d 8d ec 00 00 00 	lea    rcx,[rbp+0xec]
   1801d83cf:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d83d3:	48 8d 05 ca 22 20 00 	lea    rax,[rip+0x2022ca]        # 0x1803da6a4
   1801d83da:	48 0f 46 c8          	cmovbe rcx,rax
   1801d83de:	48 8d 85 f0 00 00 00 	lea    rax,[rbp+0xf0]
   1801d83e5:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d83e9:	48 0f 46 c1          	cmovbe rax,rcx
   1801d83ed:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d83f1:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801d83f6:	f3 0f 11 85 78 03 00 	movss  DWORD PTR [rbp+0x378],xmm0
   1801d83fd:	00 
   1801d83fe:	c7 85 7c 03 00 00 00 	mov    DWORD PTR [rbp+0x37c],0x0
   1801d8405:	00 00 00 
   1801d8408:	48 89 9d b0 15 00 00 	mov    QWORD PTR [rbp+0x15b0],rbx
   1801d840f:	4c 8d 85 b0 15 00 00 	lea    r8,[rbp+0x15b0]
   1801d8416:	48 8d 95 b0 0b 00 00 	lea    rdx,[rbp+0xbb0]
   1801d841d:	48 8d 0d cc 29 22 00 	lea    rcx,[rip+0x2229cc]        # 0x1803fadf0
   1801d8424:	e8 07 96 06 00       	call   0x180241a30
   1801d8429:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d842c:	48 83 c1 28          	add    rcx,0x28
   1801d8430:	48 b8 4d d1 86 44 b0 	movabs rax,0x64c4d3b04486d14d
   1801d8437:	d3 c4 64 
   1801d843a:	48 89 85 b8 15 00 00 	mov    QWORD PTR [rbp+0x15b8],rax
   1801d8441:	4c 8d 85 b8 15 00 00 	lea    r8,[rbp+0x15b8]
   1801d8448:	48 8d 95 c0 0b 00 00 	lea    rdx,[rbp+0xbc0]
   1801d844f:	e8 dc 95 06 00       	call   0x180241a30
   1801d8454:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8457:	48 83 c1 28          	add    rcx,0x28
   1801d845b:	e8 60 a5 02 00       	call   0x1802029c0
   1801d8460:	45 33 c9             	xor    r9d,r9d
   1801d8463:	4c 8d 85 78 03 00 00 	lea    r8,[rbp+0x378]
   1801d846a:	48 8b d0             	mov    rdx,rax
   1801d846d:	48 8d 0d 14 ae 19 00 	lea    rcx,[rip+0x19ae14]        # 0x180373288
   1801d8474:	e8 27 ad 0f 00       	call   0x1802d31a0
   1801d8479:	48 8d 0d f8 ad 19 00 	lea    rcx,[rip+0x19adf8]        # 0x180373278
   1801d8480:	e8 fb 21 fc ff       	call   0x18019a680
   1801d8485:	84 c0                	test   al,al
   1801d8487:	0f 84 32 05 00 00    	je     0x1801d89bf
   1801d848d:	48 89 9d c0 15 00 00 	mov    QWORD PTR [rbp+0x15c0],rbx
   1801d8494:	4c 8d 85 c0 15 00 00 	lea    r8,[rbp+0x15c0]
   1801d849b:	48 8d 95 d0 0b 00 00 	lea    rdx,[rbp+0xbd0]
   1801d84a2:	48 8d 0d 47 29 22 00 	lea    rcx,[rip+0x222947]        # 0x1803fadf0
   1801d84a9:	e8 82 95 06 00       	call   0x180241a30
   1801d84ae:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d84b1:	48 83 c1 28          	add    rcx,0x28
   1801d84b5:	48 b8 92 3c 47 36 71 	movabs rax,0xb3bc1c7136473c92
   1801d84bc:	1c bc b3 
   1801d84bf:	48 89 85 c8 15 00 00 	mov    QWORD PTR [rbp+0x15c8],rax
   1801d84c6:	4c 8d 85 c8 15 00 00 	lea    r8,[rbp+0x15c8]
   1801d84cd:	48 8d 95 e0 0b 00 00 	lea    rdx,[rbp+0xbe0]
   1801d84d4:	e8 57 95 06 00       	call   0x180241a30
   1801d84d9:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d84dc:	48 83 c1 28          	add    rcx,0x28
   1801d84e0:	e8 db a4 02 00       	call   0x1802029c0
   1801d84e5:	48 8b d8             	mov    rbx,rax
   1801d84e8:	c7 85 f8 00 00 00 00 	mov    DWORD PTR [rbp+0xf8],0x3fc00000
   1801d84ef:	00 c0 3f 
   1801d84f2:	c7 85 f4 00 00 00 00 	mov    DWORD PTR [rbp+0xf4],0x3f400000
   1801d84f9:	00 40 3f 
   1801d84fc:	f3 0f 10 05 a0 21 20 	movss  xmm0,DWORD PTR [rip+0x2021a0]        # 0x1803da6a4
   1801d8503:	00 
   1801d8504:	48 8d 95 f4 00 00 00 	lea    rdx,[rbp+0xf4]
   1801d850b:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d850f:	48 8d 05 8e 21 20 00 	lea    rax,[rip+0x20218e]        # 0x1803da6a4
   1801d8516:	48 0f 46 d0          	cmovbe rdx,rax
   1801d851a:	48 8d 8d f8 00 00 00 	lea    rcx,[rbp+0xf8]
   1801d8521:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d8525:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d8529:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d852d:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d8532:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8536:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d853b:	75 05                	jne    0x1801d8542
   1801d853d:	e8 b2 fd 0f 00       	call   0x1802d82f4
   1801d8542:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8546:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d854a:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d8551:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d8558:	00 
   1801d8559:	48 8d 05 10 70 16 00 	lea    rax,[rip+0x167010]        # 0x18033f570
   1801d8560:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d8565:	c7 44 24 20 0f 00 00 	mov    DWORD PTR [rsp+0x20],0xf
   1801d856c:	00 
   1801d856d:	41 b9 01 00 00 00    	mov    r9d,0x1
   1801d8573:	4c 8b c3             	mov    r8,rbx
   1801d8576:	48 8d 15 23 ad 19 00 	lea    rdx,[rip+0x19ad23]        # 0x1803732a0
   1801d857d:	48 8d 0d 2c ad 19 00 	lea    rcx,[rip+0x19ad2c]        # 0x1803732b0
   1801d8584:	e8 17 00 fd ff       	call   0x1801a85a0
   1801d8589:	c7 85 00 01 00 00 0f 	mov    DWORD PTR [rbp+0x100],0xf
   1801d8590:	00 00 00 
   1801d8593:	c7 85 fc 00 00 00 01 	mov    DWORD PTR [rbp+0xfc],0x1
   1801d859a:	00 00 00 
   1801d859d:	48 8d 8d fc 00 00 00 	lea    rcx,[rbp+0xfc]
   1801d85a4:	83 3b 01             	cmp    DWORD PTR [rbx],0x1
   1801d85a7:	48 0f 4d cb          	cmovge rcx,rbx
   1801d85ab:	48 8d 85 00 01 00 00 	lea    rax,[rbp+0x100]
   1801d85b2:	83 3b 0f             	cmp    DWORD PTR [rbx],0xf
   1801d85b5:	48 0f 4e c1          	cmovle rax,rcx
   1801d85b9:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d85bb:	89 03                	mov    DWORD PTR [rbx],eax
   1801d85bd:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d85c4:	56 fd 93 
   1801d85c7:	48 89 85 d0 15 00 00 	mov    QWORD PTR [rbp+0x15d0],rax
   1801d85ce:	4c 8d 85 d0 15 00 00 	lea    r8,[rbp+0x15d0]
   1801d85d5:	48 8d 95 f0 0b 00 00 	lea    rdx,[rbp+0xbf0]
   1801d85dc:	48 8d 0d 0d 28 22 00 	lea    rcx,[rip+0x22280d]        # 0x1803fadf0
   1801d85e3:	e8 48 94 06 00       	call   0x180241a30
   1801d85e8:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d85eb:	48 83 c1 28          	add    rcx,0x28
   1801d85ef:	48 b8 f8 0c 9d ee 1d 	movabs rax,0x8161971dee9d0cf8
   1801d85f6:	97 61 81 
   1801d85f9:	48 89 85 d8 15 00 00 	mov    QWORD PTR [rbp+0x15d8],rax
   1801d8600:	4c 8d 85 d8 15 00 00 	lea    r8,[rbp+0x15d8]
   1801d8607:	48 8d 95 00 0c 00 00 	lea    rdx,[rbp+0xc00]
   1801d860e:	e8 1d 94 06 00       	call   0x180241a30
   1801d8613:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8616:	48 83 c1 28          	add    rcx,0x28
   1801d861a:	e8 a1 a3 02 00       	call   0x1802029c0
   1801d861f:	48 8b d8             	mov    rbx,rax
   1801d8622:	c7 85 08 01 00 00 00 	mov    DWORD PTR [rbp+0x108],0x3fc00000
   1801d8629:	00 c0 3f 
   1801d862c:	c7 85 04 01 00 00 00 	mov    DWORD PTR [rbp+0x104],0x3f400000
   1801d8633:	00 40 3f 
   1801d8636:	f3 0f 10 05 66 20 20 	movss  xmm0,DWORD PTR [rip+0x202066]        # 0x1803da6a4
   1801d863d:	00 
   1801d863e:	48 8d 95 04 01 00 00 	lea    rdx,[rbp+0x104]
   1801d8645:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8649:	48 8d 05 54 20 20 00 	lea    rax,[rip+0x202054]        # 0x1803da6a4
   1801d8650:	48 0f 46 d0          	cmovbe rdx,rax
   1801d8654:	48 8d 8d 08 01 00 00 	lea    rcx,[rbp+0x108]
   1801d865b:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d865f:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d8663:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d8667:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d866c:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8670:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d8675:	75 05                	jne    0x1801d867c
   1801d8677:	e8 78 fc 0f 00       	call   0x1802d82f4
   1801d867c:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8680:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d8684:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d868b:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d8692:	00 
   1801d8693:	48 8d 05 da 17 19 00 	lea    rax,[rip+0x1917da]        # 0x180369e74
   1801d869a:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d869f:	c7 44 24 20 64 00 00 	mov    DWORD PTR [rsp+0x20],0x64
   1801d86a6:	00 
   1801d86a7:	45 33 c9             	xor    r9d,r9d
   1801d86aa:	4c 8b c3             	mov    r8,rbx
   1801d86ad:	48 8d 15 0c ac 19 00 	lea    rdx,[rip+0x19ac0c]        # 0x1803732c0
   1801d86b4:	48 8d 0d 1d ac 19 00 	lea    rcx,[rip+0x19ac1d]        # 0x1803732d8
   1801d86bb:	e8 e0 fe fc ff       	call   0x1801a85a0
   1801d86c0:	c7 85 10 01 00 00 64 	mov    DWORD PTR [rbp+0x110],0x64
   1801d86c7:	00 00 00 
   1801d86ca:	44 89 ad 0c 01 00 00 	mov    DWORD PTR [rbp+0x10c],r13d
   1801d86d1:	8b 13                	mov    edx,DWORD PTR [rbx]
   1801d86d3:	48 8d 8d 0c 01 00 00 	lea    rcx,[rbp+0x10c]
   1801d86da:	85 d2                	test   edx,edx
   1801d86dc:	48 0f 49 cb          	cmovns rcx,rbx
   1801d86e0:	48 8d 85 10 01 00 00 	lea    rax,[rbp+0x110]
   1801d86e7:	83 fa 64             	cmp    edx,0x64
   1801d86ea:	48 0f 4e c1          	cmovle rax,rcx
   1801d86ee:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d86f0:	89 03                	mov    DWORD PTR [rbx],eax
   1801d86f2:	33 c9                	xor    ecx,ecx
   1801d86f4:	e8 67 67 09 00       	call   0x18026ee60
   1801d86f9:	84 c0                	test   al,al
   1801d86fb:	74 0c                	je     0x1801d8709
   1801d86fd:	48 8d 0d ec ab 19 00 	lea    rcx,[rip+0x19abec]        # 0x1803732f0
   1801d8704:	e8 f7 85 0a 00       	call   0x180280d00
   1801d8709:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801d8710:	56 fd 93 
   1801d8713:	48 89 85 e0 15 00 00 	mov    QWORD PTR [rbp+0x15e0],rax
   1801d871a:	4c 8d 85 e0 15 00 00 	lea    r8,[rbp+0x15e0]
   1801d8721:	48 8d 95 10 0c 00 00 	lea    rdx,[rbp+0xc10]
   1801d8728:	48 8d 0d c1 26 22 00 	lea    rcx,[rip+0x2226c1]        # 0x1803fadf0
   1801d872f:	e8 fc 92 06 00       	call   0x180241a30
   1801d8734:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8737:	48 83 c1 28          	add    rcx,0x28
   1801d873b:	48 b8 30 16 cc 2b 9f 	movabs rax,0x2514009f2bcc1630
   1801d8742:	00 14 25 
   1801d8745:	48 89 85 e8 15 00 00 	mov    QWORD PTR [rbp+0x15e8],rax
   1801d874c:	4c 8d 85 e8 15 00 00 	lea    r8,[rbp+0x15e8]
   1801d8753:	48 8d 95 20 0c 00 00 	lea    rdx,[rbp+0xc20]
   1801d875a:	e8 d1 92 06 00       	call   0x180241a30
   1801d875f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8762:	48 83 c1 28          	add    rcx,0x28
   1801d8766:	e8 55 a2 02 00       	call   0x1802029c0
   1801d876b:	48 8b d8             	mov    rbx,rax
   1801d876e:	c7 85 18 01 00 00 00 	mov    DWORD PTR [rbp+0x118],0x3fc00000
   1801d8775:	00 c0 3f 
   1801d8778:	c7 85 14 01 00 00 00 	mov    DWORD PTR [rbp+0x114],0x3f400000
   1801d877f:	00 40 3f 
   1801d8782:	f3 0f 10 05 1a 1f 20 	movss  xmm0,DWORD PTR [rip+0x201f1a]        # 0x1803da6a4
   1801d8789:	00 
   1801d878a:	48 8d 95 14 01 00 00 	lea    rdx,[rbp+0x114]
   1801d8791:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8795:	48 8d 05 08 1f 20 00 	lea    rax,[rip+0x201f08]        # 0x1803da6a4
   1801d879c:	48 0f 46 d0          	cmovbe rdx,rax
   1801d87a0:	48 8d 8d 18 01 00 00 	lea    rcx,[rbp+0x118]
   1801d87a7:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d87ab:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d87af:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d87b3:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d87b8:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d87bc:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d87c1:	75 05                	jne    0x1801d87c8
   1801d87c3:	e8 2c fb 0f 00       	call   0x1802d82f4
   1801d87c8:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d87cc:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d87d0:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d87d7:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d87de:	00 
   1801d87df:	c7 44 24 20 04 00 00 	mov    DWORD PTR [rsp+0x20],0x4
   1801d87e6:	00 
   1801d87e7:	4c 8d 0d da e7 20 00 	lea    r9,[rip+0x20e7da]        # 0x1803e6fc8
   1801d87ee:	48 8b d3             	mov    rdx,rbx
   1801d87f1:	48 8d 0d 98 ab 19 00 	lea    rcx,[rip+0x19ab98]        # 0x180373390
   1801d87f8:	e8 03 8a 0d 00       	call   0x1802b1200
   1801d87fd:	c7 85 20 01 00 00 03 	mov    DWORD PTR [rbp+0x120],0x3
   1801d8804:	00 00 00 
   1801d8807:	44 89 ad 1c 01 00 00 	mov    DWORD PTR [rbp+0x11c],r13d
   1801d880e:	8b 13                	mov    edx,DWORD PTR [rbx]
   1801d8810:	48 8d 8d 1c 01 00 00 	lea    rcx,[rbp+0x11c]
   1801d8817:	85 d2                	test   edx,edx
   1801d8819:	48 0f 49 cb          	cmovns rcx,rbx
   1801d881d:	48 8d 85 20 01 00 00 	lea    rax,[rbp+0x120]
   1801d8824:	83 fa 03             	cmp    edx,0x3
   1801d8827:	48 0f 4e c1          	cmovle rax,rcx
   1801d882b:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d882d:	89 03                	mov    DWORD PTR [rbx],eax
   1801d882f:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d8836:	56 fd 93 
   1801d8839:	48 89 9d f0 15 00 00 	mov    QWORD PTR [rbp+0x15f0],rbx
   1801d8840:	4c 8d 85 f0 15 00 00 	lea    r8,[rbp+0x15f0]
   1801d8847:	48 8d 95 30 0c 00 00 	lea    rdx,[rbp+0xc30]
   1801d884e:	48 8d 0d 9b 25 22 00 	lea    rcx,[rip+0x22259b]        # 0x1803fadf0
   1801d8855:	e8 d6 91 06 00       	call   0x180241a30
   1801d885a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d885d:	48 83 c1 28          	add    rcx,0x28
   1801d8861:	48 b8 b6 a7 17 f6 29 	movabs rax,0xe7781529f617a7b6
   1801d8868:	15 78 e7 
   1801d886b:	48 89 85 f8 15 00 00 	mov    QWORD PTR [rbp+0x15f8],rax
   1801d8872:	4c 8d 85 f8 15 00 00 	lea    r8,[rbp+0x15f8]
   1801d8879:	48 8d 95 40 0c 00 00 	lea    rdx,[rbp+0xc40]
   1801d8880:	e8 ab 91 06 00       	call   0x180241a30
   1801d8885:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8888:	48 83 c1 28          	add    rcx,0x28
   1801d888c:	e8 2f 47 02 00       	call   0x1801fcfc0
   1801d8891:	48 8b d0             	mov    rdx,rax
   1801d8894:	48 8d 0d 0d ab 19 00 	lea    rcx,[rip+0x19ab0d]        # 0x1803733a8
   1801d889b:	e8 c0 82 fc ff       	call   0x1801a0b60
   1801d88a0:	33 c9                	xor    ecx,ecx
   1801d88a2:	e8 b9 65 09 00       	call   0x18026ee60
   1801d88a7:	84 c0                	test   al,al
   1801d88a9:	74 0c                	je     0x1801d88b7
   1801d88ab:	48 8d 0d 1e ab 19 00 	lea    rcx,[rip+0x19ab1e]        # 0x1803733d0
   1801d88b2:	e8 49 84 0a 00       	call   0x180280d00
   1801d88b7:	48 89 9d 00 16 00 00 	mov    QWORD PTR [rbp+0x1600],rbx
   1801d88be:	4c 8d 85 00 16 00 00 	lea    r8,[rbp+0x1600]
   1801d88c5:	48 8d 95 50 0c 00 00 	lea    rdx,[rbp+0xc50]
   1801d88cc:	48 8d 0d 1d 25 22 00 	lea    rcx,[rip+0x22251d]        # 0x1803fadf0
   1801d88d3:	e8 58 91 06 00       	call   0x180241a30
   1801d88d8:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d88db:	48 83 c1 28          	add    rcx,0x28
   1801d88df:	48 b8 83 74 61 a2 05 	movabs rax,0x76d1c005a2617483
   1801d88e6:	c0 d1 76 
   1801d88e9:	48 89 85 08 16 00 00 	mov    QWORD PTR [rbp+0x1608],rax
   1801d88f0:	4c 8d 85 08 16 00 00 	lea    r8,[rbp+0x1608]
   1801d88f7:	48 8d 95 60 0c 00 00 	lea    rdx,[rbp+0xc60]
   1801d88fe:	e8 2d 91 06 00       	call   0x180241a30
   1801d8903:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8906:	48 83 c1 28          	add    rcx,0x28
   1801d890a:	e8 b1 46 02 00       	call   0x1801fcfc0
   1801d890f:	48 8b d0             	mov    rdx,rax
   1801d8912:	48 8d 0d 4f ac 19 00 	lea    rcx,[rip+0x19ac4f]        # 0x180373568
   1801d8919:	e8 42 82 fc ff       	call   0x1801a0b60
   1801d891e:	33 c9                	xor    ecx,ecx
   1801d8920:	e8 3b 65 09 00       	call   0x18026ee60
   1801d8925:	84 c0                	test   al,al
   1801d8927:	74 0c                	je     0x1801d8935
   1801d8929:	48 8d 0d 50 ac 19 00 	lea    rcx,[rip+0x19ac50]        # 0x180373580
   1801d8930:	e8 cb 83 0a 00       	call   0x180280d00
   1801d8935:	c7 85 28 01 00 00 04 	mov    DWORD PTR [rbp+0x128],0x4
   1801d893c:	00 00 00 
   1801d893f:	44 89 ad 24 01 00 00 	mov    DWORD PTR [rbp+0x124],r13d
   1801d8946:	8b 15 00 29 22 00    	mov    edx,DWORD PTR [rip+0x222900]        # 0x1803fb24c
   1801d894c:	48 8d 8d 24 01 00 00 	lea    rcx,[rbp+0x124]
   1801d8953:	85 d2                	test   edx,edx
   1801d8955:	48 8d 05 f0 28 22 00 	lea    rax,[rip+0x2228f0]        # 0x1803fb24c
   1801d895c:	48 0f 49 c8          	cmovns rcx,rax
   1801d8960:	48 8d 85 28 01 00 00 	lea    rax,[rbp+0x128]
   1801d8967:	83 fa 04             	cmp    edx,0x4
   1801d896a:	48 0f 4e c1          	cmovle rax,rcx
   1801d896e:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d8971:	89 05 d5 28 22 00    	mov    DWORD PTR [rip+0x2228d5],eax        # 0x1803fb24c
   1801d8977:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d897e:	48 8d 05 a3 40 20 00 	lea    rax,[rip+0x2040a3]        # 0x1803dca28
   1801d8985:	48 03 c8             	add    rcx,rax
   1801d8988:	48 8d 15 c1 ac 19 00 	lea    rdx,[rip+0x19acc1]        # 0x180373650
   1801d898f:	e8 1c 22 0d 00       	call   0x1802aabb0
   1801d8994:	80 3d 62 23 22 00 00 	cmp    BYTE PTR [rip+0x222362],0x0        # 0x1803facfd
   1801d899b:	74 1d                	je     0x1801d89ba
   1801d899d:	48 8b 05 54 42 22 00 	mov    rax,QWORD PTR [rip+0x224254]        # 0x1803fcbf8
   1801d89a4:	48 39 05 45 42 22 00 	cmp    QWORD PTR [rip+0x224245],rax        # 0x1803fcbf0
   1801d89ab:	74 12                	je     0x1801d89bf
   1801d89ad:	48 83 e8 08          	sub    rax,0x8
   1801d89b1:	48 89 05 40 42 22 00 	mov    QWORD PTR [rip+0x224240],rax        # 0x1803fcbf8
   1801d89b8:	eb 05                	jmp    0x1801d89bf
   1801d89ba:	e8 41 8e 0a 00       	call   0x180281800
   1801d89bf:	e8 7c 71 0d 00       	call   0x1802afb40
   1801d89c4:	48 89 9d 10 16 00 00 	mov    QWORD PTR [rbp+0x1610],rbx
   1801d89cb:	4c 8d 85 10 16 00 00 	lea    r8,[rbp+0x1610]
   1801d89d2:	48 8d 95 70 0c 00 00 	lea    rdx,[rbp+0xc70]
   1801d89d9:	48 8d 0d 10 24 22 00 	lea    rcx,[rip+0x222410]        # 0x1803fadf0
   1801d89e0:	e8 4b 90 06 00       	call   0x180241a30
   1801d89e5:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d89e8:	48 83 c1 28          	add    rcx,0x28
   1801d89ec:	48 b8 d7 0d c1 96 8b 	movabs rax,0x9d10f28b96c10dd7
   1801d89f3:	f2 10 9d 
   1801d89f6:	48 89 85 18 16 00 00 	mov    QWORD PTR [rbp+0x1618],rax
   1801d89fd:	4c 8d 85 18 16 00 00 	lea    r8,[rbp+0x1618]
   1801d8a04:	48 8d 95 80 0c 00 00 	lea    rdx,[rbp+0xc80]
   1801d8a0b:	e8 20 90 06 00       	call   0x180241a30
   1801d8a10:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8a13:	48 83 c1 28          	add    rcx,0x28
   1801d8a17:	e8 a4 45 02 00       	call   0x1801fcfc0
   1801d8a1c:	48 8b d0             	mov    rdx,rax
   1801d8a1f:	48 8d 0d 02 ad 19 00 	lea    rcx,[rip+0x19ad02]        # 0x180373728
   1801d8a26:	e8 35 81 fc ff       	call   0x1801a0b60
   1801d8a2b:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d8a2f:	0f 57 c0             	xorps  xmm0,xmm0
   1801d8a32:	e8 79 6b 0a 00       	call   0x18027f5b0
   1801d8a37:	0f 57 c0             	xorps  xmm0,xmm0
   1801d8a3a:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801d8a3e:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d8a43:	ba 04 00 00 00       	mov    edx,0x4
   1801d8a48:	48 8d 0d e9 ac 19 00 	lea    rcx,[rip+0x19ace9]        # 0x180373738
   1801d8a4f:	e8 ac 51 fc ff       	call   0x18019dc00
   1801d8a54:	84 c0                	test   al,al
   1801d8a56:	74 0c                	je     0x1801d8a64
   1801d8a58:	48 8d 0d e9 ac 19 00 	lea    rcx,[rip+0x19ace9]        # 0x180373748
   1801d8a5f:	e8 6c 85 0a 00       	call   0x180280fd0
   1801d8a64:	41 0f 28 ca          	movaps xmm1,xmm10
   1801d8a68:	0f 57 c0             	xorps  xmm0,xmm0
   1801d8a6b:	e8 40 6b 0a 00       	call   0x18027f5b0
   1801d8a70:	c7 85 30 01 00 00 00 	mov    DWORD PTR [rbp+0x130],0x3fc00000
   1801d8a77:	00 c0 3f 
   1801d8a7a:	c7 85 2c 01 00 00 00 	mov    DWORD PTR [rbp+0x12c],0x3f400000
   1801d8a81:	00 40 3f 
   1801d8a84:	f3 0f 10 05 18 1c 20 	movss  xmm0,DWORD PTR [rip+0x201c18]        # 0x1803da6a4
   1801d8a8b:	00 
   1801d8a8c:	48 8d 8d 2c 01 00 00 	lea    rcx,[rbp+0x12c]
   1801d8a93:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8a97:	48 8d 05 06 1c 20 00 	lea    rax,[rip+0x201c06]        # 0x1803da6a4
   1801d8a9e:	48 0f 46 c8          	cmovbe rcx,rax
   1801d8aa2:	48 8d 85 30 01 00 00 	lea    rax,[rbp+0x130]
   1801d8aa9:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d8aad:	48 0f 46 c1          	cmovbe rax,rcx
   1801d8ab1:	f3 0f 10 38          	movss  xmm7,DWORD PTR [rax]
   1801d8ab5:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8ab9:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d8abe:	75 05                	jne    0x1801d8ac5
   1801d8ac0:	e8 2f f8 0f 00       	call   0x1802d82f4
   1801d8ac5:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801d8ac9:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801d8acd:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801d8ad4:	f3 0f 10 b1 80 02 00 	movss  xmm6,DWORD PTR [rcx+0x280]
   1801d8adb:	00 
   1801d8adc:	f3 0f 5c 71 28       	subss  xmm6,DWORD PTR [rcx+0x28]
   1801d8ae1:	f3 41 0f 59 ff       	mulss  xmm7,xmm15
   1801d8ae6:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801d8aea:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801d8aef:	75 05                	jne    0x1801d8af6
   1801d8af1:	e8 fe f7 0f 00       	call   0x1802d82f4
   1801d8af6:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8afa:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d8afe:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d8b05:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801d8b0c:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d8b13:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801d8b18:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801d8b1f:	00 
   1801d8b20:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801d8b24:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801d8b2b:	00 
   1801d8b2c:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801d8b33:	c7 85 38 01 00 00 00 	mov    DWORD PTR [rbp+0x138],0x3fc00000
   1801d8b3a:	00 c0 3f 
   1801d8b3d:	c7 85 34 01 00 00 00 	mov    DWORD PTR [rbp+0x134],0x3f400000
   1801d8b44:	00 40 3f 
   1801d8b47:	f3 0f 10 05 55 1b 20 	movss  xmm0,DWORD PTR [rip+0x201b55]        # 0x1803da6a4
   1801d8b4e:	00 
   1801d8b4f:	48 8d 8d 34 01 00 00 	lea    rcx,[rbp+0x134]
   1801d8b56:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8b5a:	48 8d 05 43 1b 20 00 	lea    rax,[rip+0x201b43]        # 0x1803da6a4
   1801d8b61:	48 0f 46 c8          	cmovbe rcx,rax
   1801d8b65:	48 8d 85 38 01 00 00 	lea    rax,[rbp+0x138]
   1801d8b6c:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d8b70:	48 0f 46 c1          	cmovbe rax,rcx
   1801d8b74:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d8b78:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801d8b7d:	f3 0f 11 85 80 03 00 	movss  DWORD PTR [rbp+0x380],xmm0
   1801d8b84:	00 
   1801d8b85:	c7 85 84 03 00 00 00 	mov    DWORD PTR [rbp+0x384],0x0
   1801d8b8c:	00 00 00 
   1801d8b8f:	48 89 9d 20 16 00 00 	mov    QWORD PTR [rbp+0x1620],rbx
   1801d8b96:	4c 8d 85 20 16 00 00 	lea    r8,[rbp+0x1620]
   1801d8b9d:	48 8d 95 90 0c 00 00 	lea    rdx,[rbp+0xc90]
   1801d8ba4:	48 8d 0d 45 22 22 00 	lea    rcx,[rip+0x222245]        # 0x1803fadf0
   1801d8bab:	e8 80 8e 06 00       	call   0x180241a30
   1801d8bb0:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8bb3:	48 83 c1 28          	add    rcx,0x28
   1801d8bb7:	48 b8 02 0c 94 fb ff 	movabs rax,0xb51863fffb940c02
   1801d8bbe:	63 18 b5 
   1801d8bc1:	48 89 85 28 16 00 00 	mov    QWORD PTR [rbp+0x1628],rax
   1801d8bc8:	4c 8d 85 28 16 00 00 	lea    r8,[rbp+0x1628]
   1801d8bcf:	48 8d 95 a0 0c 00 00 	lea    rdx,[rbp+0xca0]
   1801d8bd6:	e8 55 8e 06 00       	call   0x180241a30
   1801d8bdb:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8bde:	48 83 c1 28          	add    rcx,0x28
   1801d8be2:	e8 d9 9d 02 00       	call   0x1802029c0
   1801d8be7:	45 33 c9             	xor    r9d,r9d
   1801d8bea:	4c 8d 85 80 03 00 00 	lea    r8,[rbp+0x380]
   1801d8bf1:	48 8b d0             	mov    rdx,rax
   1801d8bf4:	48 8d 0d 55 ab 19 00 	lea    rcx,[rip+0x19ab55]        # 0x180373750
   1801d8bfb:	e8 a0 a5 0f 00       	call   0x1802d31a0
   1801d8c00:	48 8d 0d 41 ab 19 00 	lea    rcx,[rip+0x19ab41]        # 0x180373748
   1801d8c07:	e8 74 1a fc ff       	call   0x18019a680
   1801d8c0c:	84 c0                	test   al,al
   1801d8c0e:	0f 84 62 02 00 00    	je     0x1801d8e76
   1801d8c14:	48 89 9d 30 16 00 00 	mov    QWORD PTR [rbp+0x1630],rbx
   1801d8c1b:	4c 8d 85 30 16 00 00 	lea    r8,[rbp+0x1630]
   1801d8c22:	48 8d 95 b0 0c 00 00 	lea    rdx,[rbp+0xcb0]
   1801d8c29:	48 8d 0d c0 21 22 00 	lea    rcx,[rip+0x2221c0]        # 0x1803fadf0
   1801d8c30:	e8 fb 8d 06 00       	call   0x180241a30
   1801d8c35:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8c38:	48 83 c1 28          	add    rcx,0x28
   1801d8c3c:	48 b8 a3 3e 4f 19 11 	movabs rax,0x1b344e11194f3ea3
   1801d8c43:	4e 34 1b 
   1801d8c46:	48 89 85 38 16 00 00 	mov    QWORD PTR [rbp+0x1638],rax
   1801d8c4d:	4c 8d 85 38 16 00 00 	lea    r8,[rbp+0x1638]
   1801d8c54:	48 8d 95 c0 0c 00 00 	lea    rdx,[rbp+0xcc0]
   1801d8c5b:	e8 d0 8d 06 00       	call   0x180241a30
   1801d8c60:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d8c63:	48 83 c1 28          	add    rcx,0x28
   1801d8c67:	e8 54 9d 02 00       	call   0x1802029c0
   1801d8c6c:	48 8b d8             	mov    rbx,rax
   1801d8c6f:	c7 85 40 01 00 00 00 	mov    DWORD PTR [rbp+0x140],0x3fc00000
   1801d8c76:	00 c0 3f 
   1801d8c79:	c7 85 3c 01 00 00 00 	mov    DWORD PTR [rbp+0x13c],0x3f400000
   1801d8c80:	00 40 3f 
   1801d8c83:	f3 0f 10 05 19 1a 20 	movss  xmm0,DWORD PTR [rip+0x201a19]        # 0x1803da6a4
   1801d8c8a:	00 
   1801d8c8b:	48 8d 95 3c 01 00 00 	lea    rdx,[rbp+0x13c]
   1801d8c92:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8c96:	48 8d 05 07 1a 20 00 	lea    rax,[rip+0x201a07]        # 0x1803da6a4
   1801d8c9d:	48 0f 46 d0          	cmovbe rdx,rax
   1801d8ca1:	48 8d 8d 40 01 00 00 	lea    rcx,[rbp+0x140]
   1801d8ca8:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d8cac:	48 0f 46 ca          	cmovbe rcx,rdx
   1801d8cb0:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d8cb4:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d8cb9:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8cbd:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d8cc2:	75 05                	jne    0x1801d8cc9
   1801d8cc4:	e8 2b f6 0f 00       	call   0x1802d82f4
   1801d8cc9:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8ccd:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d8cd1:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d8cd8:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d8cdf:	00 
   1801d8ce0:	48 8d 05 89 68 16 00 	lea    rax,[rip+0x166889]        # 0x18033f570
   1801d8ce7:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d8cec:	c7 44 24 20 17 00 00 	mov    DWORD PTR [rsp+0x20],0x17
   1801d8cf3:	00 
   1801d8cf4:	41 b9 01 00 00 00    	mov    r9d,0x1
   1801d8cfa:	4c 8b c3             	mov    r8,rbx
   1801d8cfd:	48 8d 15 5c aa 19 00 	lea    rdx,[rip+0x19aa5c]        # 0x180373760
   1801d8d04:	48 8d 0d 65 aa 19 00 	lea    rcx,[rip+0x19aa65]        # 0x180373770
   1801d8d0b:	e8 90 f8 fc ff       	call   0x1801a85a0
   1801d8d10:	c7 85 48 01 00 00 17 	mov    DWORD PTR [rbp+0x148],0x17
   1801d8d17:	00 00 00 
   1801d8d1a:	c7 85 44 01 00 00 01 	mov    DWORD PTR [rbp+0x144],0x1
   1801d8d21:	00 00 00 
   1801d8d24:	48 8d 8d 44 01 00 00 	lea    rcx,[rbp+0x144]
   1801d8d2b:	83 3b 01             	cmp    DWORD PTR [rbx],0x1
   1801d8d2e:	48 0f 4d cb          	cmovge rcx,rbx
   1801d8d32:	48 8d 85 48 01 00 00 	lea    rax,[rbp+0x148]
   1801d8d39:	83 3b 17             	cmp    DWORD PTR [rbx],0x17
   1801d8d3c:	48 0f 4e c1          	cmovle rax,rcx
   1801d8d40:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d8d42:	89 03                	mov    DWORD PTR [rbx],eax
   1801d8d44:	c7 85 50 01 00 00 04 	mov    DWORD PTR [rbp+0x150],0x4
   1801d8d4b:	00 00 00 
   1801d8d4e:	44 89 ad 4c 01 00 00 	mov    DWORD PTR [rbp+0x14c],r13d
   1801d8d55:	8b 15 f1 24 22 00    	mov    edx,DWORD PTR [rip+0x2224f1]        # 0x1803fb24c
   1801d8d5b:	48 8d 8d 4c 01 00 00 	lea    rcx,[rbp+0x14c]
   1801d8d62:	85 d2                	test   edx,edx
   1801d8d64:	48 8d 05 e1 24 22 00 	lea    rax,[rip+0x2224e1]        # 0x1803fb24c
   1801d8d6b:	48 0f 49 c8          	cmovns rcx,rax
   1801d8d6f:	48 8d 85 50 01 00 00 	lea    rax,[rbp+0x150]
   1801d8d76:	83 fa 04             	cmp    edx,0x4
   1801d8d79:	48 0f 4e c1          	cmovle rax,rcx
   1801d8d7d:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d8d80:	89 05 c6 24 22 00    	mov    DWORD PTR [rip+0x2224c6],eax        # 0x1803fb24c
   1801d8d86:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d8d8d:	48 8d 05 94 3c 20 00 	lea    rax,[rip+0x203c94]        # 0x1803dca28
   1801d8d94:	48 03 c8             	add    rcx,rax
   1801d8d97:	48 8d 15 e2 a9 19 00 	lea    rdx,[rip+0x19a9e2]        # 0x180373780
   1801d8d9e:	e8 0d 1e 0d 00       	call   0x1802aabb0
   1801d8da3:	83 3b 0e             	cmp    DWORD PTR [rbx],0xe
   1801d8da6:	7e 5f                	jle    0x1801d8e07
   1801d8da8:	c7 85 58 01 00 00 04 	mov    DWORD PTR [rbp+0x158],0x4
   1801d8daf:	00 00 00 
   1801d8db2:	44 89 ad 54 01 00 00 	mov    DWORD PTR [rbp+0x154],r13d
   1801d8db9:	8b 15 8d 24 22 00    	mov    edx,DWORD PTR [rip+0x22248d]        # 0x1803fb24c
   1801d8dbf:	48 8d 8d 54 01 00 00 	lea    rcx,[rbp+0x154]
   1801d8dc6:	85 d2                	test   edx,edx
   1801d8dc8:	48 8d 05 7d 24 22 00 	lea    rax,[rip+0x22247d]        # 0x1803fb24c
   1801d8dcf:	48 0f 49 c8          	cmovns rcx,rax
   1801d8dd3:	48 8d 85 58 01 00 00 	lea    rax,[rbp+0x158]
   1801d8dda:	83 fa 04             	cmp    edx,0x4
   1801d8ddd:	48 0f 4e c1          	cmovle rax,rcx
   1801d8de1:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801d8de4:	89 05 62 24 22 00    	mov    DWORD PTR [rip+0x222462],eax        # 0x1803fb24c
   1801d8dea:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801d8df1:	48 8d 05 30 3c 20 00 	lea    rax,[rip+0x203c30]        # 0x1803dca28
   1801d8df8:	48 03 c8             	add    rcx,rax
   1801d8dfb:	48 8d 15 5e aa 19 00 	lea    rdx,[rip+0x19aa5e]        # 0x180373860
   1801d8e02:	e8 a9 1d 0d 00       	call   0x1802aabb0
   1801d8e07:	80 3d ef 1e 22 00 00 	cmp    BYTE PTR [rip+0x221eef],0x0        # 0x1803facfd
   1801d8e0e:	74 3e                	je     0x1801d8e4e
   1801d8e10:	48 8b 05 e1 3d 22 00 	mov    rax,QWORD PTR [rip+0x223de1]        # 0x1803fcbf8
   1801d8e17:	44 0f 28 5c 24 60    	movaps xmm11,XMMWORD PTR [rsp+0x60]
   1801d8e1d:	f3 44 0f 10 2d ba 81 	movss  xmm13,DWORD PTR [rip+0x1a81ba]        # 0x180380fe0
   1801d8e24:	1a 00 
   1801d8e26:	f3 0f 10 35 92 7c 1a 	movss  xmm6,DWORD PTR [rip+0x1a7c92]        # 0x180380ac0
   1801d8e2d:	00 
   1801d8e2e:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d8e35:	56 fd 93 
   1801d8e38:	48 39 05 b1 3d 22 00 	cmp    QWORD PTR [rip+0x223db1],rax        # 0x1803fcbf0
   1801d8e3f:	74 57                	je     0x1801d8e98
   1801d8e41:	48 83 e8 08          	sub    rax,0x8
   1801d8e45:	48 89 05 ac 3d 22 00 	mov    QWORD PTR [rip+0x223dac],rax        # 0x1803fcbf8
   1801d8e4c:	eb 4a                	jmp    0x1801d8e98
   1801d8e4e:	e8 ad 89 0a 00       	call   0x180281800
   1801d8e53:	44 0f 28 5c 24 60    	movaps xmm11,XMMWORD PTR [rsp+0x60]
   1801d8e59:	f3 44 0f 10 2d 7e 81 	movss  xmm13,DWORD PTR [rip+0x1a817e]        # 0x180380fe0
   1801d8e60:	1a 00 
   1801d8e62:	f3 0f 10 35 56 7c 1a 	movss  xmm6,DWORD PTR [rip+0x1a7c56]        # 0x180380ac0
   1801d8e69:	00 
   1801d8e6a:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801d8e71:	56 fd 93 
   1801d8e74:	eb 22                	jmp    0x1801d8e98
   1801d8e76:	44 0f 28 5c 24 60    	movaps xmm11,XMMWORD PTR [rsp+0x60]
   1801d8e7c:	f3 44 0f 10 2d 5b 81 	movss  xmm13,DWORD PTR [rip+0x1a815b]        # 0x180380fe0
   1801d8e83:	1a 00 
   1801d8e85:	f3 0f 10 35 33 7c 1a 	movss  xmm6,DWORD PTR [rip+0x1a7c33]        # 0x180380ac0
   1801d8e8c:	00 
   1801d8e8d:	eb 09                	jmp    0x1801d8e98
   1801d8e8f:	f3 44 0f 10 15 ec 84 	movss  xmm10,DWORD PTR [rip+0x1a84ec]        # 0x180381384
   1801d8e96:	1a 00 
   1801d8e98:	e8 73 a5 09 00       	call   0x180273410
   1801d8e9d:	41 bd 02 00 00 00    	mov    r13d,0x2
   1801d8ea3:	41 8b cd             	mov    ecx,r13d
   1801d8ea6:	e8 05 1d 09 00       	call   0x18026abb0
   1801d8eab:	41 8b cd             	mov    ecx,r13d
   1801d8eae:	e8 dd 19 09 00       	call   0x18026a890
   1801d8eb3:	45 33 c9             	xor    r9d,r9d
   1801d8eb6:	41 0f 28 c3          	movaps xmm0,xmm11
   1801d8eba:	41 0f 14 c2          	unpcklps xmm0,xmm10
   1801d8ebe:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d8ec3:	ba 0e 00 00 00       	mov    edx,0xe
   1801d8ec8:	48 8d 0d f9 a9 19 00 	lea    rcx,[rip+0x19a9f9]        # 0x1803738c8
   1801d8ecf:	e8 ec 6c fc ff       	call   0x18019fbc0
   1801d8ed4:	49 c7 c5 ff ff ff ff 	mov    r13,0xffffffffffffffff
   1801d8edb:	4c 89 6d 90          	mov    QWORD PTR [rbp-0x70],r13
   1801d8edf:	f3 0f 10 3d c1 80 1a 	movss  xmm7,DWORD PTR [rip+0x1a80c1]        # 0x180380fa8
   1801d8ee6:	00 
   1801d8ee7:	84 c0                	test   al,al
   1801d8ee9:	0f 84 3b 14 00 00    	je     0x1801da32a
   1801d8eef:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8ef3:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d8ef8:	75 05                	jne    0x1801d8eff
   1801d8efa:	e8 f5 f3 0f 00       	call   0x1802d82f4
   1801d8eff:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d8f03:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d8f07:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d8f0e:	48 83 b8 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],0x0
   1801d8f15:	00 
   1801d8f16:	75 11                	jne    0x1801d8f29
   1801d8f18:	48 83 b9 68 23 00 00 	cmp    QWORD PTR [rcx+0x2368],0x0
   1801d8f1f:	00 
   1801d8f20:	48 8d 88 80 02 00 00 	lea    rcx,[rax+0x280]
   1801d8f27:	74 07                	je     0x1801d8f30
   1801d8f29:	48 8d 88 50 02 00 00 	lea    rcx,[rax+0x250]
   1801d8f30:	f3 0f 10 09          	movss  xmm1,DWORD PTR [rcx]
   1801d8f34:	f3 0f 5c 88 18 01 00 	subss  xmm1,DWORD PTR [rax+0x118]
   1801d8f3b:	00 
   1801d8f3c:	f3 0f 5c 0d fc 7f 1a 	subss  xmm1,DWORD PTR [rip+0x1a7ffc]        # 0x180380f40
   1801d8f43:	00 
   1801d8f44:	f3 0f 59 ce          	mulss  xmm1,xmm6
   1801d8f48:	c7 85 60 01 00 00 00 	mov    DWORD PTR [rbp+0x160],0x3fc00000
   1801d8f4f:	00 c0 3f 
   1801d8f52:	c7 85 5c 01 00 00 00 	mov    DWORD PTR [rbp+0x15c],0x3f400000
   1801d8f59:	00 40 3f 
   1801d8f5c:	f3 0f 10 05 40 17 20 	movss  xmm0,DWORD PTR [rip+0x201740]        # 0x1803da6a4
   1801d8f63:	00 
   1801d8f64:	48 8d 8d 5c 01 00 00 	lea    rcx,[rbp+0x15c]
   1801d8f6b:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8f6f:	4c 8d 2d 2e 17 20 00 	lea    r13,[rip+0x20172e]        # 0x1803da6a4
   1801d8f76:	49 0f 46 cd          	cmovbe rcx,r13
   1801d8f7a:	48 8d 85 60 01 00 00 	lea    rax,[rbp+0x160]
   1801d8f81:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d8f85:	48 0f 46 c1          	cmovbe rax,rcx
   1801d8f89:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801d8f8d:	f3 0f 59 05 97 80 1a 	mulss  xmm0,DWORD PTR [rip+0x1a8097]        # 0x18038102c
   1801d8f94:	00 
   1801d8f95:	f3 0f 11 8d d8 10 00 	movss  DWORD PTR [rbp+0x10d8],xmm1
   1801d8f9c:	00 
   1801d8f9d:	f3 0f 11 85 dc 10 00 	movss  DWORD PTR [rbp+0x10dc],xmm0
   1801d8fa4:	00 
   1801d8fa5:	4c 89 74 24 60       	mov    QWORD PTR [rsp+0x60],r14
   1801d8faa:	48 8d 85 d8 10 00 00 	lea    rax,[rbp+0x10d8]
   1801d8fb1:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
   1801d8fb6:	45 33 c0             	xor    r8d,r8d
   1801d8fb9:	48 8d 15 10 a9 19 00 	lea    rdx,[rip+0x19a910]        # 0x1803738d0
   1801d8fc0:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801d8fc5:	e8 06 66 00 00       	call   0x1801df5d0
   1801d8fca:	c7 85 68 01 00 00 00 	mov    DWORD PTR [rbp+0x168],0x3fc00000
   1801d8fd1:	00 c0 3f 
   1801d8fd4:	c7 85 64 01 00 00 00 	mov    DWORD PTR [rbp+0x164],0x3f400000
   1801d8fdb:	00 40 3f 
   1801d8fde:	f3 0f 10 05 be 16 20 	movss  xmm0,DWORD PTR [rip+0x2016be]        # 0x1803da6a4
   1801d8fe5:	00 
   1801d8fe6:	48 8d 8d 64 01 00 00 	lea    rcx,[rbp+0x164]
   1801d8fed:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d8ff1:	49 0f 46 cd          	cmovbe rcx,r13
   1801d8ff5:	48 8d 85 68 01 00 00 	lea    rax,[rbp+0x168]
   1801d8ffc:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d9000:	48 0f 46 c1          	cmovbe rax,rcx
   1801d9004:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801d9008:	f3 0f 59 0d 30 7f 1a 	mulss  xmm1,DWORD PTR [rip+0x1a7f30]        # 0x180380f40
   1801d900f:	00 
   1801d9010:	0f 57 c0             	xorps  xmm0,xmm0
   1801d9013:	e8 98 65 0a 00       	call   0x18027f5b0
   1801d9018:	41 b8 01 00 00 00    	mov    r8d,0x1
   1801d901e:	48 8d 15 c3 a8 19 00 	lea    rdx,[rip+0x19a8c3]        # 0x1803738e8
   1801d9025:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801d902a:	e8 a1 65 00 00       	call   0x1801df5d0
   1801d902f:	48 8d 0d ba 1d 22 00 	lea    rcx,[rip+0x221dba]        # 0x1803fadf0
   1801d9036:	83 3d 37 6d 22 00 00 	cmp    DWORD PTR [rip+0x226d37],0x0        # 0x1803ffd74
   1801d903d:	75 3e                	jne    0x1801d907d
   1801d903f:	48 89 9d 40 16 00 00 	mov    QWORD PTR [rbp+0x1640],rbx
   1801d9046:	4c 8d 85 40 16 00 00 	lea    r8,[rbp+0x1640]
   1801d904d:	48 8d 95 d0 0c 00 00 	lea    rdx,[rbp+0xcd0]
   1801d9054:	e8 d7 89 06 00       	call   0x180241a30
   1801d9059:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d905c:	48 b8 2e 03 e9 b2 6e 	movabs rax,0x6507776eb2e9032e
   1801d9063:	77 07 65 
   1801d9066:	48 89 85 48 16 00 00 	mov    QWORD PTR [rbp+0x1648],rax
   1801d906d:	48 8d 95 e0 0c 00 00 	lea    rdx,[rbp+0xce0]
   1801d9074:	4c 8d 85 48 16 00 00 	lea    r8,[rbp+0x1648]
   1801d907b:	eb 3c                	jmp    0x1801d90b9
   1801d907d:	48 89 9d 50 16 00 00 	mov    QWORD PTR [rbp+0x1650],rbx
   1801d9084:	4c 8d 85 50 16 00 00 	lea    r8,[rbp+0x1650]
   1801d908b:	48 8d 95 f0 0c 00 00 	lea    rdx,[rbp+0xcf0]
   1801d9092:	e8 99 89 06 00       	call   0x180241a30
   1801d9097:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d909a:	48 b8 30 04 37 2e 65 	movabs rax,0xb934af652e370430
   1801d90a1:	af 34 b9 
   1801d90a4:	48 89 85 58 16 00 00 	mov    QWORD PTR [rbp+0x1658],rax
   1801d90ab:	48 8d 95 00 0d 00 00 	lea    rdx,[rbp+0xd00]
   1801d90b2:	4c 8d 85 58 16 00 00 	lea    r8,[rbp+0x1658]
   1801d90b9:	48 83 c1 28          	add    rcx,0x28
   1801d90bd:	e8 6e 89 06 00       	call   0x180241a30
   1801d90c2:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d90c5:	48 83 c1 28          	add    rcx,0x28
   1801d90c9:	e8 f2 3e 02 00       	call   0x1801fcfc0
   1801d90ce:	48 89 45 88          	mov    QWORD PTR [rbp-0x78],rax
   1801d90d2:	48 8d 0d 17 1d 22 00 	lea    rcx,[rip+0x221d17]        # 0x1803fadf0
   1801d90d9:	83 3d 94 6c 22 00 00 	cmp    DWORD PTR [rip+0x226c94],0x0        # 0x1803ffd74
   1801d90e0:	75 3e                	jne    0x1801d9120
   1801d90e2:	48 89 9d 60 16 00 00 	mov    QWORD PTR [rbp+0x1660],rbx
   1801d90e9:	4c 8d 85 60 16 00 00 	lea    r8,[rbp+0x1660]
   1801d90f0:	48 8d 95 10 0d 00 00 	lea    rdx,[rbp+0xd10]
   1801d90f7:	e8 34 89 06 00       	call   0x180241a30
   1801d90fc:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d90ff:	48 b8 f2 d9 4a 59 34 	movabs rax,0x96ef6034594ad9f2
   1801d9106:	60 ef 96 
   1801d9109:	48 89 85 68 16 00 00 	mov    QWORD PTR [rbp+0x1668],rax
   1801d9110:	48 8d 95 20 0d 00 00 	lea    rdx,[rbp+0xd20]
   1801d9117:	4c 8d 85 68 16 00 00 	lea    r8,[rbp+0x1668]
   1801d911e:	eb 3c                	jmp    0x1801d915c
   1801d9120:	48 89 9d 70 16 00 00 	mov    QWORD PTR [rbp+0x1670],rbx
   1801d9127:	4c 8d 85 70 16 00 00 	lea    r8,[rbp+0x1670]
   1801d912e:	48 8d 95 30 0d 00 00 	lea    rdx,[rbp+0xd30]
   1801d9135:	e8 f6 88 06 00       	call   0x180241a30
   1801d913a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d913d:	48 b8 40 a2 f6 ea 59 	movabs rax,0xd2ed0559eaf6a240
   1801d9144:	05 ed d2 
   1801d9147:	48 89 85 78 16 00 00 	mov    QWORD PTR [rbp+0x1678],rax
   1801d914e:	48 8d 95 40 0d 00 00 	lea    rdx,[rbp+0xd40]
   1801d9155:	4c 8d 85 78 16 00 00 	lea    r8,[rbp+0x1678]
   1801d915c:	48 83 c1 28          	add    rcx,0x28
   1801d9160:	e8 cb 88 06 00       	call   0x180241a30
   1801d9165:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801d9168:	48 83 c1 28          	add    rcx,0x28
   1801d916c:	e8 4f 9c 02 00       	call   0x180202dc0
   1801d9171:	4c 8b e8             	mov    r13,rax
   1801d9174:	48 8d 05 15 eb 20 00 	lea    rax,[rip+0x20eb15]        # 0x1803e7c90
   1801d917b:	48 8d 1d 5e f6 20 00 	lea    rbx,[rip+0x20f65e]        # 0x1803e87e0
   1801d9182:	83 3d eb 6b 22 00 00 	cmp    DWORD PTR [rip+0x226beb],0x0        # 0x1803ffd74
   1801d9189:	48 0f 44 d8          	cmove  rbx,rax
   1801d918d:	48 89 5c 24 60       	mov    QWORD PTR [rsp+0x60],rbx
   1801d9192:	48 8b cb             	mov    rcx,rbx
   1801d9195:	ff 15 85 33 13 00    	call   QWORD PTR [rip+0x133385]        # 0x18030c520
   1801d919b:	85 c0                	test   eax,eax
   1801d919d:	0f 85 63 11 00 00    	jne    0x1801da306
   1801d91a3:	8b 43 4c             	mov    eax,DWORD PTR [rbx+0x4c]
   1801d91a6:	3d ff ff ff 7f       	cmp    eax,0x7fffffff
   1801d91ab:	0f 84 2b 0c 00 00    	je     0x1801d9ddc
   1801d91b1:	48 8d 0d a8 0d 21 00 	lea    rcx,[rip+0x210da8]        # 0x1803e9f60
   1801d91b8:	48 8d 05 49 0b 21 00 	lea    rax,[rip+0x210b49]        # 0x1803e9d08
   1801d91bf:	83 3d ae 6b 22 00 00 	cmp    DWORD PTR [rip+0x226bae],0x0        # 0x1803ffd74
   1801d91c6:	48 0f 44 c1          	cmove  rax,rcx
   1801d91ca:	48 8b 48 08          	mov    rcx,QWORD PTR [rax+0x8]
   1801d91ce:	48 2b 08             	sub    rcx,QWORD PTR [rax]
   1801d91d1:	48 c1 f9 05          	sar    rcx,0x5
   1801d91d5:	48 89 4c 24 78       	mov    QWORD PTR [rsp+0x78],rcx
   1801d91da:	48 8b cb             	mov    rcx,rbx
   1801d91dd:	ff 15 7d 33 13 00    	call   QWORD PTR [rip+0x13337d]        # 0x18030c560
   1801d91e3:	48 8d 05 0e a7 19 00 	lea    rax,[rip+0x19a70e]        # 0x1803738f8
   1801d91ea:	48 8d 0d 17 a7 19 00 	lea    rcx,[rip+0x19a717]        # 0x180373908
   1801d91f1:	83 3d 7c 6b 22 00 00 	cmp    DWORD PTR [rip+0x226b7c],0x0        # 0x1803ffd74
   1801d91f8:	48 0f 44 c8          	cmove  rcx,rax
   1801d91fc:	48 8b 55 88          	mov    rdx,QWORD PTR [rbp-0x78]
   1801d9200:	e8 5b 79 fc ff       	call   0x1801a0b60
   1801d9205:	33 c9                	xor    ecx,ecx
   1801d9207:	e8 54 5c 09 00       	call   0x18026ee60
   1801d920c:	84 c0                	test   al,al
   1801d920e:	74 1e                	je     0x1801d922e
   1801d9210:	48 8d 05 09 a7 19 00 	lea    rax,[rip+0x19a709]        # 0x180373920
   1801d9217:	48 8d 0d a2 a7 19 00 	lea    rcx,[rip+0x19a7a2]        # 0x1803739c0
   1801d921e:	83 3d 4f 6b 22 00 00 	cmp    DWORD PTR [rip+0x226b4f],0x0        # 0x1803ffd74
   1801d9225:	48 0f 44 c8          	cmove  rcx,rax
   1801d9229:	e8 d2 7a 0a 00       	call   0x180280d00
   1801d922e:	c7 85 70 01 00 00 00 	mov    DWORD PTR [rbp+0x170],0x3fc00000
   1801d9235:	00 c0 3f 
   1801d9238:	c7 85 6c 01 00 00 00 	mov    DWORD PTR [rbp+0x16c],0x3f400000
   1801d923f:	00 40 3f 
   1801d9242:	f3 0f 10 05 5a 14 20 	movss  xmm0,DWORD PTR [rip+0x20145a]        # 0x1803da6a4
   1801d9249:	00 
   1801d924a:	48 8d 8d 6c 01 00 00 	lea    rcx,[rbp+0x16c]
   1801d9251:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d9255:	48 8d 1d 48 14 20 00 	lea    rbx,[rip+0x201448]        # 0x1803da6a4
   1801d925c:	48 0f 46 cb          	cmovbe rcx,rbx
   1801d9260:	48 8d 85 70 01 00 00 	lea    rax,[rbp+0x170]
   1801d9267:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d926b:	48 0f 46 c1          	cmovbe rax,rcx
   1801d926f:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801d9273:	f3 0f 59 cf          	mulss  xmm1,xmm7
   1801d9277:	0f 57 c0             	xorps  xmm0,xmm0
   1801d927a:	e8 31 63 0a 00       	call   0x18027f5b0
   1801d927f:	0f 57 c0             	xorps  xmm0,xmm0
   1801d9282:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801d9286:	66 49 0f 7e c0       	movq   r8,xmm0
   1801d928b:	ba 04 00 00 00       	mov    edx,0x4
   1801d9290:	48 8d 0d e9 a7 19 00 	lea    rcx,[rip+0x19a7e9]        # 0x180373a80
   1801d9297:	e8 64 49 fc ff       	call   0x18019dc00
   1801d929c:	84 c0                	test   al,al
   1801d929e:	74 0c                	je     0x1801d92ac
   1801d92a0:	48 8d 0d e9 a7 19 00 	lea    rcx,[rip+0x19a7e9]        # 0x180373a90
   1801d92a7:	e8 24 7d 0a 00       	call   0x180280fd0
   1801d92ac:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d92b0:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d92b5:	75 05                	jne    0x1801d92bc
   1801d92b7:	e8 38 f0 0f 00       	call   0x1802d82f4
   1801d92bc:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d92c0:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d92c4:	f3 0f 10 b9 0c 1f 00 	movss  xmm7,DWORD PTR [rcx+0x1f0c]
   1801d92cb:	00 
   1801d92cc:	48 8d 0d bd a7 19 00 	lea    rcx,[rip+0x19a7bd]        # 0x180373a90
   1801d92d3:	e8 a8 13 fc ff       	call   0x18019a680
   1801d92d8:	84 c0                	test   al,al
   1801d92da:	0f 84 53 03 00 00    	je     0x1801d9633
   1801d92e0:	c7 85 78 01 00 00 00 	mov    DWORD PTR [rbp+0x178],0x3fc00000
   1801d92e7:	00 c0 3f 
   1801d92ea:	c7 85 74 01 00 00 00 	mov    DWORD PTR [rbp+0x174],0x3f400000
   1801d92f1:	00 40 3f 
   1801d92f4:	f3 0f 10 05 a8 13 20 	movss  xmm0,DWORD PTR [rip+0x2013a8]        # 0x1803da6a4
   1801d92fb:	00 
   1801d92fc:	48 8d 8d 74 01 00 00 	lea    rcx,[rbp+0x174]
   1801d9303:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d9307:	48 0f 46 cb          	cmovbe rcx,rbx
   1801d930b:	48 8d 85 78 01 00 00 	lea    rax,[rbp+0x178]
   1801d9312:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d9316:	48 0f 46 c1          	cmovbe rax,rcx
   1801d931a:	f3 0f 10 30          	movss  xmm6,DWORD PTR [rax]
   1801d931e:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801d9323:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9327:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d932c:	75 05                	jne    0x1801d9333
   1801d932e:	e8 c1 ef 0f 00       	call   0x1802d82f4
   1801d9333:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9337:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d933b:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801d9342:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801d9349:	00 
   1801d934a:	8b 05 24 6a 22 00    	mov    eax,DWORD PTR [rip+0x226a24]        # 0x1803ffd74
   1801d9350:	85 c0                	test   eax,eax
   1801d9352:	75 12                	jne    0x1801d9366
   1801d9354:	f3 0f 10 1d 10 77 1a 	movss  xmm3,DWORD PTR [rip+0x1a7710]        # 0x180380a6c
   1801d935b:	00 
   1801d935c:	f3 0f 10 05 68 7c 1a 	movss  xmm0,DWORD PTR [rip+0x1a7c68]        # 0x180380fcc
   1801d9363:	00 
   1801d9364:	eb 10                	jmp    0x1801d9376
   1801d9366:	f3 0f 10 1d 52 77 1a 	movss  xmm3,DWORD PTR [rip+0x1a7752]        # 0x180380ac0
   1801d936d:	00 
   1801d936e:	f3 0f 10 05 52 7d 1a 	movss  xmm0,DWORD PTR [rip+0x1a7d52]        # 0x1803810c8
   1801d9375:	00 
   1801d9376:	f3 0f 11 9d c4 10 00 	movss  DWORD PTR [rbp+0x10c4],xmm3
   1801d937d:	00 
   1801d937e:	f3 0f 11 85 c8 10 00 	movss  DWORD PTR [rbp+0x10c8],xmm0
   1801d9385:	00 
   1801d9386:	48 8d 15 23 a7 19 00 	lea    rdx,[rip+0x19a723]        # 0x180373ab0
   1801d938d:	48 8d 0d 2c a7 19 00 	lea    rcx,[rip+0x19a72c]        # 0x180373ac0
   1801d9394:	85 c0                	test   eax,eax
   1801d9396:	48 0f 44 ca          	cmove  rcx,rdx
   1801d939a:	48 8d 05 ab 43 19 00 	lea    rax,[rip+0x1943ab]        # 0x18036d74c
   1801d93a1:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d93a6:	f3 0f 11 44 24 20    	movss  DWORD PTR [rsp+0x20],xmm0
   1801d93ac:	4d 8b c5             	mov    r8,r13
   1801d93af:	48 8d 15 ea a6 19 00 	lea    rdx,[rip+0x19a6ea]        # 0x180373aa0
   1801d93b6:	e8 65 e6 fc ff       	call   0x1801a7a20
   1801d93bb:	f3 41 0f 10 4d 00    	movss  xmm1,DWORD PTR [r13+0x0]
   1801d93c1:	48 8d 8d c4 10 00 00 	lea    rcx,[rbp+0x10c4]
   1801d93c8:	f3 0f 10 85 c4 10 00 	movss  xmm0,DWORD PTR [rbp+0x10c4]
   1801d93cf:	00 
   1801d93d0:	0f 2f c1             	comiss xmm0,xmm1
   1801d93d3:	49 0f 46 cd          	cmovbe rcx,r13
   1801d93d7:	48 8d 85 c8 10 00 00 	lea    rax,[rbp+0x10c8]
   1801d93de:	0f 2f 8d c8 10 00 00 	comiss xmm1,DWORD PTR [rbp+0x10c8]
   1801d93e5:	48 0f 46 c1          	cmovbe rax,rcx
   1801d93e9:	8b 00                	mov    eax,DWORD PTR [rax]
   1801d93eb:	41 89 45 00          	mov    DWORD PTR [r13+0x0],eax
   1801d93ef:	c7 85 80 01 00 00 04 	mov    DWORD PTR [rbp+0x180],0x4
   1801d93f6:	00 00 00 
   1801d93f9:	c7 85 7c 01 00 00 00 	mov    DWORD PTR [rbp+0x17c],0x0
   1801d9400:	00 00 00 
   1801d9403:	8b 15 43 1e 22 00    	mov    edx,DWORD PTR [rip+0x221e43]        # 0x1803fb24c
   1801d9409:	48 8d 8d 7c 01 00 00 	lea    rcx,[rbp+0x17c]
   1801d9410:	85 d2                	test   edx,edx
   1801d9412:	48 8d 05 33 1e 22 00 	lea    rax,[rip+0x221e33]        # 0x1803fb24c
   1801d9419:	48 0f 49 c8          	cmovns rcx,rax
   1801d941d:	48 8d 85 80 01 00 00 	lea    rax,[rbp+0x180]
   1801d9424:	83 fa 04             	cmp    edx,0x4
   1801d9427:	48 0f 4e c1          	cmovle rax,rcx
   1801d942b:	48 63 08             	movsxd rcx,DWORD PTR [rax]
   1801d942e:	89 0d 18 1e 22 00    	mov    DWORD PTR [rip+0x221e18],ecx        # 0x1803fb24c
   1801d9434:	48 8d 05 9d a6 19 00 	lea    rax,[rip+0x19a69d]        # 0x180373ad8
   1801d943b:	48 8d 15 ce a6 19 00 	lea    rdx,[rip+0x19a6ce]        # 0x180373b10
   1801d9442:	83 3d 2b 69 22 00 00 	cmp    DWORD PTR [rip+0x22692b],0x0        # 0x1803ffd74
   1801d9449:	48 0f 44 d0          	cmove  rdx,rax
   1801d944d:	48 69 c9 c8 00 00 00 	imul   rcx,rcx,0xc8
   1801d9454:	48 8d 05 cd 35 20 00 	lea    rax,[rip+0x2035cd]        # 0x1803dca28
   1801d945b:	48 03 c8             	add    rcx,rax
   1801d945e:	e8 4d 17 0d 00       	call   0x1802aabb0
   1801d9463:	83 3d 0a 69 22 00 00 	cmp    DWORD PTR [rip+0x22690a],0x0        # 0x1803ffd74
   1801d946a:	0f 85 6f 01 00 00    	jne    0x1801d95df
   1801d9470:	e8 cb 66 0d 00       	call   0x1802afb40
   1801d9475:	e8 f6 90 f6 ff       	call   0x180142570
   1801d947a:	84 c0                	test   al,al
   1801d947c:	74 36                	je     0x1801d94b4
   1801d947e:	49 8d 4e 78          	lea    rcx,[r14+0x78]
   1801d9482:	48 8d 15 d7 a6 19 00 	lea    rdx,[rip+0x19a6d7]        # 0x180373b60
   1801d9489:	e8 22 17 0d 00       	call   0x1802aabb0
   1801d948e:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801d9495:	44 8b 0d ac 03 23 00 	mov    r9d,DWORD PTR [rip+0x2303ac]        # 0x180409848
   1801d949c:	44 8b 05 a9 03 23 00 	mov    r8d,DWORD PTR [rip+0x2303a9]        # 0x18040984c
   1801d94a3:	48 8d 15 0e a7 19 00 	lea    rdx,[rip+0x19a70e]        # 0x180373bb8
   1801d94aa:	e8 01 17 0d 00       	call   0x1802aabb0
   1801d94af:	e9 2b 01 00 00       	jmp    0x1801d95df
   1801d94b4:	e8 37 91 f6 ff       	call   0x1801425f0
   1801d94b9:	84 c0                	test   al,al
   1801d94bb:	0f 84 a2 00 00 00    	je     0x1801d9563
   1801d94c1:	49 8d 4e 78          	lea    rcx,[r14+0x78]
   1801d94c5:	48 8d 15 24 a7 19 00 	lea    rdx,[rip+0x19a724]        # 0x180373bf0
   1801d94cc:	e8 df 16 0d 00       	call   0x1802aabb0
   1801d94d1:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801d94d8:	44 8b 0d 69 03 23 00 	mov    r9d,DWORD PTR [rip+0x230369]        # 0x180409848
   1801d94df:	44 8b 05 66 03 23 00 	mov    r8d,DWORD PTR [rip+0x230366]        # 0x18040984c
   1801d94e6:	48 8d 15 cb a6 19 00 	lea    rdx,[rip+0x19a6cb]        # 0x180373bb8
   1801d94ed:	e8 be 16 0d 00       	call   0x1802aabb0
   1801d94f2:	33 db                	xor    ebx,ebx
   1801d94f4:	39 1d 0e 62 22 00    	cmp    DWORD PTR [rip+0x22620e],ebx        # 0x1803ff708
   1801d94fa:	7e 5e                	jle    0x1801d955a
   1801d94fc:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
   1801d9500:	48 63 c3             	movsxd rax,ebx
   1801d9503:	4c 6b e8 58          	imul   r13,rax,0x58
   1801d9507:	48 8d 05 f2 6a e2 ff 	lea    rax,[rip+0xffffffffffe26af2]        # 0x180000000
   1801d950e:	4a 8b 8c 28 98 b8 3e 	mov    rcx,QWORD PTR [rax+r13*1+0x3eb898]
   1801d9515:	00 
   1801d9516:	48 85 c9             	test   rcx,rcx
   1801d9519:	74 10                	je     0x1801d952b
   1801d951b:	48 8d 15 3e 3d 18 00 	lea    rdx,[rip+0x183d3e]        # 0x18035d260
   1801d9522:	e8 86 ff 0f 00       	call   0x1802d94ad
   1801d9527:	85 c0                	test   eax,eax
   1801d9529:	74 16                	je     0x1801d9541
   1801d952b:	ff c3                	inc    ebx
   1801d952d:	3b 1d d5 61 22 00    	cmp    ebx,DWORD PTR [rip+0x2261d5]        # 0x1803ff708
   1801d9533:	7c cb                	jl     0x1801d9500
   1801d9535:	48 8d 15 14 a7 19 00 	lea    rdx,[rip+0x19a714]        # 0x180373c50
   1801d953c:	e9 8b 00 00 00       	jmp    0x1801d95cc
   1801d9541:	48 8d 05 b8 6a e2 ff 	lea    rax,[rip+0xffffffffffe26ab8]        # 0x180000000
   1801d9548:	48 8d 80 90 b8 3e 00 	lea    rax,[rax+0x3eb890]
   1801d954f:	49 03 c5             	add    rax,r13
   1801d9552:	74 06                	je     0x1801d955a
   1801d9554:	80 78 54 00          	cmp    BYTE PTR [rax+0x54],0x0
   1801d9558:	75 7e                	jne    0x1801d95d8
   1801d955a:	48 8d 15 ef a6 19 00 	lea    rdx,[rip+0x19a6ef]        # 0x180373c50
   1801d9561:	eb 69                	jmp    0x1801d95cc
   1801d9563:	e8 78 1b e9 ff       	call   0x18006b0e0
   1801d9568:	84 c0                	test   al,al
   1801d956a:	74 15                	je     0x1801d9581
   1801d956c:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801d9573:	48 8d 15 26 a7 19 00 	lea    rdx,[rip+0x19a726]        # 0x180373ca0
   1801d957a:	e8 31 16 0d 00       	call   0x1802aabb0
   1801d957f:	eb 5e                	jmp    0x1801d95df
   1801d9581:	33 db                	xor    ebx,ebx
   1801d9583:	39 1d 7f 61 22 00    	cmp    DWORD PTR [rip+0x22617f],ebx        # 0x1803ff708
   1801d9589:	7e 3a                	jle    0x1801d95c5
   1801d958b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   1801d9590:	48 63 c3             	movsxd rax,ebx
   1801d9593:	4c 6b e8 58          	imul   r13,rax,0x58
   1801d9597:	48 8d 05 62 6a e2 ff 	lea    rax,[rip+0xffffffffffe26a62]        # 0x180000000
   1801d959e:	4a 8b 8c 28 98 b8 3e 	mov    rcx,QWORD PTR [rax+r13*1+0x3eb898]
   1801d95a5:	00 
   1801d95a6:	48 85 c9             	test   rcx,rcx
   1801d95a9:	74 10                	je     0x1801d95bb
   1801d95ab:	48 8d 15 ae 3c 18 00 	lea    rdx,[rip+0x183cae]        # 0x18035d260
   1801d95b2:	e8 f6 fe 0f 00       	call   0x1802d94ad
   1801d95b7:	85 c0                	test   eax,eax
   1801d95b9:	74 4a                	je     0x1801d9605
   1801d95bb:	ff c3                	inc    ebx
   1801d95bd:	3b 1d 45 61 22 00    	cmp    ebx,DWORD PTR [rip+0x226145]        # 0x1803ff708
   1801d95c3:	7c cb                	jl     0x1801d9590
   1801d95c5:	48 8d 15 f4 a7 19 00 	lea    rdx,[rip+0x19a7f4]        # 0x180373dc0
   1801d95cc:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801d95d3:	e8 d8 15 0d 00       	call   0x1802aabb0
   1801d95d8:	48 8d 1d c5 10 20 00 	lea    rbx,[rip+0x2010c5]        # 0x1803da6a4
   1801d95df:	80 3d 17 17 22 00 00 	cmp    BYTE PTR [rip+0x221717],0x0        # 0x1803facfd
   1801d95e6:	74 46                	je     0x1801d962e
   1801d95e8:	48 8b 05 09 36 22 00 	mov    rax,QWORD PTR [rip+0x223609]        # 0x1803fcbf8
   1801d95ef:	48 39 05 fa 35 22 00 	cmp    QWORD PTR [rip+0x2235fa],rax        # 0x1803fcbf0
   1801d95f6:	74 3b                	je     0x1801d9633
   1801d95f8:	48 83 e8 08          	sub    rax,0x8
   1801d95fc:	48 89 05 f5 35 22 00 	mov    QWORD PTR [rip+0x2235f5],rax        # 0x1803fcbf8
   1801d9603:	eb 2e                	jmp    0x1801d9633
   1801d9605:	48 8d 05 f4 69 e2 ff 	lea    rax,[rip+0xffffffffffe269f4]        # 0x180000000
   1801d960c:	48 8d 80 90 b8 3e 00 	lea    rax,[rax+0x3eb890]
   1801d9613:	49 03 c5             	add    rax,r13
   1801d9616:	74 ad                	je     0x1801d95c5
   1801d9618:	80 78 54 00          	cmp    BYTE PTR [rax+0x54],0x0
   1801d961c:	74 a7                	je     0x1801d95c5
   1801d961e:	49 8d 8e 88 00 00 00 	lea    rcx,[r14+0x88]
   1801d9625:	48 8d 15 14 a7 19 00 	lea    rdx,[rip+0x19a714]        # 0x180373d40
   1801d962c:	eb a5                	jmp    0x1801d95d3
   1801d962e:	e8 cd 81 0a 00       	call   0x180281800
   1801d9633:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9637:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d963c:	75 05                	jne    0x1801d9643
   1801d963e:	e8 b1 ec 0f 00       	call   0x1802d82f4
   1801d9643:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801d9647:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801d964b:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801d9652:	f3 0f 10 b1 80 02 00 	movss  xmm6,DWORD PTR [rcx+0x280]
   1801d9659:	00 
   1801d965a:	f3 0f 5c 71 28       	subss  xmm6,DWORD PTR [rcx+0x28]
   1801d965f:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801d9664:	75 05                	jne    0x1801d966b
   1801d9666:	e8 89 ec 0f 00       	call   0x1802d82f4
   1801d966b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d966f:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9673:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d967a:	f3 0f 58 70 28       	addss  xmm6,DWORD PTR [rax+0x28]
   1801d967f:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801d9683:	f3 0f 10 3d 1d 79 1a 	movss  xmm7,DWORD PTR [rip+0x1a791d]        # 0x180380fa8
   1801d968a:	00 
   1801d968b:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801d968f:	44 8b 4c 24 78       	mov    r9d,DWORD PTR [rsp+0x78]
   1801d9694:	4c 8d 05 3d a7 19 00 	lea    r8,[rip+0x19a73d]        # 0x180373dd8
   1801d969b:	ba 20 00 00 00       	mov    edx,0x20
   1801d96a0:	48 8d 8d b0 17 00 00 	lea    rcx,[rbp+0x17b0]
   1801d96a7:	e8 14 94 e3 ff       	call   0x180012ac0
   1801d96ac:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d96b0:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d96b5:	75 05                	jne    0x1801d96bc
   1801d96b7:	e8 38 ec 0f 00       	call   0x1802d82f4
   1801d96bc:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d96c0:	49 8b 14 04          	mov    rdx,QWORD PTR [r12+rax*1]
   1801d96c4:	33 c0                	xor    eax,eax
   1801d96c6:	89 44 24 50          	mov    DWORD PTR [rsp+0x50],eax
   1801d96ca:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   1801d96cf:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   1801d96d4:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   1801d96d9:	48 8d 85 b0 17 00 00 	lea    rax,[rbp+0x17b0]
   1801d96e0:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801d96e5:	f3 44 0f 11 54 24 20 	movss  DWORD PTR [rsp+0x20],xmm10
   1801d96ec:	f3 0f 10 1d 14 7c 1a 	movss  xmm3,DWORD PTR [rip+0x1a7c14]        # 0x180381308
   1801d96f3:	00 
   1801d96f4:	f3 0f 10 92 38 12 00 	movss  xmm2,DWORD PTR [rdx+0x1238]
   1801d96fb:	00 
   1801d96fc:	48 8b 92 28 12 00 00 	mov    rdx,QWORD PTR [rdx+0x1228]
   1801d9703:	48 8d 4d 88          	lea    rcx,[rbp-0x78]
   1801d9707:	e8 44 4c 0c 00       	call   0x18029e350
   1801d970c:	4c 8d 8d b0 17 00 00 	lea    r9,[rbp+0x17b0]
   1801d9713:	4c 8d 05 ce a6 19 00 	lea    r8,[rip+0x19a6ce]        # 0x180373de8
   1801d971a:	ba 40 00 00 00       	mov    edx,0x40
   1801d971f:	48 8d 8d 50 18 00 00 	lea    rcx,[rbp+0x1850]
   1801d9726:	e8 95 93 e3 ff       	call   0x180012ac0
   1801d972b:	f3 0f 10 45 88       	movss  xmm0,DWORD PTR [rbp-0x78]
   1801d9730:	f3 0f 58 05 70 74 1a 	addss  xmm0,DWORD PTR [rip+0x1a7470]        # 0x180380ba8
   1801d9737:	00 
   1801d9738:	f3 0f 2c c0          	cvttss2si eax,xmm0
   1801d973c:	66 0f 6e c8          	movd   xmm1,eax
   1801d9740:	0f 5b c9             	cvtdq2ps xmm1,xmm1
   1801d9743:	f3 0f 58 0d 41 79 1a 	addss  xmm1,DWORD PTR [rip+0x1a7941]        # 0x18038108c
   1801d974a:	00 
   1801d974b:	f3 44 0f 10 15 14 79 	movss  xmm10,DWORD PTR [rip+0x1a7914]        # 0x180381068
   1801d9752:	1a 00 
   1801d9754:	0f 2f f1             	comiss xmm6,xmm1
   1801d9757:	0f 82 c0 00 00 00    	jb     0x1801d981d
   1801d975d:	c7 85 88 01 00 00 00 	mov    DWORD PTR [rbp+0x188],0x3fc00000
   1801d9764:	00 c0 3f 
   1801d9767:	c7 85 84 01 00 00 00 	mov    DWORD PTR [rbp+0x184],0x3f400000
   1801d976e:	00 40 3f 
   1801d9771:	f3 0f 10 05 2b 0f 20 	movss  xmm0,DWORD PTR [rip+0x200f2b]        # 0x1803da6a4
   1801d9778:	00 
   1801d9779:	48 8d 8d 84 01 00 00 	lea    rcx,[rbp+0x184]
   1801d9780:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d9784:	48 0f 46 cb          	cmovbe rcx,rbx
   1801d9788:	48 8d 85 88 01 00 00 	lea    rax,[rbp+0x188]
   1801d978f:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d9793:	48 0f 46 c1          	cmovbe rax,rcx
   1801d9797:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801d979b:	f3 0f 59 cf          	mulss  xmm1,xmm7
   1801d979f:	41 0f 28 c0          	movaps xmm0,xmm8
   1801d97a3:	e8 08 5e 0a 00       	call   0x18027f5b0
   1801d97a8:	41 0f 10 76 58       	movups xmm6,XMMWORD PTR [r14+0x58]
   1801d97ad:	c7 85 90 01 00 00 00 	mov    DWORD PTR [rbp+0x190],0x3fc00000
   1801d97b4:	00 c0 3f 
   1801d97b7:	c7 85 8c 01 00 00 00 	mov    DWORD PTR [rbp+0x18c],0x3f400000
   1801d97be:	00 40 3f 
   1801d97c1:	f3 0f 10 05 db 0e 20 	movss  xmm0,DWORD PTR [rip+0x200edb]        # 0x1803da6a4
   1801d97c8:	00 
   1801d97c9:	48 8d 8d 8c 01 00 00 	lea    rcx,[rbp+0x18c]
   1801d97d0:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d97d4:	48 0f 46 cb          	cmovbe rcx,rbx
   1801d97d8:	48 8d 85 90 01 00 00 	lea    rax,[rbp+0x190]
   1801d97df:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d97e3:	48 0f 46 c1          	cmovbe rax,rcx
   1801d97e7:	f3 0f 10 38          	movss  xmm7,DWORD PTR [rax]
   1801d97eb:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d97ef:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d97f4:	75 05                	jne    0x1801d97fb
   1801d97f6:	e8 f9 ea 0f 00       	call   0x1802d82f4
   1801d97fb:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d97ff:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9803:	f3 0f 10 81 c8 0c 00 	movss  xmm0,DWORD PTR [rcx+0xcc8]
   1801d980a:	00 
   1801d980b:	f3 0f 58 c0          	addss  xmm0,xmm0
   1801d980f:	f3 0f 58 81 38 12 00 	addss  xmm0,DWORD PTR [rcx+0x1238]
   1801d9816:	00 
   1801d9817:	f3 0f 5e c7          	divss  xmm0,xmm7
   1801d981b:	eb 0e                	jmp    0x1801d982b
   1801d981d:	e8 1e 63 0d 00       	call   0x1802afb40
   1801d9822:	41 0f 10 76 58       	movups xmm6,XMMWORD PTR [r14+0x58]
   1801d9827:	41 0f 28 c2          	movaps xmm0,xmm10
   1801d982b:	c7 85 90 03 00 00 00 	mov    DWORD PTR [rbp+0x390],0xbf800000
   1801d9832:	00 80 bf 
   1801d9835:	f3 0f 11 85 94 03 00 	movss  DWORD PTR [rbp+0x394],xmm0
   1801d983c:	00 
   1801d983d:	66 0f 7f 74 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm6
   1801d9843:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801d9848:	c6 44 24 20 00       	mov    BYTE PTR [rsp+0x20],0x0
   1801d984d:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801d9852:	4c 8d 85 90 03 00 00 	lea    r8,[rbp+0x390]
   1801d9859:	ba 0c 00 00 00       	mov    edx,0xc
   1801d985e:	48 8d 8d 50 18 00 00 	lea    rcx,[rbp+0x1850]
   1801d9865:	e8 d6 32 fc ff       	call   0x18019cb40
   1801d986a:	84 c0                	test   al,al
   1801d986c:	74 0c                	je     0x1801d987a
   1801d986e:	48 8d 0d 83 a5 19 00 	lea    rcx,[rip+0x19a583]        # 0x180373df8
   1801d9875:	e8 56 77 0a 00       	call   0x180280fd0
   1801d987a:	33 c9                	xor    ecx,ecx
   1801d987c:	e8 df 55 09 00       	call   0x18026ee60
   1801d9881:	4c 8d 2d 80 a5 19 00 	lea    r13,[rip+0x19a580]        # 0x180373e08
   1801d9888:	48 8d 1d 85 a5 19 00 	lea    rbx,[rip+0x19a585]        # 0x180373e14
   1801d988f:	84 c0                	test   al,al
   1801d9891:	74 1a                	je     0x1801d98ad
   1801d9893:	48 8b d3             	mov    rdx,rbx
   1801d9896:	83 3d d7 64 22 00 00 	cmp    DWORD PTR [rip+0x2264d7],0x0        # 0x1803ffd74
   1801d989d:	49 0f 44 d5          	cmove  rdx,r13
   1801d98a1:	48 8d 0d 78 a5 19 00 	lea    rcx,[rip+0x19a578]        # 0x180373e20
   1801d98a8:	e8 53 74 0a 00       	call   0x180280d00
   1801d98ad:	f3 0f 10 35 ef 0d 20 	movss  xmm6,DWORD PTR [rip+0x200def]        # 0x1803da6a4
   1801d98b4:	00 
   1801d98b5:	0f 28 fe             	movaps xmm7,xmm6
   1801d98b8:	f3 0f 59 3d 3c 79 1a 	mulss  xmm7,DWORD PTR [rip+0x1a793c]        # 0x1803811fc
   1801d98bf:	00 
   1801d98c0:	f3 0f 59 35 40 79 1a 	mulss  xmm6,DWORD PTR [rip+0x1a7940]        # 0x180381208
   1801d98c7:	00 
   1801d98c8:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d98cc:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d98d1:	75 05                	jne    0x1801d98d8
   1801d98d3:	e8 1c ea 0f 00       	call   0x1802d82f4
   1801d98d8:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d98dc:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d98e0:	83 89 48 1f 00 00 02 	or     DWORD PTR [rcx+0x1f48],0x2
   1801d98e7:	f3 0f 11 b1 68 1f 00 	movss  DWORD PTR [rcx+0x1f68],xmm6
   1801d98ee:	00 
   1801d98ef:	f3 0f 11 b9 6c 1f 00 	movss  DWORD PTR [rcx+0x1f6c],xmm7
   1801d98f6:	00 
   1801d98f7:	c7 81 50 1f 00 00 01 	mov    DWORD PTR [rcx+0x1f50],0x1
   1801d98fe:	00 00 00 
   1801d9901:	48 8d 0d f0 a4 19 00 	lea    rcx,[rip+0x19a4f0]        # 0x180373df8
   1801d9908:	e8 73 0d fc ff       	call   0x18019a680
   1801d990d:	84 c0                	test   al,al
   1801d990f:	0f 84 fd 09 00 00    	je     0x1801da312
   1801d9915:	49 8d 8e a8 00 00 00 	lea    rcx,[r14+0xa8]
   1801d991c:	83 3d 51 64 22 00 00 	cmp    DWORD PTR [rip+0x226451],0x0        # 0x1803ffd74
   1801d9923:	49 0f 44 dd          	cmove  rbx,r13
   1801d9927:	4c 8b c3             	mov    r8,rbx
   1801d992a:	48 8d 15 0f a5 19 00 	lea    rdx,[rip+0x19a50f]        # 0x180373e40
   1801d9931:	e8 7a 12 0d 00       	call   0x1802aabb0
   1801d9936:	f3 0f 10 35 46 7a 1a 	movss  xmm6,DWORD PTR [rip+0x1a7a46]        # 0x180381384
   1801d993d:	00 
   1801d993e:	0f 28 ce             	movaps xmm1,xmm6
   1801d9941:	41 0f 28 c0          	movaps xmm0,xmm8
   1801d9945:	e8 66 5c 0a 00       	call   0x18027f5b0
   1801d994a:	4d 8d ae b8 00 00 00 	lea    r13,[r14+0xb8]
   1801d9951:	44 8b 44 24 78       	mov    r8d,DWORD PTR [rsp+0x78]
   1801d9956:	48 8d 15 f3 a4 19 00 	lea    rdx,[rip+0x19a4f3]        # 0x180373e50
   1801d995d:	49 8b cd             	mov    rcx,r13
   1801d9960:	e8 4b 12 0d 00       	call   0x1802aabb0
   1801d9965:	c7 85 98 01 00 00 00 	mov    DWORD PTR [rbp+0x198],0x3fc00000
   1801d996c:	00 c0 3f 
   1801d996f:	c7 85 94 01 00 00 00 	mov    DWORD PTR [rbp+0x194],0x3f400000
   1801d9976:	00 40 3f 
   1801d9979:	f3 0f 10 05 23 0d 20 	movss  xmm0,DWORD PTR [rip+0x200d23]        # 0x1803da6a4
   1801d9980:	00 
   1801d9981:	48 8d 8d 94 01 00 00 	lea    rcx,[rbp+0x194]
   1801d9988:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d998c:	48 8d 1d 11 0d 20 00 	lea    rbx,[rip+0x200d11]        # 0x1803da6a4
   1801d9993:	48 0f 46 cb          	cmovbe rcx,rbx
   1801d9997:	48 8d 85 98 01 00 00 	lea    rax,[rbp+0x198]
   1801d999e:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d99a2:	48 0f 46 c1          	cmovbe rax,rcx
   1801d99a6:	f3 0f 10 38          	movss  xmm7,DWORD PTR [rax]
   1801d99aa:	f3 0f 59 3d 3e 77 1a 	mulss  xmm7,DWORD PTR [rip+0x1a773e]        # 0x1803810f0
   1801d99b1:	00 
   1801d99b2:	0f 28 ce             	movaps xmm1,xmm6
   1801d99b5:	41 0f 28 c0          	movaps xmm0,xmm8
   1801d99b9:	e8 f2 5b 0a 00       	call   0x18027f5b0
   1801d99be:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d99c2:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d99c7:	75 05                	jne    0x1801d99ce
   1801d99c9:	e8 26 e9 0f 00       	call   0x1802d82f4
   1801d99ce:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801d99d2:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801d99d6:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801d99dd:	f3 0f 10 b1 80 02 00 	movss  xmm6,DWORD PTR [rcx+0x280]
   1801d99e4:	00 
   1801d99e5:	f3 0f 5c 71 28       	subss  xmm6,DWORD PTR [rcx+0x28]
   1801d99ea:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801d99ee:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801d99f3:	75 05                	jne    0x1801d99fa
   1801d99f5:	e8 fa e8 0f 00       	call   0x1802d82f4
   1801d99fa:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d99fe:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9a02:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d9a09:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801d9a10:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d9a17:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801d9a1c:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801d9a23:	00 
   1801d9a24:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801d9a28:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801d9a2f:	00 
   1801d9a30:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801d9a37:	f3 0f 11 bd 98 03 00 	movss  DWORD PTR [rbp+0x398],xmm7
   1801d9a3e:	00 
   1801d9a3f:	c7 85 9c 03 00 00 00 	mov    DWORD PTR [rbp+0x39c],0x0
   1801d9a46:	00 00 00 
   1801d9a49:	45 33 c0             	xor    r8d,r8d
   1801d9a4c:	48 8d 95 98 03 00 00 	lea    rdx,[rbp+0x398]
   1801d9a53:	48 8d 0d fe a3 19 00 	lea    rcx,[rip+0x19a3fe]        # 0x180373e58
   1801d9a5a:	e8 01 25 0d 00       	call   0x1802abf60
   1801d9a5f:	84 c0                	test   al,al
   1801d9a61:	74 0c                	je     0x1801d9a6f
   1801d9a63:	48 8d 0d 06 a4 19 00 	lea    rcx,[rip+0x19a406]        # 0x180373e70
   1801d9a6a:	e8 61 75 0a 00       	call   0x180280fd0
   1801d9a6f:	48 8d 0d fa a3 19 00 	lea    rcx,[rip+0x19a3fa]        # 0x180373e70
   1801d9a76:	e8 05 0c fc ff       	call   0x18019a680
   1801d9a7b:	84 c0                	test   al,al
   1801d9a7d:	0f 84 11 03 00 00    	je     0x1801d9d94
   1801d9a83:	8b 05 77 6d 39 00    	mov    eax,DWORD PTR [rip+0x396d77]        # 0x180570800
   1801d9a89:	a8 01                	test   al,0x1
   1801d9a8b:	75 16                	jne    0x1801d9aa3
   1801d9a8d:	83 c8 01             	or     eax,0x1
   1801d9a90:	89 05 6a 6d 39 00    	mov    DWORD PTR [rip+0x396d6a],eax        # 0x180570800
   1801d9a96:	48 8d 0d 13 19 13 00 	lea    rcx,[rip+0x131913]        # 0x18030b3b0
   1801d9a9d:	e8 1e ed 0f 00       	call   0x1802d87c0
   1801d9aa2:	90                   	nop
   1801d9aa3:	48 8d 15 de a3 19 00 	lea    rdx,[rip+0x19a3de]        # 0x180373e88
   1801d9aaa:	49 8d 8e a8 00 00 00 	lea    rcx,[r14+0xa8]
   1801d9ab1:	e8 fa 10 0d 00       	call   0x1802aabb0
   1801d9ab6:	48 8d 15 e3 a3 19 00 	lea    rdx,[rip+0x19a3e3]        # 0x180373ea0
   1801d9abd:	49 8b cd             	mov    rcx,r13
   1801d9ac0:	e8 eb 10 0d 00       	call   0x1802aabb0
   1801d9ac5:	e8 76 60 0d 00       	call   0x1802afb40
   1801d9aca:	c7 85 a0 01 00 00 00 	mov    DWORD PTR [rbp+0x1a0],0x3fc00000
   1801d9ad1:	00 c0 3f 
   1801d9ad4:	c7 85 9c 01 00 00 00 	mov    DWORD PTR [rbp+0x19c],0x3f400000
   1801d9adb:	00 40 3f 
   1801d9ade:	f3 0f 10 05 be 0b 20 	movss  xmm0,DWORD PTR [rip+0x200bbe]        # 0x1803da6a4
   1801d9ae5:	00 
   1801d9ae6:	48 8d 8d 9c 01 00 00 	lea    rcx,[rbp+0x19c]
   1801d9aed:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d9af1:	48 0f 46 cb          	cmovbe rcx,rbx
   1801d9af5:	48 8d 85 a0 01 00 00 	lea    rax,[rbp+0x1a0]
   1801d9afc:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d9b00:	48 0f 46 c1          	cmovbe rax,rcx
   1801d9b04:	f3 0f 10 30          	movss  xmm6,DWORD PTR [rax]
   1801d9b08:	f3 0f 59 35 14 76 1a 	mulss  xmm6,DWORD PTR [rip+0x1a7614]        # 0x180381124
   1801d9b0f:	00 
   1801d9b10:	48 8d 1d c9 24 16 00 	lea    rbx,[rip+0x1624c9]        # 0x18033bfe0
   1801d9b17:	f3 0f 10 3d 89 74 1a 	movss  xmm7,DWORD PTR [rip+0x1a7489]        # 0x180380fa8
   1801d9b1e:	00 
   1801d9b1f:	90                   	nop
   1801d9b20:	83 3d 4d 62 22 00 01 	cmp    DWORD PTR [rip+0x22624d],0x1        # 0x1803ffd74
   1801d9b27:	75 0b                	jne    0x1801d9b34
   1801d9b29:	80 7b 10 00          	cmp    BYTE PTR [rbx+0x10],0x0
   1801d9b2d:	74 05                	je     0x1801d9b34
   1801d9b2f:	41 b5 01             	mov    r13b,0x1
   1801d9b32:	eb 03                	jmp    0x1801d9b37
   1801d9b34:	45 32 ed             	xor    r13b,r13b
   1801d9b37:	4c 8b 0b             	mov    r9,QWORD PTR [rbx]
   1801d9b3a:	4c 8d 05 97 a3 19 00 	lea    r8,[rip+0x19a397]        # 0x180373ed8
   1801d9b41:	ba 30 00 00 00       	mov    edx,0x30
   1801d9b46:	48 8d 8d 80 17 00 00 	lea    rcx,[rbp+0x1780]
   1801d9b4d:	e8 6e 8f e3 ff       	call   0x180012ac0
   1801d9b52:	48 8b 0b             	mov    rcx,QWORD PTR [rbx]
   1801d9b55:	e8 96 10 0a 00       	call   0x18027abf0
   1801d9b5a:	49 8d 56 58          	lea    rdx,[r14+0x58]
   1801d9b5e:	45 84 ed             	test   r13b,r13b
   1801d9b61:	49 8d 86 b8 00 00 00 	lea    rax,[r14+0xb8]
   1801d9b68:	48 0f 45 d0          	cmovne rdx,rax
   1801d9b6c:	33 c9                	xor    ecx,ecx
   1801d9b6e:	e8 9d 0c 09 00       	call   0x18026a810
   1801d9b73:	f3 0f 11 b5 a0 03 00 	movss  DWORD PTR [rbp+0x3a0],xmm6
   1801d9b7a:	00 
   1801d9b7b:	c7 85 a4 03 00 00 00 	mov    DWORD PTR [rbp+0x3a4],0x0
   1801d9b82:	00 00 00 
   1801d9b85:	4c 8d 8d a0 03 00 00 	lea    r9,[rbp+0x3a0]
   1801d9b8c:	33 d2                	xor    edx,edx
   1801d9b8e:	41 b8 01 00 00 00    	mov    r8d,0x1
   1801d9b94:	48 8d 8d 80 17 00 00 	lea    rcx,[rbp+0x1780]
   1801d9b9b:	e8 b0 7c 0e 00       	call   0x1802c1850
   1801d9ba0:	84 c0                	test   al,al
   1801d9ba2:	74 74                	je     0x1801d9c18
   1801d9ba4:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9ba8:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d9bad:	75 05                	jne    0x1801d9bb4
   1801d9baf:	e8 40 e7 0f 00       	call   0x1802d82f4
   1801d9bb4:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9bb8:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9bbc:	48 8b 81 08 0c 00 00 	mov    rax,QWORD PTR [rcx+0xc08]
   1801d9bc3:	48 85 c0             	test   rax,rax
   1801d9bc6:	74 09                	je     0x1801d9bd1
   1801d9bc8:	48 8d 95 80 17 00 00 	lea    rdx,[rbp+0x1780]
   1801d9bcf:	ff d0                	call   rax
   1801d9bd1:	48 8d 8d 80 17 00 00 	lea    rcx,[rbp+0x1780]
   1801d9bd8:	e8 d6 f8 0f 00       	call   0x1802d94b3
   1801d9bdd:	4c 8b c0             	mov    r8,rax
   1801d9be0:	48 8d 95 80 17 00 00 	lea    rdx,[rbp+0x1780]
   1801d9be7:	48 8d 0d fa fa 20 00 	lea    rcx,[rip+0x20fafa]        # 0x1803e96e8
   1801d9bee:	e8 0d 8b 03 00       	call   0x180212700
   1801d9bf3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9bf7:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d9bfc:	75 05                	jne    0x1801d9c03
   1801d9bfe:	e8 f1 e6 0f 00       	call   0x1802d82f4
   1801d9c03:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9c07:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9c0b:	f2 0f 10 41 10       	movsd  xmm0,QWORD PTR [rcx+0x10]
   1801d9c10:	f2 0f 11 05 00 fc 20 	movsd  QWORD PTR [rip+0x20fc00],xmm0        # 0x1803e9818
   1801d9c17:	00 
   1801d9c18:	b9 01 00 00 00       	mov    ecx,0x1
   1801d9c1d:	e8 6e 0c 09 00       	call   0x18026a890
   1801d9c22:	c7 85 a8 01 00 00 00 	mov    DWORD PTR [rbp+0x1a8],0x3fc00000
   1801d9c29:	00 c0 3f 
   1801d9c2c:	c7 85 a4 01 00 00 00 	mov    DWORD PTR [rbp+0x1a4],0x3f400000
   1801d9c33:	00 40 3f 
   1801d9c36:	f3 0f 10 05 66 0a 20 	movss  xmm0,DWORD PTR [rip+0x200a66]        # 0x1803da6a4
   1801d9c3d:	00 
   1801d9c3e:	48 8d 8d a4 01 00 00 	lea    rcx,[rbp+0x1a4]
   1801d9c45:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d9c49:	48 8d 05 54 0a 20 00 	lea    rax,[rip+0x200a54]        # 0x1803da6a4
   1801d9c50:	48 0f 46 c8          	cmovbe rcx,rax
   1801d9c54:	48 8d 85 a8 01 00 00 	lea    rax,[rbp+0x1a8]
   1801d9c5b:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d9c5f:	48 0f 46 c1          	cmovbe rax,rcx
   1801d9c63:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801d9c67:	f3 0f 59 cf          	mulss  xmm1,xmm7
   1801d9c6b:	41 0f 28 c0          	movaps xmm0,xmm8
   1801d9c6f:	e8 3c 59 0a 00       	call   0x18027f5b0
   1801d9c74:	4c 8d 0d 6f 49 16 00 	lea    r9,[rip+0x16496f]        # 0x18033e5ea
   1801d9c7b:	45 84 ed             	test   r13b,r13b
   1801d9c7e:	48 8d 05 5b a2 19 00 	lea    rax,[rip+0x19a25b]        # 0x180373ee0
   1801d9c85:	4c 0f 45 c8          	cmovne r9,rax
   1801d9c89:	4c 8b 43 08          	mov    r8,QWORD PTR [rbx+0x8]
   1801d9c8d:	48 8d 15 d0 5a 19 00 	lea    rdx,[rip+0x195ad0]        # 0x18036f764
   1801d9c94:	4d 8d ae b8 00 00 00 	lea    r13,[r14+0xb8]
   1801d9c9b:	49 8b cd             	mov    rcx,r13
   1801d9c9e:	e8 0d 0f 0d 00       	call   0x1802aabb0
   1801d9ca3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9ca7:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d9cac:	75 05                	jne    0x1801d9cb3
   1801d9cae:	e8 41 e6 0f 00       	call   0x1802d82f4
   1801d9cb3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9cb7:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9cbb:	48 8b 91 20 15 00 00 	mov    rdx,QWORD PTR [rcx+0x1520]
   1801d9cc2:	8b 82 08 01 00 00    	mov    eax,DWORD PTR [rdx+0x108]
   1801d9cc8:	83 f8 01             	cmp    eax,0x1
   1801d9ccb:	7f 0e                	jg     0x1801d9cdb
   1801d9ccd:	48 8d 0d 94 45 1a 00 	lea    rcx,[rip+0x1a4594]        # 0x18037e268
   1801d9cd4:	e8 e7 4c 0a 00       	call   0x18027e9c0
   1801d9cd9:	eb 08                	jmp    0x1801d9ce3
   1801d9cdb:	ff c8                	dec    eax
   1801d9cdd:	89 82 08 01 00 00    	mov    DWORD PTR [rdx+0x108],eax
   1801d9ce3:	48 83 c3 18          	add    rbx,0x18
   1801d9ce7:	48 8d 05 a2 24 16 00 	lea    rax,[rip+0x1624a2]        # 0x18033c190
   1801d9cee:	48 3b d8             	cmp    rbx,rax
   1801d9cf1:	0f 85 29 fe ff ff    	jne    0x1801d9b20
   1801d9cf7:	e8 44 5e 0d 00       	call   0x1802afb40
   1801d9cfc:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9d00:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d9d05:	75 05                	jne    0x1801d9d0c
   1801d9d07:	e8 e8 e5 0f 00       	call   0x1802d82f4
   1801d9d0c:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9d10:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9d14:	f2 0f 10 49 10       	movsd  xmm1,QWORD PTR [rcx+0x10]
   1801d9d19:	f2 0f 5c 0d f7 fa 20 	subsd  xmm1,QWORD PTR [rip+0x20faf7]        # 0x1803e9818
   1801d9d20:	00 
   1801d9d21:	f2 0f 10 05 0f 70 1a 	movsd  xmm0,QWORD PTR [rip+0x1a700f]        # 0x180380d38
   1801d9d28:	00 
   1801d9d29:	66 0f 2f c1          	comisd xmm0,xmm1
   1801d9d2d:	76 29                	jbe    0x1801d9d58
   1801d9d2f:	48 83 3d c9 f9 20 00 	cmp    QWORD PTR [rip+0x20f9c9],0xf        # 0x1803e9700
   1801d9d36:	0f 
   1801d9d37:	4c 8d 05 aa f9 20 00 	lea    r8,[rip+0x20f9aa]        # 0x1803e96e8
   1801d9d3e:	4c 0f 47 05 a2 f9 20 	cmova  r8,QWORD PTR [rip+0x20f9a2]        # 0x1803e96e8
   1801d9d45:	00 
   1801d9d46:	49 8d 4e 78          	lea    rcx,[r14+0x78]
   1801d9d4a:	48 8d 15 a7 a1 19 00 	lea    rdx,[rip+0x19a1a7]        # 0x180373ef8
   1801d9d51:	e8 5a 0e 0d 00       	call   0x1802aabb0
   1801d9d56:	eb 0f                	jmp    0x1801d9d67
   1801d9d58:	48 8d 15 a9 a1 19 00 	lea    rdx,[rip+0x19a1a9]        # 0x180373f08
   1801d9d5f:	49 8b cd             	mov    rcx,r13
   1801d9d62:	e8 49 0e 0d 00       	call   0x1802aabb0
   1801d9d67:	80 3d 8f 0f 22 00 00 	cmp    BYTE PTR [rip+0x220f8f],0x0        # 0x1803facfd
   1801d9d6e:	74 1d                	je     0x1801d9d8d
   1801d9d70:	48 8b 05 81 2e 22 00 	mov    rax,QWORD PTR [rip+0x222e81]        # 0x1803fcbf8
   1801d9d77:	48 39 05 72 2e 22 00 	cmp    QWORD PTR [rip+0x222e72],rax        # 0x1803fcbf0
   1801d9d7e:	74 1c                	je     0x1801d9d9c
   1801d9d80:	48 83 e8 08          	sub    rax,0x8
   1801d9d84:	48 89 05 6d 2e 22 00 	mov    QWORD PTR [rip+0x222e6d],rax        # 0x1803fcbf8
   1801d9d8b:	eb 0f                	jmp    0x1801d9d9c
   1801d9d8d:	e8 6e 7a 0a 00       	call   0x180281800
   1801d9d92:	eb 08                	jmp    0x1801d9d9c
   1801d9d94:	f3 0f 10 3d 0c 72 1a 	movss  xmm7,DWORD PTR [rip+0x1a720c]        # 0x180380fa8
   1801d9d9b:	00 
   1801d9d9c:	e8 9f 5d 0d 00       	call   0x1802afb40
   1801d9da1:	83 3d cc 5f 22 00 00 	cmp    DWORD PTR [rip+0x225fcc],0x0        # 0x1803ffd74
   1801d9da8:	48 8d 1d 31 ea 20 00 	lea    rbx,[rip+0x20ea31]        # 0x1803e87e0
   1801d9daf:	48 8d 05 da de 20 00 	lea    rax,[rip+0x20deda]        # 0x1803e7c90
   1801d9db6:	48 0f 44 d8          	cmove  rbx,rax
   1801d9dba:	48 89 9d d8 04 00 00 	mov    QWORD PTR [rbp+0x4d8],rbx
   1801d9dc1:	48 8b cb             	mov    rcx,rbx
   1801d9dc4:	ff 15 56 27 13 00    	call   QWORD PTR [rip+0x132756]        # 0x18030c520
   1801d9dca:	85 c0                	test   eax,eax
   1801d9dcc:	0f 85 34 05 00 00    	jne    0x1801da306
   1801d9dd2:	8b 43 4c             	mov    eax,DWORD PTR [rbx+0x4c]
   1801d9dd5:	3d ff ff ff 7f       	cmp    eax,0x7fffffff
   1801d9dda:	75 11                	jne    0x1801d9ded
   1801d9ddc:	ff c8                	dec    eax
   1801d9dde:	89 43 4c             	mov    DWORD PTR [rbx+0x4c],eax
   1801d9de1:	b9 06 00 00 00       	mov    ecx,0x6
   1801d9de6:	ff 15 8c 26 13 00    	call   QWORD PTR [rip+0x13268c]        # 0x18030c478
   1801d9dec:	90                   	nop
   1801d9ded:	83 3d 80 5f 22 00 00 	cmp    DWORD PTR [rip+0x225f80],0x0        # 0x1803ffd74
   1801d9df4:	48 8d 1d 0d ff 20 00 	lea    rbx,[rip+0x20ff0d]        # 0x1803e9d08
   1801d9dfb:	48 8d 05 5e 01 21 00 	lea    rax,[rip+0x21015e]        # 0x1803e9f60
   1801d9e02:	48 0f 44 d8          	cmove  rbx,rax
   1801d9e06:	48 89 5c 24 78       	mov    QWORD PTR [rsp+0x78],rbx
   1801d9e0b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9e0f:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d9e14:	75 05                	jne    0x1801d9e1b
   1801d9e16:	e8 d9 e4 0f 00       	call   0x1802d82f4
   1801d9e1b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9e1f:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9e23:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801d9e2a:	48 83 b8 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],0x0
   1801d9e31:	00 
   1801d9e32:	75 11                	jne    0x1801d9e45
   1801d9e34:	48 83 b9 68 23 00 00 	cmp    QWORD PTR [rcx+0x2368],0x0
   1801d9e3b:	00 
   1801d9e3c:	48 8d 88 84 02 00 00 	lea    rcx,[rax+0x284]
   1801d9e43:	74 07                	je     0x1801d9e4c
   1801d9e45:	48 8d 88 54 02 00 00 	lea    rcx,[rax+0x254]
   1801d9e4c:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801d9e50:	f3 0f 5c b0 1c 01 00 	subss  xmm6,DWORD PTR [rax+0x11c]
   1801d9e57:	00 
   1801d9e58:	f3 41 0f 5c f2       	subss  xmm6,xmm10
   1801d9e5d:	f3 44 0f 10 15 da 70 	movss  xmm10,DWORD PTR [rip+0x1a70da]        # 0x180380f40
   1801d9e64:	1a 00 
   1801d9e66:	f3 41 0f 5c f2       	subss  xmm6,xmm10
   1801d9e6b:	49 8d 56 38          	lea    rdx,[r14+0x38]
   1801d9e6f:	b9 03 00 00 00       	mov    ecx,0x3
   1801d9e74:	e8 97 09 09 00       	call   0x18026a810
   1801d9e79:	c7 85 a8 03 00 00 00 	mov    DWORD PTR [rbp+0x3a8],0x0
   1801d9e80:	00 00 00 
   1801d9e83:	f3 0f 5f 35 fd 71 1a 	maxss  xmm6,DWORD PTR [rip+0x1a71fd]        # 0x180381088
   1801d9e8a:	00 
   1801d9e8b:	f3 0f 11 b5 ac 03 00 	movss  DWORD PTR [rbp+0x3ac],xmm6
   1801d9e92:	00 
   1801d9e93:	45 33 c9             	xor    r9d,r9d
   1801d9e96:	41 b8 01 00 00 00    	mov    r8d,0x1
   1801d9e9c:	48 8d 95 a8 03 00 00 	lea    rdx,[rbp+0x3a8]
   1801d9ea3:	48 8d 0d 96 a0 19 00 	lea    rcx,[rip+0x19a096]        # 0x180373f40
   1801d9eaa:	e8 f1 90 09 00       	call   0x180272fa0
   1801d9eaf:	48 8b 43 08          	mov    rax,QWORD PTR [rbx+0x8]
   1801d9eb3:	48 39 03             	cmp    QWORD PTR [rbx],rax
   1801d9eb6:	75 0f                	jne    0x1801d9ec7
   1801d9eb8:	48 8d 15 99 a0 19 00 	lea    rdx,[rip+0x19a099]        # 0x180373f58
   1801d9ebf:	49 8b cd             	mov    rcx,r13
   1801d9ec2:	e8 e9 0c 0d 00       	call   0x1802aabb0
   1801d9ec7:	33 db                	xor    ebx,ebx
   1801d9ec9:	49 c7 c5 ff ff ff ff 	mov    r13,0xffffffffffffffff
   1801d9ed0:	48 8b 4c 24 78       	mov    rcx,QWORD PTR [rsp+0x78]
   1801d9ed5:	48 8b 41 08          	mov    rax,QWORD PTR [rcx+0x8]
   1801d9ed9:	48 2b 01             	sub    rax,QWORD PTR [rcx]
   1801d9edc:	48 c1 f8 05          	sar    rax,0x5
   1801d9ee0:	85 c0                	test   eax,eax
   1801d9ee2:	0f 8e b0 01 00 00    	jle    0x1801da098
   1801d9ee8:	8b cb                	mov    ecx,ebx
   1801d9eea:	e8 11 0f 0a 00       	call   0x18027ae00
   1801d9eef:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9ef3:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d9ef8:	75 05                	jne    0x1801d9eff
   1801d9efa:	e8 f5 e3 0f 00       	call   0x1802d82f4
   1801d9eff:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9f03:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9f07:	f3 0f 10 81 38 12 00 	movss  xmm0,DWORD PTR [rcx+0x1238]
   1801d9f0e:	00 
   1801d9f0f:	f3 0f 58 05 85 6f 1a 	addss  xmm0,DWORD PTR [rip+0x1a6f85]        # 0x180380e9c
   1801d9f16:	00 
   1801d9f17:	f3 0f 10 0d 05 71 1a 	movss  xmm1,DWORD PTR [rip+0x1a7105]        # 0x180381024
   1801d9f1e:	00 
   1801d9f1f:	f3 0f 5f c8          	maxss  xmm1,xmm0
   1801d9f23:	41 0f 10 86 98 00 00 	movups xmm0,XMMWORD PTR [r14+0x98]
   1801d9f2a:	00 
   1801d9f2b:	0f 29 44 24 60       	movaps XMMWORD PTR [rsp+0x60],xmm0
   1801d9f30:	0f 14 c9             	unpcklps xmm1,xmm1
   1801d9f33:	f2 0f 11 4c 24 20    	movsd  QWORD PTR [rsp+0x20],xmm1
   1801d9f39:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801d9f3e:	45 33 c0             	xor    r8d,r8d
   1801d9f41:	ba 09 00 00 00       	mov    edx,0x9
   1801d9f46:	48 8d 0d 2b a0 19 00 	lea    rcx,[rip+0x19a02b]        # 0x180373f78
   1801d9f4d:	e8 7e 35 fc ff       	call   0x18019d4d0
   1801d9f52:	84 c0                	test   al,al
   1801d9f54:	44 0f 45 eb          	cmovne r13d,ebx
   1801d9f58:	c7 85 b0 01 00 00 00 	mov    DWORD PTR [rbp+0x1b0],0x3fc00000
   1801d9f5f:	00 c0 3f 
   1801d9f62:	c7 85 ac 01 00 00 00 	mov    DWORD PTR [rbp+0x1ac],0x3f400000
   1801d9f69:	00 40 3f 
   1801d9f6c:	f3 0f 10 05 30 07 20 	movss  xmm0,DWORD PTR [rip+0x200730]        # 0x1803da6a4
   1801d9f73:	00 
   1801d9f74:	48 8d 8d ac 01 00 00 	lea    rcx,[rbp+0x1ac]
   1801d9f7b:	44 0f 2f c8          	comiss xmm9,xmm0
   1801d9f7f:	48 8d 05 1e 07 20 00 	lea    rax,[rip+0x20071e]        # 0x1803da6a4
   1801d9f86:	48 0f 46 c8          	cmovbe rcx,rax
   1801d9f8a:	48 8d 85 b0 01 00 00 	lea    rax,[rbp+0x1b0]
   1801d9f91:	41 0f 2f c4          	comiss xmm0,xmm12
   1801d9f95:	48 0f 46 c1          	cmovbe rax,rcx
   1801d9f99:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801d9f9d:	f3 0f 59 cf          	mulss  xmm1,xmm7
   1801d9fa1:	41 0f 28 c0          	movaps xmm0,xmm8
   1801d9fa5:	e8 06 56 0a 00       	call   0x18027f5b0
   1801d9faa:	e8 11 55 0d 00       	call   0x1802af4c0
   1801d9faf:	48 63 d3             	movsxd rdx,ebx
   1801d9fb2:	48 c1 e2 05          	shl    rdx,0x5
   1801d9fb6:	48 8b 44 24 78       	mov    rax,QWORD PTR [rsp+0x78]
   1801d9fbb:	48 03 10             	add    rdx,QWORD PTR [rax]
   1801d9fbe:	48 83 7a 18 0f       	cmp    QWORD PTR [rdx+0x18],0xf
   1801d9fc3:	76 03                	jbe    0x1801d9fc8
   1801d9fc5:	48 8b 12             	mov    rdx,QWORD PTR [rdx]
   1801d9fc8:	48 8d 0d dd 91 16 00 	lea    rcx,[rip+0x1691dd]        # 0x1803431ac
   1801d9fcf:	e8 ac 0c 0d 00       	call   0x1802aac80
   1801d9fd4:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9fd8:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801d9fdd:	75 05                	jne    0x1801d9fe4
   1801d9fdf:	e8 10 e3 0f 00       	call   0x1802d82f4
   1801d9fe4:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801d9fe8:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801d9fec:	48 8b 91 20 15 00 00 	mov    rdx,QWORD PTR [rcx+0x1520]
   1801d9ff3:	8b 82 08 01 00 00    	mov    eax,DWORD PTR [rdx+0x108]
   1801d9ff9:	83 f8 01             	cmp    eax,0x1
   1801d9ffc:	7f 0e                	jg     0x1801da00c
   1801d9ffe:	48 8d 0d 63 42 1a 00 	lea    rcx,[rip+0x1a4263]        # 0x18037e268
   1801da005:	e8 b6 49 0a 00       	call   0x18027e9c0
   1801da00a:	eb 08                	jmp    0x1801da014
   1801da00c:	ff c8                	dec    eax
   1801da00e:	89 82 08 01 00 00    	mov    DWORD PTR [rdx+0x108],eax
   1801da014:	ff c3                	inc    ebx
   1801da016:	48 8b 44 24 78       	mov    rax,QWORD PTR [rsp+0x78]
   1801da01b:	48 8b 48 08          	mov    rcx,QWORD PTR [rax+0x8]
   1801da01f:	48 8b 10             	mov    rdx,QWORD PTR [rax]
   1801da022:	48 8b c1             	mov    rax,rcx
   1801da025:	48 2b c2             	sub    rax,rdx
   1801da028:	48 c1 f8 05          	sar    rax,0x5
   1801da02c:	3b d8                	cmp    ebx,eax
   1801da02e:	0f 8c b4 fe ff ff    	jl     0x1801d9ee8
   1801da034:	45 85 ed             	test   r13d,r13d
   1801da037:	78 5f                	js     0x1801da098
   1801da039:	48 8b c1             	mov    rax,rcx
   1801da03c:	48 2b c2             	sub    rax,rdx
   1801da03f:	48 c1 f8 05          	sar    rax,0x5
   1801da043:	44 3b e8             	cmp    r13d,eax
   1801da046:	7d 50                	jge    0x1801da098
   1801da048:	4d 63 ed             	movsxd r13,r13d
   1801da04b:	49 c1 e5 05          	shl    r13,0x5
   1801da04f:	4c 03 ea             	add    r13,rdx
   1801da052:	49 8d 5d 20          	lea    rbx,[r13+0x20]
   1801da056:	48 3b d9             	cmp    rbx,rcx
   1801da059:	74 26                	je     0x1801da081
   1801da05b:	48 8b f1             	mov    rsi,rcx
   1801da05e:	66 90                	xchg   ax,ax
   1801da060:	48 8b d3             	mov    rdx,rbx
   1801da063:	49 8b cd             	mov    rcx,r13
   1801da066:	e8 35 48 03 00       	call   0x18020e8a0
   1801da06b:	49 83 c5 20          	add    r13,0x20
   1801da06f:	48 83 c3 20          	add    rbx,0x20
   1801da073:	48 3b de             	cmp    rbx,rsi
   1801da076:	75 e8                	jne    0x1801da060
   1801da078:	65 48 8b 34 25 58 00 	mov    rsi,QWORD PTR gs:0x58
   1801da07f:	00 00 
   1801da081:	48 8b 5c 24 78       	mov    rbx,QWORD PTR [rsp+0x78]
   1801da086:	48 8b 4b 08          	mov    rcx,QWORD PTR [rbx+0x8]
   1801da08a:	48 83 e9 20          	sub    rcx,0x20
   1801da08e:	e8 bd 43 03 00       	call   0x18020e450
   1801da093:	48 83 43 08 e0       	add    QWORD PTR [rbx+0x8],0xffffffffffffffe0
   1801da098:	e8 73 93 09 00       	call   0x180273410
   1801da09d:	b9 01 00 00 00       	mov    ecx,0x1
   1801da0a2:	e8 e9 07 09 00       	call   0x18026a890
   1801da0a7:	48 8d 05 a2 69 22 00 	lea    rax,[rip+0x2269a2]        # 0x180400a50
   1801da0ae:	4c 8d 2d 3b ba 24 00 	lea    r13,[rip+0x24ba3b]        # 0x180425af0
   1801da0b5:	83 3d b8 5c 22 00 00 	cmp    DWORD PTR [rip+0x225cb8],0x0        # 0x1803ffd74
   1801da0bc:	4c 0f 44 e8          	cmove  r13,rax
   1801da0c0:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801da0c4:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801da0c9:	75 05                	jne    0x1801da0d0
   1801da0cb:	e8 24 e2 0f 00       	call   0x1802d82f4
   1801da0d0:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801da0d4:	49 8b 0c 14          	mov    rcx,QWORD PTR [r12+rdx*1]
   1801da0d8:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801da0df:	48 83 b8 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],0x0
   1801da0e6:	00 
   1801da0e7:	75 11                	jne    0x1801da0fa
   1801da0e9:	48 83 b9 68 23 00 00 	cmp    QWORD PTR [rcx+0x2368],0x0
   1801da0f0:	00 
   1801da0f1:	48 8d 88 80 02 00 00 	lea    rcx,[rax+0x280]
   1801da0f8:	74 07                	je     0x1801da101
   1801da0fa:	48 8d 88 50 02 00 00 	lea    rcx,[rax+0x250]
   1801da101:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801da105:	f3 0f 5c b0 18 01 00 	subss  xmm6,DWORD PTR [rax+0x118]
   1801da10c:	00 
   1801da10d:	f3 0f 5c 35 df 6f 1a 	subss  xmm6,DWORD PTR [rip+0x1a6fdf]        # 0x1803810f4
   1801da114:	00 
   1801da115:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801da11a:	75 05                	jne    0x1801da121
   1801da11c:	e8 d3 e1 0f 00       	call   0x1802d82f4
   1801da121:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801da125:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801da129:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801da130:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801da137:	00 
   1801da138:	48 c7 85 70 03 00 00 	mov    QWORD PTR [rbp+0x370],0x0
   1801da13f:	00 00 00 00 
   1801da143:	48 8d 05 36 9e 19 00 	lea    rax,[rip+0x199e36]        # 0x180373f80
   1801da14a:	48 8d 15 3f 9e 19 00 	lea    rdx,[rip+0x199e3f]        # 0x180373f90
   1801da151:	83 3d 1c 5c 22 00 00 	cmp    DWORD PTR [rip+0x225c1c],0x0        # 0x1803ffd74
   1801da158:	48 0f 44 d0          	cmove  rdx,rax
   1801da15c:	33 c0                	xor    eax,eax
   1801da15e:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   1801da163:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   1801da168:	c7 44 24 28 40 00 00 	mov    DWORD PTR [rsp+0x28],0x40
   1801da16f:	00 
   1801da170:	48 8d 85 70 03 00 00 	lea    rax,[rbp+0x370]
   1801da177:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801da17c:	41 b9 80 00 00 00    	mov    r9d,0x80
   1801da182:	4d 8b c5             	mov    r8,r13
   1801da185:	48 8d 0d 14 9e 19 00 	lea    rcx,[rip+0x199e14]        # 0x180373fa0
   1801da18c:	e8 4f d3 0d 00       	call   0x1802b74e0
   1801da191:	0f b6 d8             	movzx  ebx,al
   1801da194:	c7 85 b8 01 00 00 00 	mov    DWORD PTR [rbp+0x1b8],0x3fc00000
   1801da19b:	00 c0 3f 
   1801da19e:	c7 85 b4 01 00 00 00 	mov    DWORD PTR [rbp+0x1b4],0x3f400000
   1801da1a5:	00 40 3f 
   1801da1a8:	f3 0f 10 05 f4 04 20 	movss  xmm0,DWORD PTR [rip+0x2004f4]        # 0x1803da6a4
   1801da1af:	00 
   1801da1b0:	48 8d 95 b4 01 00 00 	lea    rdx,[rbp+0x1b4]
   1801da1b7:	44 0f 2f c8          	comiss xmm9,xmm0
   1801da1bb:	48 8d 05 e2 04 20 00 	lea    rax,[rip+0x2004e2]        # 0x1803da6a4
   1801da1c2:	48 0f 46 d0          	cmovbe rdx,rax
   1801da1c6:	48 8d 8d b8 01 00 00 	lea    rcx,[rbp+0x1b8]
   1801da1cd:	41 0f 2f c4          	comiss xmm0,xmm12
   1801da1d1:	48 0f 46 ca          	cmovbe rcx,rdx
   1801da1d5:	f3 0f 10 09          	movss  xmm1,DWORD PTR [rcx]
   1801da1d9:	f3 41 0f 59 ca       	mulss  xmm1,xmm10
   1801da1de:	41 0f 28 c0          	movaps xmm0,xmm8
   1801da1e2:	e8 c9 53 0a 00       	call   0x18027f5b0
   1801da1e7:	41 0f 10 46 78       	movups xmm0,XMMWORD PTR [r14+0x78]
   1801da1ec:	c7 85 b8 03 00 00 00 	mov    DWORD PTR [rbp+0x3b8],0xbf800000
   1801da1f3:	00 80 bf 
   1801da1f6:	c7 85 bc 03 00 00 00 	mov    DWORD PTR [rbp+0x3bc],0x41c00000
   1801da1fd:	00 c0 41 
   1801da200:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801da206:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801da20b:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801da210:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801da215:	4c 8d 85 b8 03 00 00 	lea    r8,[rbp+0x3b8]
   1801da21c:	ba 07 00 00 00       	mov    edx,0x7
   1801da221:	48 8d 0d 88 9d 19 00 	lea    rcx,[rip+0x199d88]        # 0x180373fb0
   1801da228:	e8 13 29 fc ff       	call   0x18019cb40
   1801da22d:	84 db                	test   bl,bl
   1801da22f:	75 08                	jne    0x1801da239
   1801da231:	84 c0                	test   al,al
   1801da233:	0f 84 92 00 00 00    	je     0x1801da2cb
   1801da239:	48 8d 85 30 05 00 00 	lea    rax,[rbp+0x530]
   1801da240:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   1801da245:	0f 57 c0             	xorps  xmm0,xmm0
   1801da248:	0f 11 85 30 05 00 00 	movups XMMWORD PTR [rbp+0x530],xmm0
   1801da24f:	33 c0                	xor    eax,eax
   1801da251:	48 89 85 40 05 00 00 	mov    QWORD PTR [rbp+0x540],rax
   1801da258:	48 89 85 48 05 00 00 	mov    QWORD PTR [rbp+0x548],rax
   1801da25f:	49 8b cd             	mov    rcx,r13
   1801da262:	e8 4c f2 0f 00       	call   0x1802d94b3
   1801da267:	4c 8b c0             	mov    r8,rax
   1801da26a:	49 8b d5             	mov    rdx,r13
   1801da26d:	48 8d 8d 30 05 00 00 	lea    rcx,[rbp+0x530]
   1801da274:	e8 07 2e e4 ff       	call   0x18001d080
   1801da279:	90                   	nop
   1801da27a:	48 8d 95 30 05 00 00 	lea    rdx,[rbp+0x530]
   1801da281:	48 8d 8d 60 17 00 00 	lea    rcx,[rbp+0x1760]
   1801da288:	e8 e3 68 f6 ff       	call   0x180140b70
   1801da28d:	90                   	nop
   1801da28e:	48 83 bd 70 17 00 00 	cmp    QWORD PTR [rbp+0x1770],0x0
   1801da295:	00 
   1801da296:	74 27                	je     0x1801da2bf
   1801da298:	48 8b 4c 24 78       	mov    rcx,QWORD PTR [rsp+0x78]
   1801da29d:	48 8b 41 08          	mov    rax,QWORD PTR [rcx+0x8]
   1801da2a1:	48 2b 01             	sub    rax,QWORD PTR [rcx]
   1801da2a4:	48 c1 f8 05          	sar    rax,0x5
   1801da2a8:	48 83 f8 40          	cmp    rax,0x40
   1801da2ac:	73 11                	jae    0x1801da2bf
   1801da2ae:	48 8d 95 60 17 00 00 	lea    rdx,[rbp+0x1760]
   1801da2b5:	e8 36 34 03 00       	call   0x18020d6f0
   1801da2ba:	41 c6 45 00 00       	mov    BYTE PTR [r13+0x0],0x0
   1801da2bf:	48 8d 8d 60 17 00 00 	lea    rcx,[rbp+0x1760]
   1801da2c6:	e8 85 41 03 00       	call   0x18020e450
   1801da2cb:	80 3d 2b 0a 22 00 00 	cmp    BYTE PTR [rip+0x220a2b],0x0        # 0x1803facfd
   1801da2d2:	74 1d                	je     0x1801da2f1
   1801da2d4:	48 8b 05 1d 29 22 00 	mov    rax,QWORD PTR [rip+0x22291d]        # 0x1803fcbf8
   1801da2db:	48 39 05 0e 29 22 00 	cmp    QWORD PTR [rip+0x22290e],rax        # 0x1803fcbf0
   1801da2e2:	74 13                	je     0x1801da2f7
   1801da2e4:	48 83 e8 08          	sub    rax,0x8
   1801da2e8:	48 89 05 09 29 22 00 	mov    QWORD PTR [rip+0x222909],rax        # 0x1803fcbf8
   1801da2ef:	eb 06                	jmp    0x1801da2f7
   1801da2f1:	e8 0a 75 0a 00       	call   0x180281800
   1801da2f6:	90                   	nop
   1801da2f7:	48 8b 8d d8 04 00 00 	mov    rcx,QWORD PTR [rbp+0x4d8]
   1801da2fe:	ff 15 5c 22 13 00    	call   QWORD PTR [rip+0x13225c]        # 0x18030c560
   1801da304:	eb 14                	jmp    0x1801da31a
   1801da306:	b9 05 00 00 00       	mov    ecx,0x5
   1801da30b:	ff 15 67 21 13 00    	call   QWORD PTR [rip+0x132167]        # 0x18030c478
   1801da311:	cc                   	int3
   1801da312:	f3 0f 10 3d 8e 6c 1a 	movss  xmm7,DWORD PTR [rip+0x1a6c8e]        # 0x180380fa8
   1801da319:	00 
   1801da31a:	49 c7 c5 ff ff ff ff 	mov    r13,0xffffffffffffffff
   1801da321:	f3 44 0f 10 15 5a 70 	movss  xmm10,DWORD PTR [rip+0x1a705a]        # 0x180381384
   1801da328:	1a 00 
   1801da32a:	e8 e1 90 09 00       	call   0x180273410
   1801da32f:	bb 02 00 00 00       	mov    ebx,0x2
   1801da334:	8b cb                	mov    ecx,ebx
   1801da336:	e8 75 08 09 00       	call   0x18026abb0
   1801da33b:	8b cb                	mov    ecx,ebx
   1801da33d:	e8 4e 05 09 00       	call   0x18026a890
   1801da342:	e8 c9 90 09 00       	call   0x180273410
   1801da347:	c7 85 c0 01 00 00 00 	mov    DWORD PTR [rbp+0x1c0],0x3fc00000
   1801da34e:	00 c0 3f 
   1801da351:	c7 85 bc 01 00 00 00 	mov    DWORD PTR [rbp+0x1bc],0x3f400000
   1801da358:	00 40 3f 
   1801da35b:	f3 0f 10 05 41 03 20 	movss  xmm0,DWORD PTR [rip+0x200341]        # 0x1803da6a4
   1801da362:	00 
   1801da363:	48 8d 8d bc 01 00 00 	lea    rcx,[rbp+0x1bc]
   1801da36a:	44 0f 2f c8          	comiss xmm9,xmm0
   1801da36e:	48 8d 1d 2f 03 20 00 	lea    rbx,[rip+0x20032f]        # 0x1803da6a4
   1801da375:	48 0f 46 cb          	cmovbe rcx,rbx
   1801da379:	48 8d 85 c0 01 00 00 	lea    rax,[rbp+0x1c0]
   1801da380:	41 0f 2f c4          	comiss xmm0,xmm12
   1801da384:	48 0f 46 c1          	cmovbe rax,rcx
   1801da388:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801da38c:	f3 41 0f 59 cd       	mulss  xmm1,xmm13
   1801da391:	41 0f 28 c0          	movaps xmm0,xmm8
   1801da395:	e8 16 52 0a 00       	call   0x18027f5b0
   1801da39a:	48 c7 85 c0 03 00 00 	mov    QWORD PTR [rbp+0x3c0],0x0
   1801da3a1:	00 00 00 00 
   1801da3a5:	48 8d 95 c0 03 00 00 	lea    rdx,[rbp+0x3c0]
   1801da3ac:	b9 02 00 00 00       	mov    ecx,0x2
   1801da3b1:	e8 1a 07 09 00       	call   0x18026aad0
   1801da3b6:	c7 85 c8 03 00 00 00 	mov    DWORD PTR [rbp+0x3c8],0x0
   1801da3bd:	00 00 00 
   1801da3c0:	c7 85 cc 03 00 00 00 	mov    DWORD PTR [rbp+0x3cc],0xbf800000
   1801da3c7:	00 80 bf 
   1801da3ca:	41 b9 18 00 00 00    	mov    r9d,0x18
   1801da3d0:	45 33 c0             	xor    r8d,r8d
   1801da3d3:	48 8d 95 c8 03 00 00 	lea    rdx,[rbp+0x3c8]
   1801da3da:	48 8d 0d df 9b 19 00 	lea    rcx,[rip+0x199bdf]        # 0x180373fc0
   1801da3e1:	e8 ba 8b 09 00       	call   0x180272fa0
   1801da3e6:	b9 01 00 00 00       	mov    ecx,0x1
   1801da3eb:	e8 c0 07 09 00       	call   0x18026abb0
   1801da3f0:	c7 85 c8 01 00 00 00 	mov    DWORD PTR [rbp+0x1c8],0x3fc00000
   1801da3f7:	00 c0 3f 
   1801da3fa:	c7 85 c4 01 00 00 00 	mov    DWORD PTR [rbp+0x1c4],0x3f400000
   1801da401:	00 40 3f 
   1801da404:	f3 0f 10 05 98 02 20 	movss  xmm0,DWORD PTR [rip+0x200298]        # 0x1803da6a4
   1801da40b:	00 
   1801da40c:	48 8d 8d c4 01 00 00 	lea    rcx,[rbp+0x1c4]
   1801da413:	44 0f 2f c8          	comiss xmm9,xmm0
   1801da417:	48 0f 46 cb          	cmovbe rcx,rbx
   1801da41b:	48 8d 85 c8 01 00 00 	lea    rax,[rbp+0x1c8]
   1801da422:	41 0f 2f c4          	comiss xmm0,xmm12
   1801da426:	48 0f 46 c1          	cmovbe rax,rcx
   1801da42a:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801da42e:	f3 0f 59 0d 66 6a 1a 	mulss  xmm1,DWORD PTR [rip+0x1a6a66]        # 0x180380e9c
   1801da435:	00 
   1801da436:	c7 85 d0 01 00 00 00 	mov    DWORD PTR [rbp+0x1d0],0x3fc00000
   1801da43d:	00 c0 3f 
   1801da440:	c7 85 cc 01 00 00 00 	mov    DWORD PTR [rbp+0x1cc],0x3f400000
   1801da447:	00 40 3f 
   1801da44a:	48 8d 8d cc 01 00 00 	lea    rcx,[rbp+0x1cc]
   1801da451:	44 0f 2f c8          	comiss xmm9,xmm0
   1801da455:	48 0f 46 cb          	cmovbe rcx,rbx
   1801da459:	48 8d 85 d0 01 00 00 	lea    rax,[rbp+0x1d0]
   1801da460:	41 0f 2f c4          	comiss xmm0,xmm12
   1801da464:	48 0f 46 c1          	cmovbe rax,rcx
   1801da468:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801da46c:	f3 0f 59 c7          	mulss  xmm0,xmm7
   1801da470:	f3 0f 11 85 d0 03 00 	movss  DWORD PTR [rbp+0x3d0],xmm0
   1801da477:	00 
   1801da478:	f3 0f 11 8d d4 03 00 	movss  DWORD PTR [rbp+0x3d4],xmm1
   1801da47f:	00 
   1801da480:	48 8d 95 d0 03 00 00 	lea    rdx,[rbp+0x3d0]
   1801da487:	b9 0e 00 00 00       	mov    ecx,0xe
   1801da48c:	e8 3f 06 09 00       	call   0x18026aad0
   1801da491:	f3 0f 10 05 ff 6c 1a 	movss  xmm0,DWORD PTR [rip+0x1a6cff]        # 0x180381198
   1801da498:	00 
   1801da499:	45 33 c9             	xor    r9d,r9d
   1801da49c:	41 0f 28 cb          	movaps xmm1,xmm11
   1801da4a0:	0f 14 c8             	unpcklps xmm1,xmm0
   1801da4a3:	66 49 0f 7e c8       	movq   r8,xmm1
   1801da4a8:	33 d2                	xor    edx,edx
   1801da4aa:	48 8d 0d 1f 9b 19 00 	lea    rcx,[rip+0x199b1f]        # 0x180373fd0
   1801da4b1:	e8 0a 57 fc ff       	call   0x18019fbc0
   1801da4b6:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801da4bd:	56 fd 93 
   1801da4c0:	84 c0                	test   al,al
   1801da4c2:	0f 84 3e 0e 00 00    	je     0x1801db306
   1801da4c8:	48 89 9d 90 16 00 00 	mov    QWORD PTR [rbp+0x1690],rbx
   1801da4cf:	4c 8d 85 90 16 00 00 	lea    r8,[rbp+0x1690]
   1801da4d6:	48 8d 95 50 0d 00 00 	lea    rdx,[rbp+0xd50]
   1801da4dd:	48 8d 0d 0c 09 22 00 	lea    rcx,[rip+0x22090c]        # 0x1803fadf0
   1801da4e4:	e8 47 75 06 00       	call   0x180241a30
   1801da4e9:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da4ec:	48 83 c1 28          	add    rcx,0x28
   1801da4f0:	48 b8 dd 2d ce aa bd 	movabs rax,0x7d7f27bdaace2ddd
   1801da4f7:	27 7f 7d 
   1801da4fa:	48 89 85 98 16 00 00 	mov    QWORD PTR [rbp+0x1698],rax
   1801da501:	4c 8d 85 98 16 00 00 	lea    r8,[rbp+0x1698]
   1801da508:	48 8d 95 60 0d 00 00 	lea    rdx,[rbp+0xd60]
   1801da50f:	e8 1c 75 06 00       	call   0x180241a30
   1801da514:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da517:	48 83 c1 28          	add    rcx,0x28
   1801da51b:	e8 a0 2a 02 00       	call   0x1801fcfc0
   1801da520:	48 8b d0             	mov    rdx,rax
   1801da523:	48 8d 0d ae 9a 19 00 	lea    rcx,[rip+0x199aae]        # 0x180373fd8
   1801da52a:	e8 31 66 fc ff       	call   0x1801a0b60
   1801da52f:	e8 0c 56 0d 00       	call   0x1802afb40
   1801da534:	48 89 9d 38 12 00 00 	mov    QWORD PTR [rbp+0x1238],rbx
   1801da53b:	4c 8d 85 38 12 00 00 	lea    r8,[rbp+0x1238]
   1801da542:	48 8d 95 70 0d 00 00 	lea    rdx,[rbp+0xd70]
   1801da549:	48 8d 0d a0 08 22 00 	lea    rcx,[rip+0x2208a0]        # 0x1803fadf0
   1801da550:	e8 db 74 06 00       	call   0x180241a30
   1801da555:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da558:	48 83 c1 28          	add    rcx,0x28
   1801da55c:	48 b8 66 23 de fa 39 	movabs rax,0x574fa339fade2366
   1801da563:	a3 4f 57 
   1801da566:	48 89 85 40 12 00 00 	mov    QWORD PTR [rbp+0x1240],rax
   1801da56d:	4c 8d 85 40 12 00 00 	lea    r8,[rbp+0x1240]
   1801da574:	48 8d 95 80 0d 00 00 	lea    rdx,[rbp+0xd80]
   1801da57b:	e8 b0 74 06 00       	call   0x180241a30
   1801da580:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da583:	48 83 c1 28          	add    rcx,0x28
   1801da587:	e8 34 2a 02 00       	call   0x1801fcfc0
   1801da58c:	48 8b d0             	mov    rdx,rax
   1801da58f:	48 8d 0d 52 9a 19 00 	lea    rcx,[rip+0x199a52]        # 0x180373fe8
   1801da596:	e8 c5 65 fc ff       	call   0x1801a0b60
   1801da59b:	41 0f 28 ca          	movaps xmm1,xmm10
   1801da59f:	41 0f 28 c0          	movaps xmm0,xmm8
   1801da5a3:	e8 08 50 0a 00       	call   0x18027f5b0
   1801da5a8:	41 0f 28 c0          	movaps xmm0,xmm8
   1801da5ac:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801da5b0:	66 49 0f 7e c0       	movq   r8,xmm0
   1801da5b5:	ba 04 00 00 00       	mov    edx,0x4
   1801da5ba:	48 8d 0d 37 9a 19 00 	lea    rcx,[rip+0x199a37]        # 0x180373ff8
   1801da5c1:	e8 3a 36 fc ff       	call   0x18019dc00
   1801da5c6:	84 c0                	test   al,al
   1801da5c8:	74 0c                	je     0x1801da5d6
   1801da5ca:	48 8d 0d 37 9a 19 00 	lea    rcx,[rip+0x199a37]        # 0x180374008
   1801da5d1:	e8 fa 69 0a 00       	call   0x180280fd0
   1801da5d6:	41 0f 28 ca          	movaps xmm1,xmm10
   1801da5da:	41 0f 28 c0          	movaps xmm0,xmm8
   1801da5de:	e8 cd 4f 0a 00       	call   0x18027f5b0
   1801da5e3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801da5e7:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801da5ec:	75 05                	jne    0x1801da5f3
   1801da5ee:	e8 01 dd 0f 00       	call   0x1802d82f4
   1801da5f3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801da5f7:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801da5fb:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801da602:	f3 0f 10 b0 80 02 00 	movss  xmm6,DWORD PTR [rax+0x280]
   1801da609:	00 
   1801da60a:	f3 0f 5c 70 28       	subss  xmm6,DWORD PTR [rax+0x28]
   1801da60f:	c7 85 d8 01 00 00 00 	mov    DWORD PTR [rbp+0x1d8],0x3fc00000
   1801da616:	00 c0 3f 
   1801da619:	c7 85 d4 01 00 00 00 	mov    DWORD PTR [rbp+0x1d4],0x3f400000
   1801da620:	00 40 3f 
   1801da623:	f3 0f 10 05 79 00 20 	movss  xmm0,DWORD PTR [rip+0x200079]        # 0x1803da6a4
   1801da62a:	00 
   1801da62b:	48 8d 8d d4 01 00 00 	lea    rcx,[rbp+0x1d4]
   1801da632:	44 0f 2f c8          	comiss xmm9,xmm0
   1801da636:	48 8d 05 67 00 20 00 	lea    rax,[rip+0x200067]        # 0x1803da6a4
   1801da63d:	48 0f 46 c8          	cmovbe rcx,rax
   1801da641:	48 8d 85 d8 01 00 00 	lea    rax,[rbp+0x1d8]
   1801da648:	41 0f 2f c4          	comiss xmm0,xmm12
   1801da64c:	48 0f 46 c1          	cmovbe rax,rcx
   1801da650:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801da654:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801da659:	f3 0f 5c f0          	subss  xmm6,xmm0
   1801da65d:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801da661:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801da666:	75 05                	jne    0x1801da66d
   1801da668:	e8 87 dc 0f 00       	call   0x1802d82f4
   1801da66d:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801da671:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801da675:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801da67c:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801da683:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801da68a:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801da68f:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801da696:	00 
   1801da697:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801da69b:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801da6a2:	00 
   1801da6a3:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801da6aa:	c7 85 e0 01 00 00 00 	mov    DWORD PTR [rbp+0x1e0],0x3fc00000
   1801da6b1:	00 c0 3f 
   1801da6b4:	c7 85 dc 01 00 00 00 	mov    DWORD PTR [rbp+0x1dc],0x3f400000
   1801da6bb:	00 40 3f 
   1801da6be:	f3 0f 10 05 de ff 1f 	movss  xmm0,DWORD PTR [rip+0x1fffde]        # 0x1803da6a4
   1801da6c5:	00 
   1801da6c6:	48 8d 8d dc 01 00 00 	lea    rcx,[rbp+0x1dc]
   1801da6cd:	44 0f 2f c8          	comiss xmm9,xmm0
   1801da6d1:	48 8d 05 cc ff 1f 00 	lea    rax,[rip+0x1fffcc]        # 0x1803da6a4
   1801da6d8:	48 0f 46 c8          	cmovbe rcx,rax
   1801da6dc:	48 8d 85 e0 01 00 00 	lea    rax,[rbp+0x1e0]
   1801da6e3:	41 0f 2f c4          	comiss xmm0,xmm12
   1801da6e7:	48 0f 46 c1          	cmovbe rax,rcx
   1801da6eb:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801da6ef:	f3 41 0f 59 c7       	mulss  xmm0,xmm15
   1801da6f4:	f3 0f 11 85 d8 03 00 	movss  DWORD PTR [rbp+0x3d8],xmm0
   1801da6fb:	00 
   1801da6fc:	c7 85 dc 03 00 00 00 	mov    DWORD PTR [rbp+0x3dc],0x0
   1801da703:	00 00 00 
   1801da706:	48 89 9d 48 12 00 00 	mov    QWORD PTR [rbp+0x1248],rbx
   1801da70d:	4c 8d 85 48 12 00 00 	lea    r8,[rbp+0x1248]
   1801da714:	48 8d 95 90 0d 00 00 	lea    rdx,[rbp+0xd90]
   1801da71b:	48 8d 0d ce 06 22 00 	lea    rcx,[rip+0x2206ce]        # 0x1803fadf0
   1801da722:	e8 09 73 06 00       	call   0x180241a30
   1801da727:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da72a:	48 83 c1 28          	add    rcx,0x28
   1801da72e:	48 b8 d9 54 31 4b b1 	movabs rax,0xcef5d8b14b3154d9
   1801da735:	d8 f5 ce 
   1801da738:	48 89 85 50 12 00 00 	mov    QWORD PTR [rbp+0x1250],rax
   1801da73f:	4c 8d 85 50 12 00 00 	lea    r8,[rbp+0x1250]
   1801da746:	48 8d 95 a0 0d 00 00 	lea    rdx,[rbp+0xda0]
   1801da74d:	e8 de 72 06 00       	call   0x180241a30
   1801da752:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da755:	48 83 c1 28          	add    rcx,0x28
   1801da759:	e8 62 82 02 00       	call   0x1802029c0
   1801da75e:	45 33 c9             	xor    r9d,r9d
   1801da761:	4c 8d 85 d8 03 00 00 	lea    r8,[rbp+0x3d8]
   1801da768:	48 8b d0             	mov    rdx,rax
   1801da76b:	48 8d 0d 9e 98 19 00 	lea    rcx,[rip+0x19989e]        # 0x180374010
   1801da772:	e8 29 8a 0f 00       	call   0x1802d31a0
   1801da777:	48 8d 0d 8a 98 19 00 	lea    rcx,[rip+0x19988a]        # 0x180374008
   1801da77e:	e8 fd fe fb ff       	call   0x18019a680
   1801da783:	84 c0                	test   al,al
   1801da785:	0f 84 cf 01 00 00    	je     0x1801da95a
   1801da78b:	48 89 9d 58 12 00 00 	mov    QWORD PTR [rbp+0x1258],rbx
   1801da792:	4c 8d 85 58 12 00 00 	lea    r8,[rbp+0x1258]
   1801da799:	48 8d 95 b0 0d 00 00 	lea    rdx,[rbp+0xdb0]
   1801da7a0:	48 8d 0d 49 06 22 00 	lea    rcx,[rip+0x220649]        # 0x1803fadf0
   1801da7a7:	e8 84 72 06 00       	call   0x180241a30
   1801da7ac:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da7af:	48 83 c1 28          	add    rcx,0x28
   1801da7b3:	48 b8 9a 3f 87 12 1f 	movabs rax,0x324e861f12873f9a
   1801da7ba:	86 4e 32 
   1801da7bd:	48 89 85 60 12 00 00 	mov    QWORD PTR [rbp+0x1260],rax
   1801da7c4:	4c 8d 85 60 12 00 00 	lea    r8,[rbp+0x1260]
   1801da7cb:	48 8d 95 c0 0d 00 00 	lea    rdx,[rbp+0xdc0]
   1801da7d2:	e8 59 72 06 00       	call   0x180241a30
   1801da7d7:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da7da:	48 83 c1 28          	add    rcx,0x28
   1801da7de:	e8 dd 81 02 00       	call   0x1802029c0
   1801da7e3:	48 8b d8             	mov    rbx,rax
   1801da7e6:	c7 85 e8 01 00 00 00 	mov    DWORD PTR [rbp+0x1e8],0x3fc00000
   1801da7ed:	00 c0 3f 
   1801da7f0:	c7 85 e4 01 00 00 00 	mov    DWORD PTR [rbp+0x1e4],0x3f400000
   1801da7f7:	00 40 3f 
   1801da7fa:	f3 0f 10 05 a2 fe 1f 	movss  xmm0,DWORD PTR [rip+0x1ffea2]        # 0x1803da6a4
   1801da801:	00 
   1801da802:	48 8d 95 e4 01 00 00 	lea    rdx,[rbp+0x1e4]
   1801da809:	44 0f 2f c8          	comiss xmm9,xmm0
   1801da80d:	48 8d 05 90 fe 1f 00 	lea    rax,[rip+0x1ffe90]        # 0x1803da6a4
   1801da814:	48 0f 46 d0          	cmovbe rdx,rax
   1801da818:	48 8d 8d e8 01 00 00 	lea    rcx,[rbp+0x1e8]
   1801da81f:	41 0f 2f c4          	comiss xmm0,xmm12
   1801da823:	48 0f 46 ca          	cmovbe rcx,rdx
   1801da827:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801da82b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801da82f:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801da834:	75 05                	jne    0x1801da83b
   1801da836:	e8 b9 da 0f 00       	call   0x1802d82f4
   1801da83b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801da83f:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801da843:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801da84a:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801da84f:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801da856:	00 
   1801da857:	48 8d 05 8a e1 18 00 	lea    rax,[rip+0x18e18a]        # 0x1803689e8
   1801da85e:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801da863:	c7 44 24 20 f4 01 00 	mov    DWORD PTR [rsp+0x20],0x1f4
   1801da86a:	00 
   1801da86b:	45 33 c9             	xor    r9d,r9d
   1801da86e:	4c 8b c3             	mov    r8,rbx
   1801da871:	48 8d 15 b0 97 19 00 	lea    rdx,[rip+0x1997b0]        # 0x180374028
   1801da878:	48 8d 0d b9 97 19 00 	lea    rcx,[rip+0x1997b9]        # 0x180374038
   1801da87f:	e8 1c dd fc ff       	call   0x1801a85a0
   1801da884:	c7 85 f0 01 00 00 f4 	mov    DWORD PTR [rbp+0x1f0],0x1f4
   1801da88b:	01 00 00 
   1801da88e:	45 33 c0             	xor    r8d,r8d
   1801da891:	44 89 85 ec 01 00 00 	mov    DWORD PTR [rbp+0x1ec],r8d
   1801da898:	8b 13                	mov    edx,DWORD PTR [rbx]
   1801da89a:	48 8d 8d ec 01 00 00 	lea    rcx,[rbp+0x1ec]
   1801da8a1:	85 d2                	test   edx,edx
   1801da8a3:	48 0f 49 cb          	cmovns rcx,rbx
   1801da8a7:	48 8d 85 f0 01 00 00 	lea    rax,[rbp+0x1f0]
   1801da8ae:	81 fa f4 01 00 00    	cmp    edx,0x1f4
   1801da8b4:	48 0f 4e c1          	cmovle rax,rcx
   1801da8b8:	8b 00                	mov    eax,DWORD PTR [rax]
   1801da8ba:	89 03                	mov    DWORD PTR [rbx],eax
   1801da8bc:	c7 85 f8 01 00 00 04 	mov    DWORD PTR [rbp+0x1f8],0x4
   1801da8c3:	00 00 00 
   1801da8c6:	44 89 85 f4 01 00 00 	mov    DWORD PTR [rbp+0x1f4],r8d
   1801da8cd:	8b 15 79 09 22 00    	mov    edx,DWORD PTR [rip+0x220979]        # 0x1803fb24c
   1801da8d3:	48 8d 8d f4 01 00 00 	lea    rcx,[rbp+0x1f4]
   1801da8da:	85 d2                	test   edx,edx
   1801da8dc:	48 8d 05 69 09 22 00 	lea    rax,[rip+0x220969]        # 0x1803fb24c
   1801da8e3:	48 0f 49 c8          	cmovns rcx,rax
   1801da8e7:	48 8d 85 f8 01 00 00 	lea    rax,[rbp+0x1f8]
   1801da8ee:	83 fa 04             	cmp    edx,0x4
   1801da8f1:	48 0f 4e c1          	cmovle rax,rcx
   1801da8f5:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801da8f8:	89 05 4e 09 22 00    	mov    DWORD PTR [rip+0x22094e],eax        # 0x1803fb24c
   1801da8fe:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801da905:	48 8d 05 1c 21 20 00 	lea    rax,[rip+0x20211c]        # 0x1803dca28
   1801da90c:	48 03 c8             	add    rcx,rax
   1801da90f:	48 8d 15 3a 97 19 00 	lea    rdx,[rip+0x19973a]        # 0x180374050
   1801da916:	e8 95 02 0d 00       	call   0x1802aabb0
   1801da91b:	80 3d db 03 22 00 00 	cmp    BYTE PTR [rip+0x2203db],0x0        # 0x1803facfd
   1801da922:	74 27                	je     0x1801da94b
   1801da924:	48 8b 05 cd 22 22 00 	mov    rax,QWORD PTR [rip+0x2222cd]        # 0x1803fcbf8
   1801da92b:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801da932:	56 fd 93 
   1801da935:	48 39 05 b4 22 22 00 	cmp    QWORD PTR [rip+0x2222b4],rax        # 0x1803fcbf0
   1801da93c:	74 1c                	je     0x1801da95a
   1801da93e:	48 83 e8 08          	sub    rax,0x8
   1801da942:	48 89 05 af 22 22 00 	mov    QWORD PTR [rip+0x2222af],rax        # 0x1803fcbf8
   1801da949:	eb 0f                	jmp    0x1801da95a
   1801da94b:	e8 b0 6e 0a 00       	call   0x180281800
   1801da950:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801da957:	56 fd 93 
   1801da95a:	e8 e1 51 0d 00       	call   0x1802afb40
   1801da95f:	48 89 9d 68 12 00 00 	mov    QWORD PTR [rbp+0x1268],rbx
   1801da966:	4c 8d 85 68 12 00 00 	lea    r8,[rbp+0x1268]
   1801da96d:	48 8d 95 d0 0d 00 00 	lea    rdx,[rbp+0xdd0]
   1801da974:	48 8d 0d 75 04 22 00 	lea    rcx,[rip+0x220475]        # 0x1803fadf0
   1801da97b:	e8 b0 70 06 00       	call   0x180241a30
   1801da980:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da983:	48 83 c1 28          	add    rcx,0x28
   1801da987:	48 b8 4c 01 1a d1 3a 	movabs rax,0x6c96c33ad11a014c
   1801da98e:	c3 96 6c 
   1801da991:	48 89 85 70 12 00 00 	mov    QWORD PTR [rbp+0x1270],rax
   1801da998:	4c 8d 85 70 12 00 00 	lea    r8,[rbp+0x1270]
   1801da99f:	48 8d 95 e0 0d 00 00 	lea    rdx,[rbp+0xde0]
   1801da9a6:	e8 85 70 06 00       	call   0x180241a30
   1801da9ab:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801da9ae:	48 83 c1 28          	add    rcx,0x28
   1801da9b2:	e8 09 26 02 00       	call   0x1801fcfc0
   1801da9b7:	48 8b d0             	mov    rdx,rax
   1801da9ba:	48 8d 0d 0f 97 19 00 	lea    rcx,[rip+0x19970f]        # 0x1803740d0
   1801da9c1:	e8 9a 61 fc ff       	call   0x1801a0b60
   1801da9c6:	33 c9                	xor    ecx,ecx
   1801da9c8:	e8 93 44 09 00       	call   0x18026ee60
   1801da9cd:	84 c0                	test   al,al
   1801da9cf:	74 0c                	je     0x1801da9dd
   1801da9d1:	48 8d 0d 08 97 19 00 	lea    rcx,[rip+0x199708]        # 0x1803740e0
   1801da9d8:	e8 23 63 0a 00       	call   0x180280d00
   1801da9dd:	41 0f 28 ca          	movaps xmm1,xmm10
   1801da9e1:	41 0f 28 c0          	movaps xmm0,xmm8
   1801da9e5:	e8 c6 4b 0a 00       	call   0x18027f5b0
   1801da9ea:	41 0f 28 c0          	movaps xmm0,xmm8
   1801da9ee:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801da9f2:	66 49 0f 7e c0       	movq   r8,xmm0
   1801da9f7:	ba 04 00 00 00       	mov    edx,0x4
   1801da9fc:	48 8d 0d 05 97 19 00 	lea    rcx,[rip+0x199705]        # 0x180374108
   1801daa03:	e8 f8 31 fc ff       	call   0x18019dc00
   1801daa08:	84 c0                	test   al,al
   1801daa0a:	74 0c                	je     0x1801daa18
   1801daa0c:	48 8d 0d 05 97 19 00 	lea    rcx,[rip+0x199705]        # 0x180374118
   1801daa13:	e8 b8 65 0a 00       	call   0x180280fd0
   1801daa18:	48 8d 0d f9 96 19 00 	lea    rcx,[rip+0x1996f9]        # 0x180374118
   1801daa1f:	e8 5c fc fb ff       	call   0x18019a680
   1801daa24:	84 c0                	test   al,al
   1801daa26:	0f 84 a9 00 00 00    	je     0x1801daad5
   1801daa2c:	48 89 9d 78 12 00 00 	mov    QWORD PTR [rbp+0x1278],rbx
   1801daa33:	4c 8d 85 78 12 00 00 	lea    r8,[rbp+0x1278]
   1801daa3a:	48 8d 95 f0 0d 00 00 	lea    rdx,[rbp+0xdf0]
   1801daa41:	48 8d 0d a8 03 22 00 	lea    rcx,[rip+0x2203a8]        # 0x1803fadf0
   1801daa48:	e8 e3 6f 06 00       	call   0x180241a30
   1801daa4d:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801daa50:	48 83 c1 28          	add    rcx,0x28
   1801daa54:	48 b8 c5 46 1a 39 e2 	movabs rax,0x404ea8e2391a46c5
   1801daa5b:	a8 4e 40 
   1801daa5e:	48 89 85 80 12 00 00 	mov    QWORD PTR [rbp+0x1280],rax
   1801daa65:	4c 8d 85 80 12 00 00 	lea    r8,[rbp+0x1280]
   1801daa6c:	48 8d 95 00 0e 00 00 	lea    rdx,[rbp+0xe00]
   1801daa73:	e8 b8 6f 06 00       	call   0x180241a30
   1801daa78:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801daa7b:	48 83 c1 28          	add    rcx,0x28
   1801daa7f:	e8 3c 25 02 00       	call   0x1801fcfc0
   1801daa84:	48 8b d0             	mov    rdx,rax
   1801daa87:	48 8d 0d 9a 96 19 00 	lea    rcx,[rip+0x19969a]        # 0x180374128
   1801daa8e:	e8 cd 60 fc ff       	call   0x1801a0b60
   1801daa93:	33 c9                	xor    ecx,ecx
   1801daa95:	e8 c6 43 09 00       	call   0x18026ee60
   1801daa9a:	84 c0                	test   al,al
   1801daa9c:	74 0c                	je     0x1801daaaa
   1801daa9e:	48 8d 0d ab 96 19 00 	lea    rcx,[rip+0x1996ab]        # 0x180374150
   1801daaa5:	e8 56 62 0a 00       	call   0x180280d00
   1801daaaa:	80 3d 4c 02 22 00 00 	cmp    BYTE PTR [rip+0x22024c],0x0        # 0x1803facfd
   1801daab1:	74 1d                	je     0x1801daad0
   1801daab3:	48 8b 05 3e 21 22 00 	mov    rax,QWORD PTR [rip+0x22213e]        # 0x1803fcbf8
   1801daaba:	48 39 05 2f 21 22 00 	cmp    QWORD PTR [rip+0x22212f],rax        # 0x1803fcbf0
   1801daac1:	74 12                	je     0x1801daad5
   1801daac3:	48 83 e8 08          	sub    rax,0x8
   1801daac7:	48 89 05 2a 21 22 00 	mov    QWORD PTR [rip+0x22212a],rax        # 0x1803fcbf8
   1801daace:	eb 05                	jmp    0x1801daad5
   1801daad0:	e8 2b 6d 0a 00       	call   0x180281800
   1801daad5:	e8 66 50 0d 00       	call   0x1802afb40
   1801daada:	48 89 9d 88 12 00 00 	mov    QWORD PTR [rbp+0x1288],rbx
   1801daae1:	4c 8d 85 88 12 00 00 	lea    r8,[rbp+0x1288]
   1801daae8:	48 8d 95 10 0e 00 00 	lea    rdx,[rbp+0xe10]
   1801daaef:	48 8d 0d fa 02 22 00 	lea    rcx,[rip+0x2202fa]        # 0x1803fadf0
   1801daaf6:	e8 35 6f 06 00       	call   0x180241a30
   1801daafb:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801daafe:	48 83 c1 28          	add    rcx,0x28
   1801dab02:	48 b8 ae c6 0a bd 15 	movabs rax,0x1477d415bd0ac6ae
   1801dab09:	d4 77 14 
   1801dab0c:	48 89 85 90 12 00 00 	mov    QWORD PTR [rbp+0x1290],rax
   1801dab13:	4c 8d 85 90 12 00 00 	lea    r8,[rbp+0x1290]
   1801dab1a:	48 8d 95 20 0e 00 00 	lea    rdx,[rbp+0xe20]
   1801dab21:	e8 0a 6f 06 00       	call   0x180241a30
   1801dab26:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dab29:	48 83 c1 28          	add    rcx,0x28
   1801dab2d:	e8 8e 24 02 00       	call   0x1801fcfc0
   1801dab32:	48 8b d0             	mov    rdx,rax
   1801dab35:	48 8d 0d ac 97 19 00 	lea    rcx,[rip+0x1997ac]        # 0x1803742e8
   1801dab3c:	e8 1f 60 fc ff       	call   0x1801a0b60
   1801dab41:	33 c9                	xor    ecx,ecx
   1801dab43:	e8 18 43 09 00       	call   0x18026ee60
   1801dab48:	84 c0                	test   al,al
   1801dab4a:	74 0c                	je     0x1801dab58
   1801dab4c:	48 8d 0d ad 97 19 00 	lea    rcx,[rip+0x1997ad]        # 0x180374300
   1801dab53:	e8 a8 61 0a 00       	call   0x180280d00
   1801dab58:	41 0f 28 ca          	movaps xmm1,xmm10
   1801dab5c:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dab60:	e8 4b 4a 0a 00       	call   0x18027f5b0
   1801dab65:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dab69:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801dab6d:	66 49 0f 7e c0       	movq   r8,xmm0
   1801dab72:	ba 04 00 00 00       	mov    edx,0x4
   1801dab77:	48 8d 0d 32 98 19 00 	lea    rcx,[rip+0x199832]        # 0x1803743b0
   1801dab7e:	e8 7d 30 fc ff       	call   0x18019dc00
   1801dab83:	84 c0                	test   al,al
   1801dab85:	74 0c                	je     0x1801dab93
   1801dab87:	48 8d 0d 32 98 19 00 	lea    rcx,[rip+0x199832]        # 0x1803743c0
   1801dab8e:	e8 3d 64 0a 00       	call   0x180280fd0
   1801dab93:	48 8d 0d 26 98 19 00 	lea    rcx,[rip+0x199826]        # 0x1803743c0
   1801dab9a:	e8 e1 fa fb ff       	call   0x18019a680
   1801dab9f:	84 c0                	test   al,al
   1801daba1:	0f 84 5f 07 00 00    	je     0x1801db306
   1801daba7:	33 d2                	xor    edx,edx
   1801daba9:	48 8d 0d 38 97 19 00 	lea    rcx,[rip+0x199738]        # 0x1803742e8
   1801dabb0:	e8 ab f8 fb ff       	call   0x18019a460
   1801dabb5:	c7 85 00 02 00 00 04 	mov    DWORD PTR [rbp+0x200],0x4
   1801dabbc:	00 00 00 
   1801dabbf:	c7 85 fc 01 00 00 00 	mov    DWORD PTR [rbp+0x1fc],0x0
   1801dabc6:	00 00 00 
   1801dabc9:	8b 15 7d 06 22 00    	mov    edx,DWORD PTR [rip+0x22067d]        # 0x1803fb24c
   1801dabcf:	48 8d 8d fc 01 00 00 	lea    rcx,[rbp+0x1fc]
   1801dabd6:	85 d2                	test   edx,edx
   1801dabd8:	48 8d 05 6d 06 22 00 	lea    rax,[rip+0x22066d]        # 0x1803fb24c
   1801dabdf:	48 0f 49 c8          	cmovns rcx,rax
   1801dabe3:	48 8d 85 00 02 00 00 	lea    rax,[rbp+0x200]
   1801dabea:	83 fa 04             	cmp    edx,0x4
   1801dabed:	48 0f 4e c1          	cmovle rax,rcx
   1801dabf1:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dabf4:	89 05 52 06 22 00    	mov    DWORD PTR [rip+0x220652],eax        # 0x1803fb24c
   1801dabfa:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dac01:	48 8d 05 10 1e 20 00 	lea    rax,[rip+0x201e10]        # 0x1803dca18
   1801dac08:	48 03 c8             	add    rcx,rax
   1801dac0b:	4c 8d 05 d6 96 19 00 	lea    r8,[rip+0x1996d6]        # 0x1803742e8
   1801dac12:	48 8d 15 93 85 16 00 	lea    rdx,[rip+0x168593]        # 0x1803431ac
   1801dac19:	e8 92 ff 0c 00       	call   0x1802aabb0
   1801dac1e:	48 89 9d 98 12 00 00 	mov    QWORD PTR [rbp+0x1298],rbx
   1801dac25:	4c 8d 85 98 12 00 00 	lea    r8,[rbp+0x1298]
   1801dac2c:	48 8d 95 30 0e 00 00 	lea    rdx,[rbp+0xe30]
   1801dac33:	48 8d 0d b6 01 22 00 	lea    rcx,[rip+0x2201b6]        # 0x1803fadf0
   1801dac3a:	e8 f1 6d 06 00       	call   0x180241a30
   1801dac3f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dac42:	48 83 c1 28          	add    rcx,0x28
   1801dac46:	48 b8 4c b6 b6 ba 29 	movabs rax,0x1fba2029bab6b64c
   1801dac4d:	20 ba 1f 
   1801dac50:	48 89 85 a0 12 00 00 	mov    QWORD PTR [rbp+0x12a0],rax
   1801dac57:	4c 8d 85 a0 12 00 00 	lea    r8,[rbp+0x12a0]
   1801dac5e:	48 8d 95 40 0e 00 00 	lea    rdx,[rbp+0xe40]
   1801dac65:	e8 c6 6d 06 00       	call   0x180241a30
   1801dac6a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dac6d:	48 83 c1 28          	add    rcx,0x28
   1801dac71:	e8 4a 7d 02 00       	call   0x1802029c0
   1801dac76:	48 8b d8             	mov    rbx,rax
   1801dac79:	48 8b 0c fe          	mov    rcx,QWORD PTR [rsi+rdi*8]
   1801dac7d:	41 80 3c 0f 00       	cmp    BYTE PTR [r15+rcx*1],0x0
   1801dac82:	75 05                	jne    0x1801dac89
   1801dac84:	e8 6b d6 0f 00       	call   0x1802d82f4
   1801dac89:	48 8b 0c fe          	mov    rcx,QWORD PTR [rsi+rdi*8]
   1801dac8d:	49 8b 14 0c          	mov    rdx,QWORD PTR [r12+rcx*1]
   1801dac91:	83 8a c0 1e 00 00 01 	or     DWORD PTR [rdx+0x1ec0],0x1
   1801dac98:	c7 82 d8 1e 00 00 00 	mov    DWORD PTR [rdx+0x1ed8],0x43960000
   1801dac9f:	00 96 43 
   1801daca2:	c7 44 24 20 03 00 00 	mov    DWORD PTR [rsp+0x20],0x3
   1801daca9:	00 
   1801dacaa:	4c 8d 0d af c2 20 00 	lea    r9,[rip+0x20c2af]        # 0x1803e6f60
   1801dacb1:	48 8b d3             	mov    rdx,rbx
   1801dacb4:	48 8d 0d 15 97 19 00 	lea    rcx,[rip+0x199715]        # 0x1803743d0
   1801dacbb:	e8 40 65 0d 00       	call   0x1802b1200
   1801dacc0:	c7 85 08 02 00 00 02 	mov    DWORD PTR [rbp+0x208],0x2
   1801dacc7:	00 00 00 
   1801dacca:	c7 85 04 02 00 00 00 	mov    DWORD PTR [rbp+0x204],0x0
   1801dacd1:	00 00 00 
   1801dacd4:	8b 13                	mov    edx,DWORD PTR [rbx]
   1801dacd6:	48 8d 8d 04 02 00 00 	lea    rcx,[rbp+0x204]
   1801dacdd:	85 d2                	test   edx,edx
   1801dacdf:	48 0f 49 cb          	cmovns rcx,rbx
   1801dace3:	48 8d 85 08 02 00 00 	lea    rax,[rbp+0x208]
   1801dacea:	83 fa 02             	cmp    edx,0x2
   1801daced:	48 0f 4e c1          	cmovle rax,rcx
   1801dacf1:	8b 08                	mov    ecx,DWORD PTR [rax]
   1801dacf3:	89 0b                	mov    DWORD PTR [rbx],ecx
   1801dacf5:	85 c9                	test   ecx,ecx
   1801dacf7:	75 0c                	jne    0x1801dad05
   1801dacf9:	48 8d 15 e0 96 19 00 	lea    rdx,[rip+0x1996e0]        # 0x1803743e0
   1801dad00:	e9 e6 04 00 00       	jmp    0x1801db1eb
   1801dad05:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801dad0c:	56 fd 93 
   1801dad0f:	83 f9 01             	cmp    ecx,0x1
   1801dad12:	48 8d 0d d7 00 22 00 	lea    rcx,[rip+0x2200d7]        # 0x1803fadf0
   1801dad19:	0f 85 4e 03 00 00    	jne    0x1801db06d
   1801dad1f:	48 89 85 a8 12 00 00 	mov    QWORD PTR [rbp+0x12a8],rax
   1801dad26:	4c 8d 85 a8 12 00 00 	lea    r8,[rbp+0x12a8]
   1801dad2d:	48 8d 95 50 0e 00 00 	lea    rdx,[rbp+0xe50]
   1801dad34:	e8 f7 6c 06 00       	call   0x180241a30
   1801dad39:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dad3c:	48 83 c1 28          	add    rcx,0x28
   1801dad40:	48 b8 7d af 8a 4f e2 	movabs rax,0xdf2349e24f8aaf7d
   1801dad47:	49 23 df 
   1801dad4a:	48 89 85 b0 12 00 00 	mov    QWORD PTR [rbp+0x12b0],rax
   1801dad51:	4c 8d 85 b0 12 00 00 	lea    r8,[rbp+0x12b0]
   1801dad58:	48 8d 95 60 0e 00 00 	lea    rdx,[rbp+0xe60]
   1801dad5f:	e8 cc 6c 06 00       	call   0x180241a30
   1801dad64:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dad67:	48 83 c1 28          	add    rcx,0x28
   1801dad6b:	e8 50 7b 02 00       	call   0x1802028c0
   1801dad70:	48 8b d8             	mov    rbx,rax
   1801dad73:	80 3d 8a 3d 22 00 00 	cmp    BYTE PTR [rip+0x223d8a],0x0        # 0x1803feb04
   1801dad7a:	75 24                	jne    0x1801dada0
   1801dad7c:	48 83 78 18 0f       	cmp    QWORD PTR [rax+0x18],0xf
   1801dad81:	76 05                	jbe    0x1801dad88
   1801dad83:	4c 8b 00             	mov    r8,QWORD PTR [rax]
   1801dad86:	eb 03                	jmp    0x1801dad8b
   1801dad88:	4c 8b c3             	mov    r8,rbx
   1801dad8b:	4d 8b cd             	mov    r9,r13
   1801dad8e:	ba 00 02 00 00       	mov    edx,0x200
   1801dad93:	48 8d 0d 46 5a 22 00 	lea    rcx,[rip+0x225a46]        # 0x1804007e0
   1801dad9a:	ff 15 60 1e 13 00    	call   QWORD PTR [rip+0x131e60]        # 0x18030cc00
   1801dada0:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dada4:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801dada9:	75 05                	jne    0x1801dadb0
   1801dadab:	e8 44 d5 0f 00       	call   0x1802d82f4
   1801dadb0:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dadb4:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dadb8:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801dadbf:	c7 81 d8 1e 00 00 00 	mov    DWORD PTR [rcx+0x1ed8],0x43600000
   1801dadc6:	00 60 43 
   1801dadc9:	48 c7 85 e0 03 00 00 	mov    QWORD PTR [rbp+0x3e0],0x0
   1801dadd0:	00 00 00 00 
   1801dadd4:	33 c0                	xor    eax,eax
   1801dadd6:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   1801daddb:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   1801dade0:	c7 44 24 28 40 00 00 	mov    DWORD PTR [rsp+0x28],0x40
   1801dade7:	00 
   1801dade8:	48 8d 85 e0 03 00 00 	lea    rax,[rbp+0x3e0]
   1801dadef:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801dadf4:	41 b9 00 02 00 00    	mov    r9d,0x200
   1801dadfa:	4c 8d 05 df 59 22 00 	lea    r8,[rip+0x2259df]        # 0x1804007e0
   1801dae01:	48 8d 15 b8 96 19 00 	lea    rdx,[rip+0x1996b8]        # 0x1803744c0
   1801dae08:	48 8d 0d c9 96 19 00 	lea    rcx,[rip+0x1996c9]        # 0x1803744d8
   1801dae0f:	e8 cc c6 0d 00       	call   0x1802b74e0
   1801dae14:	44 0f b6 e8          	movzx  r13d,al
   1801dae18:	48 8b 0c fe          	mov    rcx,QWORD PTR [rsi+rdi*8]
   1801dae1c:	41 80 3c 0f 00       	cmp    BYTE PTR [r15+rcx*1],0x0
   1801dae21:	75 05                	jne    0x1801dae28
   1801dae23:	e8 cc d4 0f 00       	call   0x1802d82f4
   1801dae28:	4c 8b 04 fe          	mov    r8,QWORD PTR [rsi+rdi*8]
   1801dae2c:	4b 8b 0c 04          	mov    rcx,QWORD PTR [r12+r8*1]
   1801dae30:	8b 91 94 15 00 00    	mov    edx,DWORD PTR [rcx+0x1594]
   1801dae36:	85 d2                	test   edx,edx
   1801dae38:	74 0b                	je     0x1801dae45
   1801dae3a:	3b 91 f8 1e 00 00    	cmp    edx,DWORD PTR [rcx+0x1ef8]
   1801dae40:	0f 94 c0             	sete   al
   1801dae43:	eb 02                	jmp    0x1801dae47
   1801dae45:	32 c0                	xor    al,al
   1801dae47:	88 05 b7 3c 22 00    	mov    BYTE PTR [rip+0x223cb7],al        # 0x1803feb04
   1801dae4d:	45 84 ed             	test   r13b,r13b
   1801dae50:	75 26                	jne    0x1801dae78
   1801dae52:	47 38 2c 07          	cmp    BYTE PTR [r15+r8*1],r13b
   1801dae56:	75 05                	jne    0x1801dae5d
   1801dae58:	e8 97 d4 0f 00       	call   0x1802d82f4
   1801dae5d:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dae61:	4d 8b 2c 04          	mov    r13,QWORD PTR [r12+rax*1]
   1801dae65:	e8 36 80 09 00       	call   0x180272ea0
   1801dae6a:	84 c0                	test   al,al
   1801dae6c:	74 28                	je     0x1801dae96
   1801dae6e:	41 80 bd cc 15 00 00 	cmp    BYTE PTR [r13+0x15cc],0x0
   1801dae75:	00 
   1801dae76:	74 1e                	je     0x1801dae96
   1801dae78:	48 8d 0d 61 59 22 00 	lea    rcx,[rip+0x225961]        # 0x1804007e0
   1801dae7f:	e8 2f e6 0f 00       	call   0x1802d94b3
   1801dae84:	4c 8b c0             	mov    r8,rax
   1801dae87:	48 8d 15 52 59 22 00 	lea    rdx,[rip+0x225952]        # 0x1804007e0
   1801dae8e:	48 8b cb             	mov    rcx,rbx
   1801dae91:	e8 6a 78 03 00       	call   0x180212700
   1801dae96:	c7 85 10 02 00 00 00 	mov    DWORD PTR [rbp+0x210],0x3fc00000
   1801dae9d:	00 c0 3f 
   1801daea0:	c7 85 0c 02 00 00 00 	mov    DWORD PTR [rbp+0x20c],0x3f400000
   1801daea7:	00 40 3f 
   1801daeaa:	f3 0f 10 05 f2 f7 1f 	movss  xmm0,DWORD PTR [rip+0x1ff7f2]        # 0x1803da6a4
   1801daeb1:	00 
   1801daeb2:	48 8d 8d 0c 02 00 00 	lea    rcx,[rbp+0x20c]
   1801daeb9:	44 0f 2f c8          	comiss xmm9,xmm0
   1801daebd:	48 8d 1d e0 f7 1f 00 	lea    rbx,[rip+0x1ff7e0]        # 0x1803da6a4
   1801daec4:	48 0f 46 cb          	cmovbe rcx,rbx
   1801daec8:	48 8d 85 10 02 00 00 	lea    rax,[rbp+0x210]
   1801daecf:	41 0f 2f c4          	comiss xmm0,xmm12
   1801daed3:	48 0f 46 c1          	cmovbe rax,rcx
   1801daed7:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801daedb:	f3 0f 59 0d 5d 60 1a 	mulss  xmm1,DWORD PTR [rip+0x1a605d]        # 0x180380f40
   1801daee2:	00 
   1801daee3:	41 0f 28 c0          	movaps xmm0,xmm8
   1801daee7:	e8 c4 46 0a 00       	call   0x18027f5b0
   1801daeec:	c7 85 18 02 00 00 00 	mov    DWORD PTR [rbp+0x218],0x3fc00000
   1801daef3:	00 c0 3f 
   1801daef6:	c7 85 14 02 00 00 00 	mov    DWORD PTR [rbp+0x214],0x3f400000
   1801daefd:	00 40 3f 
   1801daf00:	f3 0f 10 05 9c f7 1f 	movss  xmm0,DWORD PTR [rip+0x1ff79c]        # 0x1803da6a4
   1801daf07:	00 
   1801daf08:	48 8d 8d 14 02 00 00 	lea    rcx,[rbp+0x214]
   1801daf0f:	44 0f 2f c8          	comiss xmm9,xmm0
   1801daf13:	48 0f 46 cb          	cmovbe rcx,rbx
   1801daf17:	48 8d 85 18 02 00 00 	lea    rax,[rbp+0x218]
   1801daf1e:	41 0f 2f c4          	comiss xmm0,xmm12
   1801daf22:	48 0f 46 c1          	cmovbe rax,rcx
   1801daf26:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801daf2a:	f3 0f 59 05 aa 61 1a 	mulss  xmm0,DWORD PTR [rip+0x1a61aa]        # 0x1803810dc
   1801daf31:	00 
   1801daf32:	f3 0f 11 85 e8 03 00 	movss  DWORD PTR [rbp+0x3e8],xmm0
   1801daf39:	00 
   1801daf3a:	c7 85 ec 03 00 00 00 	mov    DWORD PTR [rbp+0x3ec],0x0
   1801daf41:	00 00 00 
   1801daf44:	45 33 c0             	xor    r8d,r8d
   1801daf47:	48 8d 95 e8 03 00 00 	lea    rdx,[rbp+0x3e8]
   1801daf4e:	48 8d 0d 93 95 19 00 	lea    rcx,[rip+0x199593]        # 0x1803744e8
   1801daf55:	e8 06 10 0d 00       	call   0x1802abf60
   1801daf5a:	84 c0                	test   al,al
   1801daf5c:	0f 84 ff 00 00 00    	je     0x1801db061
   1801daf62:	b8 01 00 00 00       	mov    eax,0x1
   1801daf67:	86 05 cc 87 24 00    	xchg   BYTE PTR [rip+0x2487cc],al        # 0x180423739
   1801daf6d:	84 c0                	test   al,al
   1801daf6f:	0f 85 ec 00 00 00    	jne    0x1801db061
   1801daf75:	33 db                	xor    ebx,ebx
   1801daf77:	48 89 9d d0 10 00 00 	mov    QWORD PTR [rbp+0x10d0],rbx
   1801daf7e:	b9 01 00 00 00       	mov    ecx,0x1
   1801daf83:	e8 c8 d3 0f 00       	call   0x1802d8350
   1801daf88:	48 89 85 d0 10 00 00 	mov    QWORD PTR [rbp+0x10d0],rax
   1801daf8f:	c7 45 84 80 00 00 00 	mov    DWORD PTR [rbp-0x7c],0x80
   1801daf96:	48 8d 8d 28 03 00 00 	lea    rcx,[rbp+0x328]
   1801daf9d:	48 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],rcx
   1801dafa2:	89 5c 24 20          	mov    DWORD PTR [rsp+0x20],ebx
   1801dafa6:	4c 8b c8             	mov    r9,rax
   1801dafa9:	4c 8d 05 c0 5c 04 00 	lea    r8,[rip+0x45cc0]        # 0x180220c70
   1801dafb0:	33 d2                	xor    edx,edx
   1801dafb2:	33 c9                	xor    ecx,ecx
   1801dafb4:	ff 15 fe 1a 13 00    	call   QWORD PTR [rip+0x131afe]        # 0x18030cab8
   1801dafba:	48 89 85 20 03 00 00 	mov    QWORD PTR [rbp+0x320],rax
   1801dafc1:	48 85 c0             	test   rax,rax
   1801dafc4:	0f 84 85 00 00 00    	je     0x1801db04f
   1801dafca:	48 89 9d d0 10 00 00 	mov    QWORD PTR [rbp+0x10d0],rbx
   1801dafd1:	b8 80 00 00 00       	mov    eax,0x80
   1801dafd6:	0f ba f0 07          	btr    eax,0x7
   1801dafda:	89 45 80             	mov    DWORD PTR [rbp-0x80],eax
   1801dafdd:	89 45 84             	mov    DWORD PTR [rbp-0x7c],eax
   1801dafe0:	48 8b 8d d0 10 00 00 	mov    rcx,QWORD PTR [rbp+0x10d0]
   1801dafe7:	48 85 c9             	test   rcx,rcx
   1801dafea:	74 0b                	je     0x1801daff7
   1801dafec:	ba 01 00 00 00       	mov    edx,0x1
   1801daff1:	e8 ea d7 0f 00       	call   0x1802d87e0
   1801daff6:	90                   	nop
   1801daff7:	83 bd 28 03 00 00 00 	cmp    DWORD PTR [rbp+0x328],0x0
   1801daffe:	75 0c                	jne    0x1801db00c
   1801db000:	b9 01 00 00 00       	mov    ecx,0x1
   1801db005:	ff 15 6d 14 13 00    	call   QWORD PTR [rip+0x13146d]        # 0x18030c478
   1801db00b:	cc                   	int3
   1801db00c:	0f 28 85 20 03 00 00 	movaps xmm0,XMMWORD PTR [rbp+0x320]
   1801db013:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801db019:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801db01e:	ff 15 2c 15 13 00    	call   QWORD PTR [rip+0x13152c]        # 0x18030c550
   1801db024:	85 c0                	test   eax,eax
   1801db026:	74 0c                	je     0x1801db034
   1801db028:	b9 01 00 00 00       	mov    ecx,0x1
   1801db02d:	ff 15 45 14 13 00    	call   QWORD PTR [rip+0x131445]        # 0x18030c478
   1801db033:	cc                   	int3
   1801db034:	0f 57 c0             	xorps  xmm0,xmm0
   1801db037:	66 0f 7f 85 20 03 00 	movdqa XMMWORD PTR [rbp+0x320],xmm0
   1801db03e:	00 
   1801db03f:	83 bd 28 03 00 00 00 	cmp    DWORD PTR [rbp+0x328],0x0
   1801db046:	74 19                	je     0x1801db061
   1801db048:	ff 15 72 1a 13 00    	call   QWORD PTR [rip+0x131a72]        # 0x18030cac0
   1801db04e:	90                   	nop
   1801db04f:	89 9d 28 03 00 00    	mov    DWORD PTR [rbp+0x328],ebx
   1801db055:	b9 06 00 00 00       	mov    ecx,0x6
   1801db05a:	ff 15 18 14 13 00    	call   QWORD PTR [rip+0x131418]        # 0x18030c478
   1801db060:	90                   	nop
   1801db061:	48 8d 15 98 94 19 00 	lea    rdx,[rip+0x199498]        # 0x180374500
   1801db068:	e9 7e 01 00 00       	jmp    0x1801db1eb
   1801db06d:	48 89 85 b8 12 00 00 	mov    QWORD PTR [rbp+0x12b8],rax
   1801db074:	4c 8d 85 b8 12 00 00 	lea    r8,[rbp+0x12b8]
   1801db07b:	48 8d 95 70 0e 00 00 	lea    rdx,[rbp+0xe70]
   1801db082:	e8 a9 69 06 00       	call   0x180241a30
   1801db087:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db08a:	48 83 c1 28          	add    rcx,0x28
   1801db08e:	48 b8 f4 8a 8d 58 be 	movabs rax,0xcf92fdbe588d8af4
   1801db095:	fd 92 cf 
   1801db098:	48 89 85 c0 12 00 00 	mov    QWORD PTR [rbp+0x12c0],rax
   1801db09f:	4c 8d 85 c0 12 00 00 	lea    r8,[rbp+0x12c0]
   1801db0a6:	48 8d 95 80 0e 00 00 	lea    rdx,[rbp+0xe80]
   1801db0ad:	e8 7e 69 06 00       	call   0x180241a30
   1801db0b2:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db0b5:	48 83 c1 28          	add    rcx,0x28
   1801db0b9:	e8 02 78 02 00       	call   0x1802028c0
   1801db0be:	48 8b d8             	mov    rbx,rax
   1801db0c1:	80 3d 30 8a 24 00 00 	cmp    BYTE PTR [rip+0x248a30],0x0        # 0x180423af8
   1801db0c8:	75 24                	jne    0x1801db0ee
   1801db0ca:	48 83 78 18 0f       	cmp    QWORD PTR [rax+0x18],0xf
   1801db0cf:	76 05                	jbe    0x1801db0d6
   1801db0d1:	4c 8b 00             	mov    r8,QWORD PTR [rax]
   1801db0d4:	eb 03                	jmp    0x1801db0d9
   1801db0d6:	4c 8b c3             	mov    r8,rbx
   1801db0d9:	4d 8b cd             	mov    r9,r13
   1801db0dc:	ba 40 01 00 00       	mov    edx,0x140
   1801db0e1:	48 8d 0d 98 3a 22 00 	lea    rcx,[rip+0x223a98]        # 0x1803feb80
   1801db0e8:	ff 15 12 1b 13 00    	call   QWORD PTR [rip+0x131b12]        # 0x18030cc00
   1801db0ee:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db0f2:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801db0f7:	75 05                	jne    0x1801db0fe
   1801db0f9:	e8 f6 d1 0f 00       	call   0x1802d82f4
   1801db0fe:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db102:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801db106:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801db10d:	c7 81 d8 1e 00 00 00 	mov    DWORD PTR [rcx+0x1ed8],0x43960000
   1801db114:	00 96 43 
   1801db117:	48 c7 85 f0 03 00 00 	mov    QWORD PTR [rbp+0x3f0],0x0
   1801db11e:	00 00 00 00 
   1801db122:	33 c0                	xor    eax,eax
   1801db124:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   1801db129:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   1801db12e:	c7 44 24 28 40 00 00 	mov    DWORD PTR [rsp+0x28],0x40
   1801db135:	00 
   1801db136:	48 8d 85 f0 03 00 00 	lea    rax,[rbp+0x3f0]
   1801db13d:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801db142:	41 b9 40 01 00 00    	mov    r9d,0x140
   1801db148:	4c 8d 05 31 3a 22 00 	lea    r8,[rip+0x223a31]        # 0x1803feb80
   1801db14f:	48 8d 15 22 94 19 00 	lea    rdx,[rip+0x199422]        # 0x180374578
   1801db156:	48 8d 0d 3b 94 19 00 	lea    rcx,[rip+0x19943b]        # 0x180374598
   1801db15d:	e8 7e c3 0d 00       	call   0x1802b74e0
   1801db162:	44 0f b6 e8          	movzx  r13d,al
   1801db166:	48 8b 0c fe          	mov    rcx,QWORD PTR [rsi+rdi*8]
   1801db16a:	41 80 3c 0f 00       	cmp    BYTE PTR [r15+rcx*1],0x0
   1801db16f:	75 05                	jne    0x1801db176
   1801db171:	e8 7e d1 0f 00       	call   0x1802d82f4
   1801db176:	4c 8b 04 fe          	mov    r8,QWORD PTR [rsi+rdi*8]
   1801db17a:	4b 8b 0c 04          	mov    rcx,QWORD PTR [r12+r8*1]
   1801db17e:	8b 91 94 15 00 00    	mov    edx,DWORD PTR [rcx+0x1594]
   1801db184:	85 d2                	test   edx,edx
   1801db186:	74 0b                	je     0x1801db193
   1801db188:	3b 91 f8 1e 00 00    	cmp    edx,DWORD PTR [rcx+0x1ef8]
   1801db18e:	0f 94 c0             	sete   al
   1801db191:	eb 02                	jmp    0x1801db195
   1801db193:	32 c0                	xor    al,al
   1801db195:	88 05 5d 89 24 00    	mov    BYTE PTR [rip+0x24895d],al        # 0x180423af8
   1801db19b:	45 84 ed             	test   r13b,r13b
   1801db19e:	75 26                	jne    0x1801db1c6
   1801db1a0:	47 38 2c 07          	cmp    BYTE PTR [r15+r8*1],r13b
   1801db1a4:	75 05                	jne    0x1801db1ab
   1801db1a6:	e8 49 d1 0f 00       	call   0x1802d82f4
   1801db1ab:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db1af:	4d 8b 2c 04          	mov    r13,QWORD PTR [r12+rax*1]
   1801db1b3:	e8 e8 7c 09 00       	call   0x180272ea0
   1801db1b8:	84 c0                	test   al,al
   1801db1ba:	74 28                	je     0x1801db1e4
   1801db1bc:	41 80 bd cc 15 00 00 	cmp    BYTE PTR [r13+0x15cc],0x0
   1801db1c3:	00 
   1801db1c4:	74 1e                	je     0x1801db1e4
   1801db1c6:	48 8d 0d b3 39 22 00 	lea    rcx,[rip+0x2239b3]        # 0x1803feb80
   1801db1cd:	e8 e1 e2 0f 00       	call   0x1802d94b3
   1801db1d2:	4c 8b c0             	mov    r8,rax
   1801db1d5:	48 8d 15 a4 39 22 00 	lea    rdx,[rip+0x2239a4]        # 0x1803feb80
   1801db1dc:	48 8b cb             	mov    rcx,rbx
   1801db1df:	e8 1c 75 03 00       	call   0x180212700
   1801db1e4:	48 8d 15 c5 93 19 00 	lea    rdx,[rip+0x1993c5]        # 0x1803745b0
   1801db1eb:	49 8d 9e b8 00 00 00 	lea    rbx,[r14+0xb8]
   1801db1f2:	48 8b cb             	mov    rcx,rbx
   1801db1f5:	e8 b6 f9 0c 00       	call   0x1802aabb0
   1801db1fa:	e8 41 49 0d 00       	call   0x1802afb40
   1801db1ff:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801db206:	56 fd 93 
   1801db209:	48 89 85 c8 12 00 00 	mov    QWORD PTR [rbp+0x12c8],rax
   1801db210:	4c 8d 85 c8 12 00 00 	lea    r8,[rbp+0x12c8]
   1801db217:	48 8d 95 90 0e 00 00 	lea    rdx,[rbp+0xe90]
   1801db21e:	48 8d 0d cb fb 21 00 	lea    rcx,[rip+0x21fbcb]        # 0x1803fadf0
   1801db225:	e8 06 68 06 00       	call   0x180241a30
   1801db22a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db22d:	48 83 c1 28          	add    rcx,0x28
   1801db231:	48 b8 4d 59 ed 17 d4 	movabs rax,0xcf94b2d417ed594d
   1801db238:	b2 94 cf 
   1801db23b:	48 89 85 d0 12 00 00 	mov    QWORD PTR [rbp+0x12d0],rax
   1801db242:	4c 8d 85 d0 12 00 00 	lea    r8,[rbp+0x12d0]
   1801db249:	48 8d 95 a0 0e 00 00 	lea    rdx,[rbp+0xea0]
   1801db250:	e8 db 67 06 00       	call   0x180241a30
   1801db255:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db258:	48 83 c1 28          	add    rcx,0x28
   1801db25c:	e8 5f 1d 02 00       	call   0x1801fcfc0
   1801db261:	48 8b d0             	mov    rdx,rax
   1801db264:	48 8d 0d e5 93 19 00 	lea    rcx,[rip+0x1993e5]        # 0x180374650
   1801db26b:	e8 f0 58 fc ff       	call   0x1801a0b60
   1801db270:	33 c9                	xor    ecx,ecx
   1801db272:	e8 e9 3b 09 00       	call   0x18026ee60
   1801db277:	84 c0                	test   al,al
   1801db279:	74 0c                	je     0x1801db287
   1801db27b:	48 8d 0d ee 93 19 00 	lea    rcx,[rip+0x1993ee]        # 0x180374670
   1801db282:	e8 79 5a 0a 00       	call   0x180280d00
   1801db287:	48 83 3d b9 e8 20 00 	cmp    QWORD PTR [rip+0x20e8b9],0x0        # 0x1803e9b48
   1801db28e:	00 
   1801db28f:	74 36                	je     0x1801db2c7
   1801db291:	4c 8d 05 a0 e8 20 00 	lea    r8,[rip+0x20e8a0]        # 0x1803e9b38
   1801db298:	48 83 3d b0 e8 20 00 	cmp    QWORD PTR [rip+0x20e8b0],0xf        # 0x1803e9b50
   1801db29f:	0f 
   1801db2a0:	4c 0f 47 05 90 e8 20 	cmova  r8,QWORD PTR [rip+0x20e890]        # 0x1803e9b38
   1801db2a7:	00 
   1801db2a8:	80 3d 93 84 24 00 00 	cmp    BYTE PTR [rip+0x248493],0x0        # 0x180423742
   1801db2af:	74 07                	je     0x1801db2b8
   1801db2b1:	49 8d 9e 98 00 00 00 	lea    rbx,[r14+0x98]
   1801db2b8:	48 8d 15 ed 7e 16 00 	lea    rdx,[rip+0x167eed]        # 0x1803431ac
   1801db2bf:	48 8b cb             	mov    rcx,rbx
   1801db2c2:	e8 e9 f8 0c 00       	call   0x1802aabb0
   1801db2c7:	80 3d 2f fa 21 00 00 	cmp    BYTE PTR [rip+0x21fa2f],0x0        # 0x1803facfd
   1801db2ce:	74 27                	je     0x1801db2f7
   1801db2d0:	48 8b 05 21 19 22 00 	mov    rax,QWORD PTR [rip+0x221921]        # 0x1803fcbf8
   1801db2d7:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801db2de:	56 fd 93 
   1801db2e1:	48 39 05 08 19 22 00 	cmp    QWORD PTR [rip+0x221908],rax        # 0x1803fcbf0
   1801db2e8:	74 1c                	je     0x1801db306
   1801db2ea:	48 83 e8 08          	sub    rax,0x8
   1801db2ee:	48 89 05 03 19 22 00 	mov    QWORD PTR [rip+0x221903],rax        # 0x1803fcbf8
   1801db2f5:	eb 0f                	jmp    0x1801db306
   1801db2f7:	e8 04 65 0a 00       	call   0x180281800
   1801db2fc:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801db303:	56 fd 93 
   1801db306:	e8 05 81 09 00       	call   0x180273410
   1801db30b:	41 bd 02 00 00 00    	mov    r13d,0x2
   1801db311:	41 8b cd             	mov    ecx,r13d
   1801db314:	e8 97 f8 08 00       	call   0x18026abb0
   1801db319:	41 8b cd             	mov    ecx,r13d
   1801db31c:	e8 6f f5 08 00       	call   0x18026a890
   1801db321:	45 33 c9             	xor    r9d,r9d
   1801db324:	45 0f 14 da          	unpcklps xmm11,xmm10
   1801db328:	66 4d 0f 7e d8       	movq   r8,xmm11
   1801db32d:	ba 05 00 00 00       	mov    edx,0x5
   1801db332:	48 8d 0d e7 94 19 00 	lea    rcx,[rip+0x1994e7]        # 0x180374820
   1801db339:	e8 82 48 fc ff       	call   0x18019fbc0
   1801db33e:	84 c0                	test   al,al
   1801db340:	0f 84 f6 41 00 00    	je     0x1801df53c
   1801db346:	41 0f 10 46 58       	movups xmm0,XMMWORD PTR [r14+0x58]
   1801db34b:	c7 85 f8 03 00 00 00 	mov    DWORD PTR [rbp+0x3f8],0xbf800000
   1801db352:	00 80 bf 
   1801db355:	c7 85 fc 03 00 00 00 	mov    DWORD PTR [rbp+0x3fc],0x41c00000
   1801db35c:	00 c0 41 
   1801db35f:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801db365:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801db36a:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801db36f:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801db374:	4c 8d 85 f8 03 00 00 	lea    r8,[rbp+0x3f8]
   1801db37b:	ba 0c 00 00 00       	mov    edx,0xc
   1801db380:	48 8d 0d a1 94 19 00 	lea    rcx,[rip+0x1994a1]        # 0x180374828
   1801db387:	e8 b4 17 fc ff       	call   0x18019cb40
   1801db38c:	84 c0                	test   al,al
   1801db38e:	74 13                	je     0x1801db3a3
   1801db390:	c6 05 5b 19 22 00 00 	mov    BYTE PTR [rip+0x22195b],0x0        # 0x1803fccf2
   1801db397:	48 8d 0d aa 94 19 00 	lea    rcx,[rip+0x1994aa]        # 0x180374848
   1801db39e:	e8 2d 5c 0a 00       	call   0x180280fd0
   1801db3a3:	80 3d 48 19 22 00 00 	cmp    BYTE PTR [rip+0x221948],0x0        # 0x1803fccf2
   1801db3aa:	74 4c                	je     0x1801db3f8
   1801db3ac:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db3b0:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801db3b5:	75 05                	jne    0x1801db3bc
   1801db3b7:	e8 38 cf 0f 00       	call   0x1802d82f4
   1801db3bc:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db3c0:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801db3c4:	83 89 48 1f 00 00 01 	or     DWORD PTR [rcx+0x1f48],0x1
   1801db3cb:	f2 0f 10 05 cd ad 24 	movsd  xmm0,QWORD PTR [rip+0x24adcd]        # 0x1804261a0
   1801db3d2:	00 
   1801db3d3:	f2 0f 11 81 58 1f 00 	movsd  QWORD PTR [rcx+0x1f58],xmm0
   1801db3da:	00 
   1801db3db:	45 33 ed             	xor    r13d,r13d
   1801db3de:	4c 89 a9 60 1f 00 00 	mov    QWORD PTR [rcx+0x1f60],r13
   1801db3e5:	c7 81 4c 1f 00 00 01 	mov    DWORD PTR [rcx+0x1f4c],0x1
   1801db3ec:	00 00 00 
   1801db3ef:	44 88 2d fc 18 22 00 	mov    BYTE PTR [rip+0x2218fc],r13b        # 0x1803fccf2
   1801db3f6:	eb 03                	jmp    0x1801db3fb
   1801db3f8:	45 33 ed             	xor    r13d,r13d
   1801db3fb:	f3 0f 10 35 a1 f2 1f 	movss  xmm6,DWORD PTR [rip+0x1ff2a1]        # 0x1803da6a4
   1801db402:	00 
   1801db403:	f3 0f 59 35 11 5e 1a 	mulss  xmm6,DWORD PTR [rip+0x1a5e11]        # 0x18038121c
   1801db40a:	00 
   1801db40b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db40f:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801db414:	75 05                	jne    0x1801db41b
   1801db416:	e8 d9 ce 0f 00       	call   0x1802d82f4
   1801db41b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db41f:	49 8b 14 04          	mov    rdx,QWORD PTR [r12+rax*1]
   1801db423:	83 8a 48 1f 00 00 02 	or     DWORD PTR [rdx+0x1f48],0x2
   1801db42a:	f3 0f 11 b2 68 1f 00 	movss  DWORD PTR [rdx+0x1f68],xmm6
   1801db431:	00 
   1801db432:	44 89 aa 6c 1f 00 00 	mov    DWORD PTR [rdx+0x1f6c],r13d
   1801db439:	c7 82 50 1f 00 00 01 	mov    DWORD PTR [rdx+0x1f50],0x1
   1801db440:	00 00 00 
   1801db443:	48 8d 0d fe 93 19 00 	lea    rcx,[rip+0x1993fe]        # 0x180374848
   1801db44a:	e8 31 f2 fb ff       	call   0x18019a680
   1801db44f:	84 c0                	test   al,al
   1801db451:	0f 84 d5 3c 00 00    	je     0x1801df12c
   1801db457:	80 3d 9f f8 21 00 00 	cmp    BYTE PTR [rip+0x21f89f],0x0        # 0x1803facfd
   1801db45e:	74 14                	je     0x1801db474
   1801db460:	48 8b 05 91 17 22 00 	mov    rax,QWORD PTR [rip+0x221791]        # 0x1803fcbf8
   1801db467:	48 39 05 82 17 22 00 	cmp    QWORD PTR [rip+0x221782],rax        # 0x1803fcbf0
   1801db46e:	0f 85 2f 01 00 00    	jne    0x1801db5a3
   1801db474:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db478:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801db47d:	75 05                	jne    0x1801db484
   1801db47f:	e8 70 ce 0f 00       	call   0x1802d82f4
   1801db484:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801db488:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801db48c:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801db493:	80 b9 d3 00 00 00 00 	cmp    BYTE PTR [rcx+0xd3],0x0
   1801db49a:	0f 85 03 01 00 00    	jne    0x1801db5a3
   1801db4a0:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801db4a5:	75 05                	jne    0x1801db4ac
   1801db4a7:	e8 48 ce 0f 00       	call   0x1802d82f4
   1801db4ac:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801db4b0:	49 8b 04 14          	mov    rax,QWORD PTR [r12+rdx*1]
   1801db4b4:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801db4bb:	f3 0f 10 79 34       	movss  xmm7,DWORD PTR [rcx+0x34]
   1801db4c0:	0f 2e 3d e1 2f 22 00 	ucomiss xmm7,DWORD PTR [rip+0x222fe1]        # 0x1803fe4a8
   1801db4c7:	7a 06                	jp     0x1801db4cf
   1801db4c9:	0f 84 d4 00 00 00    	je     0x1801db5a3
   1801db4cf:	f3 0f 11 3d d1 2f 22 	movss  DWORD PTR [rip+0x222fd1],xmm7        # 0x1803fe4a8
   1801db4d6:	00 
   1801db4d7:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801db4dc:	75 05                	jne    0x1801db4e3
   1801db4de:	e8 11 ce 0f 00       	call   0x1802d82f4
   1801db4e3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db4e7:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801db4eb:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801db4f2:	f3 44 0f 10 50 28    	movss  xmm10,DWORD PTR [rax+0x28]
   1801db4f8:	f3 44 0f 10 58 2c    	movss  xmm11,DWORD PTR [rax+0x2c]
   1801db4fe:	c7 85 1c 02 00 00 00 	mov    DWORD PTR [rbp+0x21c],0x3fc00000
   1801db505:	00 c0 3f 
   1801db508:	c7 85 cc 00 00 00 00 	mov    DWORD PTR [rbp+0xcc],0x3f400000
   1801db50f:	00 40 3f 
   1801db512:	f3 0f 10 05 8a f1 1f 	movss  xmm0,DWORD PTR [rip+0x1ff18a]        # 0x1803da6a4
   1801db519:	00 
   1801db51a:	48 8d 8d cc 00 00 00 	lea    rcx,[rbp+0xcc]
   1801db521:	44 0f 2f c8          	comiss xmm9,xmm0
   1801db525:	48 8d 05 78 f1 1f 00 	lea    rax,[rip+0x1ff178]        # 0x1803da6a4
   1801db52c:	48 0f 46 c8          	cmovbe rcx,rax
   1801db530:	48 8d 85 1c 02 00 00 	lea    rax,[rbp+0x21c]
   1801db537:	41 0f 2f c4          	comiss xmm0,xmm12
   1801db53b:	48 0f 46 c1          	cmovbe rax,rcx
   1801db53f:	f3 0f 10 30          	movss  xmm6,DWORD PTR [rax]
   1801db543:	f3 44 0f 10 35 f4 59 	movss  xmm14,DWORD PTR [rip+0x1a59f4]        # 0x180380f40
   1801db54a:	1a 00 
   1801db54c:	f3 41 0f 59 f6       	mulss  xmm6,xmm14
   1801db551:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db555:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801db55a:	75 05                	jne    0x1801db561
   1801db55c:	e8 93 cd 0f 00       	call   0x1802d82f4
   1801db561:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801db565:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801db569:	f3 0f 10 41 34       	movss  xmm0,DWORD PTR [rcx+0x34]
   1801db56e:	f3 0f 5c c7          	subss  xmm0,xmm7
   1801db572:	f3 0f 5c c6          	subss  xmm0,xmm6
   1801db576:	f3 0f 5f f0          	maxss  xmm6,xmm0
   1801db57a:	44 0f 2f de          	comiss xmm11,xmm6
   1801db57e:	76 18                	jbe    0x1801db598
   1801db580:	f3 44 0f 11 15 17 ac 	movss  DWORD PTR [rip+0x24ac17],xmm10        # 0x1804261a0
   1801db587:	24 00 
   1801db589:	f3 0f 11 35 13 ac 24 	movss  DWORD PTR [rip+0x24ac13],xmm6        # 0x1804261a4
   1801db590:	00 
   1801db591:	c6 05 5a 17 22 00 01 	mov    BYTE PTR [rip+0x22175a],0x1        # 0x1803fccf2
   1801db598:	f3 44 0f 10 15 e3 5d 	movss  xmm10,DWORD PTR [rip+0x1a5de3]        # 0x180381384
   1801db59f:	1a 00 
   1801db5a1:	eb 09                	jmp    0x1801db5ac
   1801db5a3:	f3 44 0f 10 35 94 59 	movss  xmm14,DWORD PTR [rip+0x1a5994]        # 0x180380f40
   1801db5aa:	1a 00 
   1801db5ac:	33 d2                	xor    edx,edx
   1801db5ae:	48 8d 0d ab 92 19 00 	lea    rcx,[rip+0x1992ab]        # 0x180374860
   1801db5b5:	e8 a6 ee fb ff       	call   0x18019a460
   1801db5ba:	c7 85 24 02 00 00 04 	mov    DWORD PTR [rbp+0x224],0x4
   1801db5c1:	00 00 00 
   1801db5c4:	44 89 ad 20 02 00 00 	mov    DWORD PTR [rbp+0x220],r13d
   1801db5cb:	8b 15 7b fc 21 00    	mov    edx,DWORD PTR [rip+0x21fc7b]        # 0x1803fb24c
   1801db5d1:	48 8d 8d 20 02 00 00 	lea    rcx,[rbp+0x220]
   1801db5d8:	85 d2                	test   edx,edx
   1801db5da:	48 8d 05 6b fc 21 00 	lea    rax,[rip+0x21fc6b]        # 0x1803fb24c
   1801db5e1:	48 0f 49 c8          	cmovns rcx,rax
   1801db5e5:	48 8d 85 24 02 00 00 	lea    rax,[rbp+0x224]
   1801db5ec:	83 fa 04             	cmp    edx,0x4
   1801db5ef:	48 0f 4e c1          	cmovle rax,rcx
   1801db5f3:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801db5f6:	89 05 50 fc 21 00    	mov    DWORD PTR [rip+0x21fc50],eax        # 0x1803fb24c
   1801db5fc:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801db603:	48 8d 05 0e 14 20 00 	lea    rax,[rip+0x20140e]        # 0x1803dca18
   1801db60a:	48 03 c8             	add    rcx,rax
   1801db60d:	4c 8d 05 4c 92 19 00 	lea    r8,[rip+0x19924c]        # 0x180374860
   1801db614:	48 8d 15 91 7b 16 00 	lea    rdx,[rip+0x167b91]        # 0x1803431ac
   1801db61b:	e8 90 f5 0c 00       	call   0x1802aabb0
   1801db620:	48 89 9d d8 12 00 00 	mov    QWORD PTR [rbp+0x12d8],rbx
   1801db627:	4c 8d 85 d8 12 00 00 	lea    r8,[rbp+0x12d8]
   1801db62e:	48 8d 95 b0 0e 00 00 	lea    rdx,[rbp+0xeb0]
   1801db635:	48 8d 0d b4 f7 21 00 	lea    rcx,[rip+0x21f7b4]        # 0x1803fadf0
   1801db63c:	e8 ef 63 06 00       	call   0x180241a30
   1801db641:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db644:	48 83 c1 28          	add    rcx,0x28
   1801db648:	48 b8 42 d4 59 c2 84 	movabs rax,0x2cdd3384c259d442
   1801db64f:	33 dd 2c 
   1801db652:	48 89 85 e0 12 00 00 	mov    QWORD PTR [rbp+0x12e0],rax
   1801db659:	4c 8d 85 e0 12 00 00 	lea    r8,[rbp+0x12e0]
   1801db660:	48 8d 95 c0 0e 00 00 	lea    rdx,[rbp+0xec0]
   1801db667:	e8 c4 63 06 00       	call   0x180241a30
   1801db66c:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db66f:	48 83 c1 28          	add    rcx,0x28
   1801db673:	e8 48 19 02 00       	call   0x1801fcfc0
   1801db678:	48 8b d0             	mov    rdx,rax
   1801db67b:	48 8d 0d ee 91 19 00 	lea    rcx,[rip+0x1991ee]        # 0x180374870
   1801db682:	e8 d9 54 fc ff       	call   0x1801a0b60
   1801db687:	c7 85 2c 02 00 00 00 	mov    DWORD PTR [rbp+0x22c],0x3fc00000
   1801db68e:	00 c0 3f 
   1801db691:	c7 85 28 02 00 00 00 	mov    DWORD PTR [rbp+0x228],0x3f400000
   1801db698:	00 40 3f 
   1801db69b:	f3 0f 10 05 01 f0 1f 	movss  xmm0,DWORD PTR [rip+0x1ff001]        # 0x1803da6a4
   1801db6a2:	00 
   1801db6a3:	48 8d 8d 28 02 00 00 	lea    rcx,[rbp+0x228]
   1801db6aa:	44 0f 2f c8          	comiss xmm9,xmm0
   1801db6ae:	48 8d 05 ef ef 1f 00 	lea    rax,[rip+0x1fefef]        # 0x1803da6a4
   1801db6b5:	48 0f 46 c8          	cmovbe rcx,rax
   1801db6b9:	48 8d 85 2c 02 00 00 	lea    rax,[rbp+0x22c]
   1801db6c0:	41 0f 2f c4          	comiss xmm0,xmm12
   1801db6c4:	48 0f 46 c1          	cmovbe rax,rcx
   1801db6c8:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801db6cc:	f3 44 0f 10 1d c7 57 	movss  xmm11,DWORD PTR [rip+0x1a57c7]        # 0x180380e9c
   1801db6d3:	1a 00 
   1801db6d5:	f3 41 0f 59 cb       	mulss  xmm1,xmm11
   1801db6da:	41 0f 28 c0          	movaps xmm0,xmm8
   1801db6de:	e8 cd 3e 0a 00       	call   0x18027f5b0
   1801db6e3:	41 0f 28 c0          	movaps xmm0,xmm8
   1801db6e7:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801db6eb:	66 49 0f 7e c0       	movq   r8,xmm0
   1801db6f0:	ba 04 00 00 00       	mov    edx,0x4
   1801db6f5:	48 8d 0d 8c 91 19 00 	lea    rcx,[rip+0x19918c]        # 0x180374888
   1801db6fc:	e8 ff 24 fc ff       	call   0x18019dc00
   1801db701:	84 c0                	test   al,al
   1801db703:	74 0c                	je     0x1801db711
   1801db705:	48 8d 0d 94 91 19 00 	lea    rcx,[rip+0x199194]        # 0x1803748a0
   1801db70c:	e8 bf 58 0a 00       	call   0x180280fd0
   1801db711:	c7 85 34 02 00 00 00 	mov    DWORD PTR [rbp+0x234],0x3fc00000
   1801db718:	00 c0 3f 
   1801db71b:	c7 85 30 02 00 00 00 	mov    DWORD PTR [rbp+0x230],0x3f400000
   1801db722:	00 40 3f 
   1801db725:	f3 0f 10 05 77 ef 1f 	movss  xmm0,DWORD PTR [rip+0x1fef77]        # 0x1803da6a4
   1801db72c:	00 
   1801db72d:	48 8d 8d 30 02 00 00 	lea    rcx,[rbp+0x230]
   1801db734:	44 0f 2f c8          	comiss xmm9,xmm0
   1801db738:	48 8d 05 65 ef 1f 00 	lea    rax,[rip+0x1fef65]        # 0x1803da6a4
   1801db73f:	48 0f 46 c8          	cmovbe rcx,rax
   1801db743:	48 8d 85 34 02 00 00 	lea    rax,[rbp+0x234]
   1801db74a:	41 0f 2f c4          	comiss xmm0,xmm12
   1801db74e:	48 0f 46 c1          	cmovbe rax,rcx
   1801db752:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801db756:	f3 41 0f 59 cd       	mulss  xmm1,xmm13
   1801db75b:	41 0f 28 c0          	movaps xmm0,xmm8
   1801db75f:	e8 4c 3e 0a 00       	call   0x18027f5b0
   1801db764:	48 89 9d e8 12 00 00 	mov    QWORD PTR [rbp+0x12e8],rbx
   1801db76b:	4c 8d 85 e8 12 00 00 	lea    r8,[rbp+0x12e8]
   1801db772:	48 8d 95 d0 0e 00 00 	lea    rdx,[rbp+0xed0]
   1801db779:	48 8d 0d 70 f6 21 00 	lea    rcx,[rip+0x21f670]        # 0x1803fadf0
   1801db780:	e8 ab 62 06 00       	call   0x180241a30
   1801db785:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db788:	48 83 c1 28          	add    rcx,0x28
   1801db78c:	48 b8 f3 6a 07 f7 fc 	movabs rax,0x5c383cfcf7076af3
   1801db793:	3c 38 5c 
   1801db796:	48 89 85 f0 12 00 00 	mov    QWORD PTR [rbp+0x12f0],rax
   1801db79d:	4c 8d 85 f0 12 00 00 	lea    r8,[rbp+0x12f0]
   1801db7a4:	48 8d 95 e0 0e 00 00 	lea    rdx,[rbp+0xee0]
   1801db7ab:	e8 80 62 06 00       	call   0x180241a30
   1801db7b0:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db7b3:	48 83 c1 28          	add    rcx,0x28
   1801db7b7:	e8 04 18 02 00       	call   0x1801fcfc0
   1801db7bc:	48 8b d0             	mov    rdx,rax
   1801db7bf:	48 8d 0d f2 90 19 00 	lea    rcx,[rip+0x1990f2]        # 0x1803748b8
   1801db7c6:	e8 95 53 fc ff       	call   0x1801a0b60
   1801db7cb:	c7 85 3c 02 00 00 00 	mov    DWORD PTR [rbp+0x23c],0x3fc00000
   1801db7d2:	00 c0 3f 
   1801db7d5:	c7 85 38 02 00 00 00 	mov    DWORD PTR [rbp+0x238],0x3f400000
   1801db7dc:	00 40 3f 
   1801db7df:	f3 0f 10 05 bd ee 1f 	movss  xmm0,DWORD PTR [rip+0x1feebd]        # 0x1803da6a4
   1801db7e6:	00 
   1801db7e7:	48 8d 8d 38 02 00 00 	lea    rcx,[rbp+0x238]
   1801db7ee:	44 0f 2f c8          	comiss xmm9,xmm0
   1801db7f2:	48 8d 05 ab ee 1f 00 	lea    rax,[rip+0x1feeab]        # 0x1803da6a4
   1801db7f9:	48 0f 46 c8          	cmovbe rcx,rax
   1801db7fd:	48 8d 85 3c 02 00 00 	lea    rax,[rbp+0x23c]
   1801db804:	41 0f 2f c4          	comiss xmm0,xmm12
   1801db808:	48 0f 46 c1          	cmovbe rax,rcx
   1801db80c:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801db810:	f3 41 0f 59 cb       	mulss  xmm1,xmm11
   1801db815:	41 0f 28 c0          	movaps xmm0,xmm8
   1801db819:	e8 92 3d 0a 00       	call   0x18027f5b0
   1801db81e:	41 0f 28 c0          	movaps xmm0,xmm8
   1801db822:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801db826:	66 49 0f 7e c0       	movq   r8,xmm0
   1801db82b:	ba 04 00 00 00       	mov    edx,0x4
   1801db830:	48 8d 0d 99 90 19 00 	lea    rcx,[rip+0x199099]        # 0x1803748d0
   1801db837:	e8 c4 23 fc ff       	call   0x18019dc00
   1801db83c:	84 c0                	test   al,al
   1801db83e:	74 0c                	je     0x1801db84c
   1801db840:	48 8d 0d a1 90 19 00 	lea    rcx,[rip+0x1990a1]        # 0x1803748e8
   1801db847:	e8 84 57 0a 00       	call   0x180280fd0
   1801db84c:	48 89 9d f8 12 00 00 	mov    QWORD PTR [rbp+0x12f8],rbx
   1801db853:	4c 8d 85 f8 12 00 00 	lea    r8,[rbp+0x12f8]
   1801db85a:	48 8d 95 f0 0e 00 00 	lea    rdx,[rbp+0xef0]
   1801db861:	48 8d 0d 88 f5 21 00 	lea    rcx,[rip+0x21f588]        # 0x1803fadf0
   1801db868:	e8 c3 61 06 00       	call   0x180241a30
   1801db86d:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db870:	48 83 c1 28          	add    rcx,0x28
   1801db874:	48 b8 97 bd 71 ef 91 	movabs rax,0x8af36191ef71bd97
   1801db87b:	61 f3 8a 
   1801db87e:	48 89 85 00 13 00 00 	mov    QWORD PTR [rbp+0x1300],rax
   1801db885:	4c 8d 85 00 13 00 00 	lea    r8,[rbp+0x1300]
   1801db88c:	48 8d 95 00 08 00 00 	lea    rdx,[rbp+0x800]
   1801db893:	e8 98 61 06 00       	call   0x180241a30
   1801db898:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db89b:	48 83 c1 28          	add    rcx,0x28
   1801db89f:	e8 1c 17 02 00       	call   0x1801fcfc0
   1801db8a4:	48 8b d0             	mov    rdx,rax
   1801db8a7:	48 8d 0d 5a 90 19 00 	lea    rcx,[rip+0x19905a]        # 0x180374908
   1801db8ae:	e8 ad 52 fc ff       	call   0x1801a0b60
   1801db8b3:	c7 85 44 02 00 00 00 	mov    DWORD PTR [rbp+0x244],0x3fc00000
   1801db8ba:	00 c0 3f 
   1801db8bd:	c7 85 40 02 00 00 00 	mov    DWORD PTR [rbp+0x240],0x3f400000
   1801db8c4:	00 40 3f 
   1801db8c7:	f3 0f 10 05 d5 ed 1f 	movss  xmm0,DWORD PTR [rip+0x1fedd5]        # 0x1803da6a4
   1801db8ce:	00 
   1801db8cf:	48 8d 8d 40 02 00 00 	lea    rcx,[rbp+0x240]
   1801db8d6:	44 0f 2f c8          	comiss xmm9,xmm0
   1801db8da:	48 8d 05 c3 ed 1f 00 	lea    rax,[rip+0x1fedc3]        # 0x1803da6a4
   1801db8e1:	48 0f 46 c8          	cmovbe rcx,rax
   1801db8e5:	48 8d 85 44 02 00 00 	lea    rax,[rbp+0x244]
   1801db8ec:	41 0f 2f c4          	comiss xmm0,xmm12
   1801db8f0:	48 0f 46 c1          	cmovbe rax,rcx
   1801db8f4:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801db8f8:	f3 41 0f 59 cb       	mulss  xmm1,xmm11
   1801db8fd:	41 0f 28 c0          	movaps xmm0,xmm8
   1801db901:	e8 aa 3c 0a 00       	call   0x18027f5b0
   1801db906:	41 0f 28 c0          	movaps xmm0,xmm8
   1801db90a:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801db90e:	66 49 0f 7e c0       	movq   r8,xmm0
   1801db913:	ba 04 00 00 00       	mov    edx,0x4
   1801db918:	48 8d 0d 09 90 19 00 	lea    rcx,[rip+0x199009]        # 0x180374928
   1801db91f:	e8 dc 22 fc ff       	call   0x18019dc00
   1801db924:	84 c0                	test   al,al
   1801db926:	74 0c                	je     0x1801db934
   1801db928:	48 8d 0d 11 90 19 00 	lea    rcx,[rip+0x199011]        # 0x180374940
   1801db92f:	e8 9c 56 0a 00       	call   0x180280fd0
   1801db934:	c7 85 4c 02 00 00 00 	mov    DWORD PTR [rbp+0x24c],0x3fc00000
   1801db93b:	00 c0 3f 
   1801db93e:	c7 85 48 02 00 00 00 	mov    DWORD PTR [rbp+0x248],0x3f400000
   1801db945:	00 40 3f 
   1801db948:	f3 0f 10 05 54 ed 1f 	movss  xmm0,DWORD PTR [rip+0x1fed54]        # 0x1803da6a4
   1801db94f:	00 
   1801db950:	48 8d 8d 48 02 00 00 	lea    rcx,[rbp+0x248]
   1801db957:	44 0f 2f c8          	comiss xmm9,xmm0
   1801db95b:	48 8d 05 42 ed 1f 00 	lea    rax,[rip+0x1fed42]        # 0x1803da6a4
   1801db962:	48 0f 46 c8          	cmovbe rcx,rax
   1801db966:	48 8d 85 4c 02 00 00 	lea    rax,[rbp+0x24c]
   1801db96d:	41 0f 2f c4          	comiss xmm0,xmm12
   1801db971:	48 0f 46 c1          	cmovbe rax,rcx
   1801db975:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801db979:	f3 41 0f 59 cd       	mulss  xmm1,xmm13
   1801db97e:	41 0f 28 c0          	movaps xmm0,xmm8
   1801db982:	e8 29 3c 0a 00       	call   0x18027f5b0
   1801db987:	48 89 9d 08 13 00 00 	mov    QWORD PTR [rbp+0x1308],rbx
   1801db98e:	4c 8d 85 08 13 00 00 	lea    r8,[rbp+0x1308]
   1801db995:	48 8d 95 00 0f 00 00 	lea    rdx,[rbp+0xf00]
   1801db99c:	48 8d 0d 4d f4 21 00 	lea    rcx,[rip+0x21f44d]        # 0x1803fadf0
   1801db9a3:	e8 88 60 06 00       	call   0x180241a30
   1801db9a8:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db9ab:	48 83 c1 28          	add    rcx,0x28
   1801db9af:	48 b8 b5 67 ee 95 40 	movabs rax,0xff1f894095ee67b5
   1801db9b6:	89 1f ff 
   1801db9b9:	48 89 85 10 13 00 00 	mov    QWORD PTR [rbp+0x1310],rax
   1801db9c0:	4c 8d 85 10 13 00 00 	lea    r8,[rbp+0x1310]
   1801db9c7:	48 8d 95 10 0f 00 00 	lea    rdx,[rbp+0xf10]
   1801db9ce:	e8 5d 60 06 00       	call   0x180241a30
   1801db9d3:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801db9d6:	48 83 c1 28          	add    rcx,0x28
   1801db9da:	e8 e1 15 02 00       	call   0x1801fcfc0
   1801db9df:	48 8b d0             	mov    rdx,rax
   1801db9e2:	48 8d 0d 77 8f 19 00 	lea    rcx,[rip+0x198f77]        # 0x180374960
   1801db9e9:	e8 72 51 fc ff       	call   0x1801a0b60
   1801db9ee:	c7 85 54 02 00 00 00 	mov    DWORD PTR [rbp+0x254],0x3fc00000
   1801db9f5:	00 c0 3f 
   1801db9f8:	c7 85 50 02 00 00 00 	mov    DWORD PTR [rbp+0x250],0x3f400000
   1801db9ff:	00 40 3f 
   1801dba02:	f3 0f 10 05 9a ec 1f 	movss  xmm0,DWORD PTR [rip+0x1fec9a]        # 0x1803da6a4
   1801dba09:	00 
   1801dba0a:	48 8d 8d 50 02 00 00 	lea    rcx,[rbp+0x250]
   1801dba11:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dba15:	48 8d 05 88 ec 1f 00 	lea    rax,[rip+0x1fec88]        # 0x1803da6a4
   1801dba1c:	48 0f 46 c8          	cmovbe rcx,rax
   1801dba20:	48 8d 85 54 02 00 00 	lea    rax,[rbp+0x254]
   1801dba27:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dba2b:	48 0f 46 c1          	cmovbe rax,rcx
   1801dba2f:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801dba33:	f3 41 0f 59 cb       	mulss  xmm1,xmm11
   1801dba38:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dba3c:	e8 6f 3b 0a 00       	call   0x18027f5b0
   1801dba41:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dba45:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801dba49:	66 49 0f 7e c0       	movq   r8,xmm0
   1801dba4e:	ba 04 00 00 00       	mov    edx,0x4
   1801dba53:	48 8d 0d 1e 8f 19 00 	lea    rcx,[rip+0x198f1e]        # 0x180374978
   1801dba5a:	e8 a1 21 fc ff       	call   0x18019dc00
   1801dba5f:	84 c0                	test   al,al
   1801dba61:	74 0c                	je     0x1801dba6f
   1801dba63:	48 8d 0d 26 8f 19 00 	lea    rcx,[rip+0x198f26]        # 0x180374990
   1801dba6a:	e8 61 55 0a 00       	call   0x180280fd0
   1801dba6f:	4c 89 74 24 78       	mov    QWORD PTR [rsp+0x78],r14
   1801dba74:	48 89 9d 18 13 00 00 	mov    QWORD PTR [rbp+0x1318],rbx
   1801dba7b:	4c 8d 85 18 13 00 00 	lea    r8,[rbp+0x1318]
   1801dba82:	48 8d 95 20 0f 00 00 	lea    rdx,[rbp+0xf20]
   1801dba89:	48 8d 0d 60 f3 21 00 	lea    rcx,[rip+0x21f360]        # 0x1803fadf0
   1801dba90:	e8 9b 5f 06 00       	call   0x180241a30
   1801dba95:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dba98:	48 83 c1 28          	add    rcx,0x28
   1801dba9c:	48 b8 9e 19 cb 2f ae 	movabs rax,0xc9339fae2fcb199e
   1801dbaa3:	9f 33 c9 
   1801dbaa6:	48 89 85 20 13 00 00 	mov    QWORD PTR [rbp+0x1320],rax
   1801dbaad:	4c 8d 85 20 13 00 00 	lea    r8,[rbp+0x1320]
   1801dbab4:	48 8d 95 30 0f 00 00 	lea    rdx,[rbp+0xf30]
   1801dbabb:	e8 70 5f 06 00       	call   0x180241a30
   1801dbac0:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbac3:	48 83 c1 28          	add    rcx,0x28
   1801dbac7:	e8 f4 6e 02 00       	call   0x1802029c0
   1801dbacc:	4c 8b c8             	mov    r9,rax
   1801dbacf:	4c 8d 05 d2 8e 19 00 	lea    r8,[rip+0x198ed2]        # 0x1803749a8
   1801dbad6:	48 8d 15 c3 8d 19 00 	lea    rdx,[rip+0x198dc3]        # 0x1803748a0
   1801dbadd:	48 8d 4c 24 78       	lea    rcx,[rsp+0x78]
   1801dbae2:	e8 19 3c 00 00       	call   0x1801df700
   1801dbae7:	48 89 9d 28 13 00 00 	mov    QWORD PTR [rbp+0x1328],rbx
   1801dbaee:	4c 8d 85 28 13 00 00 	lea    r8,[rbp+0x1328]
   1801dbaf5:	48 8d 95 40 0f 00 00 	lea    rdx,[rbp+0xf40]
   1801dbafc:	48 8d 0d ed f2 21 00 	lea    rcx,[rip+0x21f2ed]        # 0x1803fadf0
   1801dbb03:	e8 28 5f 06 00       	call   0x180241a30
   1801dbb08:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbb0b:	48 83 c1 28          	add    rcx,0x28
   1801dbb0f:	48 b8 23 48 b3 d3 6f 	movabs rax,0x217a2c6fd3b34823
   1801dbb16:	2c 7a 21 
   1801dbb19:	48 89 85 30 13 00 00 	mov    QWORD PTR [rbp+0x1330],rax
   1801dbb20:	4c 8d 85 30 13 00 00 	lea    r8,[rbp+0x1330]
   1801dbb27:	48 8d 95 50 0f 00 00 	lea    rdx,[rbp+0xf50]
   1801dbb2e:	e8 fd 5e 06 00       	call   0x180241a30
   1801dbb33:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbb36:	48 83 c1 28          	add    rcx,0x28
   1801dbb3a:	e8 81 6e 02 00       	call   0x1802029c0
   1801dbb3f:	4c 8b c8             	mov    r9,rax
   1801dbb42:	4c 8d 05 f7 b1 16 00 	lea    r8,[rip+0x16b1f7]        # 0x180346d40
   1801dbb49:	48 8d 15 98 8d 19 00 	lea    rdx,[rip+0x198d98]        # 0x1803748e8
   1801dbb50:	48 8d 4c 24 78       	lea    rcx,[rsp+0x78]
   1801dbb55:	e8 a6 3b 00 00       	call   0x1801df700
   1801dbb5a:	48 89 9d 38 13 00 00 	mov    QWORD PTR [rbp+0x1338],rbx
   1801dbb61:	4c 8d 85 38 13 00 00 	lea    r8,[rbp+0x1338]
   1801dbb68:	48 8d 95 60 0f 00 00 	lea    rdx,[rbp+0xf60]
   1801dbb6f:	48 8d 0d 7a f2 21 00 	lea    rcx,[rip+0x21f27a]        # 0x1803fadf0
   1801dbb76:	e8 b5 5e 06 00       	call   0x180241a30
   1801dbb7b:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbb7e:	48 83 c1 28          	add    rcx,0x28
   1801dbb82:	48 b8 07 ff 10 ec 0c 	movabs rax,0xdd80ea0cec10ff07
   1801dbb89:	ea 80 dd 
   1801dbb8c:	48 89 85 40 13 00 00 	mov    QWORD PTR [rbp+0x1340],rax
   1801dbb93:	4c 8d 85 40 13 00 00 	lea    r8,[rbp+0x1340]
   1801dbb9a:	48 8d 95 70 0f 00 00 	lea    rdx,[rbp+0xf70]
   1801dbba1:	e8 8a 5e 06 00       	call   0x180241a30
   1801dbba6:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbba9:	48 83 c1 28          	add    rcx,0x28
   1801dbbad:	e8 0e 6e 02 00       	call   0x1802029c0
   1801dbbb2:	4c 8b c8             	mov    r9,rax
   1801dbbb5:	4c 8d 05 f4 8d 19 00 	lea    r8,[rip+0x198df4]        # 0x1803749b0
   1801dbbbc:	48 8d 15 7d 8d 19 00 	lea    rdx,[rip+0x198d7d]        # 0x180374940
   1801dbbc3:	48 8d 4c 24 78       	lea    rcx,[rsp+0x78]
   1801dbbc8:	e8 33 3b 00 00       	call   0x1801df700
   1801dbbcd:	48 89 9d 48 13 00 00 	mov    QWORD PTR [rbp+0x1348],rbx
   1801dbbd4:	4c 8d 85 48 13 00 00 	lea    r8,[rbp+0x1348]
   1801dbbdb:	48 8d 95 80 0f 00 00 	lea    rdx,[rbp+0xf80]
   1801dbbe2:	48 8d 0d 07 f2 21 00 	lea    rcx,[rip+0x21f207]        # 0x1803fadf0
   1801dbbe9:	e8 42 5e 06 00       	call   0x180241a30
   1801dbbee:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbbf1:	48 83 c1 28          	add    rcx,0x28
   1801dbbf5:	48 b8 45 0d 37 ca 45 	movabs rax,0x65489c45ca370d45
   1801dbbfc:	9c 48 65 
   1801dbbff:	48 89 85 50 13 00 00 	mov    QWORD PTR [rbp+0x1350],rax
   1801dbc06:	4c 8d 85 50 13 00 00 	lea    r8,[rbp+0x1350]
   1801dbc0d:	48 8d 95 90 0f 00 00 	lea    rdx,[rbp+0xf90]
   1801dbc14:	e8 17 5e 06 00       	call   0x180241a30
   1801dbc19:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbc1c:	48 83 c1 28          	add    rcx,0x28
   1801dbc20:	e8 9b 6d 02 00       	call   0x1802029c0
   1801dbc25:	4c 8b c8             	mov    r9,rax
   1801dbc28:	4c 8d 05 91 8d 19 00 	lea    r8,[rip+0x198d91]        # 0x1803749c0
   1801dbc2f:	48 8d 15 5a 8d 19 00 	lea    rdx,[rip+0x198d5a]        # 0x180374990
   1801dbc36:	48 8d 4c 24 78       	lea    rcx,[rsp+0x78]
   1801dbc3b:	e8 c0 3a 00 00       	call   0x1801df700
   1801dbc40:	48 89 9d 58 13 00 00 	mov    QWORD PTR [rbp+0x1358],rbx
   1801dbc47:	4c 8d 85 58 13 00 00 	lea    r8,[rbp+0x1358]
   1801dbc4e:	48 8d 95 a0 0f 00 00 	lea    rdx,[rbp+0xfa0]
   1801dbc55:	48 8d 0d 94 f1 21 00 	lea    rcx,[rip+0x21f194]        # 0x1803fadf0
   1801dbc5c:	e8 cf 5d 06 00       	call   0x180241a30
   1801dbc61:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbc64:	48 83 c1 28          	add    rcx,0x28
   1801dbc68:	48 b8 d5 a8 cc 05 85 	movabs rax,0xa4ac668505cca8d5
   1801dbc6f:	66 ac a4 
   1801dbc72:	48 89 85 60 13 00 00 	mov    QWORD PTR [rbp+0x1360],rax
   1801dbc79:	4c 8d 85 60 13 00 00 	lea    r8,[rbp+0x1360]
   1801dbc80:	48 8d 95 b0 0f 00 00 	lea    rdx,[rbp+0xfb0]
   1801dbc87:	e8 a4 5d 06 00       	call   0x180241a30
   1801dbc8c:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dbc8f:	48 83 c1 28          	add    rcx,0x28
   1801dbc93:	e8 28 6d 02 00       	call   0x1802029c0
   1801dbc98:	4c 8b c0             	mov    r8,rax
   1801dbc9b:	48 8d 05 ae 6e 19 00 	lea    rax,[rip+0x196eae]        # 0x180372b50
   1801dbca2:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801dbca7:	c7 44 24 20 20 00 00 	mov    DWORD PTR [rsp+0x20],0x20
   1801dbcae:	00 
   1801dbcaf:	41 b9 01 00 00 00    	mov    r9d,0x1
   1801dbcb5:	48 8d 15 14 8d 19 00 	lea    rdx,[rip+0x198d14]        # 0x1803749d0
   1801dbcbc:	48 8d 0d 25 8d 19 00 	lea    rcx,[rip+0x198d25]        # 0x1803749e8
   1801dbcc3:	e8 d8 c8 fc ff       	call   0x1801a85a0
   1801dbcc8:	33 c9                	xor    ecx,ecx
   1801dbcca:	e8 91 31 09 00       	call   0x18026ee60
   1801dbccf:	84 c0                	test   al,al
   1801dbcd1:	74 0c                	je     0x1801dbcdf
   1801dbcd3:	48 8d 0d 26 8d 19 00 	lea    rcx,[rip+0x198d26]        # 0x180374a00
   1801dbcda:	e8 21 50 0a 00       	call   0x180280d00
   1801dbcdf:	e8 5c 3e 0d 00       	call   0x1802afb40
   1801dbce4:	33 d2                	xor    edx,edx
   1801dbce6:	48 8d 0d 63 8d 19 00 	lea    rcx,[rip+0x198d63]        # 0x180374a50
   1801dbced:	e8 6e e7 fb ff       	call   0x18019a460
   1801dbcf2:	c7 85 5c 02 00 00 04 	mov    DWORD PTR [rbp+0x25c],0x4
   1801dbcf9:	00 00 00 
   1801dbcfc:	44 89 ad 58 02 00 00 	mov    DWORD PTR [rbp+0x258],r13d
   1801dbd03:	8b 15 43 f5 21 00    	mov    edx,DWORD PTR [rip+0x21f543]        # 0x1803fb24c
   1801dbd09:	48 8d 8d 58 02 00 00 	lea    rcx,[rbp+0x258]
   1801dbd10:	85 d2                	test   edx,edx
   1801dbd12:	48 8d 05 33 f5 21 00 	lea    rax,[rip+0x21f533]        # 0x1803fb24c
   1801dbd19:	48 0f 49 c8          	cmovns rcx,rax
   1801dbd1d:	48 8d 85 5c 02 00 00 	lea    rax,[rbp+0x25c]
   1801dbd24:	83 fa 04             	cmp    edx,0x4
   1801dbd27:	48 0f 4e c1          	cmovle rax,rcx
   1801dbd2b:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dbd2e:	89 05 18 f5 21 00    	mov    DWORD PTR [rip+0x21f518],eax        # 0x1803fb24c
   1801dbd34:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dbd3b:	48 8d 05 d6 0c 20 00 	lea    rax,[rip+0x200cd6]        # 0x1803dca18
   1801dbd42:	48 03 c8             	add    rcx,rax
   1801dbd45:	4c 8d 05 04 8d 19 00 	lea    r8,[rip+0x198d04]        # 0x180374a50
   1801dbd4c:	48 8d 15 59 74 16 00 	lea    rdx,[rip+0x167459]        # 0x1803431ac
   1801dbd53:	e8 58 ee 0c 00       	call   0x1802aabb0
   1801dbd58:	c7 85 64 02 00 00 00 	mov    DWORD PTR [rbp+0x264],0x3fc00000
   1801dbd5f:	00 c0 3f 
   1801dbd62:	c7 85 60 02 00 00 00 	mov    DWORD PTR [rbp+0x260],0x3f400000
   1801dbd69:	00 40 3f 
   1801dbd6c:	f3 0f 10 05 30 e9 1f 	movss  xmm0,DWORD PTR [rip+0x1fe930]        # 0x1803da6a4
   1801dbd73:	00 
   1801dbd74:	48 8d 8d 60 02 00 00 	lea    rcx,[rbp+0x260]
   1801dbd7b:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dbd7f:	48 8d 05 1e e9 1f 00 	lea    rax,[rip+0x1fe91e]        # 0x1803da6a4
   1801dbd86:	48 0f 46 c8          	cmovbe rcx,rax
   1801dbd8a:	48 8d 85 64 02 00 00 	lea    rax,[rbp+0x264]
   1801dbd91:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dbd95:	48 0f 46 c1          	cmovbe rax,rcx
   1801dbd99:	f3 0f 10 30          	movss  xmm6,DWORD PTR [rax]
   1801dbd9d:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dbda1:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801dbda6:	75 05                	jne    0x1801dbdad
   1801dbda8:	e8 47 c5 0f 00       	call   0x1802d82f4
   1801dbdad:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dbdb1:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dbdb5:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801dbdbc:	f3 0f 59 35 cc 53 1a 	mulss  xmm6,DWORD PTR [rip+0x1a53cc]        # 0x180381190
   1801dbdc3:	00 
   1801dbdc4:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801dbdcb:	00 
   1801dbdcc:	c7 44 24 20 02 00 00 	mov    DWORD PTR [rsp+0x20],0x2
   1801dbdd3:	00 
   1801dbdd4:	4c 8d 0d 45 da 20 00 	lea    r9,[rip+0x20da45]        # 0x1803e9820
   1801dbddb:	48 8d 15 e2 9c 24 00 	lea    rdx,[rip+0x249ce2]        # 0x180425ac4
   1801dbde2:	48 8d 0d 77 8c 19 00 	lea    rcx,[rip+0x198c77]        # 0x180374a60
   1801dbde9:	e8 12 54 0d 00       	call   0x1802b1200
   1801dbdee:	83 3d cf 9c 24 00 01 	cmp    DWORD PTR [rip+0x249ccf],0x1        # 0x180425ac4
   1801dbdf5:	0f 94 c3             	sete   bl
   1801dbdf8:	48 8d 0d 61 c6 20 00 	lea    rcx,[rip+0x20c661]        # 0x1803e8460
   1801dbdff:	4c 8d 2d 9a dc 22 00 	lea    r13,[rip+0x22dc9a]        # 0x180409aa0
   1801dbe06:	4c 0f 44 e9          	cmove  r13,rcx
   1801dbe0a:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dbe0e:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801dbe13:	75 05                	jne    0x1801dbe1a
   1801dbe15:	e8 da c4 0f 00       	call   0x1802d82f4
   1801dbe1a:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801dbe1e:	49 8b 0c 14          	mov    rcx,QWORD PTR [r12+rdx*1]
   1801dbe22:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801dbe29:	48 83 b8 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],0x0
   1801dbe30:	00 
   1801dbe31:	75 11                	jne    0x1801dbe44
   1801dbe33:	48 83 b9 68 23 00 00 	cmp    QWORD PTR [rcx+0x2368],0x0
   1801dbe3a:	00 
   1801dbe3b:	48 8d 88 80 02 00 00 	lea    rcx,[rax+0x280]
   1801dbe42:	74 07                	je     0x1801dbe4b
   1801dbe44:	48 8d 88 50 02 00 00 	lea    rcx,[rax+0x250]
   1801dbe4b:	f3 0f 10 31          	movss  xmm6,DWORD PTR [rcx]
   1801dbe4f:	f3 0f 5c b0 18 01 00 	subss  xmm6,DWORD PTR [rax+0x118]
   1801dbe56:	00 
   1801dbe57:	f3 0f 5c 35 b5 52 1a 	subss  xmm6,DWORD PTR [rip+0x1a52b5]        # 0x180381114
   1801dbe5e:	00 
   1801dbe5f:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   1801dbe64:	75 05                	jne    0x1801dbe6b
   1801dbe66:	e8 89 c4 0f 00       	call   0x1802d82f4
   1801dbe6b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dbe6f:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dbe73:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801dbe7a:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801dbe81:	00 
   1801dbe82:	48 c7 85 00 04 00 00 	mov    QWORD PTR [rbp+0x400],0x0
   1801dbe89:	00 00 00 00 
   1801dbe8d:	48 8d 05 e4 8b 19 00 	lea    rax,[rip+0x198be4]        # 0x180374a78
   1801dbe94:	48 8d 15 f5 8b 19 00 	lea    rdx,[rip+0x198bf5]        # 0x180374a90
   1801dbe9b:	84 db                	test   bl,bl
   1801dbe9d:	48 0f 45 d0          	cmovne rdx,rax
   1801dbea1:	33 c0                	xor    eax,eax
   1801dbea3:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   1801dbea8:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   1801dbead:	c7 44 24 28 40 00 00 	mov    DWORD PTR [rsp+0x28],0x40
   1801dbeb4:	00 
   1801dbeb5:	48 8d 85 00 04 00 00 	lea    rax,[rbp+0x400]
   1801dbebc:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801dbec1:	41 b9 40 00 00 00    	mov    r9d,0x40
   1801dbec7:	4d 8b c5             	mov    r8,r13
   1801dbeca:	48 8d 0d d7 8b 19 00 	lea    rcx,[rip+0x198bd7]        # 0x180374aa8
   1801dbed1:	e8 0a b6 0d 00       	call   0x1802b74e0
   1801dbed6:	88 44 24 70          	mov    BYTE PTR [rsp+0x70],al
   1801dbeda:	c7 85 6c 02 00 00 00 	mov    DWORD PTR [rbp+0x26c],0x3fc00000
   1801dbee1:	00 c0 3f 
   1801dbee4:	c7 85 68 02 00 00 00 	mov    DWORD PTR [rbp+0x268],0x3f400000
   1801dbeeb:	00 40 3f 
   1801dbeee:	f3 0f 10 05 ae e7 1f 	movss  xmm0,DWORD PTR [rip+0x1fe7ae]        # 0x1803da6a4
   1801dbef5:	00 
   1801dbef6:	48 8d 95 68 02 00 00 	lea    rdx,[rbp+0x268]
   1801dbefd:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dbf01:	48 8d 05 9c e7 1f 00 	lea    rax,[rip+0x1fe79c]        # 0x1803da6a4
   1801dbf08:	48 0f 46 d0          	cmovbe rdx,rax
   1801dbf0c:	48 8d 8d 6c 02 00 00 	lea    rcx,[rbp+0x26c]
   1801dbf13:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dbf17:	48 0f 46 ca          	cmovbe rcx,rdx
   1801dbf1b:	f3 0f 10 09          	movss  xmm1,DWORD PTR [rcx]
   1801dbf1f:	f3 41 0f 59 ce       	mulss  xmm1,xmm14
   1801dbf24:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dbf28:	e8 83 36 0a 00       	call   0x18027f5b0
   1801dbf2d:	84 db                	test   bl,bl
   1801dbf2f:	49 8d 86 98 00 00 00 	lea    rax,[r14+0x98]
   1801dbf36:	75 04                	jne    0x1801dbf3c
   1801dbf38:	49 8d 46 78          	lea    rax,[r14+0x78]
   1801dbf3c:	0f 10 00             	movups xmm0,XMMWORD PTR [rax]
   1801dbf3f:	c7 85 b0 03 00 00 00 	mov    DWORD PTR [rbp+0x3b0],0xbf800000
   1801dbf46:	00 80 bf 
   1801dbf49:	c7 85 b4 03 00 00 00 	mov    DWORD PTR [rbp+0x3b4],0x41c00000
   1801dbf50:	00 c0 41 
   1801dbf53:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801dbf59:	ba 07 00 00 00       	mov    edx,0x7
   1801dbf5e:	84 db                	test   bl,bl
   1801dbf60:	b8 02 00 00 00       	mov    eax,0x2
   1801dbf65:	0f 45 d0             	cmovne edx,eax
   1801dbf68:	48 8d 05 51 8b 19 00 	lea    rax,[rip+0x198b51]        # 0x180374ac0
   1801dbf6f:	48 8d 0d 6a 8b 19 00 	lea    rcx,[rip+0x198b6a]        # 0x180374ae0
   1801dbf76:	48 0f 45 c8          	cmovne rcx,rax
   1801dbf7a:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dbf7f:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801dbf84:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dbf89:	4c 8d 85 b0 03 00 00 	lea    r8,[rbp+0x3b0]
   1801dbf90:	e8 ab 0b fc ff       	call   0x18019cb40
   1801dbf95:	80 7c 24 70 00       	cmp    BYTE PTR [rsp+0x70],0x0
   1801dbf9a:	75 04                	jne    0x1801dbfa0
   1801dbf9c:	84 c0                	test   al,al
   1801dbf9e:	74 26                	je     0x1801dbfc6
   1801dbfa0:	49 8b d5             	mov    rdx,r13
   1801dbfa3:	84 db                	test   bl,bl
   1801dbfa5:	74 0e                	je     0x1801dbfb5
   1801dbfa7:	4c 8d 05 3a 8d 16 00 	lea    r8,[rip+0x168d3a]        # 0x180344ce8
   1801dbfae:	b9 02 00 00 00       	mov    ecx,0x2
   1801dbfb3:	eb 0c                	jmp    0x1801dbfc1
   1801dbfb5:	4c 8d 05 b4 18 18 00 	lea    r8,[rip+0x1818b4]        # 0x18035d870
   1801dbfbc:	b9 01 00 00 00       	mov    ecx,0x1
   1801dbfc1:	e8 7a 9f f6 ff       	call   0x180145f40
   1801dbfc6:	4d 8d ae b8 00 00 00 	lea    r13,[r14+0xb8]
   1801dbfcd:	f2 41 0f 10 45 00    	movsd  xmm0,QWORD PTR [r13+0x0]
   1801dbfd3:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801dbfd9:	41 8b 45 08          	mov    eax,DWORD PTR [r13+0x8]
   1801dbfdd:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801dbfe1:	f3 41 0f 10 45 0c    	movss  xmm0,DWORD PTR [r13+0xc]
   1801dbfe7:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801dbfec:	f3 0f 11 44 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm0
   1801dbff2:	48 8d 05 ff 8a 19 00 	lea    rax,[rip+0x198aff]        # 0x180374af8
   1801dbff9:	48 8d 15 30 8b 19 00 	lea    rdx,[rip+0x198b30]        # 0x180374b30
   1801dc000:	84 db                	test   bl,bl
   1801dc002:	48 0f 45 d0          	cmovne rdx,rax
   1801dc006:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801dc00b:	e8 a0 eb 0c 00       	call   0x1802aabb0
   1801dc010:	48 8d 8d 00 17 00 00 	lea    rcx,[rbp+0x1700]
   1801dc017:	e8 04 9a f6 ff       	call   0x180145a20
   1801dc01c:	90                   	nop
   1801dc01d:	48 83 bd 10 17 00 00 	cmp    QWORD PTR [rbp+0x1710],0x0
   1801dc024:	00 
   1801dc025:	74 26                	je     0x1801dc04d
   1801dc027:	4c 8d 85 00 17 00 00 	lea    r8,[rbp+0x1700]
   1801dc02e:	48 83 bd 18 17 00 00 	cmp    QWORD PTR [rbp+0x1718],0xf
   1801dc035:	0f 
   1801dc036:	4c 0f 47 85 00 17 00 	cmova  r8,QWORD PTR [rbp+0x1700]
   1801dc03d:	00 
   1801dc03e:	48 8d 15 67 71 16 00 	lea    rdx,[rip+0x167167]        # 0x1803431ac
   1801dc045:	49 8b cd             	mov    rcx,r13
   1801dc048:	e8 63 eb 0c 00       	call   0x1802aabb0
   1801dc04d:	e8 ee 3a 0d 00       	call   0x1802afb40
   1801dc052:	33 d2                	xor    edx,edx
   1801dc054:	48 8d 0d 09 8b 19 00 	lea    rcx,[rip+0x198b09]        # 0x180374b64
   1801dc05b:	e8 00 e4 fb ff       	call   0x18019a460
   1801dc060:	c7 85 74 02 00 00 04 	mov    DWORD PTR [rbp+0x274],0x4
   1801dc067:	00 00 00 
   1801dc06a:	33 db                	xor    ebx,ebx
   1801dc06c:	89 9d 70 02 00 00    	mov    DWORD PTR [rbp+0x270],ebx
   1801dc072:	8b 15 d4 f1 21 00    	mov    edx,DWORD PTR [rip+0x21f1d4]        # 0x1803fb24c
   1801dc078:	48 8d 8d 70 02 00 00 	lea    rcx,[rbp+0x270]
   1801dc07f:	85 d2                	test   edx,edx
   1801dc081:	48 8d 05 c4 f1 21 00 	lea    rax,[rip+0x21f1c4]        # 0x1803fb24c
   1801dc088:	48 0f 49 c8          	cmovns rcx,rax
   1801dc08c:	48 8d 85 74 02 00 00 	lea    rax,[rbp+0x274]
   1801dc093:	83 fa 04             	cmp    edx,0x4
   1801dc096:	48 0f 4e c1          	cmovle rax,rcx
   1801dc09a:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dc09d:	89 05 a9 f1 21 00    	mov    DWORD PTR [rip+0x21f1a9],eax        # 0x1803fb24c
   1801dc0a3:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dc0aa:	48 8d 05 67 09 20 00 	lea    rax,[rip+0x200967]        # 0x1803dca18
   1801dc0b1:	48 03 c8             	add    rcx,rax
   1801dc0b4:	4c 8d 05 a9 8a 19 00 	lea    r8,[rip+0x198aa9]        # 0x180374b64
   1801dc0bb:	48 8d 15 ea 70 16 00 	lea    rdx,[rip+0x1670ea]        # 0x1803431ac
   1801dc0c2:	e8 e9 ea 0c 00       	call   0x1802aabb0
   1801dc0c7:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc0cb:	41 38 1c 07          	cmp    BYTE PTR [r15+rax*1],bl
   1801dc0cf:	75 05                	jne    0x1801dc0d6
   1801dc0d1:	e8 1e c2 0f 00       	call   0x1802d82f4
   1801dc0d6:	48 8b 14 fe          	mov    rdx,QWORD PTR [rsi+rdi*8]
   1801dc0da:	49 8b 0c 14          	mov    rcx,QWORD PTR [r12+rdx*1]
   1801dc0de:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801dc0e5:	48 39 98 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],rbx
   1801dc0ec:	75 10                	jne    0x1801dc0fe
   1801dc0ee:	48 39 99 68 23 00 00 	cmp    QWORD PTR [rcx+0x2368],rbx
   1801dc0f5:	48 8d 88 80 02 00 00 	lea    rcx,[rax+0x280]
   1801dc0fc:	74 07                	je     0x1801dc105
   1801dc0fe:	48 8d 88 50 02 00 00 	lea    rcx,[rax+0x250]
   1801dc105:	f3 0f 10 01          	movss  xmm0,DWORD PTR [rcx]
   1801dc109:	f3 0f 5c 80 18 01 00 	subss  xmm0,DWORD PTR [rax+0x118]
   1801dc110:	00 
   1801dc111:	f3 0f 5c 05 5b 50 1a 	subss  xmm0,DWORD PTR [rip+0x1a505b]        # 0x180381174
   1801dc118:	00 
   1801dc119:	f3 0f 10 35 3b 50 1a 	movss  xmm6,DWORD PTR [rip+0x1a503b]        # 0x18038115c
   1801dc120:	00 
   1801dc121:	f3 0f 5f f0          	maxss  xmm6,xmm0
   1801dc125:	0f 28 fe             	movaps xmm7,xmm6
   1801dc128:	f3 0f 59 3d 80 49 1a 	mulss  xmm7,DWORD PTR [rip+0x1a4980]        # 0x180380ab0
   1801dc12f:	00 
   1801dc130:	41 38 1c 17          	cmp    BYTE PTR [r15+rdx*1],bl
   1801dc134:	75 05                	jne    0x1801dc13b
   1801dc136:	e8 b9 c1 0f 00       	call   0x1802d82f4
   1801dc13b:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc13f:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dc143:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801dc14a:	f3 0f 11 b9 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm7
   1801dc151:	00 
   1801dc152:	48 89 9d 08 04 00 00 	mov    QWORD PTR [rbp+0x408],rbx
   1801dc159:	48 89 5c 24 38       	mov    QWORD PTR [rsp+0x38],rbx
   1801dc15e:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   1801dc163:	89 5c 24 28          	mov    DWORD PTR [rsp+0x28],ebx
   1801dc167:	48 8d 85 08 04 00 00 	lea    rax,[rbp+0x408]
   1801dc16e:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801dc173:	41 b9 40 00 00 00    	mov    r9d,0x40
   1801dc179:	4c 8d 05 80 d9 22 00 	lea    r8,[rip+0x22d980]        # 0x180409b00
   1801dc180:	48 8d 15 e9 89 19 00 	lea    rdx,[rip+0x1989e9]        # 0x180374b70
   1801dc187:	48 8d 0d f2 89 19 00 	lea    rcx,[rip+0x1989f2]        # 0x180374b80
   1801dc18e:	e8 4d b3 0d 00       	call   0x1802b74e0
   1801dc193:	41 0f 28 ce          	movaps xmm1,xmm14
   1801dc197:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dc19b:	e8 10 34 0a 00       	call   0x18027f5b0
   1801dc1a0:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc1a4:	41 38 1c 07          	cmp    BYTE PTR [r15+rax*1],bl
   1801dc1a8:	75 05                	jne    0x1801dc1af
   1801dc1aa:	e8 45 c1 0f 00       	call   0x1802d82f4
   1801dc1af:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc1b3:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dc1b7:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801dc1be:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801dc1c2:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801dc1c9:	00 
   1801dc1ca:	48 89 9d 10 04 00 00 	mov    QWORD PTR [rbp+0x410],rbx
   1801dc1d1:	48 89 5c 24 38       	mov    QWORD PTR [rsp+0x38],rbx
   1801dc1d6:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   1801dc1db:	c7 44 24 28 40 00 00 	mov    DWORD PTR [rsp+0x28],0x40
   1801dc1e2:	00 
   1801dc1e3:	48 8d 85 10 04 00 00 	lea    rax,[rbp+0x410]
   1801dc1ea:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801dc1ef:	41 b9 40 00 00 00    	mov    r9d,0x40
   1801dc1f5:	4c 8d 05 44 d9 22 00 	lea    r8,[rip+0x22d944]        # 0x180409b40
   1801dc1fc:	48 8d 15 95 89 19 00 	lea    rdx,[rip+0x198995]        # 0x180374b98
   1801dc203:	48 8d 0d 9e 89 19 00 	lea    rcx,[rip+0x19899e]        # 0x180374ba8
   1801dc20a:	e8 d1 b2 0d 00       	call   0x1802b74e0
   1801dc20f:	0f b6 d8             	movzx  ebx,al
   1801dc212:	41 0f 28 ce          	movaps xmm1,xmm14
   1801dc216:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dc21a:	e8 91 33 0a 00       	call   0x18027f5b0
   1801dc21f:	84 db                	test   bl,bl
   1801dc221:	75 4a                	jne    0x1801dc26d
   1801dc223:	41 0f 10 46 78       	movups xmm0,XMMWORD PTR [r14+0x78]
   1801dc228:	c7 85 18 04 00 00 00 	mov    DWORD PTR [rbp+0x418],0x42940000
   1801dc22f:	00 94 42 
   1801dc232:	c7 85 1c 04 00 00 00 	mov    DWORD PTR [rbp+0x41c],0x41c00000
   1801dc239:	00 c0 41 
   1801dc23c:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801dc242:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dc247:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801dc24c:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dc251:	4c 8d 85 18 04 00 00 	lea    r8,[rbp+0x418]
   1801dc258:	ba 07 00 00 00       	mov    edx,0x7
   1801dc25d:	48 8d 0d 5c 89 19 00 	lea    rcx,[rip+0x19895c]        # 0x180374bc0
   1801dc264:	e8 d7 08 fc ff       	call   0x18019cb40
   1801dc269:	84 c0                	test   al,al
   1801dc26b:	74 0e                	je     0x1801dc27b
   1801dc26d:	4c 8d 05 cc d8 22 00 	lea    r8,[rip+0x22d8cc]        # 0x180409b40
   1801dc274:	33 c9                	xor    ecx,ecx
   1801dc276:	e8 05 8b f6 ff       	call   0x180144d80
   1801dc27b:	33 c9                	xor    ecx,ecx
   1801dc27d:	e8 de 2b 09 00       	call   0x18026ee60
   1801dc282:	84 c0                	test   al,al
   1801dc284:	74 0c                	je     0x1801dc292
   1801dc286:	48 8d 0d 53 89 19 00 	lea    rcx,[rip+0x198953]        # 0x180374be0
   1801dc28d:	e8 6e 4a 0a 00       	call   0x180280d00
   1801dc292:	41 0f 28 ce          	movaps xmm1,xmm14
   1801dc296:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dc29a:	e8 11 33 0a 00       	call   0x18027f5b0
   1801dc29f:	41 0f 10 46 58       	movups xmm0,XMMWORD PTR [r14+0x58]
   1801dc2a4:	c7 85 20 04 00 00 00 	mov    DWORD PTR [rbp+0x420],0x42940000
   1801dc2ab:	00 94 42 
   1801dc2ae:	c7 85 24 04 00 00 00 	mov    DWORD PTR [rbp+0x424],0x41c00000
   1801dc2b5:	00 c0 41 
   1801dc2b8:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801dc2be:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dc2c3:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801dc2c8:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dc2cd:	4c 8d 85 20 04 00 00 	lea    r8,[rbp+0x420]
   1801dc2d4:	ba 0c 00 00 00       	mov    edx,0xc
   1801dc2d9:	48 8d 0d e8 89 19 00 	lea    rcx,[rip+0x1989e8]        # 0x180374cc8
   1801dc2e0:	e8 5b 08 fc ff       	call   0x18019cb40
   1801dc2e5:	84 c0                	test   al,al
   1801dc2e7:	74 11                	je     0x1801dc2fa
   1801dc2e9:	4c 8d 05 fa 22 16 00 	lea    r8,[rip+0x1622fa]        # 0x18033e5ea
   1801dc2f0:	b9 03 00 00 00       	mov    ecx,0x3
   1801dc2f5:	e8 86 8a f6 ff       	call   0x180144d80
   1801dc2fa:	41 0f 10 86 88 00 00 	movups xmm0,XMMWORD PTR [r14+0x88]
   1801dc301:	00 
   1801dc302:	c7 85 28 04 00 00 00 	mov    DWORD PTR [rbp+0x428],0xbf800000
   1801dc309:	00 80 bf 
   1801dc30c:	c7 85 2c 04 00 00 00 	mov    DWORD PTR [rbp+0x42c],0x41c00000
   1801dc313:	00 c0 41 
   1801dc316:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801dc31c:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dc321:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801dc326:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dc32b:	4c 8d 85 28 04 00 00 	lea    r8,[rbp+0x428]
   1801dc332:	bb 02 00 00 00       	mov    ebx,0x2
   1801dc337:	8b d3                	mov    edx,ebx
   1801dc339:	48 8d 0d a0 89 19 00 	lea    rcx,[rip+0x1989a0]        # 0x180374ce0
   1801dc340:	e8 fb 07 fc ff       	call   0x18019cb40
   1801dc345:	84 c0                	test   al,al
   1801dc347:	74 0e                	je     0x1801dc357
   1801dc349:	4c 8d 05 9a 22 16 00 	lea    r8,[rip+0x16229a]        # 0x18033e5ea
   1801dc350:	8b cb                	mov    ecx,ebx
   1801dc352:	e8 29 8a f6 ff       	call   0x180144d80
   1801dc357:	33 c9                	xor    ecx,ecx
   1801dc359:	e8 02 2b 09 00       	call   0x18026ee60
   1801dc35e:	84 c0                	test   al,al
   1801dc360:	74 0c                	je     0x1801dc36e
   1801dc362:	48 8d 0d a7 89 19 00 	lea    rcx,[rip+0x1989a7]        # 0x180374d10
   1801dc369:	e8 92 49 0a 00       	call   0x180280d00
   1801dc36e:	41 0f 10 46 58       	movups xmm0,XMMWORD PTR [r14+0x58]
   1801dc373:	c7 85 30 04 00 00 00 	mov    DWORD PTR [rbp+0x430],0xbf800000
   1801dc37a:	00 80 bf 
   1801dc37d:	c7 85 34 04 00 00 00 	mov    DWORD PTR [rbp+0x434],0x41c00000
   1801dc384:	00 c0 41 
   1801dc387:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801dc38d:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dc392:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801dc397:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dc39c:	4c 8d 85 30 04 00 00 	lea    r8,[rbp+0x430]
   1801dc3a3:	ba 07 00 00 00       	mov    edx,0x7
   1801dc3a8:	48 8d 0d f1 8a 19 00 	lea    rcx,[rip+0x198af1]        # 0x180374ea0
   1801dc3af:	e8 8c 07 fc ff       	call   0x18019cb40
   1801dc3b4:	84 c0                	test   al,al
   1801dc3b6:	74 11                	je     0x1801dc3c9
   1801dc3b8:	4c 8d 05 81 d7 22 00 	lea    r8,[rip+0x22d781]        # 0x180409b40
   1801dc3bf:	b9 01 00 00 00       	mov    ecx,0x1
   1801dc3c4:	e8 b7 89 f6 ff       	call   0x180144d80
   1801dc3c9:	33 c9                	xor    ecx,ecx
   1801dc3cb:	e8 90 2a 09 00       	call   0x18026ee60
   1801dc3d0:	84 c0                	test   al,al
   1801dc3d2:	74 0c                	je     0x1801dc3e0
   1801dc3d4:	48 8d 0d 05 8b 19 00 	lea    rcx,[rip+0x198b05]        # 0x180374ee0
   1801dc3db:	e8 20 49 0a 00       	call   0x180280d00
   1801dc3e0:	48 8d 8d e0 16 00 00 	lea    rcx,[rbp+0x16e0]
   1801dc3e7:	e8 04 89 f6 ff       	call   0x180144cf0
   1801dc3ec:	90                   	nop
   1801dc3ed:	48 83 bd f0 16 00 00 	cmp    QWORD PTR [rbp+0x16f0],0x0
   1801dc3f4:	00 
   1801dc3f5:	74 23                	je     0x1801dc41a
   1801dc3f7:	48 8d 95 e0 16 00 00 	lea    rdx,[rbp+0x16e0]
   1801dc3fe:	48 83 bd f8 16 00 00 	cmp    QWORD PTR [rbp+0x16f8],0xf
   1801dc405:	0f 
   1801dc406:	48 0f 47 95 e0 16 00 	cmova  rdx,QWORD PTR [rbp+0x16e0]
   1801dc40d:	00 
   1801dc40e:	48 8d 0d 97 6d 16 00 	lea    rcx,[rip+0x166d97]        # 0x1803431ac
   1801dc415:	e8 66 e8 0c 00       	call   0x1802aac80
   1801dc41a:	e8 21 37 0d 00       	call   0x1802afb40
   1801dc41f:	33 d2                	xor    edx,edx
   1801dc421:	48 8d 0d 08 8d 19 00 	lea    rcx,[rip+0x198d08]        # 0x180375130
   1801dc428:	e8 33 e0 fb ff       	call   0x18019a460
   1801dc42d:	c7 85 7c 02 00 00 04 	mov    DWORD PTR [rbp+0x27c],0x4
   1801dc434:	00 00 00 
   1801dc437:	33 db                	xor    ebx,ebx
   1801dc439:	89 9d 78 02 00 00    	mov    DWORD PTR [rbp+0x278],ebx
   1801dc43f:	8b 15 07 ee 21 00    	mov    edx,DWORD PTR [rip+0x21ee07]        # 0x1803fb24c
   1801dc445:	48 8d 8d 78 02 00 00 	lea    rcx,[rbp+0x278]
   1801dc44c:	85 d2                	test   edx,edx
   1801dc44e:	48 8d 05 f7 ed 21 00 	lea    rax,[rip+0x21edf7]        # 0x1803fb24c
   1801dc455:	48 0f 49 c8          	cmovns rcx,rax
   1801dc459:	48 8d 85 7c 02 00 00 	lea    rax,[rbp+0x27c]
   1801dc460:	83 fa 04             	cmp    edx,0x4
   1801dc463:	48 0f 4e c1          	cmovle rax,rcx
   1801dc467:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dc46a:	89 05 dc ed 21 00    	mov    DWORD PTR [rip+0x21eddc],eax        # 0x1803fb24c
   1801dc470:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dc477:	48 8d 05 9a 05 20 00 	lea    rax,[rip+0x20059a]        # 0x1803dca18
   1801dc47e:	48 03 c8             	add    rcx,rax
   1801dc481:	4c 8d 05 a8 8c 19 00 	lea    r8,[rip+0x198ca8]        # 0x180375130
   1801dc488:	48 8d 15 1d 6d 16 00 	lea    rdx,[rip+0x166d1d]        # 0x1803431ac
   1801dc48f:	e8 1c e7 0c 00       	call   0x1802aabb0
   1801dc494:	38 1d 63 e8 21 00    	cmp    BYTE PTR [rip+0x21e863],bl        # 0x1803facfd
   1801dc49a:	74 14                	je     0x1801dc4b0
   1801dc49c:	48 8b 05 55 07 22 00 	mov    rax,QWORD PTR [rip+0x220755]        # 0x1803fcbf8
   1801dc4a3:	48 39 05 46 07 22 00 	cmp    QWORD PTR [rip+0x220746],rax        # 0x1803fcbf0
   1801dc4aa:	0f 85 b7 00 00 00    	jne    0x1801dc567
   1801dc4b0:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc4b4:	41 38 1c 07          	cmp    BYTE PTR [r15+rax*1],bl
   1801dc4b8:	75 05                	jne    0x1801dc4bf
   1801dc4ba:	e8 35 be 0f 00       	call   0x1802d82f4
   1801dc4bf:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc4c3:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dc4c7:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801dc4ce:	38 98 d3 00 00 00    	cmp    BYTE PTR [rax+0xd3],bl
   1801dc4d4:	0f 84 8d 00 00 00    	je     0x1801dc567
   1801dc4da:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801dc4e1:	56 fd 93 
   1801dc4e4:	48 89 85 68 13 00 00 	mov    QWORD PTR [rbp+0x1368],rax
   1801dc4eb:	4c 8d 85 68 13 00 00 	lea    r8,[rbp+0x1368]
   1801dc4f2:	48 8d 95 c0 0f 00 00 	lea    rdx,[rbp+0xfc0]
   1801dc4f9:	48 8d 0d f0 e8 21 00 	lea    rcx,[rip+0x21e8f0]        # 0x1803fadf0
   1801dc500:	e8 2b 55 06 00       	call   0x180241a30
   1801dc505:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc508:	48 83 c1 28          	add    rcx,0x28
   1801dc50c:	48 b8 e2 42 51 27 5b 	movabs rax,0xa8b2235b275142e2
   1801dc513:	23 b2 a8 
   1801dc516:	48 89 85 70 13 00 00 	mov    QWORD PTR [rbp+0x1370],rax
   1801dc51d:	4c 8d 85 70 13 00 00 	lea    r8,[rbp+0x1370]
   1801dc524:	48 8d 95 d0 0f 00 00 	lea    rdx,[rbp+0xfd0]
   1801dc52b:	e8 00 55 06 00       	call   0x180241a30
   1801dc530:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc533:	48 83 c1 28          	add    rcx,0x28
   1801dc537:	e8 84 63 02 00       	call   0x1802028c0
   1801dc53c:	48 83 78 18 0f       	cmp    QWORD PTR [rax+0x18],0xf
   1801dc541:	76 03                	jbe    0x1801dc546
   1801dc543:	48 8b 00             	mov    rax,QWORD PTR [rax]
   1801dc546:	49 c7 c1 ff ff ff ff 	mov    r9,0xffffffffffffffff
   1801dc54d:	4c 8b c0             	mov    r8,rax
   1801dc550:	ba 04 01 00 00       	mov    edx,0x104
   1801dc555:	48 8d 0d 44 bd 20 00 	lea    rcx,[rip+0x20bd44]        # 0x1803e82a0
   1801dc55c:	ff 15 9e 06 13 00    	call   QWORD PTR [rip+0x13069e]        # 0x18030cc00
   1801dc562:	e8 09 54 f7 ff       	call   0x180151970
   1801dc567:	c7 85 84 02 00 00 00 	mov    DWORD PTR [rbp+0x284],0x3fc00000
   1801dc56e:	00 c0 3f 
   1801dc571:	c7 85 80 02 00 00 00 	mov    DWORD PTR [rbp+0x280],0x3f400000
   1801dc578:	00 40 3f 
   1801dc57b:	f3 0f 10 05 21 e1 1f 	movss  xmm0,DWORD PTR [rip+0x1fe121]        # 0x1803da6a4
   1801dc582:	00 
   1801dc583:	48 8d 8d 80 02 00 00 	lea    rcx,[rbp+0x280]
   1801dc58a:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dc58e:	48 8d 05 0f e1 1f 00 	lea    rax,[rip+0x1fe10f]        # 0x1803da6a4
   1801dc595:	48 0f 46 c8          	cmovbe rcx,rax
   1801dc599:	48 8d 85 84 02 00 00 	lea    rax,[rbp+0x284]
   1801dc5a0:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dc5a4:	48 0f 46 c1          	cmovbe rax,rcx
   1801dc5a8:	f3 0f 10 30          	movss  xmm6,DWORD PTR [rax]
   1801dc5ac:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc5b0:	41 38 1c 07          	cmp    BYTE PTR [r15+rax*1],bl
   1801dc5b4:	75 05                	jne    0x1801dc5bb
   1801dc5b6:	e8 39 bd 0f 00       	call   0x1802d82f4
   1801dc5bb:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc5bf:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dc5c3:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801dc5ca:	f3 0f 10 3d 9a 4b 1a 	movss  xmm7,DWORD PTR [rip+0x1a4b9a]        # 0x18038116c
   1801dc5d1:	00 
   1801dc5d2:	f3 0f 59 f7          	mulss  xmm6,xmm7
   1801dc5d6:	f3 0f 11 b1 d8 1e 00 	movss  DWORD PTR [rcx+0x1ed8],xmm6
   1801dc5dd:	00 
   1801dc5de:	c7 44 24 20 06 00 00 	mov    DWORD PTR [rsp+0x20],0x6
   1801dc5e5:	00 
   1801dc5e6:	4c 8d 0d 53 ce 20 00 	lea    r9,[rip+0x20ce53]        # 0x1803e9440
   1801dc5ed:	48 8d 15 6c 9b 24 00 	lea    rdx,[rip+0x249b6c]        # 0x180426160
   1801dc5f4:	48 8d 0d 4d 8b 19 00 	lea    rcx,[rip+0x198b4d]        # 0x180375148
   1801dc5fb:	e8 00 4c 0d 00       	call   0x1802b1200
   1801dc600:	84 c0                	test   al,al
   1801dc602:	74 36                	je     0x1801dc63a
   1801dc604:	48 63 05 55 9b 24 00 	movsxd rax,DWORD PTR [rip+0x249b55]        # 0x180426160
   1801dc60b:	85 c0                	test   eax,eax
   1801dc60d:	7e 2b                	jle    0x1801dc63a
   1801dc60f:	4c 8b c0             	mov    r8,rax
   1801dc612:	49 c7 c1 ff ff ff ff 	mov    r9,0xffffffffffffffff
   1801dc619:	48 8d 05 e0 39 e2 ff 	lea    rax,[rip+0xffffffffffe239e0]        # 0x180000000
   1801dc620:	4e 8b 84 c0 b0 bd 33 	mov    r8,QWORD PTR [rax+r8*8+0x33bdb0]
   1801dc627:	00 
   1801dc628:	ba 04 01 00 00       	mov    edx,0x104
   1801dc62d:	48 8d 0d 6c bc 20 00 	lea    rcx,[rip+0x20bc6c]        # 0x1803e82a0
   1801dc634:	ff 15 c6 05 13 00    	call   QWORD PTR [rip+0x1305c6]        # 0x18030cc00
   1801dc63a:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc63e:	41 38 1c 07          	cmp    BYTE PTR [r15+rax*1],bl
   1801dc642:	75 05                	jne    0x1801dc649
   1801dc644:	e8 ab bc 0f 00       	call   0x1802d82f4
   1801dc649:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc64d:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dc651:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801dc658:	c7 81 d8 1e 00 00 00 	mov    DWORD PTR [rcx+0x1ed8],0xbf800000
   1801dc65f:	00 80 bf 
   1801dc662:	48 89 9d 38 04 00 00 	mov    QWORD PTR [rbp+0x438],rbx
   1801dc669:	48 89 5c 24 38       	mov    QWORD PTR [rsp+0x38],rbx
   1801dc66e:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   1801dc673:	89 5c 24 28          	mov    DWORD PTR [rsp+0x28],ebx
   1801dc677:	48 8d 85 38 04 00 00 	lea    rax,[rbp+0x438]
   1801dc67e:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801dc683:	41 b9 04 01 00 00    	mov    r9d,0x104
   1801dc689:	4c 8d 05 10 bc 20 00 	lea    r8,[rip+0x20bc10]        # 0x1803e82a0
   1801dc690:	48 8d 15 d1 8a 19 00 	lea    rdx,[rip+0x198ad1]        # 0x180375168
   1801dc697:	48 8d 0d e2 8a 19 00 	lea    rcx,[rip+0x198ae2]        # 0x180375180
   1801dc69e:	e8 3d ae 0d 00       	call   0x1802b74e0
   1801dc6a3:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801dc6aa:	56 fd 93 
   1801dc6ad:	48 89 85 78 13 00 00 	mov    QWORD PTR [rbp+0x1378],rax
   1801dc6b4:	4c 8d 85 78 13 00 00 	lea    r8,[rbp+0x1378]
   1801dc6bb:	48 8d 95 e0 0f 00 00 	lea    rdx,[rbp+0xfe0]
   1801dc6c2:	48 8d 0d 27 e7 21 00 	lea    rcx,[rip+0x21e727]        # 0x1803fadf0
   1801dc6c9:	e8 62 53 06 00       	call   0x180241a30
   1801dc6ce:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc6d1:	48 83 c1 28          	add    rcx,0x28
   1801dc6d5:	48 b8 32 f2 79 59 34 	movabs rax,0xf2d6f3345979f232
   1801dc6dc:	f3 d6 f2 
   1801dc6df:	48 89 85 80 13 00 00 	mov    QWORD PTR [rbp+0x1380],rax
   1801dc6e6:	4c 8d 85 80 13 00 00 	lea    r8,[rbp+0x1380]
   1801dc6ed:	48 8d 95 f0 0f 00 00 	lea    rdx,[rbp+0xff0]
   1801dc6f4:	e8 37 53 06 00       	call   0x180241a30
   1801dc6f9:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc6fc:	48 83 c1 28          	add    rcx,0x28
   1801dc700:	e8 bb 08 02 00       	call   0x1801fcfc0
   1801dc705:	48 8b d0             	mov    rdx,rax
   1801dc708:	48 8d 0d 89 8a 19 00 	lea    rcx,[rip+0x198a89]        # 0x180375198
   1801dc70f:	e8 4c 44 fc ff       	call   0x1801a0b60
   1801dc714:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc718:	41 38 1c 07          	cmp    BYTE PTR [r15+rax*1],bl
   1801dc71c:	75 05                	jne    0x1801dc723
   1801dc71e:	e8 d1 bb 0f 00       	call   0x1802d82f4
   1801dc723:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dc727:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dc72b:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801dc732:	48 39 98 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],rbx
   1801dc739:	75 10                	jne    0x1801dc74b
   1801dc73b:	48 39 99 68 23 00 00 	cmp    QWORD PTR [rcx+0x2368],rbx
   1801dc742:	48 8d 88 80 02 00 00 	lea    rcx,[rax+0x280]
   1801dc749:	74 07                	je     0x1801dc752
   1801dc74b:	48 8d 88 50 02 00 00 	lea    rcx,[rax+0x250]
   1801dc752:	41 0f 10 4e 78       	movups xmm1,XMMWORD PTR [r14+0x78]
   1801dc757:	f3 0f 10 01          	movss  xmm0,DWORD PTR [rcx]
   1801dc75b:	f3 0f 5c 80 18 01 00 	subss  xmm0,DWORD PTR [rax+0x118]
   1801dc762:	00 
   1801dc763:	f3 41 0f 5c c6       	subss  xmm0,xmm14
   1801dc768:	f3 0f 59 05 50 43 1a 	mulss  xmm0,DWORD PTR [rip+0x1a4350]        # 0x180380ac0
   1801dc76f:	00 
   1801dc770:	f3 0f 11 85 40 04 00 	movss  DWORD PTR [rbp+0x440],xmm0
   1801dc777:	00 
   1801dc778:	c7 85 44 04 00 00 00 	mov    DWORD PTR [rbp+0x444],0x41c00000
   1801dc77f:	00 c0 41 
   1801dc782:	66 0f 7f 4c 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm1
   1801dc788:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dc78d:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801dc792:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dc797:	4c 8d 85 40 04 00 00 	lea    r8,[rbp+0x440]
   1801dc79e:	ba 07 00 00 00       	mov    edx,0x7
   1801dc7a3:	48 8d 0d 16 8a 19 00 	lea    rcx,[rip+0x198a16]        # 0x1803751c0
   1801dc7aa:	e8 91 03 fc ff       	call   0x18019cb40
   1801dc7af:	84 c0                	test   al,al
   1801dc7b1:	0f 84 58 01 00 00    	je     0x1801dc90f
   1801dc7b7:	48 8d 15 e2 ba 20 00 	lea    rdx,[rip+0x20bae2]        # 0x1803e82a0
   1801dc7be:	48 8d 8d 00 11 00 00 	lea    rcx,[rbp+0x1100]
   1801dc7c5:	e8 76 94 f6 ff       	call   0x180145c40
   1801dc7ca:	90                   	nop
   1801dc7cb:	48 83 bd 10 11 00 00 	cmp    QWORD PTR [rbp+0x1110],0x0
   1801dc7d2:	00 
   1801dc7d3:	0f 84 2a 01 00 00    	je     0x1801dc903
   1801dc7d9:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801dc7e0:	56 fd 93 
   1801dc7e3:	48 89 85 88 13 00 00 	mov    QWORD PTR [rbp+0x1388],rax
   1801dc7ea:	4c 8d 85 88 13 00 00 	lea    r8,[rbp+0x1388]
   1801dc7f1:	48 8d 95 00 10 00 00 	lea    rdx,[rbp+0x1000]
   1801dc7f8:	48 8d 0d f1 e5 21 00 	lea    rcx,[rip+0x21e5f1]        # 0x1803fadf0
   1801dc7ff:	e8 2c 52 06 00       	call   0x180241a30
   1801dc804:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc807:	48 83 c1 28          	add    rcx,0x28
   1801dc80b:	48 b8 e2 42 51 27 5b 	movabs rax,0xa8b2235b275142e2
   1801dc812:	23 b2 a8 
   1801dc815:	48 89 85 90 13 00 00 	mov    QWORD PTR [rbp+0x1390],rax
   1801dc81c:	4c 8d 85 90 13 00 00 	lea    r8,[rbp+0x1390]
   1801dc823:	48 8d 95 10 10 00 00 	lea    rdx,[rbp+0x1010]
   1801dc82a:	e8 01 52 06 00       	call   0x180241a30
   1801dc82f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc832:	48 83 c1 28          	add    rcx,0x28
   1801dc836:	e8 85 60 02 00       	call   0x1802028c0
   1801dc83b:	48 8d 8d 00 11 00 00 	lea    rcx,[rbp+0x1100]
   1801dc842:	48 3b c1             	cmp    rax,rcx
   1801dc845:	74 26                	je     0x1801dc86d
   1801dc847:	48 8d 95 00 11 00 00 	lea    rdx,[rbp+0x1100]
   1801dc84e:	48 83 bd 18 11 00 00 	cmp    QWORD PTR [rbp+0x1118],0xf
   1801dc855:	0f 
   1801dc856:	48 0f 47 95 00 11 00 	cmova  rdx,QWORD PTR [rbp+0x1100]
   1801dc85d:	00 
   1801dc85e:	4c 8b 85 10 11 00 00 	mov    r8,QWORD PTR [rbp+0x1110]
   1801dc865:	48 8b c8             	mov    rcx,rax
   1801dc868:	e8 93 5e 03 00       	call   0x180212700
   1801dc86d:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801dc874:	56 fd 93 
   1801dc877:	48 89 85 98 13 00 00 	mov    QWORD PTR [rbp+0x1398],rax
   1801dc87e:	4c 8d 85 98 13 00 00 	lea    r8,[rbp+0x1398]
   1801dc885:	48 8d 95 20 10 00 00 	lea    rdx,[rbp+0x1020]
   1801dc88c:	48 8d 0d 5d e5 21 00 	lea    rcx,[rip+0x21e55d]        # 0x1803fadf0
   1801dc893:	e8 98 51 06 00       	call   0x180241a30
   1801dc898:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc89b:	48 83 c1 28          	add    rcx,0x28
   1801dc89f:	48 b8 32 f2 79 59 34 	movabs rax,0xf2d6f3345979f232
   1801dc8a6:	f3 d6 f2 
   1801dc8a9:	48 89 85 a0 13 00 00 	mov    QWORD PTR [rbp+0x13a0],rax
   1801dc8b0:	4c 8d 85 a0 13 00 00 	lea    r8,[rbp+0x13a0]
   1801dc8b7:	48 8d 95 30 10 00 00 	lea    rdx,[rbp+0x1030]
   1801dc8be:	e8 6d 51 06 00       	call   0x180241a30
   1801dc8c3:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc8c6:	48 83 c1 28          	add    rcx,0x28
   1801dc8ca:	e8 f1 06 02 00       	call   0x1801fcfc0
   1801dc8cf:	c6 00 01             	mov    BYTE PTR [rax],0x1
   1801dc8d2:	4c 8d 85 00 11 00 00 	lea    r8,[rbp+0x1100]
   1801dc8d9:	48 83 bd 18 11 00 00 	cmp    QWORD PTR [rbp+0x1118],0xf
   1801dc8e0:	0f 
   1801dc8e1:	4c 0f 47 85 00 11 00 	cmova  r8,QWORD PTR [rbp+0x1100]
   1801dc8e8:	00 
   1801dc8e9:	ba 04 01 00 00       	mov    edx,0x104
   1801dc8ee:	49 c7 c1 ff ff ff ff 	mov    r9,0xffffffffffffffff
   1801dc8f5:	48 8d 0d a4 b9 20 00 	lea    rcx,[rip+0x20b9a4]        # 0x1803e82a0
   1801dc8fc:	ff 15 fe 02 13 00    	call   QWORD PTR [rip+0x1302fe]        # 0x18030cc00
   1801dc902:	90                   	nop
   1801dc903:	48 8d 8d 00 11 00 00 	lea    rcx,[rbp+0x1100]
   1801dc90a:	e8 41 1b 03 00       	call   0x18020e450
   1801dc90f:	c7 85 8c 02 00 00 00 	mov    DWORD PTR [rbp+0x28c],0x3fc00000
   1801dc916:	00 c0 3f 
   1801dc919:	c7 85 88 02 00 00 00 	mov    DWORD PTR [rbp+0x288],0x3f400000
   1801dc920:	00 40 3f 
   1801dc923:	f3 0f 10 05 79 dd 1f 	movss  xmm0,DWORD PTR [rip+0x1fdd79]        # 0x1803da6a4
   1801dc92a:	00 
   1801dc92b:	48 8d 8d 88 02 00 00 	lea    rcx,[rbp+0x288]
   1801dc932:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dc936:	48 8d 05 67 dd 1f 00 	lea    rax,[rip+0x1fdd67]        # 0x1803da6a4
   1801dc93d:	48 0f 46 c8          	cmovbe rcx,rax
   1801dc941:	48 8d 85 8c 02 00 00 	lea    rax,[rbp+0x28c]
   1801dc948:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dc94c:	48 0f 46 c1          	cmovbe rax,rcx
   1801dc950:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801dc954:	f3 41 0f 59 ce       	mulss  xmm1,xmm14
   1801dc959:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dc95d:	e8 4e 2c 0a 00       	call   0x18027f5b0
   1801dc962:	41 0f 10 86 98 00 00 	movups xmm0,XMMWORD PTR [r14+0x98]
   1801dc969:	00 
   1801dc96a:	c7 85 48 04 00 00 00 	mov    DWORD PTR [rbp+0x448],0xbf800000
   1801dc971:	00 80 bf 
   1801dc974:	c7 85 4c 04 00 00 00 	mov    DWORD PTR [rbp+0x44c],0x41c00000
   1801dc97b:	00 c0 41 
   1801dc97e:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801dc984:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dc989:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801dc98e:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dc993:	4c 8d 85 48 04 00 00 	lea    r8,[rbp+0x448]
   1801dc99a:	ba 09 00 00 00       	mov    edx,0x9
   1801dc99f:	48 8d 0d 3a 88 19 00 	lea    rcx,[rip+0x19883a]        # 0x1803751e0
   1801dc9a6:	e8 95 01 fc ff       	call   0x18019cb40
   1801dc9ab:	84 c0                	test   al,al
   1801dc9ad:	74 65                	je     0x1801dca14
   1801dc9af:	48 b8 67 0c ab 96 1a 	movabs rax,0x93fd561a96ab0c67
   1801dc9b6:	56 fd 93 
   1801dc9b9:	48 89 85 a8 13 00 00 	mov    QWORD PTR [rbp+0x13a8],rax
   1801dc9c0:	4c 8d 85 a8 13 00 00 	lea    r8,[rbp+0x13a8]
   1801dc9c7:	48 8d 95 40 10 00 00 	lea    rdx,[rbp+0x1040]
   1801dc9ce:	48 8d 0d 1b e4 21 00 	lea    rcx,[rip+0x21e41b]        # 0x1803fadf0
   1801dc9d5:	e8 56 50 06 00       	call   0x180241a30
   1801dc9da:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dc9dd:	48 83 c1 28          	add    rcx,0x28
   1801dc9e1:	48 b8 32 f2 79 59 34 	movabs rax,0xf2d6f3345979f232
   1801dc9e8:	f3 d6 f2 
   1801dc9eb:	48 89 85 b0 13 00 00 	mov    QWORD PTR [rbp+0x13b0],rax
   1801dc9f2:	4c 8d 85 b0 13 00 00 	lea    r8,[rbp+0x13b0]
   1801dc9f9:	48 8d 95 50 10 00 00 	lea    rdx,[rbp+0x1050]
   1801dca00:	e8 2b 50 06 00       	call   0x180241a30
   1801dca05:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dca08:	48 83 c1 28          	add    rcx,0x28
   1801dca0c:	e8 af 05 02 00       	call   0x1801fcfc0
   1801dca11:	c6 00 00             	mov    BYTE PTR [rax],0x0
   1801dca14:	48 8d 8d 40 17 00 00 	lea    rcx,[rbp+0x1740]
   1801dca1b:	e8 00 90 f6 ff       	call   0x180145a20
   1801dca20:	90                   	nop
   1801dca21:	4c 8d 85 40 17 00 00 	lea    r8,[rbp+0x1740]
   1801dca28:	48 83 bd 58 17 00 00 	cmp    QWORD PTR [rbp+0x1758],0xf
   1801dca2f:	0f 
   1801dca30:	4c 0f 47 85 40 17 00 	cmova  r8,QWORD PTR [rbp+0x1740]
   1801dca37:	00 
   1801dca38:	48 8d 15 6d 67 16 00 	lea    rdx,[rip+0x16676d]        # 0x1803431ac
   1801dca3f:	49 8b cd             	mov    rcx,r13
   1801dca42:	e8 69 e1 0c 00       	call   0x1802aabb0
   1801dca47:	f2 41 0f 10 45 00    	movsd  xmm0,QWORD PTR [r13+0x0]
   1801dca4d:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801dca53:	41 8b 45 08          	mov    eax,DWORD PTR [r13+0x8]
   1801dca57:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801dca5b:	f3 41 0f 10 45 0c    	movss  xmm0,DWORD PTR [r13+0xc]
   1801dca61:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801dca66:	f3 0f 11 44 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm0
   1801dca6c:	48 8d 15 8d 87 19 00 	lea    rdx,[rip+0x19878d]        # 0x180375200
   1801dca73:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801dca78:	e8 33 e1 0c 00       	call   0x1802aabb0
   1801dca7d:	e8 be 30 0d 00       	call   0x1802afb40
   1801dca82:	33 d2                	xor    edx,edx
   1801dca84:	48 8d 0d 9d 87 19 00 	lea    rcx,[rip+0x19879d]        # 0x180375228
   1801dca8b:	e8 d0 d9 fb ff       	call   0x18019a460
   1801dca90:	c7 85 94 02 00 00 04 	mov    DWORD PTR [rbp+0x294],0x4
   1801dca97:	00 00 00 
   1801dca9a:	89 9d 90 02 00 00    	mov    DWORD PTR [rbp+0x290],ebx
   1801dcaa0:	8b 15 a6 e7 21 00    	mov    edx,DWORD PTR [rip+0x21e7a6]        # 0x1803fb24c
   1801dcaa6:	48 8d 8d 90 02 00 00 	lea    rcx,[rbp+0x290]
   1801dcaad:	85 d2                	test   edx,edx
   1801dcaaf:	48 8d 05 96 e7 21 00 	lea    rax,[rip+0x21e796]        # 0x1803fb24c
   1801dcab6:	48 0f 49 c8          	cmovns rcx,rax
   1801dcaba:	48 8d 85 94 02 00 00 	lea    rax,[rbp+0x294]
   1801dcac1:	83 fa 04             	cmp    edx,0x4
   1801dcac4:	48 0f 4e c1          	cmovle rax,rcx
   1801dcac8:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dcacb:	89 05 7b e7 21 00    	mov    DWORD PTR [rip+0x21e77b],eax        # 0x1803fb24c
   1801dcad1:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dcad8:	48 8d 05 39 ff 1f 00 	lea    rax,[rip+0x1fff39]        # 0x1803dca18
   1801dcadf:	48 03 c8             	add    rcx,rax
   1801dcae2:	4c 8d 05 3f 87 19 00 	lea    r8,[rip+0x19873f]        # 0x180375228
   1801dcae9:	48 8d 15 bc 66 16 00 	lea    rdx,[rip+0x1666bc]        # 0x1803431ac
   1801dcaf0:	e8 bb e0 0c 00       	call   0x1802aabb0
   1801dcaf5:	8b 05 05 3d 39 00    	mov    eax,DWORD PTR [rip+0x393d05]        # 0x180570800
   1801dcafb:	a8 02                	test   al,0x2
   1801dcafd:	75 16                	jne    0x1801dcb15
   1801dcaff:	83 c8 02             	or     eax,0x2
   1801dcb02:	89 05 f8 3c 39 00    	mov    DWORD PTR [rip+0x393cf8],eax        # 0x180570800
   1801dcb08:	48 8d 0d 91 e8 12 00 	lea    rcx,[rip+0x12e891]        # 0x18030b3a0
   1801dcb0f:	e8 ac bc 0f 00       	call   0x1802d87c0
   1801dcb14:	90                   	nop
   1801dcb15:	8b 1d 65 d0 22 00    	mov    ebx,DWORD PTR [rip+0x22d065]        # 0x180409b80
   1801dcb1b:	89 5c 24 78          	mov    DWORD PTR [rsp+0x78],ebx
   1801dcb1f:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dcb23:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801dcb28:	75 05                	jne    0x1801dcb2f
   1801dcb2a:	e8 c5 b7 0f 00       	call   0x1802d82f4
   1801dcb2f:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dcb33:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dcb37:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801dcb3e:	48 83 b8 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],0x0
   1801dcb45:	00 
   1801dcb46:	75 11                	jne    0x1801dcb59
   1801dcb48:	48 83 b9 68 23 00 00 	cmp    QWORD PTR [rcx+0x2368],0x0
   1801dcb4f:	00 
   1801dcb50:	48 8d 88 80 02 00 00 	lea    rcx,[rax+0x280]
   1801dcb57:	74 07                	je     0x1801dcb60
   1801dcb59:	48 8d 88 50 02 00 00 	lea    rcx,[rax+0x250]
   1801dcb60:	41 0f 10 4e 58       	movups xmm1,XMMWORD PTR [r14+0x58]
   1801dcb65:	f3 0f 10 01          	movss  xmm0,DWORD PTR [rcx]
   1801dcb69:	f3 0f 5c 80 18 01 00 	subss  xmm0,DWORD PTR [rax+0x118]
   1801dcb70:	00 
   1801dcb71:	f3 41 0f 5c c6       	subss  xmm0,xmm14
   1801dcb76:	f3 0f 59 05 72 3f 1a 	mulss  xmm0,DWORD PTR [rip+0x1a3f72]        # 0x180380af0
   1801dcb7d:	00 
   1801dcb7e:	f3 0f 11 85 50 04 00 	movss  DWORD PTR [rbp+0x450],xmm0
   1801dcb85:	00 
   1801dcb86:	c7 85 54 04 00 00 00 	mov    DWORD PTR [rbp+0x454],0x41c00000
   1801dcb8d:	00 c0 41 
   1801dcb90:	66 0f 7f 4c 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm1
   1801dcb96:	85 db                	test   ebx,ebx
   1801dcb98:	0f 95 c0             	setne  al
   1801dcb9b:	48 8d 15 96 86 19 00 	lea    rdx,[rip+0x198696]        # 0x180375238
   1801dcba2:	48 8d 0d a7 86 19 00 	lea    rcx,[rip+0x1986a7]        # 0x180375250
   1801dcba9:	85 db                	test   ebx,ebx
   1801dcbab:	48 0f 45 ca          	cmovne rcx,rdx
   1801dcbaf:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dcbb4:	88 44 24 20          	mov    BYTE PTR [rsp+0x20],al
   1801dcbb8:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dcbbd:	4c 8d 85 50 04 00 00 	lea    r8,[rbp+0x450]
   1801dcbc4:	ba 01 00 00 00       	mov    edx,0x1
   1801dcbc9:	e8 72 ff fb ff       	call   0x18019cb40
   1801dcbce:	48 8d 0d 2b b8 20 00 	lea    rcx,[rip+0x20b82b]        # 0x1803e8400
   1801dcbd5:	84 c0                	test   al,al
   1801dcbd7:	0f 84 90 00 00 00    	je     0x1801dcc6d
   1801dcbdd:	85 db                	test   ebx,ebx
   1801dcbdf:	0f 85 88 00 00 00    	jne    0x1801dcc6d
   1801dcbe5:	48 8d 05 84 86 19 00 	lea    rax,[rip+0x198684]        # 0x180375270
   1801dcbec:	48 8d 1d ad 0c 18 00 	lea    rbx,[rip+0x180cad]        # 0x18035d8a0
   1801dcbf3:	4c 8b eb             	mov    r13,rbx
   1801dcbf6:	80 3d b3 93 24 00 00 	cmp    BYTE PTR [rip+0x2493b3],0x0        # 0x180425fb0
   1801dcbfd:	4c 0f 45 e8          	cmovne r13,rax
   1801dcc01:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
   1801dcc06:	ff 15 14 f9 12 00    	call   QWORD PTR [rip+0x12f914]        # 0x18030c520
   1801dcc0c:	85 c0                	test   eax,eax
   1801dcc0e:	0f 85 27 23 00 00    	jne    0x1801def3b
   1801dcc14:	8b 05 32 b8 20 00    	mov    eax,DWORD PTR [rip+0x20b832]        # 0x1803e844c
   1801dcc1a:	3d ff ff ff 7f       	cmp    eax,0x7fffffff
   1801dcc1f:	75 0d                	jne    0x1801dcc2e
   1801dcc21:	ff c8                	dec    eax
   1801dcc23:	89 05 23 b8 20 00    	mov    DWORD PTR [rip+0x20b823],eax        # 0x1803e844c
   1801dcc29:	e9 71 1f 00 00       	jmp    0x1801deb9f
   1801dcc2e:	41 80 7d 00 00       	cmp    BYTE PTR [r13+0x0],0x0
   1801dcc33:	49 0f 45 dd          	cmovne rbx,r13
   1801dcc37:	48 8b cb             	mov    rcx,rbx
   1801dcc3a:	e8 74 c8 0f 00       	call   0x1802d94b3
   1801dcc3f:	4c 8b c0             	mov    r8,rax
   1801dcc42:	48 8b d3             	mov    rdx,rbx
   1801dcc45:	48 8d 0d 8c d6 20 00 	lea    rcx,[rip+0x20d68c]        # 0x1803ea2d8
   1801dcc4c:	e8 af 5a 03 00       	call   0x180212700
   1801dcc51:	90                   	nop
   1801dcc52:	48 8d 0d a7 b7 20 00 	lea    rcx,[rip+0x20b7a7]        # 0x1803e8400
   1801dcc59:	ff 15 01 f9 12 00    	call   QWORD PTR [rip+0x12f901]        # 0x18030c560
   1801dcc5f:	c7 05 17 cf 22 00 01 	mov    DWORD PTR [rip+0x22cf17],0x1        # 0x180409b80
   1801dcc66:	00 00 00 
   1801dcc69:	8b 5c 24 78          	mov    ebx,DWORD PTR [rsp+0x78]
   1801dcc6d:	c7 85 9c 02 00 00 00 	mov    DWORD PTR [rbp+0x29c],0x3fc00000
   1801dcc74:	00 c0 3f 
   1801dcc77:	c7 85 98 02 00 00 00 	mov    DWORD PTR [rbp+0x298],0x3f400000
   1801dcc7e:	00 40 3f 
   1801dcc81:	f3 0f 10 05 1b da 1f 	movss  xmm0,DWORD PTR [rip+0x1fda1b]        # 0x1803da6a4
   1801dcc88:	00 
   1801dcc89:	48 8d 8d 98 02 00 00 	lea    rcx,[rbp+0x298]
   1801dcc90:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dcc94:	48 8d 05 09 da 1f 00 	lea    rax,[rip+0x1fda09]        # 0x1803da6a4
   1801dcc9b:	48 0f 46 c8          	cmovbe rcx,rax
   1801dcc9f:	48 8d 85 9c 02 00 00 	lea    rax,[rbp+0x29c]
   1801dcca6:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dccaa:	48 0f 46 c1          	cmovbe rax,rcx
   1801dccae:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801dccb2:	f3 41 0f 59 ce       	mulss  xmm1,xmm14
   1801dccb7:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dccbb:	e8 f0 28 0a 00       	call   0x18027f5b0
   1801dccc0:	48 8d 15 e9 92 24 00 	lea    rdx,[rip+0x2492e9]        # 0x180425fb0
   1801dccc7:	48 8d 0d aa 85 19 00 	lea    rcx,[rip+0x1985aa]        # 0x180375278
   1801dccce:	e8 8d 3e fc ff       	call   0x1801a0b60
   1801dccd3:	33 c9                	xor    ecx,ecx
   1801dccd5:	e8 86 21 09 00       	call   0x18026ee60
   1801dccda:	84 c0                	test   al,al
   1801dccdc:	74 0c                	je     0x1801dccea
   1801dccde:	48 8d 0d bb 85 19 00 	lea    rcx,[rip+0x1985bb]        # 0x1803752a0
   1801dcce5:	e8 16 40 0a 00       	call   0x180280d00
   1801dccea:	44 8b 2d 7b cd 22 00 	mov    r13d,DWORD PTR [rip+0x22cd7b]        # 0x180409a6c
   1801dccf1:	44 3b 2d 6c ab 20 00 	cmp    r13d,DWORD PTR [rip+0x20ab6c]        # 0x1803e7864
   1801dccf8:	0f 84 a1 00 00 00    	je     0x1801dcd9f
   1801dccfe:	44 89 2d 5f ab 20 00 	mov    DWORD PTR [rip+0x20ab5f],r13d        # 0x1803e7864
   1801dcd05:	48 8d 05 f4 b6 20 00 	lea    rax,[rip+0x20b6f4]        # 0x1803e8400
   1801dcd0c:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   1801dcd11:	48 8b c8             	mov    rcx,rax
   1801dcd14:	ff 15 06 f8 12 00    	call   QWORD PTR [rip+0x12f806]        # 0x18030c520
   1801dcd1a:	85 c0                	test   eax,eax
   1801dcd1c:	74 0c                	je     0x1801dcd2a
   1801dcd1e:	b9 05 00 00 00       	mov    ecx,0x5
   1801dcd23:	ff 15 4f f7 12 00    	call   QWORD PTR [rip+0x12f74f]        # 0x18030c478
   1801dcd29:	cc                   	int3
   1801dcd2a:	8b 05 1c b7 20 00    	mov    eax,DWORD PTR [rip+0x20b71c]        # 0x1803e844c
   1801dcd30:	3d ff ff ff 7f       	cmp    eax,0x7fffffff
   1801dcd35:	75 14                	jne    0x1801dcd4b
   1801dcd37:	ff c8                	dec    eax
   1801dcd39:	89 05 0d b7 20 00    	mov    DWORD PTR [rip+0x20b70d],eax        # 0x1803e844c
   1801dcd3f:	b9 06 00 00 00       	mov    ecx,0x6
   1801dcd44:	ff 15 2e f7 12 00    	call   QWORD PTR [rip+0x12f72e]        # 0x18030c478
   1801dcd4a:	90                   	nop
   1801dcd4b:	48 8d 15 9e d1 20 00 	lea    rdx,[rip+0x20d19e]        # 0x1803e9ef0
   1801dcd52:	48 8d 8d 58 05 00 00 	lea    rcx,[rbp+0x558]
   1801dcd59:	e8 b2 0b 03 00       	call   0x18020d910
   1801dcd5e:	8b 45 80             	mov    eax,DWORD PTR [rbp-0x80]
   1801dcd61:	83 c8 40             	or     eax,0x40
   1801dcd64:	89 45 80             	mov    DWORD PTR [rbp-0x80],eax
   1801dcd67:	89 45 84             	mov    DWORD PTR [rbp-0x7c],eax
   1801dcd6a:	48 8d 0d 8f b6 20 00 	lea    rcx,[rip+0x20b68f]        # 0x1803e8400
   1801dcd71:	ff 15 e9 f7 12 00    	call   QWORD PTR [rip+0x12f7e9]        # 0x18030c560
   1801dcd77:	48 8d 95 58 05 00 00 	lea    rdx,[rbp+0x558]
   1801dcd7e:	48 8d 0d d3 1f 22 00 	lea    rcx,[rip+0x221fd3]        # 0x1803fed58
   1801dcd85:	e8 a6 0a 03 00       	call   0x18020d830
   1801dcd8a:	8b 45 80             	mov    eax,DWORD PTR [rbp-0x80]
   1801dcd8d:	83 e0 bf             	and    eax,0xffffffbf
   1801dcd90:	89 45 84             	mov    DWORD PTR [rbp-0x7c],eax
   1801dcd93:	48 8d 8d 58 05 00 00 	lea    rcx,[rbp+0x558]
   1801dcd9a:	e8 21 08 03 00       	call   0x18020d5c0
   1801dcd9f:	48 8b 05 ba 1f 22 00 	mov    rax,QWORD PTR [rip+0x221fba]        # 0x1803fed60
   1801dcda6:	48 39 05 ab 1f 22 00 	cmp    QWORD PTR [rip+0x221fab],rax        # 0x1803fed58
   1801dcdad:	0f 84 4a 03 00 00    	je     0x1801dd0fd
   1801dcdb3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dcdb7:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801dcdbc:	75 05                	jne    0x1801dcdc3
   1801dcdbe:	e8 31 b5 0f 00       	call   0x1802d82f4
   1801dcdc3:	48 8b 04 fe          	mov    rax,QWORD PTR [rsi+rdi*8]
   1801dcdc7:	49 8b 0c 04          	mov    rcx,QWORD PTR [r12+rax*1]
   1801dcdcb:	83 89 c0 1e 00 00 01 	or     DWORD PTR [rcx+0x1ec0],0x1
   1801dcdd2:	c7 81 d8 1e 00 00 00 	mov    DWORD PTR [rcx+0x1ed8],0xc2800000
   1801dcdd9:	00 80 c2 
   1801dcddc:	48 c7 85 58 04 00 00 	mov    QWORD PTR [rbp+0x458],0x0
   1801dcde3:	00 00 00 00 
   1801dcde7:	33 db                	xor    ebx,ebx
   1801dcde9:	48 89 5c 24 38       	mov    QWORD PTR [rsp+0x38],rbx
   1801dcdee:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   1801dcdf3:	89 5c 24 28          	mov    DWORD PTR [rsp+0x28],ebx
   1801dcdf7:	48 8d 85 58 04 00 00 	lea    rax,[rbp+0x458]
   1801dcdfe:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801dce03:	41 b9 40 00 00 00    	mov    r9d,0x40
   1801dce09:	4c 8d 05 c0 16 22 00 	lea    r8,[rip+0x2216c0]        # 0x1803fe4d0
   1801dce10:	48 8d 15 f1 84 19 00 	lea    rdx,[rip+0x1984f1]        # 0x180375308
   1801dce17:	48 8d 0d fa 84 19 00 	lea    rcx,[rip+0x1984fa]        # 0x180375318
   1801dce1e:	e8 bd a6 0d 00       	call   0x1802b74e0
   1801dce23:	c7 85 a4 02 00 00 00 	mov    DWORD PTR [rbp+0x2a4],0x3fc00000
   1801dce2a:	00 c0 3f 
   1801dce2d:	c7 85 a0 02 00 00 00 	mov    DWORD PTR [rbp+0x2a0],0x3f400000
   1801dce34:	00 40 3f 
   1801dce37:	f3 0f 10 05 65 d8 1f 	movss  xmm0,DWORD PTR [rip+0x1fd865]        # 0x1803da6a4
   1801dce3e:	00 
   1801dce3f:	48 8d 95 a0 02 00 00 	lea    rdx,[rbp+0x2a0]
   1801dce46:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dce4a:	48 8d 05 53 d8 1f 00 	lea    rax,[rip+0x1fd853]        # 0x1803da6a4
   1801dce51:	48 0f 46 d0          	cmovbe rdx,rax
   1801dce55:	48 8d 85 a4 02 00 00 	lea    rax,[rbp+0x2a4]
   1801dce5c:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dce60:	48 0f 46 c2          	cmovbe rax,rdx
   1801dce64:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801dce68:	f3 41 0f 59 ce       	mulss  xmm1,xmm14
   1801dce6d:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dce71:	e8 3a 27 0a 00       	call   0x18027f5b0
   1801dce76:	4c 8b 05 e3 1e 22 00 	mov    r8,QWORD PTR [rip+0x221ee3]        # 0x1803fed60
   1801dce7d:	4c 2b 05 d4 1e 22 00 	sub    r8,QWORD PTR [rip+0x221ed4]        # 0x1803fed58
   1801dce84:	49 c1 f8 05          	sar    r8,0x5
   1801dce88:	48 8d 15 e1 26 16 00 	lea    rdx,[rip+0x1626e1]        # 0x18033f570
   1801dce8f:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801dce96:	e8 15 dd 0c 00       	call   0x1802aabb0
   1801dce9b:	c7 85 60 04 00 00 00 	mov    DWORD PTR [rbp+0x460],0xbf800000
   1801dcea2:	00 80 bf 
   1801dcea5:	f3 0f 10 05 f7 d7 1f 	movss  xmm0,DWORD PTR [rip+0x1fd7f7]        # 0x1803da6a4
   1801dceac:	00 
   1801dcead:	f3 0f 59 c7          	mulss  xmm0,xmm7
   1801dceb1:	f3 0f 11 85 64 04 00 	movss  DWORD PTR [rbp+0x464],xmm0
   1801dceb8:	00 
   1801dceb9:	45 33 c9             	xor    r9d,r9d
   1801dcebc:	41 b8 01 00 00 00    	mov    r8d,0x1
   1801dcec2:	48 8d 95 60 04 00 00 	lea    rdx,[rbp+0x460]
   1801dcec9:	48 8d 0d 60 84 19 00 	lea    rcx,[rip+0x198460]        # 0x180375330
   1801dced0:	e8 cb 60 09 00       	call   0x180272fa0
   1801dced5:	84 c0                	test   al,al
   1801dced7:	0f 84 d6 01 00 00    	je     0x1801dd0b3
   1801dcedd:	44 8b fb             	mov    r15d,ebx
   1801dcee0:	48 8b 3d 71 1e 22 00 	mov    rdi,QWORD PTR [rip+0x221e71]        # 0x1803fed58
   1801dcee7:	4c 8b 25 72 1e 22 00 	mov    r12,QWORD PTR [rip+0x221e72]        # 0x1803fed60
   1801dceee:	49 3b fc             	cmp    rdi,r12
   1801dcef1:	0f 84 a9 01 00 00    	je     0x1801dd0a0
   1801dcef7:	49 c7 c5 ff ff ff ff 	mov    r13,0xffffffffffffffff
   1801dcefe:	66 90                	xchg   ax,ax
   1801dcf00:	48 8b df             	mov    rbx,rdi
   1801dcf03:	48 83 7f 18 0f       	cmp    QWORD PTR [rdi+0x18],0xf
   1801dcf08:	76 03                	jbe    0x1801dcf0d
   1801dcf0a:	48 8b 1f             	mov    rbx,QWORD PTR [rdi]
   1801dcf0d:	80 3d bc 15 22 00 00 	cmp    BYTE PTR [rip+0x2215bc],0x0        # 0x1803fe4d0
   1801dcf14:	74 3e                	je     0x1801dcf54
   1801dcf16:	48 8d 0d b3 15 22 00 	lea    rcx,[rip+0x2215b3]        # 0x1803fe4d0
   1801dcf1d:	e8 91 c5 0f 00       	call   0x1802d94b3
   1801dcf22:	48 8b f0             	mov    rsi,rax
   1801dcf25:	80 3b 00             	cmp    BYTE PTR [rbx],0x0
   1801dcf28:	0f 84 60 01 00 00    	je     0x1801dd08e
   1801dcf2e:	66 90                	xchg   ax,ax
   1801dcf30:	4c 8b c6             	mov    r8,rsi
   1801dcf33:	48 8d 15 96 15 22 00 	lea    rdx,[rip+0x221596]        # 0x1803fe4d0
   1801dcf3a:	48 8b cb             	mov    rcx,rbx
   1801dcf3d:	ff 15 dd fc 12 00    	call   QWORD PTR [rip+0x12fcdd]        # 0x18030cc20
   1801dcf43:	85 c0                	test   eax,eax
   1801dcf45:	74 0d                	je     0x1801dcf54
   1801dcf47:	48 ff c3             	inc    rbx
   1801dcf4a:	80 3b 00             	cmp    BYTE PTR [rbx],0x0
   1801dcf4d:	75 e1                	jne    0x1801dcf30
   1801dcf4f:	e9 3a 01 00 00       	jmp    0x1801dd08e
   1801dcf54:	48 c7 85 68 04 00 00 	mov    QWORD PTR [rbp+0x468],0x0
   1801dcf5b:	00 00 00 00 
   1801dcf5f:	48 8b cf             	mov    rcx,rdi
   1801dcf62:	48 83 7f 18 0f       	cmp    QWORD PTR [rdi+0x18],0xf
   1801dcf67:	76 03                	jbe    0x1801dcf6c
   1801dcf69:	48 8b 0f             	mov    rcx,QWORD PTR [rdi]
   1801dcf6c:	4c 8d 8d 68 04 00 00 	lea    r9,[rbp+0x468]
   1801dcf73:	45 33 c0             	xor    r8d,r8d
   1801dcf76:	33 d2                	xor    edx,edx
   1801dcf78:	e8 d3 48 0e 00       	call   0x1802c1850
   1801dcf7d:	84 c0                	test   al,al
   1801dcf7f:	0f 84 fd 00 00 00    	je     0x1801dd082
   1801dcf85:	4c 8b c7             	mov    r8,rdi
   1801dcf88:	48 83 7f 18 0f       	cmp    QWORD PTR [rdi+0x18],0xf
   1801dcf8d:	76 03                	jbe    0x1801dcf92
   1801dcf8f:	4c 8b 07             	mov    r8,QWORD PTR [rdi]
   1801dcf92:	4d 8b cd             	mov    r9,r13
   1801dcf95:	ba 04 01 00 00       	mov    edx,0x104
   1801dcf9a:	48 8d 0d ff b2 20 00 	lea    rcx,[rip+0x20b2ff]        # 0x1803e82a0
   1801dcfa1:	ff 15 59 fc 12 00    	call   QWORD PTR [rip+0x12fc59]        # 0x18030cc00
   1801dcfa7:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801dcfae:	56 fd 93 
   1801dcfb1:	48 89 9d b8 13 00 00 	mov    QWORD PTR [rbp+0x13b8],rbx
   1801dcfb8:	4c 8d 85 b8 13 00 00 	lea    r8,[rbp+0x13b8]
   1801dcfbf:	48 8d 95 60 10 00 00 	lea    rdx,[rbp+0x1060]
   1801dcfc6:	48 8d 0d 23 de 21 00 	lea    rcx,[rip+0x21de23]        # 0x1803fadf0
   1801dcfcd:	e8 5e 4a 06 00       	call   0x180241a30
   1801dcfd2:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dcfd5:	48 83 c1 28          	add    rcx,0x28
   1801dcfd9:	48 b8 e2 42 51 27 5b 	movabs rax,0xa8b2235b275142e2
   1801dcfe0:	23 b2 a8 
   1801dcfe3:	48 89 85 c0 13 00 00 	mov    QWORD PTR [rbp+0x13c0],rax
   1801dcfea:	4c 8d 85 c0 13 00 00 	lea    r8,[rbp+0x13c0]
   1801dcff1:	48 8d 95 70 10 00 00 	lea    rdx,[rbp+0x1070]
   1801dcff8:	e8 33 4a 06 00       	call   0x180241a30
   1801dcffd:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd000:	48 83 c1 28          	add    rcx,0x28
   1801dd004:	e8 b7 58 02 00       	call   0x1802028c0
   1801dd009:	48 3b c7             	cmp    rax,rdi
   1801dd00c:	74 19                	je     0x1801dd027
   1801dd00e:	48 8b d7             	mov    rdx,rdi
   1801dd011:	48 83 7f 18 0f       	cmp    QWORD PTR [rdi+0x18],0xf
   1801dd016:	76 03                	jbe    0x1801dd01b
   1801dd018:	48 8b 17             	mov    rdx,QWORD PTR [rdi]
   1801dd01b:	4c 8b 47 10          	mov    r8,QWORD PTR [rdi+0x10]
   1801dd01f:	48 8b c8             	mov    rcx,rax
   1801dd022:	e8 d9 56 03 00       	call   0x180212700
   1801dd027:	48 89 9d c8 13 00 00 	mov    QWORD PTR [rbp+0x13c8],rbx
   1801dd02e:	4c 8d 85 c8 13 00 00 	lea    r8,[rbp+0x13c8]
   1801dd035:	48 8d 95 80 10 00 00 	lea    rdx,[rbp+0x1080]
   1801dd03c:	48 8d 0d ad dd 21 00 	lea    rcx,[rip+0x21ddad]        # 0x1803fadf0
   1801dd043:	e8 e8 49 06 00       	call   0x180241a30
   1801dd048:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd04b:	48 83 c1 28          	add    rcx,0x28
   1801dd04f:	48 b8 32 f2 79 59 34 	movabs rax,0xf2d6f3345979f232
   1801dd056:	f3 d6 f2 
   1801dd059:	48 89 85 d0 13 00 00 	mov    QWORD PTR [rbp+0x13d0],rax
   1801dd060:	4c 8d 85 d0 13 00 00 	lea    r8,[rbp+0x13d0]
   1801dd067:	48 8d 95 90 10 00 00 	lea    rdx,[rbp+0x1090]
   1801dd06e:	e8 bd 49 06 00       	call   0x180241a30
   1801dd073:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd076:	48 83 c1 28          	add    rcx,0x28
   1801dd07a:	e8 41 ff 01 00       	call   0x1801fcfc0
   1801dd07f:	c6 00 01             	mov    BYTE PTR [rax],0x1
   1801dd082:	41 ff c7             	inc    r15d
   1801dd085:	41 81 ff f4 01 00 00 	cmp    r15d,0x1f4
   1801dd08c:	7d 66                	jge    0x1801dd0f4
   1801dd08e:	48 83 c7 20          	add    rdi,0x20
   1801dd092:	49 3b fc             	cmp    rdi,r12
   1801dd095:	0f 85 65 fe ff ff    	jne    0x1801dcf00
   1801dd09b:	45 85 ff             	test   r15d,r15d
   1801dd09e:	75 13                	jne    0x1801dd0b3
   1801dd0a0:	48 8d 15 c9 82 19 00 	lea    rdx,[rip+0x1982c9]        # 0x180375370
   1801dd0a7:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801dd0ae:	e8 fd da 0c 00       	call   0x1802aabb0
   1801dd0b3:	e8 58 63 09 00       	call   0x180273410
   1801dd0b8:	f2 41 0f 10 86 b8 00 	movsd  xmm0,QWORD PTR [r14+0xb8]
   1801dd0bf:	00 00 
   1801dd0c1:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801dd0c7:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801dd0ce:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801dd0d2:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801dd0d9:	00 00 
   1801dd0db:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801dd0e0:	f3 0f 11 44 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm0
   1801dd0e6:	48 8d 15 93 82 19 00 	lea    rdx,[rip+0x198293]        # 0x180375380
   1801dd0ed:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801dd0f2:	eb 20                	jmp    0x1801dd114
   1801dd0f4:	48 8d 15 4d 82 19 00 	lea    rdx,[rip+0x19824d]        # 0x180375348
   1801dd0fb:	eb aa                	jmp    0x1801dd0a7
   1801dd0fd:	85 db                	test   ebx,ebx
   1801dd0ff:	75 18                	jne    0x1801dd119
   1801dd101:	45 85 ed             	test   r13d,r13d
   1801dd104:	74 13                	je     0x1801dd119
   1801dd106:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801dd10d:	48 8d 15 8c 82 19 00 	lea    rdx,[rip+0x19828c]        # 0x1803753a0
   1801dd114:	e8 97 da 0c 00       	call   0x1802aabb0
   1801dd119:	e8 22 2a 0d 00       	call   0x1802afb40
   1801dd11e:	33 d2                	xor    edx,edx
   1801dd120:	48 8d 0d 89 82 19 00 	lea    rcx,[rip+0x198289]        # 0x1803753b0
   1801dd127:	e8 34 d3 fb ff       	call   0x18019a460
   1801dd12c:	c7 85 ac 02 00 00 04 	mov    DWORD PTR [rbp+0x2ac],0x4
   1801dd133:	00 00 00 
   1801dd136:	45 33 ed             	xor    r13d,r13d
   1801dd139:	44 89 ad a8 02 00 00 	mov    DWORD PTR [rbp+0x2a8],r13d
   1801dd140:	8b 15 06 e1 21 00    	mov    edx,DWORD PTR [rip+0x21e106]        # 0x1803fb24c
   1801dd146:	48 8d 8d a8 02 00 00 	lea    rcx,[rbp+0x2a8]
   1801dd14d:	85 d2                	test   edx,edx
   1801dd14f:	4c 8d 25 f6 e0 21 00 	lea    r12,[rip+0x21e0f6]        # 0x1803fb24c
   1801dd156:	49 0f 49 cc          	cmovns rcx,r12
   1801dd15a:	48 8d 85 ac 02 00 00 	lea    rax,[rbp+0x2ac]
   1801dd161:	83 fa 04             	cmp    edx,0x4
   1801dd164:	48 0f 4e c1          	cmovle rax,rcx
   1801dd168:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dd16b:	89 05 db e0 21 00    	mov    DWORD PTR [rip+0x21e0db],eax        # 0x1803fb24c
   1801dd171:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dd178:	48 8d 05 99 f8 1f 00 	lea    rax,[rip+0x1ff899]        # 0x1803dca18
   1801dd17f:	48 03 c8             	add    rcx,rax
   1801dd182:	4c 8d 05 27 82 19 00 	lea    r8,[rip+0x198227]        # 0x1803753b0
   1801dd189:	48 8d 15 1c 60 16 00 	lea    rdx,[rip+0x16601c]        # 0x1803431ac
   1801dd190:	e8 1b da 0c 00       	call   0x1802aabb0
   1801dd195:	8b 3d 65 d2 22 00    	mov    edi,DWORD PTR [rip+0x22d265]        # 0x18040a400
   1801dd19b:	8b 35 5b d2 22 00    	mov    esi,DWORD PTR [rip+0x22d25b]        # 0x18040a3fc
   1801dd1a1:	49 bf 67 0c ab 96 1a 	movabs r15,0x93fd561a96ab0c67
   1801dd1a8:	56 fd 93 
   1801dd1ab:	4c 89 bd d8 13 00 00 	mov    QWORD PTR [rbp+0x13d8],r15
   1801dd1b2:	4c 8d 85 d8 13 00 00 	lea    r8,[rbp+0x13d8]
   1801dd1b9:	48 8d 95 a0 10 00 00 	lea    rdx,[rbp+0x10a0]
   1801dd1c0:	48 8d 0d 29 dc 21 00 	lea    rcx,[rip+0x21dc29]        # 0x1803fadf0
   1801dd1c7:	e8 64 48 06 00       	call   0x180241a30
   1801dd1cc:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd1cf:	48 83 c1 28          	add    rcx,0x28
   1801dd1d3:	48 b8 c2 fa 8c 46 c9 	movabs rax,0xe4f59bc9468cfac2
   1801dd1da:	9b f5 e4 
   1801dd1dd:	48 89 85 e0 13 00 00 	mov    QWORD PTR [rbp+0x13e0],rax
   1801dd1e4:	4c 8d 85 e0 13 00 00 	lea    r8,[rbp+0x13e0]
   1801dd1eb:	48 8d 95 b0 10 00 00 	lea    rdx,[rbp+0x10b0]
   1801dd1f2:	e8 39 48 06 00       	call   0x180241a30
   1801dd1f7:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd1fa:	48 83 c1 28          	add    rcx,0x28
   1801dd1fe:	e8 bd fd 01 00       	call   0x1801fcfc0
   1801dd203:	48 8b d0             	mov    rdx,rax
   1801dd206:	48 8d 0d bb 81 19 00 	lea    rcx,[rip+0x1981bb]        # 0x1803753c8
   1801dd20d:	e8 4e 39 fc ff       	call   0x1801a0b60
   1801dd212:	83 ff 01             	cmp    edi,0x1
   1801dd215:	8d 5f ff             	lea    ebx,[rdi-0x1]
   1801dd218:	7f 05                	jg     0x1801dd21f
   1801dd21a:	bb 1f 00 00 00       	mov    ebx,0x1f
   1801dd21f:	4c 89 bd e8 13 00 00 	mov    QWORD PTR [rbp+0x13e8],r15
   1801dd226:	4c 8d 85 e8 13 00 00 	lea    r8,[rbp+0x13e8]
   1801dd22d:	48 8d 95 a0 05 00 00 	lea    rdx,[rbp+0x5a0]
   1801dd234:	48 8d 0d b5 db 21 00 	lea    rcx,[rip+0x21dbb5]        # 0x1803fadf0
   1801dd23b:	e8 f0 47 06 00       	call   0x180241a30
   1801dd240:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd243:	48 83 c1 28          	add    rcx,0x28
   1801dd247:	48 b8 04 34 a4 d2 6f 	movabs rax,0x7d8b8d6fd2a43404
   1801dd24e:	8d 8b 7d 
   1801dd251:	48 89 85 f0 13 00 00 	mov    QWORD PTR [rbp+0x13f0],rax
   1801dd258:	4c 8d 85 f0 13 00 00 	lea    r8,[rbp+0x13f0]
   1801dd25f:	48 8d 95 b0 05 00 00 	lea    rdx,[rbp+0x5b0]
   1801dd266:	e8 c5 47 06 00       	call   0x180241a30
   1801dd26b:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd26e:	48 83 c1 28          	add    rcx,0x28
   1801dd272:	e8 49 57 02 00       	call   0x1802029c0
   1801dd277:	4c 8b c0             	mov    r8,rax
   1801dd27a:	48 8d 05 ef 22 16 00 	lea    rax,[rip+0x1622ef]        # 0x18033f570
   1801dd281:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801dd286:	89 5c 24 20          	mov    DWORD PTR [rsp+0x20],ebx
   1801dd28a:	45 33 c9             	xor    r9d,r9d
   1801dd28d:	48 8d 15 54 81 19 00 	lea    rdx,[rip+0x198154]        # 0x1803753e8
   1801dd294:	48 8d 0d 5d 81 19 00 	lea    rcx,[rip+0x19815d]        # 0x1803753f8
   1801dd29b:	e8 00 b3 fc ff       	call   0x1801a85a0
   1801dd2a0:	4c 89 bd f8 13 00 00 	mov    QWORD PTR [rbp+0x13f8],r15
   1801dd2a7:	4c 8d 85 f8 13 00 00 	lea    r8,[rbp+0x13f8]
   1801dd2ae:	48 8d 95 c0 05 00 00 	lea    rdx,[rbp+0x5c0]
   1801dd2b5:	48 8d 0d 34 db 21 00 	lea    rcx,[rip+0x21db34]        # 0x1803fadf0
   1801dd2bc:	e8 6f 47 06 00       	call   0x180241a30
   1801dd2c1:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd2c4:	48 83 c1 28          	add    rcx,0x28
   1801dd2c8:	48 b8 9f e1 74 75 03 	movabs rax,0x38e8f2037574e19f
   1801dd2cf:	f2 e8 38 
   1801dd2d2:	48 89 85 00 14 00 00 	mov    QWORD PTR [rbp+0x1400],rax
   1801dd2d9:	4c 8d 85 00 14 00 00 	lea    r8,[rbp+0x1400]
   1801dd2e0:	48 8d 95 d0 05 00 00 	lea    rdx,[rbp+0x5d0]
   1801dd2e7:	e8 44 47 06 00       	call   0x180241a30
   1801dd2ec:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd2ef:	48 83 c1 28          	add    rcx,0x28
   1801dd2f3:	e8 c8 fc 01 00       	call   0x1801fcfc0
   1801dd2f8:	48 8b d0             	mov    rdx,rax
   1801dd2fb:	48 8d 0d fe 80 19 00 	lea    rcx,[rip+0x1980fe]        # 0x180375400
   1801dd302:	e8 59 38 fc ff       	call   0x1801a0b60
   1801dd307:	4c 89 bd 08 14 00 00 	mov    QWORD PTR [rbp+0x1408],r15
   1801dd30e:	4c 8d 85 08 14 00 00 	lea    r8,[rbp+0x1408]
   1801dd315:	48 8d 95 e0 05 00 00 	lea    rdx,[rbp+0x5e0]
   1801dd31c:	48 8d 0d cd da 21 00 	lea    rcx,[rip+0x21dacd]        # 0x1803fadf0
   1801dd323:	e8 08 47 06 00       	call   0x180241a30
   1801dd328:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd32b:	48 83 c1 28          	add    rcx,0x28
   1801dd32f:	48 b8 39 5b 93 31 f3 	movabs rax,0xdc9817f331935b39
   1801dd336:	17 98 dc 
   1801dd339:	48 89 85 10 14 00 00 	mov    QWORD PTR [rbp+0x1410],rax
   1801dd340:	4c 8d 85 10 14 00 00 	lea    r8,[rbp+0x1410]
   1801dd347:	48 8d 95 f0 05 00 00 	lea    rdx,[rbp+0x5f0]
   1801dd34e:	e8 dd 46 06 00       	call   0x180241a30
   1801dd353:	bb ff 00 00 00       	mov    ebx,0xff
   1801dd358:	85 f6                	test   esi,esi
   1801dd35a:	0f 4f de             	cmovg  ebx,esi
   1801dd35d:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd360:	48 83 c1 28          	add    rcx,0x28
   1801dd364:	e8 57 56 02 00       	call   0x1802029c0
   1801dd369:	4c 8b c0             	mov    r8,rax
   1801dd36c:	48 8d 05 fd 21 16 00 	lea    rax,[rip+0x1621fd]        # 0x18033f570
   1801dd373:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801dd378:	89 5c 24 20          	mov    DWORD PTR [rsp+0x20],ebx
   1801dd37c:	45 33 c9             	xor    r9d,r9d
   1801dd37f:	48 8d 15 a2 80 19 00 	lea    rdx,[rip+0x1980a2]        # 0x180375428
   1801dd386:	48 8d 0d ab 80 19 00 	lea    rcx,[rip+0x1980ab]        # 0x180375438
   1801dd38d:	e8 0e b2 fc ff       	call   0x1801a85a0
   1801dd392:	f3 41 0f 10 8e c4 00 	movss  xmm1,DWORD PTR [r14+0xc4]
   1801dd399:	00 00 
   1801dd39b:	f3 41 0f 59 c9       	mulss  xmm1,xmm9
   1801dd3a0:	f2 41 0f 10 86 b8 00 	movsd  xmm0,QWORD PTR [r14+0xb8]
   1801dd3a7:	00 00 
   1801dd3a9:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801dd3b0:	f3 0f 11 4c 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm1
   1801dd3b6:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801dd3bb:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801dd3c1:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801dd3c5:	85 ff                	test   edi,edi
   1801dd3c7:	7e 14                	jle    0x1801dd3dd
   1801dd3c9:	44 8b ce             	mov    r9d,esi
   1801dd3cc:	44 8b c7             	mov    r8d,edi
   1801dd3cf:	48 8d 15 72 80 19 00 	lea    rdx,[rip+0x198072]        # 0x180375448
   1801dd3d6:	e8 d5 d7 0c 00       	call   0x1802aabb0
   1801dd3db:	eb 0c                	jmp    0x1801dd3e9
   1801dd3dd:	48 8d 15 8c 80 19 00 	lea    rdx,[rip+0x19808c]        # 0x180375470
   1801dd3e4:	e8 c7 d7 0c 00       	call   0x1802aabb0
   1801dd3e9:	e8 52 27 0d 00       	call   0x1802afb40
   1801dd3ee:	33 d2                	xor    edx,edx
   1801dd3f0:	48 8d 0d a1 80 19 00 	lea    rcx,[rip+0x1980a1]        # 0x180375498
   1801dd3f7:	e8 64 d0 fb ff       	call   0x18019a460
   1801dd3fc:	c7 85 b4 02 00 00 04 	mov    DWORD PTR [rbp+0x2b4],0x4
   1801dd403:	00 00 00 
   1801dd406:	44 89 ad b0 02 00 00 	mov    DWORD PTR [rbp+0x2b0],r13d
   1801dd40d:	8b 15 39 de 21 00    	mov    edx,DWORD PTR [rip+0x21de39]        # 0x1803fb24c
   1801dd413:	48 8d 8d b0 02 00 00 	lea    rcx,[rbp+0x2b0]
   1801dd41a:	85 d2                	test   edx,edx
   1801dd41c:	49 0f 49 cc          	cmovns rcx,r12
   1801dd420:	48 8d 85 b4 02 00 00 	lea    rax,[rbp+0x2b4]
   1801dd427:	83 fa 04             	cmp    edx,0x4
   1801dd42a:	48 0f 4e c1          	cmovle rax,rcx
   1801dd42e:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dd431:	89 05 15 de 21 00    	mov    DWORD PTR [rip+0x21de15],eax        # 0x1803fb24c
   1801dd437:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dd43e:	48 8d 35 d3 f5 1f 00 	lea    rsi,[rip+0x1ff5d3]        # 0x1803dca18
   1801dd445:	48 03 ce             	add    rcx,rsi
   1801dd448:	4c 8d 05 49 80 19 00 	lea    r8,[rip+0x198049]        # 0x180375498
   1801dd44f:	48 8d 15 56 5d 16 00 	lea    rdx,[rip+0x165d56]        # 0x1803431ac
   1801dd456:	e8 55 d7 0c 00       	call   0x1802aabb0
   1801dd45b:	8b 1d ab 36 22 00    	mov    ebx,DWORD PTR [rip+0x2236ab]        # 0x180400b0c
   1801dd461:	85 db                	test   ebx,ebx
   1801dd463:	7e 23                	jle    0x1801dd488
   1801dd465:	41 0f 28 ca          	movaps xmm1,xmm10
   1801dd469:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dd46d:	e8 3e 21 0a 00       	call   0x18027f5b0
   1801dd472:	49 8d 8e 98 00 00 00 	lea    rcx,[r14+0x98]
   1801dd479:	44 8b c3             	mov    r8d,ebx
   1801dd47c:	48 8d 15 25 80 19 00 	lea    rdx,[rip+0x198025]        # 0x1803754a8
   1801dd483:	e8 28 d7 0c 00       	call   0x1802aabb0
   1801dd488:	0f b6 1d 7a 36 22 00 	movzx  ebx,BYTE PTR [rip+0x22367a]        # 0x180400b09
   1801dd48f:	44 8b 25 06 bb 21 00 	mov    r12d,DWORD PTR [rip+0x21bb06]        # 0x1803f8f9c
   1801dd496:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801dd49d:	00 00 
   1801dd49f:	b9 10 00 00 00       	mov    ecx,0x10
   1801dd4a4:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801dd4a8:	44 38 2c 01          	cmp    BYTE PTR [rcx+rax*1],r13b
   1801dd4ac:	75 05                	jne    0x1801dd4b3
   1801dd4ae:	e8 41 ae 0f 00       	call   0x1802d82f4
   1801dd4b3:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801dd4ba:	00 00 
   1801dd4bc:	b9 c0 0e 00 00       	mov    ecx,0xec0
   1801dd4c1:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801dd4c5:	48 8b 14 01          	mov    rdx,QWORD PTR [rcx+rax*1]
   1801dd4c9:	48 8b 82 20 15 00 00 	mov    rax,QWORD PTR [rdx+0x1520]
   1801dd4d0:	4c 39 a8 c8 01 00 00 	cmp    QWORD PTR [rax+0x1c8],r13
   1801dd4d7:	75 10                	jne    0x1801dd4e9
   1801dd4d9:	4c 39 aa 68 23 00 00 	cmp    QWORD PTR [rdx+0x2368],r13
   1801dd4e0:	48 8d 88 80 02 00 00 	lea    rcx,[rax+0x280]
   1801dd4e7:	74 07                	je     0x1801dd4f0
   1801dd4e9:	48 8d 88 50 02 00 00 	lea    rcx,[rax+0x250]
   1801dd4f0:	41 0f 10 8e 98 00 00 	movups xmm1,XMMWORD PTR [r14+0x98]
   1801dd4f7:	00 
   1801dd4f8:	f3 0f 10 01          	movss  xmm0,DWORD PTR [rcx]
   1801dd4fc:	f3 0f 5c 80 18 01 00 	subss  xmm0,DWORD PTR [rax+0x118]
   1801dd503:	00 
   1801dd504:	f3 0f 5c 05 6c 3b 1a 	subss  xmm0,DWORD PTR [rip+0x1a3b6c]        # 0x180381078
   1801dd50b:	00 
   1801dd50c:	f3 0f 11 85 70 04 00 	movss  DWORD PTR [rbp+0x470],xmm0
   1801dd513:	00 
   1801dd514:	c7 85 74 04 00 00 00 	mov    DWORD PTR [rbp+0x474],0x41c00000
   1801dd51b:	00 c0 41 
   1801dd51e:	66 0f 7f 4c 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm1
   1801dd524:	84 db                	test   bl,bl
   1801dd526:	0f 94 c0             	sete   al
   1801dd529:	48 8d 15 88 7f 19 00 	lea    rdx,[rip+0x197f88]        # 0x1803754b8
   1801dd530:	48 8d 0d 99 7f 19 00 	lea    rcx,[rip+0x197f99]        # 0x1803754d0
   1801dd537:	84 db                	test   bl,bl
   1801dd539:	48 0f 45 ca          	cmovne rcx,rdx
   1801dd53d:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dd542:	88 44 24 20          	mov    BYTE PTR [rsp+0x20],al
   1801dd546:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dd54b:	4c 8d 85 70 04 00 00 	lea    r8,[rbp+0x470]
   1801dd552:	ba 09 00 00 00       	mov    edx,0x9
   1801dd557:	e8 e4 f5 fb ff       	call   0x18019cb40
   1801dd55c:	84 c0                	test   al,al
   1801dd55e:	74 09                	je     0x1801dd569
   1801dd560:	84 db                	test   bl,bl
   1801dd562:	75 05                	jne    0x1801dd569
   1801dd564:	e8 77 6f f7 ff       	call   0x1801544e0
   1801dd569:	c7 85 bc 02 00 00 00 	mov    DWORD PTR [rbp+0x2bc],0x3fc00000
   1801dd570:	00 c0 3f 
   1801dd573:	c7 85 b8 02 00 00 00 	mov    DWORD PTR [rbp+0x2b8],0x3f400000
   1801dd57a:	00 40 3f 
   1801dd57d:	f3 0f 10 05 1f d1 1f 	movss  xmm0,DWORD PTR [rip+0x1fd11f]        # 0x1803da6a4
   1801dd584:	00 
   1801dd585:	48 8d 8d b8 02 00 00 	lea    rcx,[rbp+0x2b8]
   1801dd58c:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dd590:	48 8d 3d 0d d1 1f 00 	lea    rdi,[rip+0x1fd10d]        # 0x1803da6a4
   1801dd597:	48 0f 46 cf          	cmovbe rcx,rdi
   1801dd59b:	48 8d 85 bc 02 00 00 	lea    rax,[rbp+0x2bc]
   1801dd5a2:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dd5a6:	48 0f 46 c1          	cmovbe rax,rcx
   1801dd5aa:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801dd5ae:	f3 41 0f 59 ce       	mulss  xmm1,xmm14
   1801dd5b3:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dd5b7:	e8 f4 1f 0a 00       	call   0x18027f5b0
   1801dd5bc:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dd5c0:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801dd5c4:	66 49 0f 7e c0       	movq   r8,xmm0
   1801dd5c9:	ba 04 00 00 00       	mov    edx,0x4
   1801dd5ce:	48 8d 0d 13 7f 19 00 	lea    rcx,[rip+0x197f13]        # 0x1803754e8
   1801dd5d5:	e8 26 06 fc ff       	call   0x18019dc00
   1801dd5da:	84 c0                	test   al,al
   1801dd5dc:	74 0c                	je     0x1801dd5ea
   1801dd5de:	48 8d 0d 13 7f 19 00 	lea    rcx,[rip+0x197f13]        # 0x1803754f8
   1801dd5e5:	e8 e6 39 0a 00       	call   0x180280fd0
   1801dd5ea:	48 8d 0d 07 7f 19 00 	lea    rcx,[rip+0x197f07]        # 0x1803754f8
   1801dd5f1:	e8 8a d0 fb ff       	call   0x18019a680
   1801dd5f6:	84 c0                	test   al,al
   1801dd5f8:	0f 84 cc 06 00 00    	je     0x1801ddcca
   1801dd5fe:	4c 89 bd 18 14 00 00 	mov    QWORD PTR [rbp+0x1418],r15
   1801dd605:	4c 8d 85 18 14 00 00 	lea    r8,[rbp+0x1418]
   1801dd60c:	48 8d 95 00 06 00 00 	lea    rdx,[rbp+0x600]
   1801dd613:	48 8d 0d d6 d7 21 00 	lea    rcx,[rip+0x21d7d6]        # 0x1803fadf0
   1801dd61a:	e8 11 44 06 00       	call   0x180241a30
   1801dd61f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd622:	48 83 c1 28          	add    rcx,0x28
   1801dd626:	48 bb 8d de 69 99 7f 	movabs rbx,0x313d197f9969de8d
   1801dd62d:	19 3d 31 
   1801dd630:	48 89 9d 20 14 00 00 	mov    QWORD PTR [rbp+0x1420],rbx
   1801dd637:	4c 8d 85 20 14 00 00 	lea    r8,[rbp+0x1420]
   1801dd63e:	48 8d 95 10 06 00 00 	lea    rdx,[rbp+0x610]
   1801dd645:	e8 e6 43 06 00       	call   0x180241a30
   1801dd64a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd64d:	48 83 c1 28          	add    rcx,0x28
   1801dd651:	e8 6a f9 01 00       	call   0x1801fcfc0
   1801dd656:	48 8b d0             	mov    rdx,rax
   1801dd659:	48 8d 0d a8 7e 19 00 	lea    rcx,[rip+0x197ea8]        # 0x180375508
   1801dd660:	e8 fb 34 fc ff       	call   0x1801a0b60
   1801dd665:	33 c9                	xor    ecx,ecx
   1801dd667:	e8 f4 17 09 00       	call   0x18026ee60
   1801dd66c:	84 c0                	test   al,al
   1801dd66e:	74 0c                	je     0x1801dd67c
   1801dd670:	48 8d 0d b9 7e 19 00 	lea    rcx,[rip+0x197eb9]        # 0x180375530
   1801dd677:	e8 84 36 0a 00       	call   0x180280d00
   1801dd67c:	e8 bf 24 0d 00       	call   0x1802afb40
   1801dd681:	33 d2                	xor    edx,edx
   1801dd683:	48 8d 0d ae 7f 19 00 	lea    rcx,[rip+0x197fae]        # 0x180375638
   1801dd68a:	e8 d1 cd fb ff       	call   0x18019a460
   1801dd68f:	c7 85 c4 02 00 00 04 	mov    DWORD PTR [rbp+0x2c4],0x4
   1801dd696:	00 00 00 
   1801dd699:	44 89 ad c0 02 00 00 	mov    DWORD PTR [rbp+0x2c0],r13d
   1801dd6a0:	8b 15 a6 db 21 00    	mov    edx,DWORD PTR [rip+0x21dba6]        # 0x1803fb24c
   1801dd6a6:	48 8d 8d c0 02 00 00 	lea    rcx,[rbp+0x2c0]
   1801dd6ad:	85 d2                	test   edx,edx
   1801dd6af:	48 8d 05 96 db 21 00 	lea    rax,[rip+0x21db96]        # 0x1803fb24c
   1801dd6b6:	48 0f 49 c8          	cmovns rcx,rax
   1801dd6ba:	48 8d 85 c4 02 00 00 	lea    rax,[rbp+0x2c4]
   1801dd6c1:	83 fa 04             	cmp    edx,0x4
   1801dd6c4:	48 0f 4e c1          	cmovle rax,rcx
   1801dd6c8:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dd6cb:	89 05 7b db 21 00    	mov    DWORD PTR [rip+0x21db7b],eax        # 0x1803fb24c
   1801dd6d1:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dd6d8:	48 03 ce             	add    rcx,rsi
   1801dd6db:	4c 8d 05 56 7f 19 00 	lea    r8,[rip+0x197f56]        # 0x180375638
   1801dd6e2:	48 8d 15 c3 5a 16 00 	lea    rdx,[rip+0x165ac3]        # 0x1803431ac
   1801dd6e9:	e8 c2 d4 0c 00       	call   0x1802aabb0
   1801dd6ee:	4c 89 bd 28 14 00 00 	mov    QWORD PTR [rbp+0x1428],r15
   1801dd6f5:	4c 8d 85 28 14 00 00 	lea    r8,[rbp+0x1428]
   1801dd6fc:	48 8d 95 20 06 00 00 	lea    rdx,[rbp+0x620]
   1801dd703:	48 8d 0d e6 d6 21 00 	lea    rcx,[rip+0x21d6e6]        # 0x1803fadf0
   1801dd70a:	e8 21 43 06 00       	call   0x180241a30
   1801dd70f:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd712:	48 83 c1 28          	add    rcx,0x28
   1801dd716:	48 b8 b5 1f 48 ff 24 	movabs rax,0xd832b224ff481fb5
   1801dd71d:	b2 32 d8 
   1801dd720:	48 89 85 30 14 00 00 	mov    QWORD PTR [rbp+0x1430],rax
   1801dd727:	4c 8d 85 30 14 00 00 	lea    r8,[rbp+0x1430]
   1801dd72e:	48 8d 95 30 06 00 00 	lea    rdx,[rbp+0x630]
   1801dd735:	e8 f6 42 06 00       	call   0x180241a30
   1801dd73a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd73d:	48 83 c1 28          	add    rcx,0x28
   1801dd741:	e8 7a f8 01 00       	call   0x1801fcfc0
   1801dd746:	48 8b d0             	mov    rdx,rax
   1801dd749:	48 8d 0d f0 7e 19 00 	lea    rcx,[rip+0x197ef0]        # 0x180375640
   1801dd750:	e8 0b 34 fc ff       	call   0x1801a0b60
   1801dd755:	33 c9                	xor    ecx,ecx
   1801dd757:	e8 04 17 09 00       	call   0x18026ee60
   1801dd75c:	84 c0                	test   al,al
   1801dd75e:	74 0c                	je     0x1801dd76c
   1801dd760:	48 8d 0d f9 7e 19 00 	lea    rcx,[rip+0x197ef9]        # 0x180375660
   1801dd767:	e8 94 35 0a 00       	call   0x180280d00
   1801dd76c:	4c 89 bd 38 14 00 00 	mov    QWORD PTR [rbp+0x1438],r15
   1801dd773:	4c 8d 85 38 14 00 00 	lea    r8,[rbp+0x1438]
   1801dd77a:	48 8d 95 40 06 00 00 	lea    rdx,[rbp+0x640]
   1801dd781:	48 8d 0d 68 d6 21 00 	lea    rcx,[rip+0x21d668]        # 0x1803fadf0
   1801dd788:	e8 a3 42 06 00       	call   0x180241a30
   1801dd78d:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd790:	48 83 c1 28          	add    rcx,0x28
   1801dd794:	48 b8 4e 02 c5 f2 87 	movabs rax,0xac270287f2c5024e
   1801dd79b:	02 27 ac 
   1801dd79e:	48 89 85 40 14 00 00 	mov    QWORD PTR [rbp+0x1440],rax
   1801dd7a5:	4c 8d 85 40 14 00 00 	lea    r8,[rbp+0x1440]
   1801dd7ac:	48 8d 95 50 06 00 00 	lea    rdx,[rbp+0x650]
   1801dd7b3:	e8 78 42 06 00       	call   0x180241a30
   1801dd7b8:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd7bb:	48 83 c1 28          	add    rcx,0x28
   1801dd7bf:	e8 fc f7 01 00       	call   0x1801fcfc0
   1801dd7c4:	48 8b d0             	mov    rdx,rax
   1801dd7c7:	48 8d 0d fa 7f 19 00 	lea    rcx,[rip+0x197ffa]        # 0x1803757c8
   1801dd7ce:	e8 8d 33 fc ff       	call   0x1801a0b60
   1801dd7d3:	33 c9                	xor    ecx,ecx
   1801dd7d5:	e8 86 16 09 00       	call   0x18026ee60
   1801dd7da:	84 c0                	test   al,al
   1801dd7dc:	74 0c                	je     0x1801dd7ea
   1801dd7de:	48 8d 0d 0b 80 19 00 	lea    rcx,[rip+0x19800b]        # 0x1803757f0
   1801dd7e5:	e8 16 35 0a 00       	call   0x180280d00
   1801dd7ea:	4c 89 bd 48 14 00 00 	mov    QWORD PTR [rbp+0x1448],r15
   1801dd7f1:	4c 8d 85 48 14 00 00 	lea    r8,[rbp+0x1448]
   1801dd7f8:	48 8d 95 60 06 00 00 	lea    rdx,[rbp+0x660]
   1801dd7ff:	48 8d 0d ea d5 21 00 	lea    rcx,[rip+0x21d5ea]        # 0x1803fadf0
   1801dd806:	e8 25 42 06 00       	call   0x180241a30
   1801dd80b:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd80e:	48 83 c1 28          	add    rcx,0x28
   1801dd812:	48 b8 35 97 02 5d c6 	movabs rax,0x43a6f7c65d029735
   1801dd819:	f7 a6 43 
   1801dd81c:	48 89 85 50 14 00 00 	mov    QWORD PTR [rbp+0x1450],rax
   1801dd823:	4c 8d 85 50 14 00 00 	lea    r8,[rbp+0x1450]
   1801dd82a:	48 8d 95 70 06 00 00 	lea    rdx,[rbp+0x670]
   1801dd831:	e8 fa 41 06 00       	call   0x180241a30
   1801dd836:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd839:	48 83 c1 28          	add    rcx,0x28
   1801dd83d:	e8 7e f7 01 00       	call   0x1801fcfc0
   1801dd842:	48 8b d0             	mov    rdx,rax
   1801dd845:	48 8d 0d fc 7f 19 00 	lea    rcx,[rip+0x197ffc]        # 0x180375848
   1801dd84c:	e8 0f 33 fc ff       	call   0x1801a0b60
   1801dd851:	33 c9                	xor    ecx,ecx
   1801dd853:	e8 08 16 09 00       	call   0x18026ee60
   1801dd858:	84 c0                	test   al,al
   1801dd85a:	74 0c                	je     0x1801dd868
   1801dd85c:	48 8d 0d 0d 80 19 00 	lea    rcx,[rip+0x19800d]        # 0x180375870
   1801dd863:	e8 98 34 0a 00       	call   0x180280d00
   1801dd868:	4c 89 bd 58 14 00 00 	mov    QWORD PTR [rbp+0x1458],r15
   1801dd86f:	4c 8d 85 58 14 00 00 	lea    r8,[rbp+0x1458]
   1801dd876:	48 8d 95 80 06 00 00 	lea    rdx,[rbp+0x680]
   1801dd87d:	48 8d 0d 6c d5 21 00 	lea    rcx,[rip+0x21d56c]        # 0x1803fadf0
   1801dd884:	e8 a7 41 06 00       	call   0x180241a30
   1801dd889:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd88c:	48 83 c1 28          	add    rcx,0x28
   1801dd890:	48 b8 cc 8d 96 21 fb 	movabs rax,0x6186d1fb21968dcc
   1801dd897:	d1 86 61 
   1801dd89a:	48 89 85 60 14 00 00 	mov    QWORD PTR [rbp+0x1460],rax
   1801dd8a1:	4c 8d 85 60 14 00 00 	lea    r8,[rbp+0x1460]
   1801dd8a8:	48 8d 95 90 06 00 00 	lea    rdx,[rbp+0x690]
   1801dd8af:	e8 7c 41 06 00       	call   0x180241a30
   1801dd8b4:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd8b7:	48 83 c1 28          	add    rcx,0x28
   1801dd8bb:	e8 00 f7 01 00       	call   0x1801fcfc0
   1801dd8c0:	48 8b d0             	mov    rdx,rax
   1801dd8c3:	48 8d 0d be 7f 19 00 	lea    rcx,[rip+0x197fbe]        # 0x180375888
   1801dd8ca:	e8 91 32 fc ff       	call   0x1801a0b60
   1801dd8cf:	33 c9                	xor    ecx,ecx
   1801dd8d1:	e8 8a 15 09 00       	call   0x18026ee60
   1801dd8d6:	84 c0                	test   al,al
   1801dd8d8:	74 0c                	je     0x1801dd8e6
   1801dd8da:	48 8d 0d cf 7f 19 00 	lea    rcx,[rip+0x197fcf]        # 0x1803758b0
   1801dd8e1:	e8 1a 34 0a 00       	call   0x180280d00
   1801dd8e6:	4c 89 bd 68 14 00 00 	mov    QWORD PTR [rbp+0x1468],r15
   1801dd8ed:	4c 8d 85 68 14 00 00 	lea    r8,[rbp+0x1468]
   1801dd8f4:	48 8d 95 a0 06 00 00 	lea    rdx,[rbp+0x6a0]
   1801dd8fb:	48 8d 0d ee d4 21 00 	lea    rcx,[rip+0x21d4ee]        # 0x1803fadf0
   1801dd902:	e8 29 41 06 00       	call   0x180241a30
   1801dd907:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd90a:	48 83 c1 28          	add    rcx,0x28
   1801dd90e:	48 b8 ea 5f c3 82 2d 	movabs rax,0x86cb9f2d82c35fea
   1801dd915:	9f cb 86 
   1801dd918:	48 89 85 70 14 00 00 	mov    QWORD PTR [rbp+0x1470],rax
   1801dd91f:	4c 8d 85 70 14 00 00 	lea    r8,[rbp+0x1470]
   1801dd926:	48 8d 95 b0 06 00 00 	lea    rdx,[rbp+0x6b0]
   1801dd92d:	e8 fe 40 06 00       	call   0x180241a30
   1801dd932:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd935:	48 83 c1 28          	add    rcx,0x28
   1801dd939:	e8 82 f6 01 00       	call   0x1801fcfc0
   1801dd93e:	48 8b d0             	mov    rdx,rax
   1801dd941:	48 8d 0d 18 80 19 00 	lea    rcx,[rip+0x198018]        # 0x180375960
   1801dd948:	e8 13 32 fc ff       	call   0x1801a0b60
   1801dd94d:	33 c9                	xor    ecx,ecx
   1801dd94f:	e8 0c 15 09 00       	call   0x18026ee60
   1801dd954:	84 c0                	test   al,al
   1801dd956:	74 0c                	je     0x1801dd964
   1801dd958:	48 8d 0d 31 80 19 00 	lea    rcx,[rip+0x198031]        # 0x180375990
   1801dd95f:	e8 9c 33 0a 00       	call   0x180280d00
   1801dd964:	e8 d7 21 0d 00       	call   0x1802afb40
   1801dd969:	33 d2                	xor    edx,edx
   1801dd96b:	48 8d 0d b6 80 19 00 	lea    rcx,[rip+0x1980b6]        # 0x180375a28
   1801dd972:	e8 e9 ca fb ff       	call   0x18019a460
   1801dd977:	c7 85 cc 02 00 00 04 	mov    DWORD PTR [rbp+0x2cc],0x4
   1801dd97e:	00 00 00 
   1801dd981:	44 89 ad c8 02 00 00 	mov    DWORD PTR [rbp+0x2c8],r13d
   1801dd988:	8b 15 be d8 21 00    	mov    edx,DWORD PTR [rip+0x21d8be]        # 0x1803fb24c
   1801dd98e:	48 8d 8d c8 02 00 00 	lea    rcx,[rbp+0x2c8]
   1801dd995:	85 d2                	test   edx,edx
   1801dd997:	48 8d 05 ae d8 21 00 	lea    rax,[rip+0x21d8ae]        # 0x1803fb24c
   1801dd99e:	48 0f 49 c8          	cmovns rcx,rax
   1801dd9a2:	48 8d 85 cc 02 00 00 	lea    rax,[rbp+0x2cc]
   1801dd9a9:	83 fa 04             	cmp    edx,0x4
   1801dd9ac:	48 0f 4e c1          	cmovle rax,rcx
   1801dd9b0:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dd9b3:	89 05 93 d8 21 00    	mov    DWORD PTR [rip+0x21d893],eax        # 0x1803fb24c
   1801dd9b9:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dd9c0:	48 03 ce             	add    rcx,rsi
   1801dd9c3:	4c 8d 05 5e 80 19 00 	lea    r8,[rip+0x19805e]        # 0x180375a28
   1801dd9ca:	48 8d 15 db 57 16 00 	lea    rdx,[rip+0x1657db]        # 0x1803431ac
   1801dd9d1:	e8 da d1 0c 00       	call   0x1802aabb0
   1801dd9d6:	4c 89 bd 78 14 00 00 	mov    QWORD PTR [rbp+0x1478],r15
   1801dd9dd:	4c 8d 85 78 14 00 00 	lea    r8,[rbp+0x1478]
   1801dd9e4:	48 8d 95 c0 06 00 00 	lea    rdx,[rbp+0x6c0]
   1801dd9eb:	48 8d 0d fe d3 21 00 	lea    rcx,[rip+0x21d3fe]        # 0x1803fadf0
   1801dd9f2:	e8 39 40 06 00       	call   0x180241a30
   1801dd9f7:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dd9fa:	48 83 c1 28          	add    rcx,0x28
   1801dd9fe:	48 b8 0f 1d 5b a0 d9 	movabs rax,0x3cf66d9a05b1d0f
   1801dda05:	66 cf 03 
   1801dda08:	48 89 85 80 14 00 00 	mov    QWORD PTR [rbp+0x1480],rax
   1801dda0f:	4c 8d 85 80 14 00 00 	lea    r8,[rbp+0x1480]
   1801dda16:	48 8d 95 d0 06 00 00 	lea    rdx,[rbp+0x6d0]
   1801dda1d:	e8 0e 40 06 00       	call   0x180241a30
   1801dda22:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dda25:	48 83 c1 28          	add    rcx,0x28
   1801dda29:	e8 92 f5 01 00       	call   0x1801fcfc0
   1801dda2e:	48 8b d0             	mov    rdx,rax
   1801dda31:	48 8d 0d 08 80 19 00 	lea    rcx,[rip+0x198008]        # 0x180375a40
   1801dda38:	e8 23 31 fc ff       	call   0x1801a0b60
   1801dda3d:	33 c9                	xor    ecx,ecx
   1801dda3f:	e8 1c 14 09 00       	call   0x18026ee60
   1801dda44:	84 c0                	test   al,al
   1801dda46:	74 0c                	je     0x1801dda54
   1801dda48:	48 8d 0d 11 80 19 00 	lea    rcx,[rip+0x198011]        # 0x180375a60
   1801dda4f:	e8 ac 32 0a 00       	call   0x180280d00
   1801dda54:	4c 89 bd 90 14 00 00 	mov    QWORD PTR [rbp+0x1490],r15
   1801dda5b:	4c 8d 85 90 14 00 00 	lea    r8,[rbp+0x1490]
   1801dda62:	48 8d 95 e0 06 00 00 	lea    rdx,[rbp+0x6e0]
   1801dda69:	48 8d 0d 80 d3 21 00 	lea    rcx,[rip+0x21d380]        # 0x1803fadf0
   1801dda70:	e8 bb 3f 06 00       	call   0x180241a30
   1801dda75:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dda78:	48 83 c1 28          	add    rcx,0x28
   1801dda7c:	48 b8 99 b1 59 e7 62 	movabs rax,0x2b267962e759b199
   1801dda83:	79 26 2b 
   1801dda86:	48 89 85 98 14 00 00 	mov    QWORD PTR [rbp+0x1498],rax
   1801dda8d:	4c 8d 85 98 14 00 00 	lea    r8,[rbp+0x1498]
   1801dda94:	48 8d 95 f0 06 00 00 	lea    rdx,[rbp+0x6f0]
   1801dda9b:	e8 90 3f 06 00       	call   0x180241a30
   1801ddaa0:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ddaa3:	48 83 c1 28          	add    rcx,0x28
   1801ddaa7:	e8 14 f5 01 00       	call   0x1801fcfc0
   1801ddaac:	48 8b d0             	mov    rdx,rax
   1801ddaaf:	48 8d 0d 0a 83 19 00 	lea    rcx,[rip+0x19830a]        # 0x180375dc0
   1801ddab6:	e8 a5 30 fc ff       	call   0x1801a0b60
   1801ddabb:	33 c9                	xor    ecx,ecx
   1801ddabd:	e8 9e 13 09 00       	call   0x18026ee60
   1801ddac2:	84 c0                	test   al,al
   1801ddac4:	74 0c                	je     0x1801ddad2
   1801ddac6:	48 8d 0d 23 83 19 00 	lea    rcx,[rip+0x198323]        # 0x180375df0
   1801ddacd:	e8 2e 32 0a 00       	call   0x180280d00
   1801ddad2:	e8 69 20 0d 00       	call   0x1802afb40
   1801ddad7:	33 d2                	xor    edx,edx
   1801ddad9:	48 8d 0d f0 83 19 00 	lea    rcx,[rip+0x1983f0]        # 0x180375ed0
   1801ddae0:	e8 7b c9 fb ff       	call   0x18019a460
   1801ddae5:	c7 85 d4 02 00 00 04 	mov    DWORD PTR [rbp+0x2d4],0x4
   1801ddaec:	00 00 00 
   1801ddaef:	44 89 ad d0 02 00 00 	mov    DWORD PTR [rbp+0x2d0],r13d
   1801ddaf6:	8b 15 50 d7 21 00    	mov    edx,DWORD PTR [rip+0x21d750]        # 0x1803fb24c
   1801ddafc:	48 8d 8d d0 02 00 00 	lea    rcx,[rbp+0x2d0]
   1801ddb03:	85 d2                	test   edx,edx
   1801ddb05:	48 8d 05 40 d7 21 00 	lea    rax,[rip+0x21d740]        # 0x1803fb24c
   1801ddb0c:	48 0f 49 c8          	cmovns rcx,rax
   1801ddb10:	48 8d 85 d4 02 00 00 	lea    rax,[rbp+0x2d4]
   1801ddb17:	83 fa 04             	cmp    edx,0x4
   1801ddb1a:	48 0f 4e c1          	cmovle rax,rcx
   1801ddb1e:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801ddb21:	89 05 25 d7 21 00    	mov    DWORD PTR [rip+0x21d725],eax        # 0x1803fb24c
   1801ddb27:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801ddb2e:	48 03 ce             	add    rcx,rsi
   1801ddb31:	4c 8d 05 98 83 19 00 	lea    r8,[rip+0x198398]        # 0x180375ed0
   1801ddb38:	48 8d 15 6d 56 16 00 	lea    rdx,[rip+0x16566d]        # 0x1803431ac
   1801ddb3f:	e8 6c d0 0c 00       	call   0x1802aabb0
   1801ddb44:	4c 89 bd a0 14 00 00 	mov    QWORD PTR [rbp+0x14a0],r15
   1801ddb4b:	4c 8d 85 a0 14 00 00 	lea    r8,[rbp+0x14a0]
   1801ddb52:	48 8d 95 00 07 00 00 	lea    rdx,[rbp+0x700]
   1801ddb59:	48 8d 0d 90 d2 21 00 	lea    rcx,[rip+0x21d290]        # 0x1803fadf0
   1801ddb60:	e8 cb 3e 06 00       	call   0x180241a30
   1801ddb65:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ddb68:	48 83 c1 28          	add    rcx,0x28
   1801ddb6c:	48 b8 7b bc 5b c3 c0 	movabs rax,0x2b9c41c0c35bbc7b
   1801ddb73:	41 9c 2b 
   1801ddb76:	48 89 85 a8 14 00 00 	mov    QWORD PTR [rbp+0x14a8],rax
   1801ddb7d:	4c 8d 85 a8 14 00 00 	lea    r8,[rbp+0x14a8]
   1801ddb84:	48 8d 95 10 07 00 00 	lea    rdx,[rbp+0x710]
   1801ddb8b:	e8 a0 3e 06 00       	call   0x180241a30
   1801ddb90:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ddb93:	48 83 c1 28          	add    rcx,0x28
   1801ddb97:	e8 24 f4 01 00       	call   0x1801fcfc0
   1801ddb9c:	48 8b d0             	mov    rdx,rax
   1801ddb9f:	48 8d 0d 3a 83 19 00 	lea    rcx,[rip+0x19833a]        # 0x180375ee0
   1801ddba6:	e8 b5 2f fc ff       	call   0x1801a0b60
   1801ddbab:	33 c9                	xor    ecx,ecx
   1801ddbad:	e8 ae 12 09 00       	call   0x18026ee60
   1801ddbb2:	84 c0                	test   al,al
   1801ddbb4:	74 0c                	je     0x1801ddbc2
   1801ddbb6:	48 8d 0d 53 83 19 00 	lea    rcx,[rip+0x198353]        # 0x180375f10
   1801ddbbd:	e8 3e 31 0a 00       	call   0x180280d00
   1801ddbc2:	4c 89 bd b0 14 00 00 	mov    QWORD PTR [rbp+0x14b0],r15
   1801ddbc9:	4c 8d 85 b0 14 00 00 	lea    r8,[rbp+0x14b0]
   1801ddbd0:	48 8d 95 20 07 00 00 	lea    rdx,[rbp+0x720]
   1801ddbd7:	48 8d 0d 12 d2 21 00 	lea    rcx,[rip+0x21d212]        # 0x1803fadf0
   1801ddbde:	e8 4d 3e 06 00       	call   0x180241a30
   1801ddbe3:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ddbe6:	48 83 c1 28          	add    rcx,0x28
   1801ddbea:	48 b8 c4 69 a0 bc 38 	movabs rax,0xcd094b38bca069c4
   1801ddbf1:	4b 09 cd 
   1801ddbf4:	48 89 85 b8 14 00 00 	mov    QWORD PTR [rbp+0x14b8],rax
   1801ddbfb:	4c 8d 85 b8 14 00 00 	lea    r8,[rbp+0x14b8]
   1801ddc02:	48 8d 95 30 07 00 00 	lea    rdx,[rbp+0x730]
   1801ddc09:	e8 22 3e 06 00       	call   0x180241a30
   1801ddc0e:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ddc11:	48 83 c1 28          	add    rcx,0x28
   1801ddc15:	e8 a6 f3 01 00       	call   0x1801fcfc0
   1801ddc1a:	48 8b d0             	mov    rdx,rax
   1801ddc1d:	48 8d 0d 14 84 19 00 	lea    rcx,[rip+0x198414]        # 0x180376038
   1801ddc24:	e8 37 2f fc ff       	call   0x1801a0b60
   1801ddc29:	33 c9                	xor    ecx,ecx
   1801ddc2b:	e8 30 12 09 00       	call   0x18026ee60
   1801ddc30:	84 c0                	test   al,al
   1801ddc32:	74 0c                	je     0x1801ddc40
   1801ddc34:	48 8d 0d 25 84 19 00 	lea    rcx,[rip+0x198425]        # 0x180376060
   1801ddc3b:	e8 c0 30 0a 00       	call   0x180280d00
   1801ddc40:	4c 89 bd c0 14 00 00 	mov    QWORD PTR [rbp+0x14c0],r15
   1801ddc47:	4c 8d 85 c0 14 00 00 	lea    r8,[rbp+0x14c0]
   1801ddc4e:	48 8d 95 40 07 00 00 	lea    rdx,[rbp+0x740]
   1801ddc55:	48 8d 0d 94 d1 21 00 	lea    rcx,[rip+0x21d194]        # 0x1803fadf0
   1801ddc5c:	e8 cf 3d 06 00       	call   0x180241a30
   1801ddc61:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ddc64:	48 83 c1 28          	add    rcx,0x28
   1801ddc68:	48 89 9d c8 14 00 00 	mov    QWORD PTR [rbp+0x14c8],rbx
   1801ddc6f:	4c 8d 85 c8 14 00 00 	lea    r8,[rbp+0x14c8]
   1801ddc76:	48 8d 95 50 07 00 00 	lea    rdx,[rbp+0x750]
   1801ddc7d:	e8 ae 3d 06 00       	call   0x180241a30
   1801ddc82:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ddc85:	48 83 c1 28          	add    rcx,0x28
   1801ddc89:	e8 32 f3 01 00       	call   0x1801fcfc0
   1801ddc8e:	44 38 28             	cmp    BYTE PTR [rax],r13b
   1801ddc91:	74 07                	je     0x1801ddc9a
   1801ddc93:	e8 38 66 f7 ff       	call   0x1801542d0
   1801ddc98:	eb 05                	jmp    0x1801ddc9f
   1801ddc9a:	e8 c1 67 f7 ff       	call   0x180154460
   1801ddc9f:	44 38 2d 57 d0 21 00 	cmp    BYTE PTR [rip+0x21d057],r13b        # 0x1803facfd
   1801ddca6:	74 1d                	je     0x1801ddcc5
   1801ddca8:	48 8b 05 49 ef 21 00 	mov    rax,QWORD PTR [rip+0x21ef49]        # 0x1803fcbf8
   1801ddcaf:	48 39 05 3a ef 21 00 	cmp    QWORD PTR [rip+0x21ef3a],rax        # 0x1803fcbf0
   1801ddcb6:	74 12                	je     0x1801ddcca
   1801ddcb8:	48 83 e8 08          	sub    rax,0x8
   1801ddcbc:	48 89 05 35 ef 21 00 	mov    QWORD PTR [rip+0x21ef35],rax        # 0x1803fcbf8
   1801ddcc3:	eb 05                	jmp    0x1801ddcca
   1801ddcc5:	e8 36 3b 0a 00       	call   0x180281800
   1801ddcca:	0f b6 1d 1c 2e 22 00 	movzx  ebx,BYTE PTR [rip+0x222e1c]        # 0x180400aed
   1801ddcd1:	48 8d 8d 20 17 00 00 	lea    rcx,[rbp+0x1720]
   1801ddcd8:	e8 33 03 f7 ff       	call   0x18014e010
   1801ddcdd:	90                   	nop
   1801ddcde:	4c 8d 85 20 17 00 00 	lea    r8,[rbp+0x1720]
   1801ddce5:	48 83 bd 38 17 00 00 	cmp    QWORD PTR [rbp+0x1738],0xf
   1801ddcec:	0f 
   1801ddced:	4c 0f 47 85 20 17 00 	cmova  r8,QWORD PTR [rbp+0x1720]
   1801ddcf4:	00 
   1801ddcf5:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801ddcfc:	48 8d 15 a9 54 16 00 	lea    rdx,[rip+0x1654a9]        # 0x1803431ac
   1801ddd03:	e8 a8 ce 0c 00       	call   0x1802aabb0
   1801ddd08:	41 0f 28 ca          	movaps xmm1,xmm10
   1801ddd0c:	41 0f 28 c0          	movaps xmm0,xmm8
   1801ddd10:	e8 9b 18 0a 00       	call   0x18027f5b0
   1801ddd15:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801ddd1c:	00 00 
   1801ddd1e:	b9 10 00 00 00       	mov    ecx,0x10
   1801ddd23:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801ddd27:	80 3c 01 00          	cmp    BYTE PTR [rcx+rax*1],0x0
   1801ddd2b:	75 05                	jne    0x1801ddd32
   1801ddd2d:	e8 c2 a5 0f 00       	call   0x1802d82f4
   1801ddd32:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801ddd39:	00 00 
   1801ddd3b:	b9 c0 0e 00 00       	mov    ecx,0xec0
   1801ddd40:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801ddd44:	48 8b 0c 08          	mov    rcx,QWORD PTR [rax+rcx*1]
   1801ddd48:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801ddd4f:	f3 0f 10 b0 80 02 00 	movss  xmm6,DWORD PTR [rax+0x280]
   1801ddd56:	00 
   1801ddd57:	f3 0f 5c 70 28       	subss  xmm6,DWORD PTR [rax+0x28]
   1801ddd5c:	c7 85 dc 02 00 00 00 	mov    DWORD PTR [rbp+0x2dc],0x3fc00000
   1801ddd63:	00 c0 3f 
   1801ddd66:	c7 85 d8 02 00 00 00 	mov    DWORD PTR [rbp+0x2d8],0x3f400000
   1801ddd6d:	00 40 3f 
   1801ddd70:	f3 0f 10 05 2c c9 1f 	movss  xmm0,DWORD PTR [rip+0x1fc92c]        # 0x1803da6a4
   1801ddd77:	00 
   1801ddd78:	48 8d 8d d8 02 00 00 	lea    rcx,[rbp+0x2d8]
   1801ddd7f:	44 0f 2f c8          	comiss xmm9,xmm0
   1801ddd83:	48 0f 46 cf          	cmovbe rcx,rdi
   1801ddd87:	48 8d 85 dc 02 00 00 	lea    rax,[rbp+0x2dc]
   1801ddd8e:	41 0f 2f c4          	comiss xmm0,xmm12
   1801ddd92:	48 0f 46 c1          	cmovbe rax,rcx
   1801ddd96:	f3 0f 10 00          	movss  xmm0,DWORD PTR [rax]
   1801ddd9a:	f3 0f 59 05 2a 33 1a 	mulss  xmm0,DWORD PTR [rip+0x1a332a]        # 0x1803810cc
   1801ddda1:	00 
   1801ddda2:	f3 0f 5c f0          	subss  xmm6,xmm0
   1801ddda6:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801dddad:	00 00 
   1801dddaf:	b9 10 00 00 00       	mov    ecx,0x10
   1801dddb4:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801dddb8:	80 3c 01 00          	cmp    BYTE PTR [rcx+rax*1],0x0
   1801dddbc:	75 05                	jne    0x1801dddc3
   1801dddbe:	e8 31 a5 0f 00       	call   0x1802d82f4
   1801dddc3:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801dddca:	00 00 
   1801dddcc:	b9 c0 0e 00 00       	mov    ecx,0xec0
   1801dddd1:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801dddd5:	48 8b 14 08          	mov    rdx,QWORD PTR [rax+rcx*1]
   1801dddd9:	48 8b 82 20 15 00 00 	mov    rax,QWORD PTR [rdx+0x1520]
   1801ddde0:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801ddde7:	48 8b 82 20 15 00 00 	mov    rax,QWORD PTR [rdx+0x1520]
   1801dddee:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801dddf3:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801dddfa:	00 
   1801dddfb:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801dddff:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801dde06:	00 
   1801dde07:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801dde0e:	48 8d 05 23 83 19 00 	lea    rax,[rip+0x198323]        # 0x180376138
   1801dde15:	48 8d 0d 34 83 19 00 	lea    rcx,[rip+0x198334]        # 0x180376150
   1801dde1c:	84 db                	test   bl,bl
   1801dde1e:	48 0f 45 c8          	cmovne rcx,rax
   1801dde22:	e8 09 e5 0c 00       	call   0x1802ac330
   1801dde27:	84 c0                	test   al,al
   1801dde29:	74 09                	je     0x1801dde34
   1801dde2b:	84 db                	test   bl,bl
   1801dde2d:	75 05                	jne    0x1801dde34
   1801dde2f:	e8 3c 3b f7 ff       	call   0x180151970
   1801dde34:	0f 57 c0             	xorps  xmm0,xmm0
   1801dde37:	33 c0                	xor    eax,eax
   1801dde39:	0f 11 85 38 11 00 00 	movups XMMWORD PTR [rbp+0x1138],xmm0
   1801dde40:	48 89 85 48 11 00 00 	mov    QWORD PTR [rbp+0x1148],rax
   1801dde47:	48 8d 8d 38 11 00 00 	lea    rcx,[rbp+0x1138]
   1801dde4e:	e8 dd 02 f7 ff       	call   0x18014e130
   1801dde53:	90                   	nop
   1801dde54:	f3 0f 10 35 8c 32 1a 	movss  xmm6,DWORD PTR [rip+0x1a328c]        # 0x1803810e8
   1801dde5b:	00 
   1801dde5c:	48 8b 85 40 11 00 00 	mov    rax,QWORD PTR [rbp+0x1140]
   1801dde63:	48 39 85 38 11 00 00 	cmp    QWORD PTR [rbp+0x1138],rax
   1801dde6a:	0f 84 cf 00 00 00    	je     0x1801ddf3f
   1801dde70:	c7 85 78 04 00 00 00 	mov    DWORD PTR [rbp+0x478],0xbf800000
   1801dde77:	00 80 bf 
   1801dde7a:	f3 0f 10 05 22 c8 1f 	movss  xmm0,DWORD PTR [rip+0x1fc822]        # 0x1803da6a4
   1801dde81:	00 
   1801dde82:	f3 0f 59 c6          	mulss  xmm0,xmm6
   1801dde86:	f3 0f 11 85 7c 04 00 	movss  DWORD PTR [rbp+0x47c],xmm0
   1801dde8d:	00 
   1801dde8e:	45 33 c9             	xor    r9d,r9d
   1801dde91:	41 b8 01 00 00 00    	mov    r8d,0x1
   1801dde97:	48 8d 95 78 04 00 00 	lea    rdx,[rbp+0x478]
   1801dde9e:	48 8d 0d c3 82 19 00 	lea    rcx,[rip+0x1982c3]        # 0x180376168
   1801ddea5:	e8 f6 50 09 00       	call   0x180272fa0
   1801ddeaa:	84 c0                	test   al,al
   1801ddeac:	0f 84 86 00 00 00    	je     0x1801ddf38
   1801ddeb2:	48 8b bd 40 11 00 00 	mov    rdi,QWORD PTR [rbp+0x1140]
   1801ddeb9:	48 8b 9d 38 11 00 00 	mov    rbx,QWORD PTR [rbp+0x1138]
   1801ddec0:	48 3b df             	cmp    rbx,rdi
   1801ddec3:	74 73                	je     0x1801ddf38
   1801ddec5:	48 8d 35 ac 82 19 00 	lea    rsi,[rip+0x1982ac]        # 0x180376178
   1801ddecc:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
   1801dded0:	8b 03                	mov    eax,DWORD PTR [rbx]
   1801dded2:	83 f8 02             	cmp    eax,0x2
   1801dded5:	7c 09                	jl     0x1801ddee0
   1801dded7:	49 8d 8e 98 00 00 00 	lea    rcx,[r14+0x98]
   1801ddede:	eb 13                	jmp    0x1801ddef3
   1801ddee0:	83 f8 01             	cmp    eax,0x1
   1801ddee3:	49 8d 8e 88 00 00 00 	lea    rcx,[r14+0x88]
   1801ddeea:	74 07                	je     0x1801ddef3
   1801ddeec:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801ddef3:	0f 10 01             	movups xmm0,XMMWORD PTR [rcx]
   1801ddef6:	0f 11 44 24 60       	movups XMMWORD PTR [rsp+0x60],xmm0
   1801ddefb:	4c 8d 4b 08          	lea    r9,[rbx+0x8]
   1801ddeff:	49 83 79 18 0f       	cmp    QWORD PTR [r9+0x18],0xf
   1801ddf04:	76 03                	jbe    0x1801ddf09
   1801ddf06:	4d 8b 09             	mov    r9,QWORD PTR [r9]
   1801ddf09:	4c 8d 05 dc 31 16 00 	lea    r8,[rip+0x1631dc]        # 0x1803410ec
   1801ddf10:	83 f8 01             	cmp    eax,0x1
   1801ddf13:	4c 0f 4d c6          	cmovge r8,rsi
   1801ddf17:	48 8d 15 6a 60 16 00 	lea    rdx,[rip+0x16606a]        # 0x180343f88
   1801ddf1e:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801ddf23:	e8 88 cc 0c 00       	call   0x1802aabb0
   1801ddf28:	48 83 c3 28          	add    rbx,0x28
   1801ddf2c:	48 3b df             	cmp    rbx,rdi
   1801ddf2f:	75 9f                	jne    0x1801dded0
   1801ddf31:	48 8d 35 e0 ea 1f 00 	lea    rsi,[rip+0x1feae0]        # 0x1803dca18
   1801ddf38:	e8 d3 54 09 00       	call   0x180273410
   1801ddf3d:	eb 43                	jmp    0x1801ddf82
   1801ddf3f:	84 db                	test   bl,bl
   1801ddf41:	75 3f                	jne    0x1801ddf82
   1801ddf43:	f2 41 0f 10 86 b8 00 	movsd  xmm0,QWORD PTR [r14+0xb8]
   1801ddf4a:	00 00 
   1801ddf4c:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801ddf52:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801ddf59:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801ddf5d:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801ddf64:	00 00 
   1801ddf66:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801ddf6b:	f3 0f 11 44 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm0
   1801ddf71:	48 8d 15 08 82 19 00 	lea    rdx,[rip+0x198208]        # 0x180376180
   1801ddf78:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801ddf7d:	e8 2e cc 0c 00       	call   0x1802aabb0
   1801ddf82:	0f 57 c0             	xorps  xmm0,xmm0
   1801ddf85:	33 c0                	xor    eax,eax
   1801ddf87:	0f 11 85 20 11 00 00 	movups XMMWORD PTR [rbp+0x1120],xmm0
   1801ddf8e:	48 89 85 30 11 00 00 	mov    QWORD PTR [rbp+0x1130],rax
   1801ddf95:	48 8d 8d 20 11 00 00 	lea    rcx,[rbp+0x1120]
   1801ddf9c:	e8 ff 00 f7 ff       	call   0x18014e0a0
   1801ddfa1:	90                   	nop
   1801ddfa2:	48 8b 85 28 11 00 00 	mov    rax,QWORD PTR [rbp+0x1128]
   1801ddfa9:	48 39 85 20 11 00 00 	cmp    QWORD PTR [rbp+0x1120],rax
   1801ddfb0:	0f 84 bd 00 00 00    	je     0x1801de073
   1801ddfb6:	c7 85 80 04 00 00 00 	mov    DWORD PTR [rbp+0x480],0xbf800000
   1801ddfbd:	00 80 bf 
   1801ddfc0:	f3 0f 10 05 dc c6 1f 	movss  xmm0,DWORD PTR [rip+0x1fc6dc]        # 0x1803da6a4
   1801ddfc7:	00 
   1801ddfc8:	f3 0f 59 c6          	mulss  xmm0,xmm6
   1801ddfcc:	f3 0f 11 85 84 04 00 	movss  DWORD PTR [rbp+0x484],xmm0
   1801ddfd3:	00 
   1801ddfd4:	45 33 c9             	xor    r9d,r9d
   1801ddfd7:	41 b8 01 00 00 00    	mov    r8d,0x1
   1801ddfdd:	48 8d 95 80 04 00 00 	lea    rdx,[rbp+0x480]
   1801ddfe4:	48 8d 0d ad 81 19 00 	lea    rcx,[rip+0x1981ad]        # 0x180376198
   1801ddfeb:	e8 b0 4f 09 00       	call   0x180272fa0
   1801ddff0:	84 c0                	test   al,al
   1801ddff2:	74 7a                	je     0x1801de06e
   1801ddff4:	48 8b bd 28 11 00 00 	mov    rdi,QWORD PTR [rbp+0x1128]
   1801ddffb:	48 8b 9d 20 11 00 00 	mov    rbx,QWORD PTR [rbp+0x1120]
   1801de002:	48 3b df             	cmp    rbx,rdi
   1801de005:	74 67                	je     0x1801de06e
   1801de007:	f3 0f 10 35 3d 2b 1a 	movss  xmm6,DWORD PTR [rip+0x1a2b3d]        # 0x180380b4c
   1801de00e:	00 
   1801de00f:	90                   	nop
   1801de010:	48 83 7b 18 0f       	cmp    QWORD PTR [rbx+0x18],0xf
   1801de015:	76 05                	jbe    0x1801de01c
   1801de017:	4c 8b 03             	mov    r8,QWORD PTR [rbx]
   1801de01a:	eb 03                	jmp    0x1801de01f
   1801de01c:	4c 8b c3             	mov    r8,rbx
   1801de01f:	f2 41 0f 10 8e b8 00 	movsd  xmm1,QWORD PTR [r14+0xb8]
   1801de026:	00 00 
   1801de028:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801de02f:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801de036:	00 00 
   1801de038:	f3 0f 59 c6          	mulss  xmm0,xmm6
   1801de03c:	f2 0f 11 8d 00 05 00 	movsd  QWORD PTR [rbp+0x500],xmm1
   1801de043:	00 
   1801de044:	89 85 08 05 00 00    	mov    DWORD PTR [rbp+0x508],eax
   1801de04a:	f3 0f 11 85 0c 05 00 	movss  DWORD PTR [rbp+0x50c],xmm0
   1801de051:	00 
   1801de052:	48 8d 15 53 51 16 00 	lea    rdx,[rip+0x165153]        # 0x1803431ac
   1801de059:	48 8d 8d 00 05 00 00 	lea    rcx,[rbp+0x500]
   1801de060:	e8 4b cb 0c 00       	call   0x1802aabb0
   1801de065:	48 83 c3 20          	add    rbx,0x20
   1801de069:	48 3b df             	cmp    rbx,rdi
   1801de06c:	75 a2                	jne    0x1801de010
   1801de06e:	e8 9d 53 09 00       	call   0x180273410
   1801de073:	f2 41 0f 10 86 b8 00 	movsd  xmm0,QWORD PTR [r14+0xb8]
   1801de07a:	00 00 
   1801de07c:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801de082:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801de089:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801de08d:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801de094:	00 00 
   1801de096:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801de09b:	f3 0f 11 44 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm0
   1801de0a1:	48 8d 15 08 81 19 00 	lea    rdx,[rip+0x198108]        # 0x1803761b0
   1801de0a8:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801de0ad:	e8 fe ca 0c 00       	call   0x1802aabb0
   1801de0b2:	90                   	nop
   1801de0b3:	48 8d 8d 20 11 00 00 	lea    rcx,[rbp+0x1120]
   1801de0ba:	e8 01 f5 02 00       	call   0x18020d5c0
   1801de0bf:	90                   	nop
   1801de0c0:	48 8d 8d 38 11 00 00 	lea    rcx,[rbp+0x1138]
   1801de0c7:	e8 64 e6 03 00       	call   0x18021c730
   1801de0cc:	90                   	nop
   1801de0cd:	48 8d 8d 20 17 00 00 	lea    rcx,[rbp+0x1720]
   1801de0d4:	e8 77 03 03 00       	call   0x18020e450
   1801de0d9:	e8 62 1a 0d 00       	call   0x1802afb40
   1801de0de:	33 d2                	xor    edx,edx
   1801de0e0:	48 8d 0d 69 81 19 00 	lea    rcx,[rip+0x198169]        # 0x180376250
   1801de0e7:	e8 74 c3 fb ff       	call   0x18019a460
   1801de0ec:	c7 85 e4 02 00 00 04 	mov    DWORD PTR [rbp+0x2e4],0x4
   1801de0f3:	00 00 00 
   1801de0f6:	44 89 ad e0 02 00 00 	mov    DWORD PTR [rbp+0x2e0],r13d
   1801de0fd:	8b 15 49 d1 21 00    	mov    edx,DWORD PTR [rip+0x21d149]        # 0x1803fb24c
   1801de103:	48 8d 8d e0 02 00 00 	lea    rcx,[rbp+0x2e0]
   1801de10a:	85 d2                	test   edx,edx
   1801de10c:	48 8d 1d 39 d1 21 00 	lea    rbx,[rip+0x21d139]        # 0x1803fb24c
   1801de113:	48 0f 49 cb          	cmovns rcx,rbx
   1801de117:	48 8d 85 e4 02 00 00 	lea    rax,[rbp+0x2e4]
   1801de11e:	83 fa 04             	cmp    edx,0x4
   1801de121:	48 0f 4e c1          	cmovle rax,rcx
   1801de125:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801de128:	89 05 1e d1 21 00    	mov    DWORD PTR [rip+0x21d11e],eax        # 0x1803fb24c
   1801de12e:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801de135:	48 03 ce             	add    rcx,rsi
   1801de138:	4c 8d 05 11 81 19 00 	lea    r8,[rip+0x198111]        # 0x180376250
   1801de13f:	48 8d 15 66 50 16 00 	lea    rdx,[rip+0x165066]        # 0x1803431ac
   1801de146:	e8 65 ca 0c 00       	call   0x1802aabb0
   1801de14b:	4c 89 bd d0 14 00 00 	mov    QWORD PTR [rbp+0x14d0],r15
   1801de152:	4c 8d 85 d0 14 00 00 	lea    r8,[rbp+0x14d0]
   1801de159:	48 8d 95 60 07 00 00 	lea    rdx,[rbp+0x760]
   1801de160:	48 8d 0d 89 cc 21 00 	lea    rcx,[rip+0x21cc89]        # 0x1803fadf0
   1801de167:	e8 c4 38 06 00       	call   0x180241a30
   1801de16c:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801de16f:	48 83 c1 28          	add    rcx,0x28
   1801de173:	48 b8 2f 14 dd 13 bb 	movabs rax,0xa94d2abb13dd142f
   1801de17a:	2a 4d a9 
   1801de17d:	48 89 85 d8 14 00 00 	mov    QWORD PTR [rbp+0x14d8],rax
   1801de184:	4c 8d 85 d8 14 00 00 	lea    r8,[rbp+0x14d8]
   1801de18b:	48 8d 95 70 07 00 00 	lea    rdx,[rbp+0x770]
   1801de192:	e8 99 38 06 00       	call   0x180241a30
   1801de197:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801de19a:	48 83 c1 28          	add    rcx,0x28
   1801de19e:	e8 1d ee 01 00       	call   0x1801fcfc0
   1801de1a3:	48 8b d0             	mov    rdx,rax
   1801de1a6:	48 8d 0d b3 80 19 00 	lea    rcx,[rip+0x1980b3]        # 0x180376260
   1801de1ad:	e8 ae 29 fc ff       	call   0x1801a0b60
   1801de1b2:	33 c9                	xor    ecx,ecx
   1801de1b4:	e8 a7 0c 09 00       	call   0x18026ee60
   1801de1b9:	84 c0                	test   al,al
   1801de1bb:	74 0c                	je     0x1801de1c9
   1801de1bd:	48 8d 0d bc 80 19 00 	lea    rcx,[rip+0x1980bc]        # 0x180376280
   1801de1c4:	e8 37 2b 0a 00       	call   0x180280d00
   1801de1c9:	41 0f 28 ca          	movaps xmm1,xmm10
   1801de1cd:	41 0f 28 c0          	movaps xmm0,xmm8
   1801de1d1:	e8 da 13 0a 00       	call   0x18027f5b0
   1801de1d6:	41 0f 28 c0          	movaps xmm0,xmm8
   1801de1da:	41 0f 14 c0          	unpcklps xmm0,xmm8
   1801de1de:	66 49 0f 7e c0       	movq   r8,xmm0
   1801de1e3:	ba 04 00 00 00       	mov    edx,0x4
   1801de1e8:	48 8d 0d f1 82 19 00 	lea    rcx,[rip+0x1982f1]        # 0x1803764e0
   1801de1ef:	e8 0c fa fb ff       	call   0x18019dc00
   1801de1f4:	84 c0                	test   al,al
   1801de1f6:	74 0c                	je     0x1801de204
   1801de1f8:	48 8d 0d f1 82 19 00 	lea    rcx,[rip+0x1982f1]        # 0x1803764f0
   1801de1ff:	e8 cc 2d 0a 00       	call   0x180280fd0
   1801de204:	48 8d 0d e5 82 19 00 	lea    rcx,[rip+0x1982e5]        # 0x1803764f0
   1801de20b:	e8 70 c4 fb ff       	call   0x18019a680
   1801de210:	48 8d 3d 69 a5 20 00 	lea    rdi,[rip+0x20a569]        # 0x1803e8780
   1801de217:	84 c0                	test   al,al
   1801de219:	0f 84 9f 0c 00 00    	je     0x1801deebe
   1801de21f:	e8 3c a3 f7 ff       	call   0x180158560
   1801de224:	33 d2                	xor    edx,edx
   1801de226:	48 8d 0d d3 82 19 00 	lea    rcx,[rip+0x1982d3]        # 0x180376500
   1801de22d:	e8 2e c2 fb ff       	call   0x18019a460
   1801de232:	c7 85 ec 02 00 00 04 	mov    DWORD PTR [rbp+0x2ec],0x4
   1801de239:	00 00 00 
   1801de23c:	44 89 ad e8 02 00 00 	mov    DWORD PTR [rbp+0x2e8],r13d
   1801de243:	8b 15 03 d0 21 00    	mov    edx,DWORD PTR [rip+0x21d003]        # 0x1803fb24c
   1801de249:	48 8d 8d e8 02 00 00 	lea    rcx,[rbp+0x2e8]
   1801de250:	85 d2                	test   edx,edx
   1801de252:	48 0f 49 cb          	cmovns rcx,rbx
   1801de256:	48 8d 85 ec 02 00 00 	lea    rax,[rbp+0x2ec]
   1801de25d:	83 fa 04             	cmp    edx,0x4
   1801de260:	48 0f 4e c1          	cmovle rax,rcx
   1801de264:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801de267:	89 05 df cf 21 00    	mov    DWORD PTR [rip+0x21cfdf],eax        # 0x1803fb24c
   1801de26d:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801de274:	48 03 ce             	add    rcx,rsi
   1801de277:	4c 8d 05 82 82 19 00 	lea    r8,[rip+0x198282]        # 0x180376500
   1801de27e:	48 8d 15 27 4f 16 00 	lea    rdx,[rip+0x164f27]        # 0x1803431ac
   1801de285:	e8 26 c9 0c 00       	call   0x1802aabb0
   1801de28a:	f2 41 0f 10 86 b8 00 	movsd  xmm0,QWORD PTR [r14+0xb8]
   1801de291:	00 00 
   1801de293:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801de299:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801de2a0:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801de2a4:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801de2ab:	00 00 
   1801de2ad:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801de2b2:	f3 0f 11 44 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm0
   1801de2b8:	48 8d 15 51 82 19 00 	lea    rdx,[rip+0x198251]        # 0x180376510
   1801de2bf:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801de2c4:	e8 e7 c8 0c 00       	call   0x1802aabb0
   1801de2c9:	e8 72 18 0d 00       	call   0x1802afb40
   1801de2ce:	48 89 bd 78 05 00 00 	mov    QWORD PTR [rbp+0x578],rdi
   1801de2d5:	48 8b cf             	mov    rcx,rdi
   1801de2d8:	ff 15 42 e2 12 00    	call   QWORD PTR [rip+0x12e242]        # 0x18030c520
   1801de2de:	85 c0                	test   eax,eax
   1801de2e0:	0f 85 55 0c 00 00    	jne    0x1801def3b
   1801de2e6:	8b 05 e0 a4 20 00    	mov    eax,DWORD PTR [rip+0x20a4e0]        # 0x1803e87cc
   1801de2ec:	3d ff ff ff 7f       	cmp    eax,0x7fffffff
   1801de2f1:	0f 84 a0 08 00 00    	je     0x1801deb97
   1801de2f7:	49 c7 c5 ff ff ff ff 	mov    r13,0xffffffffffffffff
   1801de2fe:	41 8b f5             	mov    esi,r13d
   1801de301:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de308:	00 00 
   1801de30a:	bf 10 00 00 00       	mov    edi,0x10
   1801de30f:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801de313:	80 3c 07 00          	cmp    BYTE PTR [rdi+rax*1],0x0
   1801de317:	75 05                	jne    0x1801de31e
   1801de319:	e8 d6 9f 0f 00       	call   0x1802d82f4
   1801de31e:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de325:	00 00 
   1801de327:	41 bf c0 0e 00 00    	mov    r15d,0xec0
   1801de32d:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801de331:	49 8b 1c 07          	mov    rbx,QWORD PTR [r15+rax*1]
   1801de335:	0f 57 c0             	xorps  xmm0,xmm0
   1801de338:	0f 11 85 c4 04 00 00 	movups XMMWORD PTR [rbp+0x4c4],xmm0
   1801de33f:	c7 85 c0 04 00 00 03 	mov    DWORD PTR [rbp+0x4c0],0x3
   1801de346:	00 00 00 
   1801de349:	f3 0f 10 83 e0 0d 00 	movss  xmm0,DWORD PTR [rbx+0xde0]
   1801de350:	00 
   1801de351:	f3 0f 11 85 c4 04 00 	movss  DWORD PTR [rbp+0x4c4],xmm0
   1801de358:	00 
   1801de359:	f3 0f 10 8b e4 0d 00 	movss  xmm1,DWORD PTR [rbx+0xde4]
   1801de360:	00 
   1801de361:	f3 0f 11 8d c8 04 00 	movss  DWORD PTR [rbp+0x4c8],xmm1
   1801de368:	00 
   1801de369:	f3 0f 10 83 e8 0d 00 	movss  xmm0,DWORD PTR [rbx+0xde8]
   1801de370:	00 
   1801de371:	f3 0f 11 85 cc 04 00 	movss  DWORD PTR [rbp+0x4cc],xmm0
   1801de378:	00 
   1801de379:	f3 0f 10 8b ec 0d 00 	movss  xmm1,DWORD PTR [rbx+0xdec]
   1801de380:	00 
   1801de381:	f3 0f 11 8d d0 04 00 	movss  DWORD PTR [rbp+0x4d0],xmm1
   1801de388:	00 
   1801de389:	48 8d 8b c8 1f 00 00 	lea    rcx,[rbx+0x1fc8]
   1801de390:	48 8d 95 c0 04 00 00 	lea    rdx,[rbp+0x4c0]
   1801de397:	e8 84 be 0a 00       	call   0x18028a220
   1801de39c:	83 bb c4 1f 00 00 03 	cmp    DWORD PTR [rbx+0x1fc4],0x3
   1801de3a3:	74 0c                	je     0x1801de3b1
   1801de3a5:	41 0f 10 46 38       	movups xmm0,XMMWORD PTR [r14+0x38]
   1801de3aa:	0f 11 83 e0 0d 00 00 	movups XMMWORD PTR [rbx+0xde0],xmm0
   1801de3b1:	f3 0f 10 0d eb c2 1f 	movss  xmm1,DWORD PTR [rip+0x1fc2eb]        # 0x1803da6a4
   1801de3b8:	00 
   1801de3b9:	0f 28 c1             	movaps xmm0,xmm1
   1801de3bc:	f3 0f 59 05 38 2e 1a 	mulss  xmm0,DWORD PTR [rip+0x1a2e38]        # 0x1803811fc
   1801de3c3:	00 
   1801de3c4:	f3 0f 11 85 88 04 00 	movss  DWORD PTR [rbp+0x488],xmm0
   1801de3cb:	00 
   1801de3cc:	f3 0f 59 0d 54 2d 1a 	mulss  xmm1,DWORD PTR [rip+0x1a2d54]        # 0x180381128
   1801de3d3:	00 
   1801de3d4:	f3 0f 11 8d 8c 04 00 	movss  DWORD PTR [rbp+0x48c],xmm1
   1801de3db:	00 
   1801de3dc:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de3e3:	00 00 
   1801de3e5:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801de3e9:	80 3c 07 00          	cmp    BYTE PTR [rdi+rax*1],0x0
   1801de3ed:	75 05                	jne    0x1801de3f4
   1801de3ef:	e8 00 9f 0f 00       	call   0x1802d82f4
   1801de3f4:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de3fb:	00 00 
   1801de3fd:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801de401:	4a 8b 14 38          	mov    rdx,QWORD PTR [rax+r15*1]
   1801de405:	48 8b 82 20 15 00 00 	mov    rax,QWORD PTR [rdx+0x1520]
   1801de40c:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801de413:	48 8b 9a 20 15 00 00 	mov    rbx,QWORD PTR [rdx+0x1520]
   1801de41a:	48 63 83 08 01 00 00 	movsxd rax,DWORD PTR [rbx+0x108]
   1801de421:	4c 8b 83 10 01 00 00 	mov    r8,QWORD PTR [rbx+0x110]
   1801de428:	45 8b 44 80 fc       	mov    r8d,DWORD PTR [r8+rax*4-0x4]
   1801de42d:	33 d2                	xor    edx,edx
   1801de42f:	48 8d 0d 22 82 19 00 	lea    rcx,[rip+0x198222]        # 0x180376658
   1801de436:	e8 45 a5 08 00       	call   0x180268980
   1801de43b:	8b f8                	mov    edi,eax
   1801de43d:	48 8b 13             	mov    rdx,QWORD PTR [rbx]
   1801de440:	39 82 78 15 00 00    	cmp    DWORD PTR [rdx+0x1578],eax
   1801de446:	75 13                	jne    0x1801de45b
   1801de448:	4c 8d 05 09 82 19 00 	lea    r8,[rip+0x198209]        # 0x180376658
   1801de44f:	ba 0b 00 00 00       	mov    edx,0xb
   1801de454:	8b c8                	mov    ecx,eax
   1801de456:	e8 85 b5 0a 00       	call   0x1802899e0
   1801de45b:	c7 44 24 20 00 00 00 	mov    DWORD PTR [rsp+0x20],0x0
   1801de462:	00 
   1801de463:	41 b9 01 00 00 00    	mov    r9d,0x1
   1801de469:	4c 8d 85 88 04 00 00 	lea    r8,[rbp+0x488]
   1801de470:	8b d7                	mov    edx,edi
   1801de472:	48 8d 0d df 81 19 00 	lea    rcx,[rip+0x1981df]        # 0x180376658
   1801de479:	e8 e2 4b 09 00       	call   0x180273060
   1801de47e:	48 8b 0d 6b b9 20 00 	mov    rcx,QWORD PTR [rip+0x20b96b]        # 0x1803e9df0
   1801de485:	48 8b 05 6c b9 20 00 	mov    rax,QWORD PTR [rip+0x20b96c]        # 0x1803e9df8
   1801de48c:	48 3b c8             	cmp    rcx,rax
   1801de48f:	75 21                	jne    0x1801de4b2
   1801de491:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801de498:	48 8d 15 c9 81 19 00 	lea    rdx,[rip+0x1981c9]        # 0x180376668
   1801de49f:	e8 0c c7 0c 00       	call   0x1802aabb0
   1801de4a4:	48 8b 05 4d b9 20 00 	mov    rax,QWORD PTR [rip+0x20b94d]        # 0x1803e9df8
   1801de4ab:	48 8b 0d 3e b9 20 00 	mov    rcx,QWORD PTR [rip+0x20b93e]        # 0x1803e9df0
   1801de4b2:	33 ff                	xor    edi,edi
   1801de4b4:	48 2b c1             	sub    rax,rcx
   1801de4b7:	48 c1 f8 03          	sar    rax,0x3
   1801de4bb:	48 bb cd cc cc cc cc 	movabs rbx,0xcccccccccccccccd
   1801de4c2:	cc cc cc 
   1801de4c5:	48 0f af c3          	imul   rax,rbx
   1801de4c9:	85 c0                	test   eax,eax
   1801de4cb:	0f 8e 04 03 00 00    	jle    0x1801de7d5
   1801de4d1:	b9 10 00 00 00       	mov    ecx,0x10
   1801de4d6:	44 8b e9             	mov    r13d,ecx
   1801de4d9:	41 bf c0 0e 00 00    	mov    r15d,0xec0
   1801de4df:	4c 89 7c 24 78       	mov    QWORD PTR [rsp+0x78],r15
   1801de4e4:	8b d9                	mov    ebx,ecx
   1801de4e6:	48 89 5d 88          	mov    QWORD PTR [rbp-0x78],rbx
   1801de4ea:	f3 0f 10 3d b6 2a 1a 	movss  xmm7,DWORD PTR [rip+0x1a2ab6]        # 0x180380fa8
   1801de4f1:	00 
   1801de4f2:	8b cf                	mov    ecx,edi
   1801de4f4:	e8 07 c9 09 00       	call   0x18027ae00
   1801de4f9:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de500:	00 00 
   1801de502:	4a 8b 0c e0          	mov    rcx,QWORD PTR [rax+r12*8]
   1801de506:	42 80 3c 29 00       	cmp    BYTE PTR [rcx+r13*1],0x0
   1801de50b:	75 05                	jne    0x1801de512
   1801de50d:	e8 e2 9d 0f 00       	call   0x1802d82f4
   1801de512:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de519:	00 00 
   1801de51b:	4a 8b 0c e0          	mov    rcx,QWORD PTR [rax+r12*8]
   1801de51f:	4a 8b 04 39          	mov    rax,QWORD PTR [rcx+r15*1]
   1801de523:	f3 0f 10 80 38 12 00 	movss  xmm0,DWORD PTR [rax+0x1238]
   1801de52a:	00 
   1801de52b:	f3 41 0f 58 c3       	addss  xmm0,xmm11
   1801de530:	f3 0f 10 0d ec 2a 1a 	movss  xmm1,DWORD PTR [rip+0x1a2aec]        # 0x180381024
   1801de537:	00 
   1801de538:	f3 0f 5f c8          	maxss  xmm1,xmm0
   1801de53c:	41 0f 10 86 98 00 00 	movups xmm0,XMMWORD PTR [r14+0x98]
   1801de543:	00 
   1801de544:	0f 29 44 24 60       	movaps XMMWORD PTR [rsp+0x60],xmm0
   1801de549:	0f 14 c9             	unpcklps xmm1,xmm1
   1801de54c:	f2 0f 11 4c 24 20    	movsd  QWORD PTR [rsp+0x20],xmm1
   1801de552:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801de557:	45 33 c0             	xor    r8d,r8d
   1801de55a:	ba 09 00 00 00       	mov    edx,0x9
   1801de55f:	48 8d 0d 2a 81 19 00 	lea    rcx,[rip+0x19812a]        # 0x180376690
   1801de566:	e8 65 ef fb ff       	call   0x18019d4d0
   1801de56b:	84 c0                	test   al,al
   1801de56d:	48 8b 45 90          	mov    rax,QWORD PTR [rbp-0x70]
   1801de571:	0f 45 c7             	cmovne eax,edi
   1801de574:	48 89 45 90          	mov    QWORD PTR [rbp-0x70],rax
   1801de578:	c7 85 f0 02 00 00 00 	mov    DWORD PTR [rbp+0x2f0],0x3fc00000
   1801de57f:	00 c0 3f 
   1801de582:	c7 85 1c 03 00 00 00 	mov    DWORD PTR [rbp+0x31c],0x3f400000
   1801de589:	00 40 3f 
   1801de58c:	f3 0f 10 05 10 c1 1f 	movss  xmm0,DWORD PTR [rip+0x1fc110]        # 0x1803da6a4
   1801de593:	00 
   1801de594:	48 8d 8d 1c 03 00 00 	lea    rcx,[rbp+0x31c]
   1801de59b:	44 0f 2f c8          	comiss xmm9,xmm0
   1801de59f:	48 8d 05 fe c0 1f 00 	lea    rax,[rip+0x1fc0fe]        # 0x1803da6a4
   1801de5a6:	48 0f 46 c8          	cmovbe rcx,rax
   1801de5aa:	48 8d 85 f0 02 00 00 	lea    rax,[rbp+0x2f0]
   1801de5b1:	41 0f 2f c4          	comiss xmm0,xmm12
   1801de5b5:	48 0f 46 c1          	cmovbe rax,rcx
   1801de5b9:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801de5bd:	f3 0f 59 cf          	mulss  xmm1,xmm7
   1801de5c1:	41 0f 28 c0          	movaps xmm0,xmm8
   1801de5c5:	e8 e6 0f 0a 00       	call   0x18027f5b0
   1801de5ca:	48 63 c7             	movsxd rax,edi
   1801de5cd:	48 8d 0c 80          	lea    rcx,[rax+rax*4]
   1801de5d1:	48 8b 05 18 b8 20 00 	mov    rax,QWORD PTR [rip+0x20b818]        # 0x1803e9df0
   1801de5d8:	44 0f b6 64 c8 24    	movzx  r12d,BYTE PTR [rax+rcx*8+0x24]
   1801de5de:	45 84 e4             	test   r12b,r12b
   1801de5e1:	75 0c                	jne    0x1801de5ef
   1801de5e3:	83 7c c8 20 01       	cmp    DWORD PTR [rax+rcx*8+0x20],0x1
   1801de5e8:	75 05                	jne    0x1801de5ef
   1801de5ea:	41 b7 01             	mov    r15b,0x1
   1801de5ed:	eb 03                	jmp    0x1801de5f2
   1801de5ef:	45 32 ff             	xor    r15b,r15b
   1801de5f2:	e8 c9 0e 0d 00       	call   0x1802af4c0
   1801de5f7:	8b 0d 9f a9 21 00    	mov    ecx,DWORD PTR [rip+0x21a99f]        # 0x1803f8f9c
   1801de5fd:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de604:	00 00 
   1801de606:	48 8b 0c c8          	mov    rcx,QWORD PTR [rax+rcx*8]
   1801de60a:	80 3c 0b 00          	cmp    BYTE PTR [rbx+rcx*1],0x0
   1801de60e:	75 05                	jne    0x1801de615
   1801de610:	e8 df 9c 0f 00       	call   0x1802d82f4
   1801de615:	8b 0d 81 a9 21 00    	mov    ecx,DWORD PTR [rip+0x21a981]        # 0x1803f8f9c
   1801de61b:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de622:	00 00 
   1801de624:	48 8b 0c c8          	mov    rcx,QWORD PTR [rax+rcx*8]
   1801de628:	bb c0 0e 00 00       	mov    ebx,0xec0
   1801de62d:	48 8b 1c 19          	mov    rbx,QWORD PTR [rcx+rbx*1]
   1801de631:	f3 0f 10 b3 c8 0c 00 	movss  xmm6,DWORD PTR [rbx+0xcc8]
   1801de638:	00 
   1801de639:	c7 83 c8 0c 00 00 00 	mov    DWORD PTR [rbx+0xcc8],0x0
   1801de640:	00 00 00 
   1801de643:	48 c7 85 90 04 00 00 	mov    QWORD PTR [rbp+0x490],0x0
   1801de64a:	00 00 00 00 
   1801de64e:	48 8d 0d 53 80 19 00 	lea    rcx,[rip+0x198053]        # 0x1803766a8
   1801de655:	45 84 ff             	test   r15b,r15b
   1801de658:	48 8d 05 39 80 19 00 	lea    rax,[rip+0x198039]        # 0x180376698
   1801de65f:	48 0f 45 c8          	cmovne rcx,rax
   1801de663:	41 b8 00 80 00 00    	mov    r8d,0x8000
   1801de669:	48 8d 95 90 04 00 00 	lea    rdx,[rbp+0x490]
   1801de670:	e8 eb d8 0c 00       	call   0x1802abf60
   1801de675:	f3 0f 11 b3 c8 0c 00 	movss  DWORD PTR [rbx+0xcc8],xmm6
   1801de67c:	00 
   1801de67d:	84 c0                	test   al,al
   1801de67f:	74 06                	je     0x1801de687
   1801de681:	45 84 e4             	test   r12b,r12b
   1801de684:	0f 44 f7             	cmove  esi,edi
   1801de687:	33 c9                	xor    ecx,ecx
   1801de689:	e8 d2 07 09 00       	call   0x18026ee60
   1801de68e:	84 c0                	test   al,al
   1801de690:	74 1a                	je     0x1801de6ac
   1801de692:	48 8d 0d 5f 80 19 00 	lea    rcx,[rip+0x19805f]        # 0x1803766f8
   1801de699:	45 84 e4             	test   r12b,r12b
   1801de69c:	48 8d 05 15 80 19 00 	lea    rax,[rip+0x198015]        # 0x1803766b8
   1801de6a3:	48 0f 45 c8          	cmovne rcx,rax
   1801de6a7:	e8 54 26 0a 00       	call   0x180280d00
   1801de6ac:	c7 85 f8 02 00 00 00 	mov    DWORD PTR [rbp+0x2f8],0x3fc00000
   1801de6b3:	00 c0 3f 
   1801de6b6:	c7 85 f4 02 00 00 00 	mov    DWORD PTR [rbp+0x2f4],0x3f400000
   1801de6bd:	00 40 3f 
   1801de6c0:	f3 0f 10 05 dc bf 1f 	movss  xmm0,DWORD PTR [rip+0x1fbfdc]        # 0x1803da6a4
   1801de6c7:	00 
   1801de6c8:	48 8d 8d f4 02 00 00 	lea    rcx,[rbp+0x2f4]
   1801de6cf:	44 0f 2f c8          	comiss xmm9,xmm0
   1801de6d3:	48 8d 05 ca bf 1f 00 	lea    rax,[rip+0x1fbfca]        # 0x1803da6a4
   1801de6da:	48 0f 46 c8          	cmovbe rcx,rax
   1801de6de:	48 8d 85 f8 02 00 00 	lea    rax,[rbp+0x2f8]
   1801de6e5:	41 0f 2f c4          	comiss xmm0,xmm12
   1801de6e9:	48 0f 46 c1          	cmovbe rax,rcx
   1801de6ed:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801de6f1:	f3 0f 59 cf          	mulss  xmm1,xmm7
   1801de6f5:	41 0f 28 c0          	movaps xmm0,xmm8
   1801de6f9:	e8 b2 0e 0a 00       	call   0x18027f5b0
   1801de6fe:	48 63 c7             	movsxd rax,edi
   1801de701:	48 8d 0c 80          	lea    rcx,[rax+rax*4]
   1801de705:	48 8b 05 e4 b6 20 00 	mov    rax,QWORD PTR [rip+0x20b6e4]        # 0x1803e9df0
   1801de70c:	4c 8d 04 c8          	lea    r8,[rax+rcx*8]
   1801de710:	49 83 78 18 0f       	cmp    QWORD PTR [r8+0x18],0xf
   1801de715:	76 03                	jbe    0x1801de71a
   1801de717:	4d 8b 00             	mov    r8,QWORD PTR [r8]
   1801de71a:	45 84 ff             	test   r15b,r15b
   1801de71d:	49 8d 8e 88 00 00 00 	lea    rcx,[r14+0x88]
   1801de724:	75 07                	jne    0x1801de72d
   1801de726:	49 8d 8e 98 00 00 00 	lea    rcx,[r14+0x98]
   1801de72d:	48 8d 15 78 4a 16 00 	lea    rdx,[rip+0x164a78]        # 0x1803431ac
   1801de734:	e8 77 c4 0c 00       	call   0x1802aabb0
   1801de739:	44 8b 25 5c a8 21 00 	mov    r12d,DWORD PTR [rip+0x21a85c]        # 0x1803f8f9c
   1801de740:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de747:	00 00 
   1801de749:	4a 8b 0c e0          	mov    rcx,QWORD PTR [rax+r12*8]
   1801de74d:	ba 10 00 00 00       	mov    edx,0x10
   1801de752:	80 3c 0a 00          	cmp    BYTE PTR [rdx+rcx*1],0x0
   1801de756:	75 05                	jne    0x1801de75d
   1801de758:	e8 97 9b 0f 00       	call   0x1802d82f4
   1801de75d:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de764:	00 00 
   1801de766:	4a 8b 0c e0          	mov    rcx,QWORD PTR [rax+r12*8]
   1801de76a:	ba c0 0e 00 00       	mov    edx,0xec0
   1801de76f:	48 8b 04 11          	mov    rax,QWORD PTR [rcx+rdx*1]
   1801de773:	48 8b 88 20 15 00 00 	mov    rcx,QWORD PTR [rax+0x1520]
   1801de77a:	8b 81 08 01 00 00    	mov    eax,DWORD PTR [rcx+0x108]
   1801de780:	83 f8 01             	cmp    eax,0x1
   1801de783:	7f 0e                	jg     0x1801de793
   1801de785:	48 8d 0d dc fa 19 00 	lea    rcx,[rip+0x19fadc]        # 0x18037e268
   1801de78c:	e8 2f 02 0a 00       	call   0x18027e9c0
   1801de791:	eb 08                	jmp    0x1801de79b
   1801de793:	ff c8                	dec    eax
   1801de795:	89 81 08 01 00 00    	mov    DWORD PTR [rcx+0x108],eax
   1801de79b:	ff c7                	inc    edi
   1801de79d:	48 8b 05 54 b6 20 00 	mov    rax,QWORD PTR [rip+0x20b654]        # 0x1803e9df8
   1801de7a4:	48 2b 05 45 b6 20 00 	sub    rax,QWORD PTR [rip+0x20b645]        # 0x1803e9df0
   1801de7ab:	48 c1 f8 03          	sar    rax,0x3
   1801de7af:	48 b9 cd cc cc cc cc 	movabs rcx,0xcccccccccccccccd
   1801de7b6:	cc cc cc 
   1801de7b9:	48 0f af c1          	imul   rax,rcx
   1801de7bd:	3b f8                	cmp    edi,eax
   1801de7bf:	48 8b 5d 88          	mov    rbx,QWORD PTR [rbp-0x78]
   1801de7c3:	4c 8b 7c 24 78       	mov    r15,QWORD PTR [rsp+0x78]
   1801de7c8:	0f 8c 24 fd ff ff    	jl     0x1801de4f2
   1801de7ce:	4c 8b 6d 90          	mov    r13,QWORD PTR [rbp-0x70]
   1801de7d2:	48 8b d9             	mov    rbx,rcx
   1801de7d5:	e8 36 4c 09 00       	call   0x180273410
   1801de7da:	b9 01 00 00 00       	mov    ecx,0x1
   1801de7df:	e8 ac c0 08 00       	call   0x18026a890
   1801de7e4:	4c 8b 3d 0d b6 20 00 	mov    r15,QWORD PTR [rip+0x20b60d]        # 0x1803e9df8
   1801de7eb:	48 8b 05 fe b5 20 00 	mov    rax,QWORD PTR [rip+0x20b5fe]        # 0x1803e9df0
   1801de7f2:	85 f6                	test   esi,esi
   1801de7f4:	78 35                	js     0x1801de82b
   1801de7f6:	49 8b cf             	mov    rcx,r15
   1801de7f9:	48 2b c8             	sub    rcx,rax
   1801de7fc:	48 c1 f9 03          	sar    rcx,0x3
   1801de800:	48 0f af cb          	imul   rcx,rbx
   1801de804:	3b f1                	cmp    esi,ecx
   1801de806:	7d 23                	jge    0x1801de82b
   1801de808:	48 63 ce             	movsxd rcx,esi
   1801de80b:	48 8d 14 89          	lea    rdx,[rcx+rcx*4]
   1801de80f:	33 c9                	xor    ecx,ecx
   1801de811:	83 7c d0 20 01       	cmp    DWORD PTR [rax+rdx*8+0x20],0x1
   1801de816:	0f 95 c1             	setne  cl
   1801de819:	89 4c d0 20          	mov    DWORD PTR [rax+rdx*8+0x20],ecx
   1801de81d:	4c 8b 3d d4 b5 20 00 	mov    r15,QWORD PTR [rip+0x20b5d4]        # 0x1803e9df8
   1801de824:	48 8b 05 c5 b5 20 00 	mov    rax,QWORD PTR [rip+0x20b5c5]        # 0x1803e9df0
   1801de82b:	45 85 ed             	test   r13d,r13d
   1801de82e:	78 72                	js     0x1801de8a2
   1801de830:	49 8b cf             	mov    rcx,r15
   1801de833:	48 2b c8             	sub    rcx,rax
   1801de836:	48 c1 f9 03          	sar    rcx,0x3
   1801de83a:	48 0f af cb          	imul   rcx,rbx
   1801de83e:	44 3b e9             	cmp    r13d,ecx
   1801de841:	7d 5f                	jge    0x1801de8a2
   1801de843:	49 63 cd             	movsxd rcx,r13d
   1801de846:	48 8d 14 89          	lea    rdx,[rcx+rcx*4]
   1801de84a:	48 8d 3c d0          	lea    rdi,[rax+rdx*8]
   1801de84e:	48 8d 5f 28          	lea    rbx,[rdi+0x28]
   1801de852:	49 3b df             	cmp    rbx,r15
   1801de855:	74 35                	je     0x1801de88c
   1801de857:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
   1801de85e:	00 00 
   1801de860:	48 8b d3             	mov    rdx,rbx
   1801de863:	48 8b cf             	mov    rcx,rdi
   1801de866:	e8 35 00 03 00       	call   0x18020e8a0
   1801de86b:	8b 43 20             	mov    eax,DWORD PTR [rbx+0x20]
   1801de86e:	89 47 20             	mov    DWORD PTR [rdi+0x20],eax
   1801de871:	0f b6 43 24          	movzx  eax,BYTE PTR [rbx+0x24]
   1801de875:	88 47 24             	mov    BYTE PTR [rdi+0x24],al
   1801de878:	48 83 c7 28          	add    rdi,0x28
   1801de87c:	48 83 c3 28          	add    rbx,0x28
   1801de880:	49 3b df             	cmp    rbx,r15
   1801de883:	75 db                	jne    0x1801de860
   1801de885:	4c 8b 3d 6c b5 20 00 	mov    r15,QWORD PTR [rip+0x20b56c]        # 0x1803e9df8
   1801de88c:	49 8d 4f d8          	lea    rcx,[r15-0x28]
   1801de890:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
   1801de895:	e8 b6 fb 02 00       	call   0x18020e450
   1801de89a:	48 83 2d 56 b5 20 00 	sub    QWORD PTR [rip+0x20b556],0x28        # 0x1803e9df8
   1801de8a1:	28 
   1801de8a2:	48 8d 35 d7 9e 20 00 	lea    rsi,[rip+0x209ed7]        # 0x1803e8780
   1801de8a9:	48 8b ce             	mov    rcx,rsi
   1801de8ac:	ff 15 ae dc 12 00    	call   QWORD PTR [rip+0x12dcae]        # 0x18030c560
   1801de8b2:	f3 0f 10 35 ea bd 1f 	movss  xmm6,DWORD PTR [rip+0x1fbdea]        # 0x1803da6a4
   1801de8b9:	00 
   1801de8ba:	f3 0f 59 35 92 28 1a 	mulss  xmm6,DWORD PTR [rip+0x1a2892]        # 0x180381154
   1801de8c1:	00 
   1801de8c2:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de8c9:	00 00 
   1801de8cb:	41 bf 10 00 00 00    	mov    r15d,0x10
   1801de8d1:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801de8d5:	41 80 3c 07 00       	cmp    BYTE PTR [r15+rax*1],0x0
   1801de8da:	75 05                	jne    0x1801de8e1
   1801de8dc:	e8 13 9a 0f 00       	call   0x1802d82f4
   1801de8e1:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de8e8:	00 00 
   1801de8ea:	b9 c0 0e 00 00       	mov    ecx,0xec0
   1801de8ef:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801de8f3:	48 8b 14 01          	mov    rdx,QWORD PTR [rcx+rax*1]
   1801de8f7:	83 8a c0 1e 00 00 01 	or     DWORD PTR [rdx+0x1ec0],0x1
   1801de8fe:	f3 0f 11 b2 d8 1e 00 	movss  DWORD PTR [rdx+0x1ed8],xmm6
   1801de905:	00 
   1801de906:	48 c7 85 98 04 00 00 	mov    QWORD PTR [rbp+0x498],0x0
   1801de90d:	00 00 00 00 
   1801de911:	45 33 ed             	xor    r13d,r13d
   1801de914:	4c 89 6c 24 38       	mov    QWORD PTR [rsp+0x38],r13
   1801de919:	4c 89 6c 24 30       	mov    QWORD PTR [rsp+0x30],r13
   1801de91e:	c7 44 24 28 40 00 00 	mov    DWORD PTR [rsp+0x28],0x40
   1801de925:	00 
   1801de926:	48 8d 85 98 04 00 00 	lea    rax,[rbp+0x498]
   1801de92d:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801de932:	41 b9 80 00 00 00    	mov    r9d,0x80
   1801de938:	4c 8d 05 f1 76 24 00 	lea    r8,[rip+0x2476f1]        # 0x180426030
   1801de93f:	48 8d 15 ea 7d 19 00 	lea    rdx,[rip+0x197dea]        # 0x180376730
   1801de946:	48 8d 0d fb 7d 19 00 	lea    rcx,[rip+0x197dfb]        # 0x180376748
   1801de94d:	e8 8e 8b 0d 00       	call   0x1802b74e0
   1801de952:	0f b6 d8             	movzx  ebx,al
   1801de955:	c7 85 00 03 00 00 00 	mov    DWORD PTR [rbp+0x300],0x3fc00000
   1801de95c:	00 c0 3f 
   1801de95f:	c7 85 fc 02 00 00 00 	mov    DWORD PTR [rbp+0x2fc],0x3f400000
   1801de966:	00 40 3f 
   1801de969:	f3 0f 10 05 33 bd 1f 	movss  xmm0,DWORD PTR [rip+0x1fbd33]        # 0x1803da6a4
   1801de970:	00 
   1801de971:	48 8d 95 fc 02 00 00 	lea    rdx,[rbp+0x2fc]
   1801de978:	44 0f 2f c8          	comiss xmm9,xmm0
   1801de97c:	48 8d 3d 21 bd 1f 00 	lea    rdi,[rip+0x1fbd21]        # 0x1803da6a4
   1801de983:	48 0f 46 d7          	cmovbe rdx,rdi
   1801de987:	48 8d 8d 00 03 00 00 	lea    rcx,[rbp+0x300]
   1801de98e:	41 0f 2f c4          	comiss xmm0,xmm12
   1801de992:	48 0f 46 ca          	cmovbe rcx,rdx
   1801de996:	f3 0f 10 09          	movss  xmm1,DWORD PTR [rcx]
   1801de99a:	f3 41 0f 59 ce       	mulss  xmm1,xmm14
   1801de99f:	41 0f 28 c0          	movaps xmm0,xmm8
   1801de9a3:	e8 08 0c 0a 00       	call   0x18027f5b0
   1801de9a8:	f3 0f 10 35 f4 bc 1f 	movss  xmm6,DWORD PTR [rip+0x1fbcf4]        # 0x1803da6a4
   1801de9af:	00 
   1801de9b0:	f3 0f 59 35 3c 27 1a 	mulss  xmm6,DWORD PTR [rip+0x1a273c]        # 0x1803810f4
   1801de9b7:	00 
   1801de9b8:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de9bf:	00 00 
   1801de9c1:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801de9c5:	45 38 2c 07          	cmp    BYTE PTR [r15+rax*1],r13b
   1801de9c9:	75 05                	jne    0x1801de9d0
   1801de9cb:	e8 24 99 0f 00       	call   0x1802d82f4
   1801de9d0:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801de9d7:	00 00 
   1801de9d9:	b9 c0 0e 00 00       	mov    ecx,0xec0
   1801de9de:	4a 8b 04 e0          	mov    rax,QWORD PTR [rax+r12*8]
   1801de9e2:	48 8b 14 01          	mov    rdx,QWORD PTR [rcx+rax*1]
   1801de9e6:	83 8a c0 1e 00 00 01 	or     DWORD PTR [rdx+0x1ec0],0x1
   1801de9ed:	f3 0f 11 b2 d8 1e 00 	movss  DWORD PTR [rdx+0x1ed8],xmm6
   1801de9f4:	00 
   1801de9f5:	c7 44 24 20 02 00 00 	mov    DWORD PTR [rsp+0x20],0x2
   1801de9fc:	00 
   1801de9fd:	4c 8d 0d 44 86 20 00 	lea    r9,[rip+0x208644]        # 0x1803e7048
   1801dea04:	48 8d 15 a9 fb 21 00 	lea    rdx,[rip+0x21fba9]        # 0x1803fe5b4
   1801dea0b:	48 8d 0d 46 7d 19 00 	lea    rcx,[rip+0x197d46]        # 0x180376758
   1801dea12:	e8 e9 27 0d 00       	call   0x1802b1200
   1801dea17:	c7 85 08 03 00 00 00 	mov    DWORD PTR [rbp+0x308],0x3fc00000
   1801dea1e:	00 c0 3f 
   1801dea21:	c7 85 04 03 00 00 00 	mov    DWORD PTR [rbp+0x304],0x3f400000
   1801dea28:	00 40 3f 
   1801dea2b:	f3 0f 10 05 71 bc 1f 	movss  xmm0,DWORD PTR [rip+0x1fbc71]        # 0x1803da6a4
   1801dea32:	00 
   1801dea33:	48 8d 8d 04 03 00 00 	lea    rcx,[rbp+0x304]
   1801dea3a:	44 0f 2f c8          	comiss xmm9,xmm0
   1801dea3e:	48 0f 46 cf          	cmovbe rcx,rdi
   1801dea42:	48 8d 85 08 03 00 00 	lea    rax,[rbp+0x308]
   1801dea49:	41 0f 2f c4          	comiss xmm0,xmm12
   1801dea4d:	48 0f 46 c1          	cmovbe rax,rcx
   1801dea51:	f3 0f 10 08          	movss  xmm1,DWORD PTR [rax]
   1801dea55:	f3 41 0f 59 ce       	mulss  xmm1,xmm14
   1801dea5a:	41 0f 28 c0          	movaps xmm0,xmm8
   1801dea5e:	e8 4d 0b 0a 00       	call   0x18027f5b0
   1801dea63:	41 0f 10 46 78       	movups xmm0,XMMWORD PTR [r14+0x78]
   1801dea68:	c7 85 a0 04 00 00 00 	mov    DWORD PTR [rbp+0x4a0],0xbf800000
   1801dea6f:	00 80 bf 
   1801dea72:	c7 85 a4 04 00 00 00 	mov    DWORD PTR [rbp+0x4a4],0x41c00000
   1801dea79:	00 c0 41 
   1801dea7c:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801dea82:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801dea87:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801dea8c:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801dea91:	4c 8d 85 a0 04 00 00 	lea    r8,[rbp+0x4a0]
   1801dea98:	ba 07 00 00 00       	mov    edx,0x7
   1801dea9d:	48 8d 0d c4 7c 19 00 	lea    rcx,[rip+0x197cc4]        # 0x180376768
   1801deaa4:	e8 97 e0 fb ff       	call   0x18019cb40
   1801deaa9:	84 c0                	test   al,al
   1801deaab:	75 04                	jne    0x1801deab1
   1801deaad:	84 db                	test   bl,bl
   1801deaaf:	74 79                	je     0x1801deb2a
   1801deab1:	44 38 2d 78 75 24 00 	cmp    BYTE PTR [rip+0x247578],r13b        # 0x180426030
   1801deab8:	74 70                	je     0x1801deb2a
   1801deaba:	41 8b dd             	mov    ebx,r13d
   1801deabd:	83 3d f0 fa 21 00 01 	cmp    DWORD PTR [rip+0x21faf0],0x1        # 0x1803fe5b4
   1801deac4:	0f 94 c3             	sete   bl
   1801deac7:	0f 57 c0             	xorps  xmm0,xmm0
   1801deaca:	0f 11 85 10 05 00 00 	movups XMMWORD PTR [rbp+0x510],xmm0
   1801dead1:	4c 89 ad 20 05 00 00 	mov    QWORD PTR [rbp+0x520],r13
   1801dead8:	4c 89 ad 28 05 00 00 	mov    QWORD PTR [rbp+0x528],r13
   1801deadf:	48 8d 0d 4a 75 24 00 	lea    rcx,[rip+0x24754a]        # 0x180426030
   1801deae6:	e8 c8 a9 0f 00       	call   0x1802d94b3
   1801deaeb:	4c 8b c0             	mov    r8,rax
   1801deaee:	48 8d 15 3b 75 24 00 	lea    rdx,[rip+0x24753b]        # 0x180426030
   1801deaf5:	48 8d 8d 10 05 00 00 	lea    rcx,[rbp+0x510]
   1801deafc:	e8 7f e5 e3 ff       	call   0x18001d080
   1801deb01:	90                   	nop
   1801deb02:	8b d3                	mov    edx,ebx
   1801deb04:	48 8d 8d 10 05 00 00 	lea    rcx,[rbp+0x510]
   1801deb0b:	e8 d0 9a f7 ff       	call   0x1801585e0
   1801deb10:	0f b6 d8             	movzx  ebx,al
   1801deb13:	48 8d 8d 10 05 00 00 	lea    rcx,[rbp+0x510]
   1801deb1a:	e8 31 f9 02 00       	call   0x18020e450
   1801deb1f:	84 db                	test   bl,bl
   1801deb21:	74 07                	je     0x1801deb2a
   1801deb23:	c6 05 06 75 24 00 00 	mov    BYTE PTR [rip+0x247506],0x0        # 0x180426030
   1801deb2a:	41 0f 10 46 58       	movups xmm0,XMMWORD PTR [r14+0x58]
   1801deb2f:	c7 85 a8 04 00 00 00 	mov    DWORD PTR [rbp+0x4a8],0xbf800000
   1801deb36:	00 80 bf 
   1801deb39:	c7 85 ac 04 00 00 00 	mov    DWORD PTR [rbp+0x4ac],0x41c00000
   1801deb40:	00 c0 41 
   1801deb43:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801deb49:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801deb4e:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801deb53:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801deb58:	4c 8d 85 a8 04 00 00 	lea    r8,[rbp+0x4a8]
   1801deb5f:	ba 0c 00 00 00       	mov    edx,0xc
   1801deb64:	48 8d 0d 15 7c 19 00 	lea    rcx,[rip+0x197c15]        # 0x180376780
   1801deb6b:	e8 d0 df fb ff       	call   0x18019cb40
   1801deb70:	84 c0                	test   al,al
   1801deb72:	74 4c                	je     0x1801debc0
   1801deb74:	48 89 74 24 60       	mov    QWORD PTR [rsp+0x60],rsi
   1801deb79:	48 8b ce             	mov    rcx,rsi
   1801deb7c:	ff 15 9e d9 12 00    	call   QWORD PTR [rip+0x12d99e]        # 0x18030c520
   1801deb82:	85 c0                	test   eax,eax
   1801deb84:	0f 85 b1 03 00 00    	jne    0x1801def3b
   1801deb8a:	8b 05 3c 9c 20 00    	mov    eax,DWORD PTR [rip+0x209c3c]        # 0x1803e87cc
   1801deb90:	3d ff ff ff 7f       	cmp    eax,0x7fffffff
   1801deb95:	75 14                	jne    0x1801debab
   1801deb97:	ff c8                	dec    eax
   1801deb99:	89 05 2d 9c 20 00    	mov    DWORD PTR [rip+0x209c2d],eax        # 0x1803e87cc
   1801deb9f:	b9 06 00 00 00       	mov    ecx,0x6
   1801deba4:	ff 15 ce d8 12 00    	call   QWORD PTR [rip+0x12d8ce]        # 0x18030c478
   1801debaa:	90                   	nop
   1801debab:	e8 40 97 f7 ff       	call   0x1801582f0
   1801debb0:	c6 05 89 b1 22 00 01 	mov    BYTE PTR [rip+0x22b189],0x1        # 0x180409d40
   1801debb7:	48 8b ce             	mov    rcx,rsi
   1801debba:	ff 15 a0 d9 12 00    	call   QWORD PTR [rip+0x12d9a0]        # 0x18030c560
   1801debc0:	33 c9                	xor    ecx,ecx
   1801debc2:	e8 99 02 09 00       	call   0x18026ee60
   1801debc7:	84 c0                	test   al,al
   1801debc9:	74 0c                	je     0x1801debd7
   1801debcb:	48 8d 0d de 7b 19 00 	lea    rcx,[rip+0x197bde]        # 0x1803767b0
   1801debd2:	e8 29 21 0a 00       	call   0x180280d00
   1801debd7:	f2 41 0f 10 86 b8 00 	movsd  xmm0,QWORD PTR [r14+0xb8]
   1801debde:	00 00 
   1801debe0:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801debe6:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801debed:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801debf1:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801debf8:	00 00 
   1801debfa:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801debff:	f3 0f 11 44 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm0
   1801dec05:	48 8d 15 b4 7d 19 00 	lea    rdx,[rip+0x197db4]        # 0x1803769c0
   1801dec0c:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801dec11:	e8 9a bf 0c 00       	call   0x1802aabb0
   1801dec16:	e8 25 0f 0d 00       	call   0x1802afb40
   1801dec1b:	33 d2                	xor    edx,edx
   1801dec1d:	48 8d 0d fc 7e 19 00 	lea    rcx,[rip+0x197efc]        # 0x180376b20
   1801dec24:	e8 37 b8 fb ff       	call   0x18019a460
   1801dec29:	c7 85 10 03 00 00 04 	mov    DWORD PTR [rbp+0x310],0x4
   1801dec30:	00 00 00 
   1801dec33:	44 89 ad 0c 03 00 00 	mov    DWORD PTR [rbp+0x30c],r13d
   1801dec3a:	8b 15 0c c6 21 00    	mov    edx,DWORD PTR [rip+0x21c60c]        # 0x1803fb24c
   1801dec40:	48 8d 8d 0c 03 00 00 	lea    rcx,[rbp+0x30c]
   1801dec47:	85 d2                	test   edx,edx
   1801dec49:	48 8d 05 fc c5 21 00 	lea    rax,[rip+0x21c5fc]        # 0x1803fb24c
   1801dec50:	48 0f 49 c8          	cmovns rcx,rax
   1801dec54:	48 8d 85 10 03 00 00 	lea    rax,[rbp+0x310]
   1801dec5b:	83 fa 04             	cmp    edx,0x4
   1801dec5e:	48 0f 4e c1          	cmovle rax,rcx
   1801dec62:	48 63 00             	movsxd rax,DWORD PTR [rax]
   1801dec65:	89 05 e1 c5 21 00    	mov    DWORD PTR [rip+0x21c5e1],eax        # 0x1803fb24c
   1801dec6b:	48 69 c8 c8 00 00 00 	imul   rcx,rax,0xc8
   1801dec72:	48 8d 05 9f dd 1f 00 	lea    rax,[rip+0x1fdd9f]        # 0x1803dca18
   1801dec79:	48 03 c8             	add    rcx,rax
   1801dec7c:	4c 8d 05 9d 7e 19 00 	lea    r8,[rip+0x197e9d]        # 0x180376b20
   1801dec83:	48 8d 15 22 45 16 00 	lea    rdx,[rip+0x164522]        # 0x1803431ac
   1801dec8a:	e8 21 bf 0c 00       	call   0x1802aabb0
   1801dec8f:	48 bb 67 0c ab 96 1a 	movabs rbx,0x93fd561a96ab0c67
   1801dec96:	56 fd 93 
   1801dec99:	48 89 9d e0 14 00 00 	mov    QWORD PTR [rbp+0x14e0],rbx
   1801deca0:	4c 8d 85 e0 14 00 00 	lea    r8,[rbp+0x14e0]
   1801deca7:	48 8d 95 80 07 00 00 	lea    rdx,[rbp+0x780]
   1801decae:	48 8d 0d 3b c1 21 00 	lea    rcx,[rip+0x21c13b]        # 0x1803fadf0
   1801decb5:	e8 76 2d 06 00       	call   0x180241a30
   1801decba:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801decbd:	48 83 c1 28          	add    rcx,0x28
   1801decc1:	48 b8 d7 3c 1e 32 26 	movabs rax,0xda04d326321e3cd7
   1801decc8:	d3 04 da 
   1801deccb:	48 89 85 e8 14 00 00 	mov    QWORD PTR [rbp+0x14e8],rax
   1801decd2:	4c 8d 85 e8 14 00 00 	lea    r8,[rbp+0x14e8]
   1801decd9:	48 8d 95 90 07 00 00 	lea    rdx,[rbp+0x790]
   1801dece0:	e8 4b 2d 06 00       	call   0x180241a30
   1801dece5:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dece8:	48 83 c1 28          	add    rcx,0x28
   1801decec:	e8 cf e2 01 00       	call   0x1801fcfc0
   1801decf1:	48 8b d0             	mov    rdx,rax
   1801decf4:	48 8d 0d 3d 7e 19 00 	lea    rcx,[rip+0x197e3d]        # 0x180376b38
   1801decfb:	e8 60 1e fc ff       	call   0x1801a0b60
   1801ded00:	33 c9                	xor    ecx,ecx
   1801ded02:	e8 59 01 09 00       	call   0x18026ee60
   1801ded07:	84 c0                	test   al,al
   1801ded09:	74 0c                	je     0x1801ded17
   1801ded0b:	48 8d 0d 5e 7e 19 00 	lea    rcx,[rip+0x197e5e]        # 0x180376b70
   1801ded12:	e8 e9 1f 0a 00       	call   0x180280d00
   1801ded17:	48 89 9d f0 14 00 00 	mov    QWORD PTR [rbp+0x14f0],rbx
   1801ded1e:	4c 8d 85 f0 14 00 00 	lea    r8,[rbp+0x14f0]
   1801ded25:	48 8d 95 a0 07 00 00 	lea    rdx,[rbp+0x7a0]
   1801ded2c:	48 8d 0d bd c0 21 00 	lea    rcx,[rip+0x21c0bd]        # 0x1803fadf0
   1801ded33:	e8 f8 2c 06 00       	call   0x180241a30
   1801ded38:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ded3b:	48 83 c1 28          	add    rcx,0x28
   1801ded3f:	48 b8 9d 5b c8 d9 f2 	movabs rax,0x80462f2d9c85b9d
   1801ded46:	62 04 08 
   1801ded49:	48 89 85 f8 14 00 00 	mov    QWORD PTR [rbp+0x14f8],rax
   1801ded50:	4c 8d 85 f8 14 00 00 	lea    r8,[rbp+0x14f8]
   1801ded57:	48 8d 95 b0 07 00 00 	lea    rdx,[rbp+0x7b0]
   1801ded5e:	e8 cd 2c 06 00       	call   0x180241a30
   1801ded63:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801ded66:	48 83 c1 28          	add    rcx,0x28
   1801ded6a:	e8 51 e2 01 00       	call   0x1801fcfc0
   1801ded6f:	48 8b d0             	mov    rdx,rax
   1801ded72:	48 8d 0d 0f 81 19 00 	lea    rcx,[rip+0x19810f]        # 0x180376e88
   1801ded79:	e8 e2 1d fc ff       	call   0x1801a0b60
   1801ded7e:	33 c9                	xor    ecx,ecx
   1801ded80:	e8 db 00 09 00       	call   0x18026ee60
   1801ded85:	84 c0                	test   al,al
   1801ded87:	74 0c                	je     0x1801ded95
   1801ded89:	48 8d 0d 30 81 19 00 	lea    rcx,[rip+0x198130]        # 0x180376ec0
   1801ded90:	e8 6b 1f 0a 00       	call   0x180280d00
   1801ded95:	48 89 9d 00 15 00 00 	mov    QWORD PTR [rbp+0x1500],rbx
   1801ded9c:	4c 8d 85 00 15 00 00 	lea    r8,[rbp+0x1500]
   1801deda3:	48 8d 95 c0 07 00 00 	lea    rdx,[rbp+0x7c0]
   1801dedaa:	48 8d 0d 3f c0 21 00 	lea    rcx,[rip+0x21c03f]        # 0x1803fadf0
   1801dedb1:	e8 7a 2c 06 00       	call   0x180241a30
   1801dedb6:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dedb9:	48 83 c1 28          	add    rcx,0x28
   1801dedbd:	48 b8 41 56 c2 56 dd 	movabs rax,0x87360edd56c25641
   1801dedc4:	0e 36 87 
   1801dedc7:	48 89 85 08 15 00 00 	mov    QWORD PTR [rbp+0x1508],rax
   1801dedce:	4c 8d 85 08 15 00 00 	lea    r8,[rbp+0x1508]
   1801dedd5:	48 8d 95 d0 07 00 00 	lea    rdx,[rbp+0x7d0]
   1801deddc:	e8 4f 2c 06 00       	call   0x180241a30
   1801dede1:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dede4:	48 83 c1 28          	add    rcx,0x28
   1801dede8:	e8 d3 e1 01 00       	call   0x1801fcfc0
   1801deded:	48 8b d0             	mov    rdx,rax
   1801dedf0:	48 8d 0d 99 82 19 00 	lea    rcx,[rip+0x198299]        # 0x180377090
   1801dedf7:	e8 64 1d fc ff       	call   0x1801a0b60
   1801dedfc:	33 c9                	xor    ecx,ecx
   1801dedfe:	e8 5d 00 09 00       	call   0x18026ee60
   1801dee03:	84 c0                	test   al,al
   1801dee05:	74 0c                	je     0x1801dee13
   1801dee07:	48 8d 0d c2 82 19 00 	lea    rcx,[rip+0x1982c2]        # 0x1803770d0
   1801dee0e:	e8 ed 1e 0a 00       	call   0x180280d00
   1801dee13:	e8 28 0d 0d 00       	call   0x1802afb40
   1801dee18:	48 89 9d 10 15 00 00 	mov    QWORD PTR [rbp+0x1510],rbx
   1801dee1f:	4c 8d 85 10 15 00 00 	lea    r8,[rbp+0x1510]
   1801dee26:	48 8d 95 e0 07 00 00 	lea    rdx,[rbp+0x7e0]
   1801dee2d:	48 8d 0d bc bf 21 00 	lea    rcx,[rip+0x21bfbc]        # 0x1803fadf0
   1801dee34:	e8 f7 2b 06 00       	call   0x180241a30
   1801dee39:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dee3c:	48 83 c1 28          	add    rcx,0x28
   1801dee40:	48 b8 f7 06 62 56 88 	movabs rax,0x6f345088566206f7
   1801dee47:	50 34 6f 
   1801dee4a:	48 89 85 18 15 00 00 	mov    QWORD PTR [rbp+0x1518],rax
   1801dee51:	4c 8d 85 18 15 00 00 	lea    r8,[rbp+0x1518]
   1801dee58:	48 8d 95 f0 07 00 00 	lea    rdx,[rbp+0x7f0]
   1801dee5f:	e8 cc 2b 06 00       	call   0x180241a30
   1801dee64:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   1801dee67:	48 83 c1 28          	add    rcx,0x28
   1801dee6b:	e8 50 e1 01 00       	call   0x1801fcfc0
   1801dee70:	48 8b d0             	mov    rdx,rax
   1801dee73:	48 8d 0d b6 83 19 00 	lea    rcx,[rip+0x1983b6]        # 0x180377230
   1801dee7a:	e8 e1 1c fc ff       	call   0x1801a0b60
   1801dee7f:	33 c9                	xor    ecx,ecx
   1801dee81:	e8 da ff 08 00       	call   0x18026ee60
   1801dee86:	84 c0                	test   al,al
   1801dee88:	74 0c                	je     0x1801dee96
   1801dee8a:	48 8d 0d cf 83 19 00 	lea    rcx,[rip+0x1983cf]        # 0x180377260
   1801dee91:	e8 6a 1e 0a 00       	call   0x180280d00
   1801dee96:	80 3d 60 be 21 00 00 	cmp    BYTE PTR [rip+0x21be60],0x0        # 0x1803facfd
   1801dee9d:	0f 84 91 00 00 00    	je     0x1801def34
   1801deea3:	48 8b 05 4e dd 21 00 	mov    rax,QWORD PTR [rip+0x21dd4e]        # 0x1803fcbf8
   1801deeaa:	48 39 05 3f dd 21 00 	cmp    QWORD PTR [rip+0x21dd3f],rax        # 0x1803fcbf0
   1801deeb1:	74 0b                	je     0x1801deebe
   1801deeb3:	48 83 e8 08          	sub    rax,0x8
   1801deeb7:	48 89 05 3a dd 21 00 	mov    QWORD PTR [rip+0x21dd3a],rax        # 0x1803fcbf8
   1801deebe:	8b 3d f0 ae 22 00    	mov    edi,DWORD PTR [rip+0x22aef0]        # 0x180409db4
   1801deec4:	03 3d 7a af 22 00    	add    edi,DWORD PTR [rip+0x22af7a]        # 0x180409e44
   1801deeca:	03 3d 24 b1 22 00    	add    edi,DWORD PTR [rip+0x22b124]        # 0x180409ff4
   1801deed0:	48 8b 35 59 ae 22 00 	mov    rsi,QWORD PTR [rip+0x22ae59]        # 0x180409d30
   1801deed7:	4c 8b 3d 62 b0 22 00 	mov    r15,QWORD PTR [rip+0x22b062]        # 0x180409f40
   1801deede:	0f 57 c0             	xorps  xmm0,xmm0
   1801deee1:	0f 11 85 e0 10 00 00 	movups XMMWORD PTR [rbp+0x10e0],xmm0
   1801deee8:	4c 89 ad f0 10 00 00 	mov    QWORD PTR [rbp+0x10f0],r13
   1801deeef:	4c 89 ad f8 10 00 00 	mov    QWORD PTR [rbp+0x10f8],r13
   1801deef6:	4c 89 ad f0 10 00 00 	mov    QWORD PTR [rbp+0x10f0],r13
   1801deefd:	48 c7 85 f8 10 00 00 	mov    QWORD PTR [rbp+0x10f8],0xf
   1801def04:	0f 00 00 00 
   1801def08:	c6 85 e0 10 00 00 00 	mov    BYTE PTR [rbp+0x10e0],0x0
   1801def0f:	48 8d 05 6a 98 20 00 	lea    rax,[rip+0x20986a]        # 0x1803e8780
   1801def16:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   1801def1b:	48 8b c8             	mov    rcx,rax
   1801def1e:	ff 15 fc d5 12 00    	call   QWORD PTR [rip+0x12d5fc]        # 0x18030c520
   1801def24:	85 c0                	test   eax,eax
   1801def26:	74 1f                	je     0x1801def47
   1801def28:	b9 05 00 00 00       	mov    ecx,0x5
   1801def2d:	ff 15 45 d5 12 00    	call   QWORD PTR [rip+0x12d545]        # 0x18030c478
   1801def33:	90                   	nop
   1801def34:	e8 c7 28 0a 00       	call   0x180281800
   1801def39:	eb 83                	jmp    0x1801deebe
   1801def3b:	b9 05 00 00 00       	mov    ecx,0x5
   1801def40:	ff 15 32 d5 12 00    	call   QWORD PTR [rip+0x12d532]        # 0x18030c478
   1801def46:	90                   	nop
   1801def47:	8b 05 7f 98 20 00    	mov    eax,DWORD PTR [rip+0x20987f]        # 0x1803e87cc
   1801def4d:	3d ff ff ff 7f       	cmp    eax,0x7fffffff
   1801def52:	75 14                	jne    0x1801def68
   1801def54:	ff c8                	dec    eax
   1801def56:	89 05 70 98 20 00    	mov    DWORD PTR [rip+0x209870],eax        # 0x1803e87cc
   1801def5c:	b9 06 00 00 00       	mov    ecx,0x6
   1801def61:	ff 15 11 d5 12 00    	call   QWORD PTR [rip+0x12d511]        # 0x18030c478
   1801def67:	90                   	nop
   1801def68:	48 8b 1d 89 ae 20 00 	mov    rbx,QWORD PTR [rip+0x20ae89]        # 0x1803e9df8
   1801def6f:	48 2b 1d 7a ae 20 00 	sub    rbx,QWORD PTR [rip+0x20ae7a]        # 0x1803e9df0
   1801def76:	48 c1 fb 03          	sar    rbx,0x3
   1801def7a:	48 b8 cd cc cc cc cc 	movabs rax,0xcccccccccccccccd
   1801def81:	cc cc cc 
   1801def84:	48 0f af d8          	imul   rbx,rax
   1801def88:	48 8d 0d e1 ae 22 00 	lea    rcx,[rip+0x22aee1]        # 0x180409e70
   1801def8f:	e8 1f a5 0f 00       	call   0x1802d94b3
   1801def94:	4c 8b c0             	mov    r8,rax
   1801def97:	48 8d 15 d2 ae 22 00 	lea    rdx,[rip+0x22aed2]        # 0x180409e70
   1801def9e:	48 8d 8d e0 10 00 00 	lea    rcx,[rbp+0x10e0]
   1801defa5:	e8 56 37 03 00       	call   0x180212700
   1801defaa:	90                   	nop
   1801defab:	48 8d 0d ce 97 20 00 	lea    rcx,[rip+0x2097ce]        # 0x1803e8780
   1801defb2:	ff 15 a8 d5 12 00    	call   QWORD PTR [rip+0x12d5a8]        # 0x18030c560
   1801defb8:	4c 8b c3             	mov    r8,rbx
   1801defbb:	85 ff                	test   edi,edi
   1801defbd:	7f 41                	jg     0x1801df000
   1801defbf:	f2 41 0f 10 86 b8 00 	movsd  xmm0,QWORD PTR [r14+0xb8]
   1801defc6:	00 00 
   1801defc8:	f2 0f 11 44 24 60    	movsd  QWORD PTR [rsp+0x60],xmm0
   1801defce:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801defd5:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
   1801defd9:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801defe0:	00 00 
   1801defe2:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801defe7:	f3 0f 11 44 24 6c    	movss  DWORD PTR [rsp+0x6c],xmm0
   1801defed:	48 8d 15 4c 83 19 00 	lea    rdx,[rip+0x19834c]        # 0x180377340
   1801deff4:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   1801deff9:	e8 b2 bb 0c 00       	call   0x1802aabb0
   1801deffe:	eb 60                	jmp    0x1801df060
   1801df000:	48 8b 0d 21 af 22 00 	mov    rcx,QWORD PTR [rip+0x22af21]        # 0x180409f28
   1801df007:	f2 41 0f 10 8e b8 00 	movsd  xmm1,QWORD PTR [r14+0xb8]
   1801df00e:	00 00 
   1801df010:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801df017:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801df01e:	00 00 
   1801df020:	f3 41 0f 59 c1       	mulss  xmm0,xmm9
   1801df025:	f2 0f 11 8d f0 04 00 	movsd  QWORD PTR [rbp+0x4f0],xmm1
   1801df02c:	00 
   1801df02d:	89 85 f8 04 00 00    	mov    DWORD PTR [rbp+0x4f8],eax
   1801df033:	f3 0f 11 85 fc 04 00 	movss  DWORD PTR [rbp+0x4fc],xmm0
   1801df03a:	00 
   1801df03b:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   1801df040:	4c 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],r15
   1801df045:	48 89 74 24 20       	mov    QWORD PTR [rsp+0x20],rsi
   1801df04a:	44 8b cf             	mov    r9d,edi
   1801df04d:	48 8d 15 1c 83 19 00 	lea    rdx,[rip+0x19831c]        # 0x180377370
   1801df054:	48 8d 8d f0 04 00 00 	lea    rcx,[rbp+0x4f0]
   1801df05b:	e8 50 bb 0c 00       	call   0x1802aabb0
   1801df060:	48 83 bd f0 10 00 00 	cmp    QWORD PTR [rbp+0x10f0],0x0
   1801df067:	00 
   1801df068:	74 62                	je     0x1801df0cc
   1801df06a:	4c 8d 85 e0 10 00 00 	lea    r8,[rbp+0x10e0]
   1801df071:	48 83 bd f8 10 00 00 	cmp    QWORD PTR [rbp+0x10f8],0xf
   1801df078:	0f 
   1801df079:	4c 0f 47 85 e0 10 00 	cmova  r8,QWORD PTR [rbp+0x10e0]
   1801df080:	00 
   1801df081:	f2 41 0f 10 8e b8 00 	movsd  xmm1,QWORD PTR [r14+0xb8]
   1801df088:	00 00 
   1801df08a:	41 8b 86 c0 00 00 00 	mov    eax,DWORD PTR [r14+0xc0]
   1801df091:	f3 41 0f 10 86 c4 00 	movss  xmm0,DWORD PTR [r14+0xc4]
   1801df098:	00 00 
   1801df09a:	f3 0f 59 05 42 1a 1a 	mulss  xmm0,DWORD PTR [rip+0x1a1a42]        # 0x180380ae4
   1801df0a1:	00 
   1801df0a2:	f2 0f 11 8d e0 04 00 	movsd  QWORD PTR [rbp+0x4e0],xmm1
   1801df0a9:	00 
   1801df0aa:	89 85 e8 04 00 00    	mov    DWORD PTR [rbp+0x4e8],eax
   1801df0b0:	f3 0f 11 85 ec 04 00 	movss  DWORD PTR [rbp+0x4ec],xmm0
   1801df0b7:	00 
   1801df0b8:	48 8d 15 f9 82 19 00 	lea    rdx,[rip+0x1982f9]        # 0x1803773b8
   1801df0bf:	48 8d 8d e0 04 00 00 	lea    rcx,[rbp+0x4e0]
   1801df0c6:	e8 e5 ba 0c 00       	call   0x1802aabb0
   1801df0cb:	90                   	nop
   1801df0cc:	48 8d 8d e0 10 00 00 	lea    rcx,[rbp+0x10e0]
   1801df0d3:	e8 78 f3 02 00       	call   0x18020e450
   1801df0d8:	80 3d 1e bc 21 00 00 	cmp    BYTE PTR [rip+0x21bc1e],0x0        # 0x1803facfd
   1801df0df:	74 1d                	je     0x1801df0fe
   1801df0e1:	48 8b 05 10 db 21 00 	mov    rax,QWORD PTR [rip+0x21db10]        # 0x1803fcbf8
   1801df0e8:	48 39 05 01 db 21 00 	cmp    QWORD PTR [rip+0x21db01],rax        # 0x1803fcbf0
   1801df0ef:	74 13                	je     0x1801df104
   1801df0f1:	48 83 e8 08          	sub    rax,0x8
   1801df0f5:	48 89 05 fc da 21 00 	mov    QWORD PTR [rip+0x21dafc],rax        # 0x1803fcbf8
   1801df0fc:	eb 06                	jmp    0x1801df104
   1801df0fe:	e8 fd 26 0a 00       	call   0x180281800
   1801df103:	90                   	nop
   1801df104:	48 8d 8d 40 17 00 00 	lea    rcx,[rbp+0x1740]
   1801df10b:	e8 40 f3 02 00       	call   0x18020e450
   1801df110:	90                   	nop
   1801df111:	48 8d 8d e0 16 00 00 	lea    rcx,[rbp+0x16e0]
   1801df118:	e8 33 f3 02 00       	call   0x18020e450
   1801df11d:	90                   	nop
   1801df11e:	48 8d 8d 00 17 00 00 	lea    rcx,[rbp+0x1700]
   1801df125:	e8 26 f3 02 00       	call   0x18020e450
   1801df12a:	eb 07                	jmp    0x1801df133
   1801df12c:	44 8b 25 69 9e 21 00 	mov    r12d,DWORD PTR [rip+0x219e69]        # 0x1803f8f9c
   1801df133:	41 0f 10 46 58       	movups xmm0,XMMWORD PTR [r14+0x58]
   1801df138:	c7 85 b0 04 00 00 00 	mov    DWORD PTR [rbp+0x4b0],0xbf800000
   1801df13f:	00 80 bf 
   1801df142:	c7 85 b4 04 00 00 00 	mov    DWORD PTR [rbp+0x4b4],0x41c00000
   1801df149:	00 c0 41 
   1801df14c:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801df152:	48 8d 05 6f 82 19 00 	lea    rax,[rip+0x19826f]        # 0x1803773c8
   1801df159:	48 8d 0d 80 82 19 00 	lea    rcx,[rip+0x198280]        # 0x1803773e0
   1801df160:	80 3d 5a aa 22 00 00 	cmp    BYTE PTR [rip+0x22aa5a],0x0        # 0x180409bc1
   1801df167:	48 0f 45 c8          	cmovne rcx,rax
   1801df16b:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801df170:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   1801df175:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801df17a:	4c 8d 85 b0 04 00 00 	lea    r8,[rbp+0x4b0]
   1801df181:	ba 05 00 00 00       	mov    edx,0x5
   1801df186:	e8 b5 d9 fb ff       	call   0x18019cb40
   1801df18b:	84 c0                	test   al,al
   1801df18d:	74 0e                	je     0x1801df19d
   1801df18f:	80 3d 2b aa 22 00 00 	cmp    BYTE PTR [rip+0x22aa2b],0x0        # 0x180409bc1
   1801df196:	0f 94 05 24 aa 22 00 	sete   BYTE PTR [rip+0x22aa24]        # 0x180409bc1
   1801df19d:	0f b6 05 d4 89 20 00 	movzx  eax,BYTE PTR [rip+0x2089d4]        # 0x1803e7b78
   1801df1a4:	49 8d 7e 78          	lea    rdi,[r14+0x78]
   1801df1a8:	0f 10 07             	movups xmm0,XMMWORD PTR [rdi]
   1801df1ab:	c7 85 b8 04 00 00 00 	mov    DWORD PTR [rbp+0x4b8],0xbf800000
   1801df1b2:	00 80 bf 
   1801df1b5:	c7 85 bc 04 00 00 00 	mov    DWORD PTR [rbp+0x4bc],0x41c00000
   1801df1bc:	00 c0 41 
   1801df1bf:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801df1c5:	48 8d 15 24 82 19 00 	lea    rdx,[rip+0x198224]        # 0x1803773f0
   1801df1cc:	48 8d 0d 3d 82 19 00 	lea    rcx,[rip+0x19823d]        # 0x180377410
   1801df1d3:	84 c0                	test   al,al
   1801df1d5:	48 0f 45 ca          	cmovne rcx,rdx
   1801df1d9:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801df1de:	88 44 24 20          	mov    BYTE PTR [rsp+0x20],al
   1801df1e2:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801df1e7:	4c 8d 85 b8 04 00 00 	lea    r8,[rbp+0x4b8]
   1801df1ee:	ba 01 00 00 00       	mov    edx,0x1
   1801df1f3:	e8 48 d9 fb ff       	call   0x18019cb40
   1801df1f8:	84 c0                	test   al,al
   1801df1fa:	74 0e                	je     0x1801df20a
   1801df1fc:	80 3d 75 89 20 00 00 	cmp    BYTE PTR [rip+0x208975],0x0        # 0x1803e7b78
   1801df203:	0f 94 05 6e 89 20 00 	sete   BYTE PTR [rip+0x20896e]        # 0x1803e7b78
   1801df20a:	0f b6 05 46 b2 21 00 	movzx  eax,BYTE PTR [rip+0x21b246]        # 0x1803fa457
   1801df211:	0f 10 07             	movups xmm0,XMMWORD PTR [rdi]
   1801df214:	c7 85 38 03 00 00 00 	mov    DWORD PTR [rbp+0x338],0xbf800000
   1801df21b:	00 80 bf 
   1801df21e:	c7 85 3c 03 00 00 00 	mov    DWORD PTR [rbp+0x33c],0x41c00000
   1801df225:	00 c0 41 
   1801df228:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801df22e:	48 8d 15 fb 81 19 00 	lea    rdx,[rip+0x1981fb]        # 0x180377430
   1801df235:	48 8d 0d 0c 82 19 00 	lea    rcx,[rip+0x19820c]        # 0x180377448
   1801df23c:	84 c0                	test   al,al
   1801df23e:	48 0f 45 ca          	cmovne rcx,rdx
   1801df242:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801df247:	88 44 24 20          	mov    BYTE PTR [rsp+0x20],al
   1801df24b:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801df250:	4c 8d 85 38 03 00 00 	lea    r8,[rbp+0x338]
   1801df257:	ba 0c 00 00 00       	mov    edx,0xc
   1801df25c:	e8 df d8 fb ff       	call   0x18019cb40
   1801df261:	84 c0                	test   al,al
   1801df263:	74 0e                	je     0x1801df273
   1801df265:	80 3d eb b1 21 00 00 	cmp    BYTE PTR [rip+0x21b1eb],0x0        # 0x1803fa457
   1801df26c:	0f 94 05 e4 b1 21 00 	sete   BYTE PTR [rip+0x21b1e4]        # 0x1803fa457
   1801df273:	e8 c8 08 0d 00       	call   0x1802afb40
   1801df278:	0f b6 1d 68 a4 22 00 	movzx  ebx,BYTE PTR [rip+0x22a468]        # 0x1804096e7
   1801df27f:	84 db                	test   bl,bl
   1801df281:	74 07                	je     0x1801df28a
   1801df283:	49 8d be 98 00 00 00 	lea    rdi,[r14+0x98]
   1801df28a:	0f 10 07             	movups xmm0,XMMWORD PTR [rdi]
   1801df28d:	c7 85 88 03 00 00 00 	mov    DWORD PTR [rbp+0x388],0xbf800000
   1801df294:	00 80 bf 
   1801df297:	c7 85 8c 03 00 00 00 	mov    DWORD PTR [rbp+0x38c],0x41c00000
   1801df29e:	00 c0 41 
   1801df2a1:	66 0f 7f 44 24 60    	movdqa XMMWORD PTR [rsp+0x60],xmm0
   1801df2a7:	48 8d 05 b2 81 19 00 	lea    rax,[rip+0x1981b2]        # 0x180377460
   1801df2ae:	48 8d 0d c3 81 19 00 	lea    rcx,[rip+0x1981c3]        # 0x180377478
   1801df2b5:	84 db                	test   bl,bl
   1801df2b7:	48 0f 45 c8          	cmovne rcx,rax
   1801df2bb:	c6 44 24 28 01       	mov    BYTE PTR [rsp+0x28],0x1
   1801df2c0:	88 5c 24 20          	mov    BYTE PTR [rsp+0x20],bl
   1801df2c4:	4c 8d 4c 24 60       	lea    r9,[rsp+0x60]
   1801df2c9:	4c 8d 85 88 03 00 00 	lea    r8,[rbp+0x388]
   1801df2d0:	ba 07 00 00 00       	mov    edx,0x7
   1801df2d5:	e8 66 d8 fb ff       	call   0x18019cb40
   1801df2da:	84 c0                	test   al,al
   1801df2dc:	74 4a                	je     0x1801df328
   1801df2de:	84 db                	test   bl,bl
   1801df2e0:	74 41                	je     0x1801df323
   1801df2e2:	41 8b cd             	mov    ecx,r13d
   1801df2e5:	b0 01                	mov    al,0x1
   1801df2e7:	f0 0f b0 0d f8 a3 22 	lock cmpxchg BYTE PTR [rip+0x22a3f8],cl        # 0x1804096e7
   1801df2ee:	00 
   1801df2ef:	75 37                	jne    0x1801df328
   1801df2f1:	48 8b 05 10 a4 22 00 	mov    rax,QWORD PTR [rip+0x22a410]        # 0x180409708
   1801df2f8:	44 8b 0d 01 a4 22 00 	mov    r9d,DWORD PTR [rip+0x22a401]        # 0x180409700
   1801df2ff:	44 8b 05 5e a4 22 00 	mov    r8d,DWORD PTR [rip+0x22a45e]        # 0x180409764
   1801df306:	8b 15 50 a4 22 00    	mov    edx,DWORD PTR [rip+0x22a450]        # 0x18040975c
   1801df30c:	48 c1 e8 0a          	shr    rax,0xa
   1801df310:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1801df315:	48 8d 0d 14 48 18 00 	lea    rcx,[rip+0x184814]        # 0x180363b30
   1801df31c:	e8 ef 50 e3 ff       	call   0x180014410
   1801df321:	eb 05                	jmp    0x1801df328
   1801df323:	e8 78 a3 fb ff       	call   0x1801996a0
   1801df328:	0f b6 05 29 a4 22 00 	movzx  eax,BYTE PTR [rip+0x22a429]        # 0x180409758
   1801df32f:	88 85 c0 10 00 00    	mov    BYTE PTR [rbp+0x10c0],al
   1801df335:	48 8d 95 c0 10 00 00 	lea    rdx,[rbp+0x10c0]
   1801df33c:	48 8d 0d 55 81 19 00 	lea    rcx,[rip+0x198155]        # 0x180377498
   1801df343:	e8 18 18 fc ff       	call   0x1801a0b60
   1801df348:	84 c0                	test   al,al
   1801df34a:	74 0d                	je     0x1801df359
   1801df34c:	0f b6 85 c0 10 00 00 	movzx  eax,BYTE PTR [rbp+0x10c0]
   1801df353:	88 05 ff a3 22 00    	mov    BYTE PTR [rip+0x22a3ff],al        # 0x180409758
   1801df359:	41 0f 28 ca          	movaps xmm1,xmm10
   1801df35d:	41 0f 28 c0          	movaps xmm0,xmm8
   1801df361:	e8 4a 02 0a 00       	call   0x18027f5b0
   1801df366:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801df36d:	48 8d 15 70 96 18 00 	lea    rdx,[rip+0x189670]        # 0x1803689e4
   1801df374:	e8 37 b8 0c 00       	call   0x1802aabb0
   1801df379:	33 c9                	xor    ecx,ecx
   1801df37b:	e8 e0 fa 08 00       	call   0x18026ee60
   1801df380:	84 c0                	test   al,al
   1801df382:	74 0c                	je     0x1801df390
   1801df384:	48 8d 0d 35 81 19 00 	lea    rcx,[rip+0x198135]        # 0x1803774c0
   1801df38b:	e8 70 19 0a 00       	call   0x180280d00
   1801df390:	84 db                	test   bl,bl
   1801df392:	0f 84 a4 01 00 00    	je     0x1801df53c
   1801df398:	8b 05 62 a3 22 00    	mov    eax,DWORD PTR [rip+0x22a362]        # 0x180409700
   1801df39e:	8b 0d c0 a3 22 00    	mov    ecx,DWORD PTR [rip+0x22a3c0]        # 0x180409764
   1801df3a4:	44 8b 0d b1 a3 22 00 	mov    r9d,DWORD PTR [rip+0x22a3b1]        # 0x18040975c
   1801df3ab:	89 44 24 28          	mov    DWORD PTR [rsp+0x28],eax
   1801df3af:	89 4c 24 20          	mov    DWORD PTR [rsp+0x20],ecx
   1801df3b3:	4c 8d 05 5e 81 19 00 	lea    r8,[rip+0x19815e]        # 0x180377518
   1801df3ba:	ba 40 00 00 00       	mov    edx,0x40
   1801df3bf:	48 8d 8d d0 17 00 00 	lea    rcx,[rbp+0x17d0]
   1801df3c6:	e8 f5 36 e3 ff       	call   0x180012ac0
   1801df3cb:	41 0f 28 ca          	movaps xmm1,xmm10
   1801df3cf:	41 0f 28 c0          	movaps xmm0,xmm8
   1801df3d3:	e8 d8 01 0a 00       	call   0x18027f5b0
   1801df3d8:	41 8b d4             	mov    edx,r12d
   1801df3db:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801df3e2:	00 00 
   1801df3e4:	bb 10 00 00 00       	mov    ebx,0x10
   1801df3e9:	48 8b 04 d0          	mov    rax,QWORD PTR [rax+rdx*8]
   1801df3ed:	80 3c 03 00          	cmp    BYTE PTR [rbx+rax*1],0x0
   1801df3f1:	75 05                	jne    0x1801df3f8
   1801df3f3:	e8 fc 8e 0f 00       	call   0x1802d82f4
   1801df3f8:	41 8b d4             	mov    edx,r12d
   1801df3fb:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801df402:	00 00 
   1801df404:	bf c0 0e 00 00       	mov    edi,0xec0
   1801df409:	48 8b 04 d0          	mov    rax,QWORD PTR [rax+rdx*8]
   1801df40d:	48 8b 14 07          	mov    rdx,QWORD PTR [rdi+rax*1]
   1801df411:	44 89 6c 24 50       	mov    DWORD PTR [rsp+0x50],r13d
   1801df416:	4c 89 6c 24 40       	mov    QWORD PTR [rsp+0x40],r13
   1801df41b:	4c 89 6c 24 38       	mov    QWORD PTR [rsp+0x38],r13
   1801df420:	4c 89 6c 24 30       	mov    QWORD PTR [rsp+0x30],r13
   1801df425:	48 8d 85 d0 17 00 00 	lea    rax,[rbp+0x17d0]
   1801df42c:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   1801df431:	f3 44 0f 11 54 24 20 	movss  DWORD PTR [rsp+0x20],xmm10
   1801df438:	f3 0f 10 1d c8 1e 1a 	movss  xmm3,DWORD PTR [rip+0x1a1ec8]        # 0x180381308
   1801df43f:	00 
   1801df440:	f3 0f 10 92 38 12 00 	movss  xmm2,DWORD PTR [rdx+0x1238]
   1801df447:	00 
   1801df448:	48 8b 92 28 12 00 00 	mov    rdx,QWORD PTR [rdx+0x1228]
   1801df44f:	48 8d 4d 88          	lea    rcx,[rbp-0x78]
   1801df453:	e8 f8 ee 0b 00       	call   0x18029e350
   1801df458:	f3 0f 10 45 88       	movss  xmm0,DWORD PTR [rbp-0x78]
   1801df45d:	f3 0f 58 05 43 17 1a 	addss  xmm0,DWORD PTR [rip+0x1a1743]        # 0x180380ba8
   1801df464:	00 
   1801df465:	f3 0f 2c c0          	cvttss2si eax,xmm0
   1801df469:	66 0f 6e f8          	movd   xmm7,eax
   1801df46d:	0f 5b ff             	cvtdq2ps xmm7,xmm7
   1801df470:	41 8b d4             	mov    edx,r12d
   1801df473:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801df47a:	00 00 
   1801df47c:	48 8b 04 d0          	mov    rax,QWORD PTR [rax+rdx*8]
   1801df480:	80 3c 03 00          	cmp    BYTE PTR [rbx+rax*1],0x0
   1801df484:	75 05                	jne    0x1801df48b
   1801df486:	e8 69 8e 0f 00       	call   0x1802d82f4
   1801df48b:	41 8b cc             	mov    ecx,r12d
   1801df48e:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801df495:	00 00 
   1801df497:	48 8b 14 c8          	mov    rdx,QWORD PTR [rax+rcx*8]
   1801df49b:	48 8b 0c 17          	mov    rcx,QWORD PTR [rdi+rdx*1]
   1801df49f:	48 8b 81 20 15 00 00 	mov    rax,QWORD PTR [rcx+0x1520]
   1801df4a6:	f3 0f 10 b0 80 02 00 	movss  xmm6,DWORD PTR [rax+0x280]
   1801df4ad:	00 
   1801df4ae:	f3 0f 5c 70 28       	subss  xmm6,DWORD PTR [rax+0x28]
   1801df4b3:	f3 0f 5c f7          	subss  xmm6,xmm7
   1801df4b7:	80 3c 13 00          	cmp    BYTE PTR [rbx+rdx*1],0x0
   1801df4bb:	75 05                	jne    0x1801df4c2
   1801df4bd:	e8 32 8e 0f 00       	call   0x1802d82f4
   1801df4c2:	45 8b c4             	mov    r8d,r12d
   1801df4c5:	65 48 8b 04 25 58 00 	mov    rax,QWORD PTR gs:0x58
   1801df4cc:	00 00 
   1801df4ce:	4a 8b 04 c0          	mov    rax,QWORD PTR [rax+r8*8]
   1801df4d2:	4c 8b 04 38          	mov    r8,QWORD PTR [rax+rdi*1]
   1801df4d6:	49 8b 80 20 15 00 00 	mov    rax,QWORD PTR [r8+0x1520]
   1801df4dd:	c6 80 ce 00 00 00 01 	mov    BYTE PTR [rax+0xce],0x1
   1801df4e4:	49 8b 80 20 15 00 00 	mov    rax,QWORD PTR [r8+0x1520]
   1801df4eb:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [rax+0x28]
   1801df4f0:	f3 0f 5c 80 98 00 00 	subss  xmm0,DWORD PTR [rax+0x98]
   1801df4f7:	00 
   1801df4f8:	f3 0f 58 c6          	addss  xmm0,xmm6
   1801df4fc:	f3 0f 11 80 18 01 00 	movss  DWORD PTR [rax+0x118],xmm0
   1801df503:	00 
   1801df504:	c6 80 59 01 00 00 01 	mov    BYTE PTR [rax+0x159],0x1
   1801df50b:	49 8d 8e b8 00 00 00 	lea    rcx,[r14+0xb8]
   1801df512:	4c 8d 85 d0 17 00 00 	lea    r8,[rbp+0x17d0]
   1801df519:	48 8d 15 8c 3c 16 00 	lea    rdx,[rip+0x163c8c]        # 0x1803431ac
   1801df520:	e8 8b b6 0c 00       	call   0x1802aabb0
   1801df525:	33 c9                	xor    ecx,ecx
   1801df527:	e8 34 f9 08 00       	call   0x18026ee60
   1801df52c:	84 c0                	test   al,al
   1801df52e:	74 0c                	je     0x1801df53c
   1801df530:	48 8d 0d f1 7f 19 00 	lea    rcx,[rip+0x197ff1]        # 0x180377528
   1801df537:	e8 c4 17 0a 00       	call   0x180280d00
   1801df53c:	e8 cf 3e 09 00       	call   0x180273410
   1801df541:	bb 02 00 00 00       	mov    ebx,0x2
   1801df546:	8b cb                	mov    ecx,ebx
   1801df548:	e8 63 b6 08 00       	call   0x18026abb0
   1801df54d:	8b cb                	mov    ecx,ebx
   1801df54f:	e8 3c b3 08 00       	call   0x18026a890
   1801df554:	b9 01 00 00 00       	mov    ecx,0x1
   1801df559:	e8 52 b6 08 00       	call   0x18026abb0
   1801df55e:	e8 ad 3e 09 00       	call   0x180273410
   1801df563:	48 8b 8d 90 18 00 00 	mov    rcx,QWORD PTR [rbp+0x1890]
   1801df56a:	48 33 cc             	xor    rcx,rsp
   1801df56d:	e8 ae 8d 0f 00       	call   0x1802d8320
   1801df572:	4c 8d 9c 24 48 1a 00 	lea    r11,[rsp+0x1a48]
   1801df579:	00 
   1801df57a:	41 0f 28 73 e8       	movaps xmm6,XMMWORD PTR [r11-0x18]
   1801df57f:	41 0f 28 7b d8       	movaps xmm7,XMMWORD PTR [r11-0x28]
   1801df584:	45 0f 28 43 c8       	movaps xmm8,XMMWORD PTR [r11-0x38]
   1801df589:	45 0f 28 4b b8       	movaps xmm9,XMMWORD PTR [r11-0x48]
   1801df58e:	45 0f 28 53 a8       	movaps xmm10,XMMWORD PTR [r11-0x58]
   1801df593:	45 0f 28 5b 98       	movaps xmm11,XMMWORD PTR [r11-0x68]
   1801df598:	45 0f 28 63 88       	movaps xmm12,XMMWORD PTR [r11-0x78]
   1801df59d:	45 0f 28 ab 78 ff ff 	movaps xmm13,XMMWORD PTR [r11-0x88]
   1801df5a4:	ff 
   1801df5a5:	45 0f 28 b3 68 ff ff 	movaps xmm14,XMMWORD PTR [r11-0x98]
   1801df5ac:	ff 
   1801df5ad:	45 0f 28 bb 58 ff ff 	movaps xmm15,XMMWORD PTR [r11-0xa8]
   1801df5b4:	ff 
   1801df5b5:	49 8b e3             	mov    rsp,r11
   1801df5b8:	41 5f                	pop    r15
   1801df5ba:	41 5e                	pop    r14
   1801df5bc:	41 5d                	pop    r13
   1801df5be:	41 5c                	pop    r12
   1801df5c0:	5f                   	pop    rdi
   1801df5c1:	5e                   	pop    rsi
   1801df5c2:	5b                   	pop    rbx
   1801df5c3:	5d                   	pop    rbp
   1801df5c4:	c3                   	ret
