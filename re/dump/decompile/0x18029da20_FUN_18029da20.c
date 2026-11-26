// 0x18029da20  FUN_18029da20
// size=102 thunk=false
// signature: undefined FUN_18029da20()
// status: ok


longlong FUN_18029da20(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    if (uVar1 == 0xfffe) {
      return 0;
    }
    if (uVar1 != 0xffff) {
      return (ulonglong)uVar1 * 0x2c + *(longlong *)(param_1 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x8000000;
  lVar2 = FUN_18029c810(param_1,param_2,0);
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xf7ffffff;
  return lVar2;
}


