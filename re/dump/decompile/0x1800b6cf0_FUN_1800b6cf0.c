// 0x1800b6cf0  FUN_1800b6cf0
// size=199 thunk=false
// signature: undefined FUN_1800b6cf0()
// status: ok


ulonglong FUN_1800b6cf0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  uint uVar3;
  ulonglong uVar4;
  
  if ((((param_1 != (longlong *)0x0) && (((ulonglong)param_1 & 7) == 0)) &&
      (in_RAX = (**(code **)(*param_1 + 0x20))(), (int)in_RAX == 0x40)) &&
     ((iVar1 = *(int *)((longlong)param_1 + 0xc), in_RAX = (**(code **)(*param_1 + 0x80))(param_1,0)
      , (int)in_RAX == iVar1 &&
      (lVar2 = param_1[2], in_RAX = (**(code **)(*param_1 + 0x80))(param_1,1),
      (int)in_RAX == (int)lVar2)))) {
    uVar3 = *(uint *)(param_1 + 0x4f7);
    in_RAX = (ulonglong)uVar3;
    if ((uVar3 == 0x100) || (uVar3 == 0x1000)) {
      iVar1 = *(int *)((longlong)param_1 + 0x27bc);
      if (iVar1 == 8) {
        uVar4 = 0;
      }
      else {
        if (iVar1 != 0x10) goto LAB_1800b6daa;
        uVar4 = 0;
      }
      while( true ) {
        in_RAX = (uVar4 + 0x22) * 0x1c;
        if ((*(int *)(in_RAX + 0x18 + (longlong)param_1) != (int)uVar4) ||
           (3 < *(uint *)(in_RAX + 0x14 + (longlong)param_1))) break;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        if (iVar1 <= (int)uVar3) {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
      }
    }
  }
LAB_1800b6daa:
  return in_RAX & 0xffffffffffffff00;
}


