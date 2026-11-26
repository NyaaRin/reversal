// 0x18029d9a0  FUN_18029d9a0
// size=121 thunk=false
// signature: undefined FUN_18029d9a0()
// status: ok


longlong FUN_18029d9a0(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    if (uVar1 == 0xfffe) {
      return (longlong)*(int *)(param_1 + 0x40) * 0x2c + *(longlong *)(param_1 + 0x38);
    }
    if (uVar1 != 0xffff) {
      return (ulonglong)uVar1 * 0x2c + *(longlong *)(param_1 + 0x38);
    }
  }
  lVar2 = FUN_18029c810(param_1,param_2,0);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x2c + *(longlong *)(param_1 + 0x38);
  }
  return lVar2;
}


