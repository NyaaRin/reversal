// 0x180269ad0  FUN_180269ad0
// size=183 thunk=false
// signature: undefined FUN_180269ad0()
// status: ok


void FUN_180269ad0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xc);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 10);
    if ((*(byte *)(lVar3 + 0x28e4) & 0x20) != 0) {
      FUN_180289170("Clipper: End() in \'%s\'\n",*(undefined8 *)(*(longlong *)(lVar3 + 0x1520) + 8))
      ;
    }
    if (((uint)param_1[3] < 0x7fffffff) && (-1 < *param_1)) {
      FUN_180269b90(param_1);
    }
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar2 + 0x18);
    iVar1 = *(int *)(lVar3 + 0x2350);
    iVar4 = iVar1 + -1;
    *(int *)(lVar3 + 0x2350) = iVar4;
    if (0 < iVar4) {
      lVar2 = (longlong)iVar1 + -2;
      *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x2360) + lVar2 * 0x28) + 0x30) =
           *(longlong *)(lVar3 + 0x2360) + lVar2 * 0x28;
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[1] = param_1[3];
  *param_1 = param_1[3];
  param_1[3] = -1;
  return;
}


