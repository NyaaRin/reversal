// 0x18001ea40  FUN_18001ea40
// size=104 thunk=false
// signature: undefined FUN_18001ea40()
// status: ok


undefined1 * FUN_18001ea40(longlong *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((param_1 != (longlong *)0x0) && (iVar1 = FUN_18001e850(), 0 < iVar1)) {
    if (*param_1 != 0) {
      puVar2 = (undefined1 *)(**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1);
      puVar3 = &DAT_18033e5ea;
      if ((undefined1 *)0x10000 < puVar2) {
        puVar3 = puVar2;
      }
      return puVar3;
    }
  }
  return &DAT_18033e5ea;
}


