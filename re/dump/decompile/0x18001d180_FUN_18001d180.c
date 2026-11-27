// 0x18001d180  FUN_18001d180
// size=459 thunk=false
// signature: undefined FUN_18001d180()
// status: ok


ulonglong FUN_18001d180(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  DWORD DVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x20))();
  uVar10 = 0;
  uVar11 = uVar10;
  if (plVar6 == (longlong *)0x0) {
LAB_18001d202:
    bVar2 = false;
    DVar4 = GetTickCount();
  }
  else {
    iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
    uVar11 = (ulonglong)iVar3;
    if (0x7f < iVar3 - 1U) goto LAB_18001d202;
    DVar4 = GetTickCount();
    if ((*(int *)(&DAT_1803f8fe0 + uVar11 * 4) != 0) &&
       (DVar4 - *(int *)(&DAT_1803f8fe0 + uVar11 * 4) < 1000)) {
      return (ulonglong)*(uint *)(&DAT_1803fcd00 + uVar11 * 4);
    }
    bVar2 = true;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18001d080(&local_d8,"DT_GMOD_Player",0xe);
  uVar7 = FUN_18016d4c0(local_88,&local_d8);
  uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);
  FUN_18020e450(&local_d8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"m_iMaxArmor",0xb);
  local_98 = &local_b8;
  local_90 = local_68;
  uVar8 = FUN_18016d4c0(local_68,&local_b8);
  iVar3 = FUN_180018c10(uVar7,uVar8);
  FUN_18020e450(&local_b8);
  if ((iVar3 < 1) ||
     (uVar10 = (ulonglong)*(uint *)((longlong)iVar3 + (longlong)param_1),
     (int)*(uint *)((longlong)iVar3 + (longlong)param_1) < 1)) {
    if (bVar2) {
      if ((DAT_1803fd0d0 != (code *)0x0) &&
         (uVar5 = (*DAT_1803fd0d0)(uVar11 & 0xffffffff,0xffffffff), 0 < (int)uVar5)) {
        uVar10 = (ulonglong)uVar5;
        goto LAB_18001d30e;
      }
      if (0 < (int)uVar10) goto LAB_18001d30e;
    }
    uVar10 = 100;
  }
  if (!bVar2) {
    return uVar10;
  }
LAB_18001d30e:
  lVar1 = (longlong)(int)uVar11 * 4;
  DVar9 = 1;
  if (DVar4 != 0) {
    DVar9 = DVar4;
  }
  *(DWORD *)(&DAT_1803f8fe0 + lVar1) = DVar9;
  *(int *)(&DAT_1803fcd00 + lVar1) = (int)uVar10;
  return uVar10;
}


