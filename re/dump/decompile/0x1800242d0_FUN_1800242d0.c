// 0x1800242d0  FUN_1800242d0
// size=295 thunk=false
// signature: undefined FUN_1800242d0()
// status: ok


void FUN_1800242d0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)*param_1)();
  iVar1 = iVar1 + -1;
  FUN_180023e60(param_1,0xffffd8ed);
  (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");
  (**(code **)(*param_1 + 8))(param_1,iVar1);
  (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
  iVar2 = (**(code **)(*param_1 + 0x140))(param_1,0xffffffff);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);
                    /* WARNING: Could not recover jumptable at 0x000180024359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1,3);
  (**(code **)(*param_1 + 8))(param_1,iVar1);
  FUN_1800240f0(param_1,0xffffffff,1);
  uVar3 = (**(code **)*param_1)(param_1);
  FUN_180023e60(param_1,0xffffd8ed);
  (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");
  (**(code **)(*param_1 + 8))(param_1,iVar1);
  (**(code **)(*param_1 + 8))(param_1,uVar3);
  (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);
                    /* WARNING: Could not recover jumptable at 0x0001800243f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,2);
  return;
}


