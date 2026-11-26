// 0x180017150  FUN_180017150
// size=5462 thunk=false
// signature: undefined FUN_180017150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180017150(void)

{
  undefined8 *puVar1;
  HMODULE pHVar2;
  code *pcVar3;
  char cVar4;
  BOOL BVar5;
  HMODULE pHVar6;
  FARPROC pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *_Memory;
  HANDLE pvVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined1 *puVar15;
  int iVar16;
  HMODULE pHVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_448 [8];
  undefined1 auStack_440 [80];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [24];
  undefined1 local_390 [48];
  undefined1 local_360 [24];
  undefined1 local_348 [24];
  undefined1 local_330 [24];
  undefined1 local_318 [24];
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [24];
  undefined1 local_210 [24];
  undefined1 local_1f8 [24];
  undefined1 local_1e0 [24];
  undefined1 local_1c8 [24];
  undefined1 local_1b0 [24];
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  void *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  void *local_a0 [2];
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  puVar15 = auStack_448;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_448;
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_348);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_348,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9278 = (longlong *)(*pFVar7)("VClient017",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_3a8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3a8,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa668 = (*pFVar7)("VEngineClient015",0);
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_330);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_330,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa360 = (*pFVar7)("VClientEntityList003",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_318);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_318,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa600 = (*pFVar7)("VGUI_Panel009",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_300);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_300,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa350 = (*pFVar7)("VGUI_ivgui008",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_2e8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2e8,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VGUI_System010",0);
  pHVar6 = GetModuleHandleA("vguimatsurface");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_2d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2d0,(ThrowInfo *)&DAT_1803d5b48);
  }
  _DAT_1803f9298 = (*pFVar7)("VGUI_Surface030",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_2b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2b8,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VGUI_Scheme010",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_2a0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2a0,(ThrowInfo *)&DAT_1803d5b48);
  }
  _DAT_1803fa328 = (*pFVar7)("VGUI_Input005",0);
  pHVar6 = GetModuleHandleA("vgui2.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_288);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_288,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VGUI_InputInternal001",0);
  pHVar6 = GetModuleHandleA("filesystem_stdio.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_270);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_270,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9248 = (*pFVar7)("VBaseFileSystem011",0);
  pHVar6 = GetModuleHandleA("filesystem_stdio.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_258);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_258,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa358 = (*pFVar7)("VFileSystem022",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 != (FARPROC)0x0) {
    (*pFVar7)("VEngineClientStringTable001",0);
  }
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_240);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_240,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VClientDllSharedAppSystems001",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_228);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_228,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VENGINE_LAUNCHER_API_VERSION004",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_210);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_210,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa348 = (*pFVar7)("VEngineVGui001",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_1f8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1f8,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9250 = (*pFVar7)("VModelInfoClient006",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_1e0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1e0,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9280 = (*pFVar7)("VEngineRenderView014",0);
  pHVar6 = GetModuleHandleA("materialsystem.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_1c8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1c8,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa640 = (*pFVar7)("VMaterialSystem080",0);
  pHVar6 = GetModuleHandleA("inputsystem.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_1b0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1b0,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa5a8 = (*pFVar7)("InputSystemVersion001",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_198);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_198,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa598 = (*pFVar7)("VEngineModel016",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_180);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_180,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa610 = (*pFVar7)("EngineTraceClient003",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_168);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_168,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("VPhysicsDebugOverlay001",0);
  pHVar6 = GetModuleHandleA("vphysics.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_3c0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3c0,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa650 = (*pFVar7)("VPhysicsSurfaceProps001",0);
  pHVar6 = GetModuleHandleA("vstdlib.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_150);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_150,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa340 = (*pFVar7)("VEngineCvar007",0);
  pHVar6 = GetModuleHandleA("shaderapidx9.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_138);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_138,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("ShaderApi030",0);
  pHVar6 = GetModuleHandleA("engine.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_3f0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3f0,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa320 = (*pFVar7)("GAMEEVENTSMANAGER002",0);
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_3d8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3d8,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803fa658 = (*pFVar7)("GameMovement001",0);
  pHVar6 = GetModuleHandleA("client.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_360);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_360,(ThrowInfo *)&DAT_1803d5b48);
  }
  DAT_1803f9290 = (*pFVar7)("VClientPrediction001",0);
  pHVar6 = GetModuleHandleA("datacache.dll");
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180013100(local_390);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_390,(ThrowInfo *)&DAT_1803d5b48);
  }
  (*pFVar7)("MDLCache004",0);
  uVar19 = 0;
  DAT_1803fa670 = 0;
  DAT_1803fa620 = (HMODULE)0x0;
  DAT_1803fa660 = 0;
  DAT_1803fa608 = 0;
  DAT_1803fa638 = 0;
  DAT_1803fa5e0 = 0;
  _DAT_1803fa688 = 0;
  DAT_1803fa680 = 0;
  DAT_1803fa5a0 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  FUN_18001d080(&local_120,"48 8B 0D ? ? ? ? 48 8B 01 FF 50 28 48 8B 0D",0x2b);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_18001d080(&local_88,"client.dll",10);
  puVar8 = (undefined8 *)FUN_180016410(&local_b8,&local_88,&local_120,8);
  FUN_18020e450(&local_88);
  uVar21 = FUN_18020e450(&local_120);
  puVar1 = (undefined8 *)puVar8[1];
  for (puVar8 = (undefined8 *)*puVar8; lVar9 = DAT_1803fa5a0, puVar8 != puVar1; puVar8 = puVar8 + 1)
  {
    lVar9 = FUN_1801fce00(*puVar8);
    cVar4 = FUN_1800167d0(lVar9);
    uVar21 = extraout_XMM0_Da;
    if (cVar4 != '\0') break;
  }
  DAT_1803fa5a0 = lVar9;
  if (local_b8 == (void *)0x0) {
LAB_180017957:
    if ((DAT_1803fa5a0 == 0) &&
       (DAT_1803fa5a0 = FUN_180016940(uVar21,".?AVCMoveHelperClient@@",8), DAT_1803fa5a0 == 0)) {
      FUN_180014410(&DAT_18033eee0);
    }
    else {
      FUN_180014410("[IFACE] g_pMoveHelper = %p (CMoveHelperClient, RTTI-verified)\n",DAT_1803fa5a0)
      ;
    }
    DAT_1803fa670 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_108 = 0;
    FUN_18001d080(&local_120,"48 8B 0D ? ? ? ? 48 8B 01 FF 50 18 48 8B 0D",0x2b);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"client.dll",10);
    puVar8 = (undefined8 *)FUN_180016410(local_a0,&local_68,&local_120,8);
    FUN_18020e450(&local_68);
    uVar21 = FUN_18020e450(&local_120);
    puVar1 = (undefined8 *)puVar8[1];
    for (puVar8 = (undefined8 *)*puVar8; lVar9 = DAT_1803fa670, puVar8 != puVar1;
        puVar8 = puVar8 + 1) {
      lVar9 = FUN_1801fce00(*puVar8);
      cVar4 = FUN_1800167d0(lVar9);
      uVar21 = extraout_XMM0_Da_00;
      if (cVar4 != '\0') break;
    }
    DAT_1803fa670 = lVar9;
    if (local_a0[0] != (void *)0x0) {
      puVar15 = auStack_448;
      if ((0xfff < (ulonglong)((local_90 - (longlong)local_a0[0] >> 3) * 8)) &&
         (uVar13 = (longlong)local_a0[0] + (-8 - (longlong)*(void **)((longlong)local_a0[0] + -8)),
         local_a0[0] = *(void **)((longlong)local_a0[0] + -8), puVar15 = auStack_448, 0x1f < uVar13)
         ) goto LAB_180017ad4;
      goto LAB_180017ade;
    }
  }
  else {
    _Memory = local_b8;
    if (((ulonglong)((local_a8 - (longlong)local_b8 >> 3) * 8) < 0x1000) ||
       (_Memory = *(void **)((longlong)local_b8 + -8),
       (ulonglong)((longlong)local_b8 + (-8 - (longlong)_Memory)) < 0x20)) {
      free(_Memory);
      uVar21 = 0;
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      goto LAB_180017957;
    }
LAB_180017ad4:
    local_a0[0] = (void *)0x5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar15 = auStack_440;
LAB_180017ade:
    *(undefined8 *)(puVar15 + -8) = 0x180017ae6;
    free(local_a0[0]);
    uVar21 = 0;
    *(undefined8 *)(puVar15 + 0x3a8) = 0;
    *(undefined8 *)(puVar15 + 0x3b0) = 0;
    *(undefined8 *)(puVar15 + 0x3b8) = 0;
  }
  if (DAT_1803fa670 == 0) {
    *(undefined8 *)(puVar15 + -8) = 0x180017b16;
    DAT_1803fa670 = FUN_180016940(uVar21,".?AVCViewRenderBeams@@",8);
    if (DAT_1803fa670 != 0) goto LAB_180017b30;
    *(undefined8 *)(puVar15 + -8) = 0x180017b2e;
    FUN_180014410(&DAT_18033efd0);
  }
  else {
LAB_180017b30:
    *(undefined8 *)(puVar15 + -8) = 0x180017b43;
    FUN_180014410("[IFACE] g_pViewRenderBeams = %p (CViewRenderBeams, RTTI-verified)\n",
                  DAT_1803fa670);
  }
  *(undefined8 *)(puVar15 + -8) = 0x180017b50;
  pHVar6 = GetModuleHandleA("lua_shared.dll");
  *(undefined8 *)(puVar15 + -8) = 0x180017b60;
  pFVar7 = GetProcAddress(pHVar6,"CreateInterface");
  if (pFVar7 == (FARPROC)0x0) {
    *(undefined8 *)(puVar15 + -8) = 0x1800186b5;
    FUN_180013100(puVar15 + 0xd0);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar15 + -8) = &UNK_1800186c9;
    _CxxThrowException(puVar15 + 0xd0,(ThrowInfo *)&DAT_1803d5b48);
  }
  *(undefined8 *)(puVar15 + -8) = 0x180017b74;
  DAT_1803fa678 = (*pFVar7)("LUASHARED003",0);
  *(undefined8 *)(puVar15 + -8) = 0x180017b88;
  pHVar6 = GetModuleHandleA("tier0.dll");
  *(undefined8 *)(puVar15 + -8) = 0x180017b98;
  GetProcAddress(pHVar6,"g_pMemAlloc");
  *(undefined8 *)(puVar15 + -8) = 0x180017ba5;
  pHVar6 = GetModuleHandleA("engine.dll");
  if (pHVar6 != (HMODULE)0x0) {
    *(undefined8 *)(puVar15 + 0x358) = 0;
    *(undefined8 *)(puVar15 + 0x360) = 0;
    *(undefined8 *)(puVar15 + 0x368) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x180017bcc;
    pvVar10 = GetCurrentProcess();
    *(undefined8 *)(puVar15 + -8) = 0x180017be6;
    K32GetModuleInformation(pvVar10,pHVar6,puVar15 + 0x358,0x18);
    uVar18 = *(uint *)(puVar15 + 0x360);
    *(undefined1 **)(puVar15 + 0x350) = puVar15 + 0x328;
    *(undefined8 *)(puVar15 + 0x328) = 0;
    *(undefined8 *)(puVar15 + 0x330) = 0;
    *(undefined8 *)(puVar15 + 0x338) = 0;
    *(undefined8 *)(puVar15 + 0x340) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x180017c33;
    FUN_18001d080(puVar15 + 0x328,"40 55 53 48 8D AC 24 38 F0 FF FF B8 C8 10 00 00",0x2f);
    *(undefined1 **)(puVar15 + 0x348) = puVar15 + 0x370;
    *(undefined8 *)(puVar15 + 0x370) = 0;
    *(undefined8 *)(puVar15 + 0x378) = 0;
    *(undefined8 *)(puVar15 + 0x380) = 0;
    *(undefined8 *)(puVar15 + 0x388) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x180017c79;
    FUN_18001d080(puVar15 + 0x370,"engine.dll",10);
    *(undefined8 *)(puVar15 + -8) = 0x180017c8f;
    pcVar11 = (char *)FUN_180015f40(puVar15 + 0x370,puVar15 + 0x328);
    if (pcVar11 != (char *)0x0) {
      pcVar14 = pcVar11 + 0x400;
      for (; pcVar11 < pcVar14; pcVar11 = pcVar11 + 1) {
        if ((((*pcVar11 == 'H') && (pcVar11[1] == -0x73)) && (pcVar11[2] == '\r')) &&
           ((pHVar17 = (HMODULE)(pcVar11 + (longlong)*(int *)(pcVar11 + 3) + 7), pHVar6 <= pHVar17
            && (pHVar17 + 2 <= (HMODULE)((longlong)&pHVar6->unused + (ulonglong)uVar18))))) {
          *(undefined8 *)(puVar15 + -8) = 0x180017ce3;
          BVar5 = IsBadReadPtr(pHVar17,8);
          if ((BVar5 == 0) &&
             ((pHVar6 <= *(HMODULE *)pHVar17 &&
              (*(HMODULE *)pHVar17 < (HMODULE)((longlong)&pHVar6->unused + (ulonglong)uVar18))))) {
            *(undefined8 *)(puVar15 + -8) = 0x180017d14;
            DAT_1803fa620 = pHVar17;
            FUN_180014410("[IFACE] BaseClientState (x64) = %p (last=0x20B84 choked=0x20B88)\n",
                          pHVar17);
            break;
          }
        }
      }
    }
    if (DAT_1803fa620 == (HMODULE)0x0) {
      *(undefined8 *)(puVar15 + -8) = 0x180017d2a;
      FUN_180014410("[IFACE-WARN] BaseClientState x64 CL_Move resolver failed\n");
    }
  }
  if (DAT_1803f9278 == (longlong *)0x0) {
    *(undefined8 *)(puVar15 + -8) = 0x180018061;
    FUN_180014410("[IFACE-FAIL] g_pClient is null!\n");
  }
  else {
    lVar9 = *DAT_1803f9278;
    uVar12 = *(undefined8 *)(lVar9 + 0x70);
    *(undefined8 *)(puVar15 + -8) = 0x180017d47;
    DAT_1803fa660 = FUN_1801fce00(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + 0x50);
    *(undefined8 *)(puVar15 + -8) = 0x180017d57;
    DAT_1803fa638 = FUN_1801fce00(uVar12);
    uVar12 = *(undefined8 *)(lVar9 + 0x58);
    *(undefined8 *)(puVar15 + -8) = 0x180017d67;
    DAT_1803fa608 = FUN_1801fce20(uVar12);
    _DAT_1803de0e8 = 0x1a;
    DAT_1803fa680 = 0;
    DAT_1803f9258 = 0;
    *(undefined8 *)(puVar15 + -8) = 0x180017d93;
    pHVar6 = GetModuleHandleA("client.dll");
    uVar21 = 0;
    *(undefined8 *)(puVar15 + 0x328) = 0;
    *(undefined8 *)(puVar15 + 0x330) = 0;
    *(undefined8 *)(puVar15 + 0x338) = 0;
    if (pHVar6 != (HMODULE)0x0) {
      *(undefined8 *)(puVar15 + -8) = 0x180017db6;
      pvVar10 = GetCurrentProcess();
      *(undefined8 *)(puVar15 + -8) = 0x180017dd0;
      uVar21 = K32GetModuleInformation(pvVar10,pHVar6,puVar15 + 0x328,0x18);
    }
    *(HMODULE *)(puVar15 + 0x350) = pHVar6;
    pHVar17 = (HMODULE)((longlong)&pHVar6->unused + (ulonglong)*(uint *)(puVar15 + 0x330));
    *(HMODULE *)(puVar15 + 0x348) = pHVar17;
    pHVar2 = *(HMODULE *)(lVar9 + 0xd0);
    *(undefined1 **)(puVar15 + 0x370) = puVar15 + 0x350;
    *(undefined1 **)(puVar15 + 0x378) = puVar15 + 0x348;
    *(undefined1 **)(puVar15 + 0x358) = puVar15 + 0x350;
    *(undefined1 **)(puVar15 + 0x360) = puVar15 + 0x348;
    *(undefined1 **)(puVar15 + 0x30) = puVar15 + 0x350;
    *(undefined1 **)(puVar15 + 0x38) = puVar15 + 0x348;
    *(undefined1 **)(puVar15 + 0x40) = puVar15 + 0x370;
    *(undefined1 **)(puVar15 + 0x48) = puVar15 + 0x358;
    if (((*(uint *)(puVar15 + 0x330) != 0) && (pHVar6 <= pHVar2)) && (pHVar2 < pHVar17)) {
      *(undefined4 *)(puVar15 + 0x54) = 0;
      uVar13 = uVar19;
      while (iVar20 = (int)uVar13, iVar20 < 2) {
        if (DAT_1803fa680 != 0) goto LAB_180018026;
        *(undefined4 *)(puVar15 + 0x50) = 0;
        uVar13 = uVar19;
        while (iVar16 = (int)uVar13, iVar16 < 0x180) {
          pcVar11 = (char *)((longlong)&pHVar2->unused + (longlong)iVar16);
          if (*(char **)(puVar15 + 0x348) < pcVar11 + 0xd) break;
          if (*pcVar11 == -0x34) {
            if (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 1)) == -0x34) {
              if (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 2)) != -0x34)
              goto LAB_180017efc;
              break;
            }
LAB_180017fb3:
            uVar13 = (ulonglong)(iVar16 + 1U);
            *(uint *)(puVar15 + 0x50) = iVar16 + 1U;
          }
          else {
LAB_180017efc:
            if (((*pcVar11 != 'H') ||
                (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 1)) != -0x75)) ||
               (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 2)) != '\r'))
            goto LAB_180017fb3;
            if ((iVar20 == 0) &&
               (((*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 7)) != 'H' ||
                 (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 8)) != -0x75)) ||
                ((*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 9)) != -0x29 ||
                 (((*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 10)) != 'H' ||
                   (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 0xb)) != -0x75)) ||
                  (*(char *)((longlong)&pHVar2->unused + (longlong)(iVar16 + 0xc)) != '\x01'))))))))
            {
              uVar13 = (ulonglong)(iVar16 + 1U);
              *(uint *)(puVar15 + 0x50) = iVar16 + 1U;
            }
            else {
              pcVar14 = "View_Render scan+";
              if (iVar20 == 0) {
                pcVar14 = "View_Render sig+";
              }
              *(undefined8 *)(puVar15 + -8) = 0x180017f91;
              uVar12 = FUN_1801fce00(pcVar11);
              *(undefined8 *)(puVar15 + -8) = 0x180017fa4;
              cVar4 = FUN_180018770(puVar15 + 0x30,uVar12,pcVar14,(longlong)iVar16);
              uVar21 = extraout_XMM0_Da_01;
              if (cVar4 != '\0') break;
              uVar13 = (ulonglong)(iVar16 + 1U);
              *(uint *)(puVar15 + 0x50) = iVar16 + 1U;
            }
          }
        }
        *(uint *)(puVar15 + 0x54) = iVar20 + 1U;
        uVar13 = (ulonglong)(iVar20 + 1U);
      }
    }
    if (DAT_1803fa680 == 0) {
      *(undefined8 *)(puVar15 + -8) = 0x180017fe7;
      lVar9 = FUN_180016940(uVar21,".?AVCViewRender@@",0x26);
      uVar13 = uVar19;
      if (lVar9 != 0) {
        uVar13 = lVar9 - *(longlong *)(puVar15 + 0x350);
      }
      *(undefined8 *)(puVar15 + -8) = 0x180018010;
      FUN_180018770(puVar15 + 0x30,lVar9,"data sweep client+",uVar13);
      if (DAT_1803fa680 == 0) {
        *(undefined8 *)(puVar15 + -8) = 0x180018026;
        FUN_180014410(&DAT_18033f180);
      }
    }
