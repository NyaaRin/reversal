// 0x1801ee2f0  FUN_1801ee2f0
// size=428 thunk=false
// signature: undefined FUN_1801ee2f0()
// status: ok


ulonglong FUN_1801ee2f0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar11;
  ulonglong local_40;
  longlong local_38;
  ulonglong uVar10;
  
  uVar5 = 0;
  local_40 = 0;
  local_38 = param_1;
  cVar2 = FUN_1801153d0(param_1,&local_40);
  if (cVar2 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_1803fa400);
    plVar4 = (longlong *)DAT_1803faac0[1];
    cVar2 = *(char *)((longlong)plVar4 + 0x19);
    plVar8 = DAT_1803faac0;
    while (cVar2 == '\0') {
      plVar7 = plVar4;
      if ((ulonglong)plVar4[4] < local_40) {
        plVar4 = plVar4 + 2;
        plVar7 = plVar8;
      }
      plVar4 = (longlong *)*plVar4;
      plVar8 = plVar7;
      cVar2 = *(char *)((longlong)plVar4 + 0x19);
    }
    if ((*(char *)((longlong)plVar8 + 0x19) != '\0') || (local_40 < (ulonglong)plVar8[4])) {
      plVar8 = DAT_1803faac0;
    }
    uVar11 = uVar5;
    if (plVar8 != DAT_1803faac0) {
      uVar11 = plVar8[5];
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1803fa400);
    if (uVar11 != 0) goto LAB_1801ee389;
  }
  uVar11 = DAT_1803fa3f8;
LAB_1801ee389:
  if (uVar11 < 0x10000) {
    return 0;
  }
  local_40 = uVar11;
  if (DAT_1803ff270 != '\0') {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar6 = (*pcVar1)(DAT_1803fa360,uVar3);
    if (lVar6 != 0) {
      lVar6 = FUN_18001dbf0(lVar6);
      if (param_1 != lVar6) {
        uVar5 = FUN_1801ee2c0(uVar11,param_1);
        return uVar5;
      }
      uVar10 = uVar5;
      if (DAT_1803fa46f == '\0') {
        while (iVar9 = (int)uVar10, iVar9 < (int)(DAT_1803fcc70 - DAT_1803fcc68 >> 3)) {
          plVar4 = *(longlong **)(DAT_1803fcc68 + (longlong)iVar9 * 8);
          (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
          uVar10 = (ulonglong)(iVar9 + 1);
        }
        uVar3 = FUN_1801ee2c0(uVar11,param_1);
        local_40 = CONCAT44(local_40._4_4_,uVar3);
        while (iVar9 = (int)uVar5, iVar9 < (int)(DAT_1803fcc70 - DAT_1803fcc68 >> 3)) {
          plVar4 = *(longlong **)(DAT_1803fcc68 + (longlong)iVar9 * 8);
          (**(code **)(*plVar4 + 0x70))(plVar4,param_1);
          uVar5 = (ulonglong)(iVar9 + 1);
        }
        return local_40 & 0xffffffff;
      }
    }
  }
  uVar5 = FUN_1801ee2c0(uVar11,param_1);
  return uVar5;
}


