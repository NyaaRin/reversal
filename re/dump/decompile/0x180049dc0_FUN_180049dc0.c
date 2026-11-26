// 0x180049dc0  FUN_180049dc0
// size=611 thunk=false
// signature: undefined FUN_180049dc0()
// status: ok


float * FUN_180049dc0(float *param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  cVar5 = (**(code **)(*param_2 + 0x138))(param_2,param_3,5);
  dVar3 = DAT_180380e80;
  if (cVar5 != '\0') {
    (**(code **)(*param_2 + 0x20))(param_2,param_3,PTR_DAT_1803105b8);
    cVar5 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,3);
    dVar6 = dVar3;
    if (cVar5 != '\0') {
      dVar6 = (double)(**(code **)(*param_2 + 0xc0))(param_2,0xffffffff);
    }
    (**(code **)(*param_2 + 0x10))(param_2,1);
    (**(code **)(*param_2 + 0x20))(param_2,param_3,PTR_DAT_1803105c0);
    cVar5 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,3);
    dVar7 = dVar3;
    if (cVar5 != '\0') {
      dVar7 = (double)(**(code **)(*param_2 + 0xc0))(param_2,0xffffffff);
    }
    (**(code **)(*param_2 + 0x10))(param_2,1);
    (**(code **)(*param_2 + 0x20))(param_2,param_3,PTR_DAT_1803105c8);
    cVar5 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,3);
    dVar8 = dVar3;
    if (cVar5 != '\0') {
      dVar8 = (double)(**(code **)(*param_2 + 0xc0))(param_2,0xffffffff);
    }
    (**(code **)(*param_2 + 0x10))(param_2,1);
    (**(code **)(*param_2 + 0x20))(param_2,param_3,PTR_DAT_1803105d0);
    cVar5 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,3);
    dVar9 = dVar3;
    if (cVar5 != '\0') {
      dVar9 = (double)(**(code **)(*param_2 + 0xc0))(param_2,0xffffffff);
    }
    (**(code **)(*param_2 + 0x10))(param_2,1);
    fVar4 = DAT_1803811c8;
    if (0.0 <= dVar9) {
      dVar2 = dVar3;
      if (dVar9 <= dVar3) {
        dVar2 = dVar9;
      }
    }
    else {
      dVar2 = 0.0;
    }
    fVar11 = (float)dVar2 / DAT_1803811c8;
    if (0.0 <= dVar8) {
      dVar9 = dVar3;
      if (dVar8 <= dVar3) {
        dVar9 = dVar8;
      }
    }
    else {
      dVar9 = 0.0;
    }
    fVar10 = (float)dVar9 / DAT_1803811c8;
    if (0.0 <= dVar7) {
      dVar8 = dVar3;
      if (dVar7 <= dVar3) {
        dVar8 = dVar7;
      }
    }
    else {
      dVar8 = 0.0;
    }
    dVar7 = 0.0;
    if ((0.0 <= dVar6) && (dVar7 = dVar3, dVar6 <= dVar3)) {
      dVar7 = dVar6;
    }
    param_1[1] = (float)dVar8 / DAT_1803811c8;
    param_1[2] = fVar10;
    *param_1 = (float)dVar7 / fVar4;
    param_1[3] = fVar11;
    return param_1;
  }
  uVar1 = param_4[1];
  *(undefined8 *)param_1 = *param_4;
  *(undefined8 *)(param_1 + 2) = uVar1;
  return param_1;
}


