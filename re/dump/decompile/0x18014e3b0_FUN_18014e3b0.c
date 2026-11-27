// 0x18014e3b0  FUN_18014e3b0
// size=824 thunk=false
// signature: undefined FUN_18014e3b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18014e3b0(undefined8 param_1)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  size_t sVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  void *_Memory;
  undefined8 ****ppppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [24];
  uint local_328;
  undefined8 local_318;
  longlong local_310;
  longlong local_308 [5];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  longlong local_290;
  ulonglong uStack_288;
  undefined8 ***local_280 [2];
  undefined8 local_270;
  ulonglong local_268;
  WCHAR local_258 [264];
  ulonglong local_48;
  
  puVar11 = auStack_348;
  puVar12 = auStack_348;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_348;
  iVar13 = 0;
  uVar14 = 0;
  local_328 = 0;
  local_308[4] = param_1;
  if ((DAT_1805c3928 & 1) == 0) {
    DAT_1805c3928 = DAT_1805c3928 | 1;
    atexit(FUN_18030a4f0);
  }
  if (DAT_1803f91e4 != '\0') {
    FUN_18020e540(param_1,&DAT_1803e6ff0);
    puVar12 = auStack_348;
    goto LAB_18014e6c6;
  }
  DAT_1803f91e4 = '\x01';
  local_318 = (longlong *)((ulonglong)local_318._4_4_ << 0x20);
  FUN_180067fd0(local_280);
  if (((int)local_318 == 0) && (cVar4 = FUN_18014e280(local_280), cVar4 != '\0')) {
    ppppuVar10 = local_280;
    if (7 < local_268) {
      ppppuVar10 = (undefined8 ****)local_280[0];
    }
    FUN_18021a7b0(&DAT_1803e6ff0,ppppuVar10,local_270);
    FUN_18020e540(param_1,&DAT_1803e6ff0);
    local_328 = 1;
    puVar12 = auStack_348;
  }
  else {
    memset(local_258,0,0x208);
    DVar5 = GetModuleFileNameW((HMODULE)0x0,local_258,0x104);
    if (DVar5 != 0) {
      local_318 = local_308;
      sVar7 = wcslen(local_258);
      local_308[0] = 0;
      local_308[1] = 0;
      local_308[2] = 0;
      local_308[3] = 0;
      FUN_180211510(local_308,local_258,sVar7);
      uVar14 = 0;
      local_328 = 0;
      FUN_180065cd0(local_308,&local_2a0);
      FUN_18021e290(local_308);
LAB_18014e537:
      if ((iVar13 < 5) && (local_290 != 0)) {
        plVar8 = (longlong *)FUN_180065b60(&local_2a0,local_2e0);
        uVar14 = 2;
        local_328 = 2;
        local_318 = plVar8;
        if (7 < (ulonglong)plVar8[3]) {
          local_318 = (longlong *)*plVar8;
        }
        local_310 = plVar8[2];
        iVar6 = FUN_180065970(&local_2a0,&local_318);
        if (iVar6 == 0) goto LAB_18014e58d;
        bVar3 = true;
      }
      else {
LAB_18014e58d:
        bVar3 = false;
      }
      if ((char)uVar14 != '\0') {
        uVar14 = 0;
        local_328 = 0;
        FUN_18021e290(local_2e0);
      }
      if (!bVar3) {
        FUN_18021e290(&local_2a0);
        goto LAB_18014e6a6;
      }
      cVar4 = FUN_18014e280(&local_2a0);
      if (cVar4 != '\0') goto LAB_18014e65c;
      puVar9 = (undefined4 *)FUN_180065cd0(&local_2a0,local_2c0);
      if (&local_2a0 == puVar9) goto LAB_18014e645;
      if (7 < uStack_288) {
        pvVar2 = (void *)CONCAT44(uStack_29c,CONCAT22(local_2a0._2_2_,(undefined2)local_2a0));
        _Memory = pvVar2;
        if ((0xfff < uStack_288 * 2 + 2) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar11 = auStack_340;
LAB_18014e65c:
          puVar9 = &local_2a0;
          if (7 < uStack_288) {
            puVar9 = (undefined4 *)
                     CONCAT44(uStack_29c,CONCAT22(local_2a0._2_2_,(undefined2)local_2a0));
          }
          *(undefined8 *)(puVar11 + -8) = 0x18014e67a;
          FUN_18021a7b0(&DAT_1803e6ff0,puVar9,local_290);
          *(undefined8 *)(puVar11 + -8) = 0x18014e689;
          FUN_18020e540(param_1,&DAT_1803e6ff0);
          *(uint *)(puVar11 + 0x20) = uVar14 | 1;
          *(undefined8 *)(puVar11 + -8) = 0x18014e69a;
          FUN_18021e290(&local_2a0);
          puVar12 = puVar11;
          goto LAB_18014e6bd;
        }
        free(_Memory);
      }
      uStack_29c = puVar9[1];
      uStack_298 = puVar9[2];
      uStack_294 = puVar9[3];
      local_2a0._0_2_ = (undefined2)*puVar9;
      local_2a0._2_2_ = (undefined2)((uint)*puVar9 >> 0x10);
      local_290 = *(longlong *)(puVar9 + 4);
      uStack_288 = *(ulonglong *)(puVar9 + 6);
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 7;
      *(undefined2 *)puVar9 = 0;
LAB_18014e645:
      FUN_18021e290(local_2c0);
      iVar13 = iVar13 + 1;
      goto LAB_18014e537;
    }
LAB_18014e6a6:
    FUN_18020e540(param_1,&DAT_1803e6ff0);
    local_328 = uVar14 | 1;
  }
LAB_18014e6bd:
  *(undefined8 *)(puVar12 + -8) = 0x18014e6c6;
  FUN_18021e290(local_280);
LAB_18014e6c6:
  *(undefined8 *)(puVar12 + -8) = 0x18014e6d8;
  return param_1;
}


