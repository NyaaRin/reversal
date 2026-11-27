// 0x18022ea90  FUN_18022ea90
// size=175 thunk=false
// signature: undefined FUN_18022ea90()
// status: ok


void FUN_18022ea90(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar2 = 0;
  if ((DAT_180381300 <= fVar5) && (fVar5 = fVar5 - DAT_180381300, fVar5 < DAT_180381300)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_180239790(param_1,uVar4);
  return;
}


