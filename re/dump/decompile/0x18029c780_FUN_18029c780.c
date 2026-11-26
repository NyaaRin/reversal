// 0x18029c780  FUN_18029c780
// size=137 thunk=false
// signature: undefined FUN_18029c780()
// status: ok


longlong FUN_18029c780(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_2 != 0xffffffff) {
    if (*(longlong *)(param_1 + 0x2b0) == 0) {
      FUN_18029bdd0();
    }
    lVar2 = *(longlong *)(param_1 + 0x2b0);
    if ((((int)(param_2 & 0x7ffff) < *(int *)(lVar2 + 0x70)) &&
        (uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x78) + (ulonglong)(param_2 & 0x7ffff) * 4),
        ((uVar1 ^ param_2) & 0x3ff00000) == 0)) && ((uVar1 >> 0x1e & 1) != 0)) {
      return *(longlong *)(lVar2 + 0x68) + ((longlong)(int)(uVar1 << 0xc) >> 0xc) * 8;
    }
  }
  return 0;
}


