// 180023e60  FUN_180023e60
// signature: undefined FUN_180023e60()
// status: ok


void FUN_180023e60(longlong *param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2 == -0x2714) {
    if ((param_1[1] != 0) && (uVar2 = *(ulonglong *)(param_1[1] + 0x10), uVar2 != 0)) {
      plVar3 = (longlong *)DAT_1803fa7f0[1];
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
      plVar5 = DAT_1803fa7f0;
      while (cVar1 == '\0') {
        plVar4 = plVar3;
        if ((ulonglong)plVar3[4] < uVar2) {
          plVar3 = plVar3 + 2;
          plVar4 = plVar5;
        }
        plVar3 = (longlong *)*plVar3;
        plVar5 = plVar4;
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
      }
      if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar2 < (ulonglong)plVar5[4])) {
        plVar5 = DAT_1803fa7f0;
      }
      lVar6 = *param_1;
      if ((plVar5 != DAT_1803fa7f0) && (plVar5 != (longlong *)0xffffffffffffffd8)) {
        (**(code **)(lVar6 + 8))(param_1,0xffffd8ed);
        (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"SCRIPTENV");
                    /* WARNING: Could not recover jumptable at 0x000180023fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);
        return;
      }
      goto LAB_180023fb0;
    }
  }
  else {
    if (param_2 != -0x2713) {
                    /* WARNING: Could not recover jumptable at 0x000180023e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x130))();
      return;
    }
    if ((param_1[1] != 0) && (uVar2 = *(ulonglong *)(param_1[1] + 0x10), uVar2 != 0)) {
      plVar3 = (longlong *)DAT_1803fa7f0[1];
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
      plVar5 = DAT_1803fa7f0;
      while (cVar1 == '\0') {
        plVar4 = plVar3;
        if ((ulonglong)plVar3[4] < uVar2) {
          plVar3 = plVar3 + 2;
          plVar4 = plVar5;
        }
        plVar3 = (longlong *)*plVar3;
        plVar5 = plVar4;
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
      }
      if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar2 < (ulonglong)plVar5[4])) {
        plVar5 = DAT_1803fa7f0;
      }
      lVar6 = *param_1;
      if ((plVar5 != DAT_1803fa7f0) && (plVar5 != (longlong *)0xffffffffffffffd8)) {
                    /* WARNING: Could not recover jumptable at 0x000180023f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 8))(param_1,0xffffd8ed);
        return;
      }
      goto LAB_180023fb0;
    }
  }
  lVar6 = *param_1;
LAB_180023fb0:
                    /* WARNING: Could not recover jumptable at 0x000180023fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0xe0))(param_1);
  return;
}


