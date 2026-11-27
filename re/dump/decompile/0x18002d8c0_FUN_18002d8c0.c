// 0x18002d8c0  FUN_18002d8c0
// size=256 thunk=false
// signature: undefined FUN_18002d8c0()
// status: ok


void FUN_18002d8c0(longlong *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int local_res10 [2];
  
  if (param_2 != -1) {
    if (param_2 < 0x40000000) {
      if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018002d9b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x120))();
        return;
      }
    }
    else {
      if (param_1 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_1[1];
      }
      param_2 = param_2 + -0x40000000;
      local_res10[0] = param_2;
      cVar2 = FUN_18002d6e0(lVar4);
      if (cVar2 != '\0') {
        (*DAT_1803faf38)(lVar4,0xffffd8ed);
        iVar3 = (*DAT_1803faff8)(lVar4,0xffffffff);
        if (iVar3 == 5) {
          (*DAT_1803fafd8)(lVar4);
          (*DAT_1803fb000)(lVar4,0xfffffffe,param_2);
        }
        pcVar1 = DAT_1803faf10;
        iVar3 = (*DAT_1803fb088)(lVar4);
        (*pcVar1)(lVar4,iVar3 + -1);
      }
      if (DAT_1803fb070 == DAT_1803fb078) {
        FUN_180229d20(&DAT_1803fb068,DAT_1803fb070,local_res10);
        return;
      }
      *DAT_1803fb070 = param_2;
      DAT_1803fb070 = DAT_1803fb070 + 1;
    }
  }
  return;
}