LAB_180018026:
    *(longlong *)(puVar15 + 0x20) = DAT_1803fa680;
    *(undefined8 *)(puVar15 + -8) = 0x180018053;
    FUN_180014410("[IFACE] Input=%p Globals=%p CMode=%p ViewR=%p\n",DAT_1803fa660,DAT_1803fa608,
                  DAT_1803fa638);
  }
  *(undefined1 **)(puVar15 + 0x350) = puVar15 + 0x30;
  *(undefined8 *)(puVar15 + 0x30) = 0;
  *(undefined8 *)(puVar15 + 0x38) = 0;
  *(undefined8 *)(puVar15 + 0x40) = 0;
  *(undefined8 *)(puVar15 + 0x48) = 0;
  *(undefined8 *)(puVar15 + -8) = 0x18001809d;
  FUN_18001d080(puVar15 + 0x30,
                "48 89 6C 24 18 48 89 7C 24 20 41 56 48 83 EC 30 48 8B F9 45 33 F6 48 8B 0D",0x4a);
  *(undefined1 **)(puVar15 + 0x348) = puVar15 + 0x328;
  *(undefined8 *)(puVar15 + 0x328) = 0;
  *(undefined8 *)(puVar15 + 0x330) = 0;
  *(undefined8 *)(puVar15 + 0x338) = 0;
  *(undefined8 *)(puVar15 + 0x340) = 0;
  *(undefined8 *)(puVar15 + -8) = 0x1800180e3;
  FUN_18001d080(puVar15 + 0x328,"shaderapidx9.dll",0x10);
  *(undefined8 *)(puVar15 + -8) = 0x1800180f6;
  lVar9 = FUN_180015f40(puVar15 + 0x328,puVar15 + 0x30);
  if (lVar9 == 0) {
    *(undefined8 *)(puVar15 + -8) = 0x180018128;
    FUN_180014410("[IFACE-FAIL] D3DDevice x64 pattern not found!\n");
  }
  else {
    DAT_1803fa5e0 = *(undefined8 *)((longlong)*(int *)(lVar9 + 0x19) + 0x1d + lVar9);
    *(undefined8 *)(puVar15 + -8) = 0x18001811a;
    FUN_180014410("[IFACE] D3DDevice=%p (via x64 pattern scan)\n");
  }
  if (DAT_1803f9280 == 0) {
    pcVar11 = "[IFACE-FAIL] g_pRenderview is null!\n";
  }
  else {
    *(undefined1 **)(puVar15 + 0x350) = puVar15 + 0x30;
    *(undefined8 *)(puVar15 + 0x30) = 0;
    *(undefined8 *)(puVar15 + 0x38) = 0;
    *(undefined8 *)(puVar15 + 0x40) = 0;
    *(undefined8 *)(puVar15 + 0x48) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x18001816d;
    FUN_18001d080(puVar15 + 0x30,
                  "48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 60 CC CC 48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 20"
                  ,0x51);
    *(undefined1 **)(puVar15 + 0x348) = puVar15 + 0x328;
    *(undefined8 *)(puVar15 + 0x328) = 0;
    *(undefined8 *)(puVar15 + 0x330) = 0;
    *(undefined8 *)(puVar15 + 0x338) = 0;
    *(undefined8 *)(puVar15 + 0x340) = 0;
    *(undefined8 *)(puVar15 + -8) = 0x1800181b3;
    FUN_18001d080(puVar15 + 0x328,"engine.dll",10);
    *(undefined8 *)(puVar15 + -8) = 0x1800181c6;
    lVar9 = FUN_180015f40(puVar15 + 0x328,puVar15 + 0x30);
    if (lVar9 != 0) {
      *(undefined8 *)(puVar15 + -8) = 0x1800181d3;
      _DAT_1803fa688 = FUN_1801fce00(lVar9);
      *(undefined8 *)(puVar15 + -8) = 0x1800181e9;
      FUN_180014410("[IFACE] g_pRender (x64 proxy) = %p\n",_DAT_1803fa688);
      goto LAB_180018201;
    }
    pcVar11 = "[IFACE-WARN] g_pRender x64 pattern not found\n";
  }
  *(undefined8 *)(puVar15 + -8) = 0x180018200;
  FUN_180014410(pcVar11);
