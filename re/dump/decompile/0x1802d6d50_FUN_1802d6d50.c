// 0x1802d6d50  FUN_1802d6d50
// size=163 thunk=false
// signature: undefined FUN_1802d6d50()
// status: ok


ulonglong FUN_1802d6d50(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined4 extraout_var;
  uint uVar5;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *plVar2;
    do {
      uVar5 = 0x1f - LZCOUNT(param_2);
      lVar1 = (ulonglong)uVar5 + lVar3;
      if (*(undefined1 (*) [32])((ulonglong)uVar5 + lVar3) == *(undefined1 (*) [32])(param_1 + 4)) {
        iVar4 = memcmp((void *)(lVar1 + 0x20),(void *)param_1[8],param_1[9] - 0x20);
        if (iVar4 == 0) {
          *plVar2 = lVar1;
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar4) >> 8),1);
        }
      }
      uVar5 = 1 << ((byte)uVar5 & 0x1f);
      in_RAX = (ulonglong)uVar5;
      param_2 = param_2 ^ uVar5;
    } while (param_2 != 0);
  }
  return in_RAX & 0xffffffffffffff00;
}


