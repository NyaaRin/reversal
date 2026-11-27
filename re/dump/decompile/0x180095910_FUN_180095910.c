// 0x180095910  FUN_180095910
// size=218 thunk=false
// signature: undefined FUN_180095910()
// status: ok


void FUN_180095910(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)param_1[0x22];
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    (**(code **)(*(longlong *)*param_1 + 0x128))
              ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0xc));
    uVar1 = (*(code *)**(undefined8 **)*param_1)();
    lVar3 = (longlong)iVar2;
    if ((int)param_1[lVar3 * 2 + 3] < 0) {
      (**(code **)(*(longlong *)*param_1 + 0xe0))();
    }
    else {
      (**(code **)(*(longlong *)*param_1 + 0x128))();
    }
    FUN_18002da40(*(undefined8 *)(*param_1 + 8),uVar1,param_1[lVar3 * 2 + 2]);
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,1);
    if (-1 < (int)param_1[lVar3 * 2 + 3]) {
      (**(code **)(*(longlong *)*param_1 + 0x120))();
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*(longlong *)*param_1 + 0x120))
              ((longlong *)*param_1,*(int *)((longlong)param_1 + 0xc));
  }
  return;
}


