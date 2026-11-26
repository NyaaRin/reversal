// 0x180053dc0  FUN_180053dc0
// size=252 thunk=false
// signature: undefined FUN_180053dc0()
// status: ok


ulonglong FUN_180053dc0(longlong *param_1,ulonglong param_2,float *param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  
  cVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2,3);
  dVar7 = 0.0;
  if (cVar3 == '\0') {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,param_2 & 0xffffffff);
  }
  lVar1 = *param_1;
  iVar2 = (int)param_2;
  *param_3 = (float)dVar6;
  cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 1,3);
  if (cVar3 == '\0') {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 1);
  }
  lVar1 = *param_1;
  param_3[1] = (float)dVar6;
  cVar3 = (**(code **)(lVar1 + 0x138))(param_1,iVar2 + 2,3);
  if (cVar3 != '\0') {
    dVar7 = (double)(**(code **)(*param_1 + 0xc0))(param_1,iVar2 + 2);
  }
  uVar5 = (ulonglong)((uint)*param_3 & 0x7f800000);
  param_3[2] = (float)dVar7;
  if ((((uint)*param_3 & 0x7f800000) != 0x7f800000) &&
     (uVar5 = (ulonglong)((uint)param_3[1] & 0x7f800000),
     ((uint)param_3[1] & 0x7f800000) != 0x7f800000)) {
    uVar4 = (uint)(float)dVar7 & 0x7f800000;
    uVar5 = (ulonglong)uVar4;
    if (uVar4 != 0x7f800000) {
      uVar5 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
    }
  }
  return uVar5;
}


