// 0x180299010  FUN_180299010
// size=176 thunk=false
// signature: undefined FUN_180299010()
// status: ok


ulonglong FUN_180299010(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_18029bdd0();
  }
  uVar2 = FUN_18029c320(param_1,param_2,param_3,0);
  if ((uint)uVar2 == 0xffffffff) {
    return uVar2;
  }
  if (param_4 != 0) {
    FUN_1802990c0(param_1,uVar2 & 0xffffffff,param_4);
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
    lVar3 = (longlong)
            (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                     (ulonglong)((uint)uVar2 & 0x7ffff) * 4) << 0xc) >> 0xc;
    FUN_1802981f0(*(undefined8 *)(param_1 + 0x38),*(undefined2 *)(lVar1 + lVar3 * 8),
                  *(undefined2 *)(lVar1 + 2 + lVar3 * 8),*(undefined2 *)(lVar1 + 4 + lVar3 * 8),
                  *(undefined2 *)(lVar1 + 6 + lVar3 * 8));
    *(undefined1 *)(param_1 + 0x52) = 0;
  }
  return uVar2 & 0xffffffff;
}


