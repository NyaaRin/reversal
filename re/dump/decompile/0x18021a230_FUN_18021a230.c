// 0x18021a230  FUN_18021a230
// size=164 thunk=false
// signature: undefined FUN_18021a230()
// status: ok


void FUN_18021a230(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if (*param_3 != 0) {
    uVar3 = ((longlong)param_2 - (longlong)param_1) + 3U >> 2;
    if (param_2 < param_1) {
      uVar3 = 0;
    }
    if ((3 < uVar3) && ((param_3 < param_1 || (param_1 + (uVar3 - 1) < param_3)))) {
      iVar1 = *param_3;
      piVar4 = param_1;
      for (uVar2 = uVar3 & 0x3ffffffffffffffc; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar4 = iVar1;
        piVar4 = piVar4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffc);
    }
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    return;
  }
  memset(param_1,0,(longlong)param_2 - (longlong)param_1 & 0xfffffffffffffffc);
  return;
}


