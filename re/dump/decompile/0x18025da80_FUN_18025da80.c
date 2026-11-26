// 0x18025da80  FUN_18025da80
// size=250 thunk=false
// signature: undefined FUN_18025da80()
// status: ok


void FUN_18025da80(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  short *psVar8;
  ulonglong uVar9;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    param_2[6] = 1;
    uVar9 = 0;
    param_2[7] = 0;
    psVar4 = (short *)param_2[1];
    for (psVar8 = (short *)*param_2; psVar8 != psVar4; psVar8 = psVar8 + 8) {
      if (*psVar8 == 9) {
        param_4 = *(ulonglong *)(param_1 + 0x18) - uVar9 % *(ulonglong *)(param_1 + 0x18);
        uVar9 = uVar9 + param_4;
      }
      else {
        uVar9 = uVar9 + 1;
      }
      param_2[7] = uVar9;
    }
    uVar5 = param_2[8];
    param_2[8] = 0;
    plVar6 = (longlong *)param_2[9];
    param_2[9] = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6,0,psVar4,param_4,uVar5,plVar6,0,0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  else {
    FUN_18025cdf0(param_1 + 0x48);
    FUN_18025d600(param_1,param_2);
  }
  *(undefined1 *)((longlong)param_2 + 0x23) = 0;
  return;
}


