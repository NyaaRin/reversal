// 0x180031720  FUN_180031720
// size=460 thunk=false
// signature: undefined FUN_180031720()
// status: ok


int FUN_180031720(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if (((((3 < param_7) || (param_1 == 0)) || (param_2 == 0)) ||
      ((DAT_1803faf80 == (code *)0x0 || (DAT_1803faff8 == (code *)0x0)))) ||
     ((DAT_1803fb088 == (code *)0x0 || (DAT_1803faf10 == (code *)0x0)))) {
    return -1;
  }
  uVar1 = (*DAT_1803fb088)(param_2);
  uVar2 = (*DAT_1803fb088)(param_2);
  iVar5 = 1;
  do {
    lVar4 = (*DAT_1803faf80)(param_2,uVar1,iVar5);
    if (lVar4 == 0) break;
    iVar3 = (*DAT_1803faff8)(param_2,0xffffffff);
    if (iVar3 == 5) {
      iVar3 = FUN_1800314d0(param_1,param_2);
      if (iVar3 == 1) {
        iVar5 = FUN_18002d7a0(param_1);
        (*DAT_1803faf10)(param_2,uVar2);
        return iVar5;
      }
      if (iVar3 == 2) {
        *param_6 = 1;
      }
    }
    else if ((iVar3 == 6) &&
            (iVar3 = FUN_180031720(param_1,param_2,0xffffffff,param_4,param_5,param_6,param_7 + 1),
            iVar3 != -1)) {
      (*DAT_1803faf10)(param_2,uVar2);
      return iVar3;
    }
    (*DAT_1803faf10)(param_2,uVar2);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xb);
  (*DAT_1803faf10)(param_2,uVar2);
  return -1;
}


