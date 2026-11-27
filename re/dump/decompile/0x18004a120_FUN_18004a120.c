// 0x18004a120  FUN_18004a120
// size=242 thunk=false
// signature: undefined FUN_18004a120()
// status: ok


void FUN_18004a120(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *local_res20;
  longlong *plVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,3,5);
  if (cVar2 != '\0') {
    plVar5 = param_1;
    for (iVar4 = 1; iVar4 < 0x201; iVar4 = iVar4 + 1) {
      (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar4);
      (**(code **)(*param_1 + 0x18))(param_1,3);
      cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,4);
      lVar1 = *param_1;
      if (cVar2 == '\0') {
        (**(code **)(lVar1 + 0x10))(param_1,1);
        return;
      }
      puVar3 = (undefined1 *)(**(code **)(lVar1 + 0xb8))(param_1,0xffffffff,0,lVar1,plVar5);
      local_res20 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        local_res20 = puVar3;
      }
      FUN_180210ae0(param_3,&local_res20);
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
  }
  return;
}


