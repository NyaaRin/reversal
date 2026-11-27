// 0x18028d5f0  FUN_18028d5f0
// size=198 thunk=false
// signature: undefined FUN_18028d5f0()
// status: ok


void FUN_18028d5f0(int *param_1,float param_2,float param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_18028d540();
  param_2 = param_2 + (float)param_1[4];
  param_3 = param_3 + (float)param_1[5];
  param_1[4] = (int)param_2;
  param_1[2] = (int)param_2;
  param_1[5] = (int)param_3;
  param_1[3] = (int)param_3;
  iVar4 = (int)param_2;
  if (*param_1 != 0) {
    if ((param_1[7] < iVar4) || (param_1[1] == 0)) {
      param_1[7] = iVar4;
    }
    iVar2 = (int)param_3;
    if ((param_1[9] < iVar2) || (param_1[1] == 0)) {
      param_1[9] = iVar2;
    }
    if ((iVar4 < param_1[6]) || (param_1[1] == 0)) {
      param_1[6] = iVar4;
    }
    if ((iVar2 < param_1[8]) || (param_1[1] == 0)) {
      param_1[8] = iVar2;
    }
    param_1[0xc] = param_1[0xc] + 1;
    param_1[1] = 1;
    return;
  }
  lVar1 = *(longlong *)(param_1 + 10);
  lVar3 = (longlong)param_1[0xc] * 0xe;
  *(short *)(lVar3 + 2 + lVar1) = (short)(int)param_3;
  param_1[0xc] = param_1[0xc] + 1;
  *(undefined8 *)(lVar3 + 4 + lVar1) = 0;
  *(undefined1 *)(lVar3 + 0xc + lVar1) = 1;
  *(short *)(lVar3 + lVar1) = (short)iVar4;
  return;
}


