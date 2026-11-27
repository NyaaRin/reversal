// 0x18028d6c0  FUN_18028d6c0
// size=160 thunk=false
// signature: undefined FUN_18028d6c0()
// status: ok


void FUN_18028d6c0(int *param_1,float param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  fVar1 = (float)param_1[4];
  param_3 = param_3 + (float)param_1[5];
  param_1[4] = (int)(param_2 + fVar1);
  param_1[5] = (int)param_3;
  iVar5 = (int)(param_2 + fVar1);
  if (*param_1 != 0) {
    if ((param_1[7] < iVar5) || (param_1[1] == 0)) {
      param_1[7] = iVar5;
    }
    iVar3 = (int)param_3;
    if ((param_1[9] < iVar3) || (param_1[1] == 0)) {
      param_1[9] = iVar3;
    }
    if ((iVar5 < param_1[6]) || (param_1[1] == 0)) {
      param_1[6] = iVar5;
    }
    if ((iVar3 < param_1[8]) || (param_1[1] == 0)) {
      param_1[8] = iVar3;
    }
    param_1[0xc] = param_1[0xc] + 1;
    param_1[1] = 1;
    return;
  }
  iVar3 = param_1[0xc];
  lVar2 = *(longlong *)(param_1 + 10);
  param_1[0xc] = param_1[0xc] + 1;
  lVar4 = (longlong)iVar3 * 0xe;
  *(short *)(lVar4 + 2 + lVar2) = (short)(int)param_3;
  *(undefined8 *)(lVar4 + 4 + lVar2) = 0;
  *(undefined1 *)(lVar4 + 0xc + lVar2) = 2;
  *(short *)(lVar4 + lVar2) = (short)iVar5;
  return;
}