LAB_180018201:
  *(undefined8 *)(puVar15 + -8) = 0x180018213;
  pHVar6 = LoadLibraryA("vstdlib");
  *(undefined8 *)(puVar15 + -8) = 0x180018223;
  pFVar7 = GetProcAddress(pHVar6,"KeyValuesSystem");
  *(undefined8 *)(puVar15 + -8) = 0x180018225;
  (*pFVar7)();
  *(undefined8 *)(puVar15 + -8) = 0x180018232;
  pHVar6 = GetModuleHandleA("vstdlib.dll");
  *(undefined8 *)(puVar15 + -8) = 0x180018242;
  pFVar7 = GetProcAddress(pHVar6,"RandomSeed");
  if (pFVar7 != (FARPROC)0x0) {
    do {
      if (((pFVar7[uVar19] == (FARPROC)0x48) && (pFVar7[uVar19 + 1] == (FARPROC)0x8b)) &&
         (pFVar7[uVar19 + 2] == (FARPROC)0xd)) {
        iVar20 = *(int *)(pFVar7 + uVar19 + 3);
        lVar9 = *(longlong *)(pFVar7 + uVar19 + (longlong)iVar20 + 7);
        if (lVar9 != 0) {
          *(undefined8 *)(puVar15 + -8) = 0x180018299;
          DAT_1803fa5c0 = lVar9;
          FUN_180014410("[IFACE] g_pRandom (x64 MOV deref) = %p\n");
          goto LAB_1800182b7;
        }
        *(undefined8 *)(puVar15 + -8) = 0x1800182ab;
        FUN_180014410("[IFACE-WARN] RandomSeed global at %p is null\n",
                      pFVar7 + uVar19 + (longlong)iVar20 + 7);
        break;
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
    } while ((int)uVar18 < 0x20);
    *(undefined8 *)(puVar15 + -8) = 0x1800182b7;
    FUN_180014410("[IFACE-WARN] RandomSeed x64 pattern not found\n");
  }
LAB_1800182b7:
  *(undefined8 *)(puVar15 + -8) = 0x1800182c7;
  return;
}


