// 0x1801f4610  FUN_1801f4610
// size=862 thunk=false
// signature: undefined FUN_1801f4610()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f4610(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined1 *param_6,undefined1 *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  char local_2c8;
  char local_2c7;
  uint local_2c4;
  int local_2c0;
  int local_2bc;
  longlong *local_2b8;
  longlong *local_2b0;
  ulonglong *local_2a8;
  longlong *local_2a0;
  int *local_298;
  ulonglong local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  longlong local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong alStack_258 [64];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_2f8;
  local_288 = param_6;
  local_280 = param_7;
  if ((((((param_5 != 0) && (DAT_1803fa598 != (longlong *)0x0)) &&
        (DAT_1803f9280 != (longlong *)0x0)) &&
       ((piVar1 = (int *)(param_4 + 0x44), 0 < *piVar1 &&
        (local_278 = param_4, local_270 = param_3, local_268 = param_2, local_260 = param_1,
        cVar3 = FUN_1800c6240(), cVar3 != '\0')))) &&
      ((iVar5 = FUN_1800c62d0(), iVar5 != 0 &&
       ((local_298 = piVar1, DAT_1803fa668 == (longlong *)0x0 ||
        (iVar5 = *piVar1, iVar6 = (**(code **)(*DAT_1803fa668 + 0x60))(), iVar5 != iVar6)))))) &&
     (plVar7 = (longlong *)FUN_1801073d0(), plVar7 != (longlong *)0x0)) {
    local_2b0 = plVar7;
    iVar5 = FUN_1800c6170();
    local_2c8 = FUN_1800c61f0();
    uVar12 = 0;
    local_2c4 = 0;
    local_2c0 = 0x40;
    if (iVar5 < 0x40) {
      local_2c0 = iVar5;
    }
    local_2a8 = DAT_1803fac40;
    uVar8 = DAT_1803fac60 + DAT_1803fac58;
    uVar13 = uVar12;
    while ((iVar5 = (int)uVar13, uVar8 != DAT_1803fac58 && (iVar5 < local_2c0))) {
      local_290 = uVar8 - 1;
      uVar8 = uVar12;
      if (local_2a8 != (ulonglong *)0x0) {
        uVar8 = *local_2a8;
      }
      puVar2 = *(undefined8 **)
                (*(longlong *)(uVar8 + 8) + (*(longlong *)(uVar8 + 0x10) - 1U & local_290) * 8);
      plVar10 = (longlong *)*puVar2;
      local_2a0 = (longlong *)puVar2[1];
      while ((uVar8 = local_290, local_2b8 = plVar10, plVar10 != local_2a0 &&
             (iVar5 = (int)uVar13, iVar5 < local_2c0))) {
        if ((*(char *)((longlong)plVar10 + 0x1844) != '\0') && (*plVar10 != 0)) {
          plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar10 + 0x20))();
          iVar6 = 0;
          if (plVar9 != (longlong *)0x0) {
            iVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
          }
          local_2bc = iVar6;
          if ((iVar6 == *local_298) &&
             ((local_2c8 == '\0' || (local_2c7 = FUN_1800c60c0(plVar10), local_2c7 != '\0')))) {
            alStack_258[iVar5] = (longlong)plVar10;
            local_2c4 = iVar5 + 1;
            uVar13 = (ulonglong)local_2c4;
          }
        }
        plVar10 = plVar10 + 0x30d;
      }
    }
    if (0 < iVar5) {
      FUN_1800c6350(local_48);
      uVar4 = (**(code **)(*plVar7 + 0xf0))(plVar7,0x8000);
      (**(code **)(*plVar7 + 0xe8))(plVar7,0x8000,1);
      *local_288 = 1;
      (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,plVar7,0);
      *local_280 = 1;
      (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,local_48);
      (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380a88);
      do {
        local_2d8 = alStack_258[(int)uVar12] + 0x44;
        FUN_1801f3560(local_260,local_268,local_270,local_278);
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < iVar5);
      (**(code **)(*plVar7 + 0xe8))(plVar7,0x8000,uVar4);
      (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
      local_58 = 0x3f800000;
      local_54 = 0x3f800000;
      local_50 = 0x3f800000;
      (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_58);
      (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
    }
  }
  return;
}


