// 0x180095590  FUN_180095590
// size=372 thunk=false
// signature: undefined FUN_180095590()
// status: ok


longlong * FUN_180095590(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_res18 [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  memset(param_1 + 2,0,0x100);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (DAT_1803faee8 != (code *)0x0) {
    lVar3 = param_1[1];
    uVar1 = *(undefined8 *)(*param_1 + 8);
    FUN_180023010(&local_48,uVar1);
    (*DAT_1803faee8)(uVar1,(int)lVar3,"GetTable");
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar4 = (**(code **)(*(longlong *)*param_1 + 0x138))((longlong *)*param_1,0xffffffff,6);
  plVar2 = (longlong *)*param_1;
  if (cVar4 == '\0') {
    (**(code **)(*plVar2 + 0x10))(plVar2,1);
    local_res18[0] = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_res18,(ThrowInfo *)&DAT_1803d59f0);
  }
  (**(code **)(*plVar2 + 8))(plVar2,(int)param_1[1]);
  iVar5 = FUN_180023180(*(undefined8 *)(*param_1 + 8),1,1);
  plVar2 = (longlong *)*param_1;
  if (iVar5 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,1);
    local_res18[0] = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_res18,(ThrowInfo *)&DAT_1803d59f0);
  }
  cVar4 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,5);
  lVar3 = *(longlong *)*param_1;
  if (cVar4 != '\0') {
    uVar6 = (**(code **)(lVar3 + 0x118))();
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    return param_1;
  }
  (**(code **)(lVar3 + 0x10))((longlong *)*param_1,1);
  local_res18[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_res18,(ThrowInfo *)&DAT_1803d59f0);
}


