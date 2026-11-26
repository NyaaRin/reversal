// 0x18028d540  FUN_18028d540
// size=164 thunk=false
// signature: undefined FUN_18028d540()
// status: ok


void FUN_18028d540(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (((float)param_1[2] != (float)param_1[4]) || ((float)param_1[3] != (float)param_1[5])) {
    iVar4 = (int)(float)param_1[3];
    iVar5 = (int)(float)param_1[2];
    if (*param_1 != 0) {
      piVar1 = param_1 + 1;
      if ((param_1[7] < iVar5) || (*piVar1 == 0)) {
        param_1[7] = iVar5;
      }
      if ((param_1[9] < iVar4) || (*piVar1 == 0)) {
        param_1[9] = iVar4;
      }
      if ((iVar5 < param_1[6]) || (*piVar1 == 0)) {
        param_1[6] = iVar5;
      }
      if ((iVar4 < param_1[8]) || (*piVar1 == 0)) {
        param_1[8] = iVar4;
      }
      param_1[0xc] = param_1[0xc] + 1;
      *piVar1 = 1;
      return;
    }
    lVar2 = *(longlong *)(param_1 + 10);
    lVar3 = (longlong)param_1[0xc] * 0xe;
    param_1[0xc] = param_1[0xc] + 1;
    *(undefined1 *)(lVar3 + 0xc + lVar2) = 2;
    *(short *)(lVar3 + lVar2) = (short)iVar5;
    *(short *)(lVar3 + 2 + lVar2) = (short)iVar4;
    *(undefined8 *)(lVar3 + 4 + lVar2) = 0;
  }
  return;
}


