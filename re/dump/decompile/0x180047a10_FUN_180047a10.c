// 0x180047a10  FUN_180047a10
// size=468 thunk=false
// signature: undefined FUN_180047a10()
// status: ok


ulonglong FUN_180047a10(longlong *param_1)

{
  double dVar1;
  char cVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,1,5);
  if (cVar2 != '\0') {
    uVar3 = FUN_1800477e0(param_1,1);
    return uVar3;
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,4,3);
  fVar9 = DAT_1803811c8;
  dVar1 = DAT_180380e80;
  fVar8 = DAT_1803811c8;
  if (cVar2 == '\0') {
LAB_180047aba:
    dVar4 = dVar1;
    if ((double)fVar8 <= dVar1) {
      dVar4 = (double)fVar8;
    }
  }
  else {
    dVar4 = (double)(**(code **)(*param_1 + 0xc0))(param_1,4);
    fVar8 = (float)dVar4;
    if (0.0 <= (float)dVar4) goto LAB_180047aba;
    dVar4 = 0.0;
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,3,3);
  fVar8 = fVar9;
  if (cVar2 == '\0') {
LAB_180047b0a:
    dVar5 = dVar1;
    if ((double)fVar8 <= dVar1) {
      dVar5 = (double)fVar8;
    }
  }
  else {
    dVar5 = (double)(**(code **)(*param_1 + 0xc0))(param_1,3);
    fVar8 = (float)dVar5;
    if (0.0 <= (float)dVar5) goto LAB_180047b0a;
    dVar5 = 0.0;
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,2,3);
  fVar8 = fVar9;
  if (cVar2 == '\0') {
LAB_180047b5f:
    dVar6 = dVar1;
    if ((double)fVar8 <= dVar1) {
      dVar6 = (double)fVar8;
    }
  }
  else {
    dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,2);
    fVar8 = (float)dVar6;
    if (0.0 <= (float)dVar6) goto LAB_180047b5f;
    dVar6 = 0.0;
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,1,3);
  if (cVar2 != '\0') {
    dVar7 = (double)(**(code **)(*param_1 + 0xc0))(param_1,1);
    fVar9 = (float)dVar7;
    dVar7 = 0.0;
    if (fVar9 < 0.0) goto LAB_180047bbd;
  }
  dVar7 = dVar1;
  if ((double)fVar9 <= dVar1) {
    dVar7 = (double)fVar9;
  }
LAB_180047bbd:
  return (ulonglong)(uint)((int)dVar7 | (int)dVar6 << 8 | (int)dVar5 << 0x10 | (int)dVar4 << 0x18);
}


