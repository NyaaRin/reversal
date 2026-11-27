// 0x1800e7ad0  FUN_1800e7ad0
// size=465 thunk=false
// signature: undefined FUN_1800e7ad0()
// status: ok


undefined8 FUN_1800e7ad0(longlong *param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_58 [12];
  
  if (param_1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,5);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,3);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = (**(code **)(*param_1 + 0x138))(param_1,2,3);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = (**(code **)(*param_1 + 0x138))(param_1,3,3);
      if (cVar3 == '\0') {
        return 0;
      }
      dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,3);
      fVar8 = (float)dVar2;
      dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,2);
      fVar9 = (float)dVar2;
      dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,1);
      fVar7 = (float)dVar2;
    }
    else {
      local_58[0] = 0.0;
      local_58[1] = 0.0;
      local_58[2] = 0.0;
      uVar6 = 0;
      do {
        (**(code **)(*param_1 + 0x20))(param_1,1,(&PTR_DAT_180338d10)[uVar6]);
        cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
        if (cVar3 == '\0') {
          (**(code **)(*param_1 + 0x10))(param_1,1);
          return 0;
        }
        dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
        lVar1 = *param_1;
        local_58[uVar6] = (float)dVar2;
        (**(code **)(lVar1 + 0x10))(param_1,1);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < 3);
      fVar7 = local_58[0];
      fVar8 = local_58[2];
      fVar9 = local_58[1];
    }
    *param_3 = fVar7;
    param_3[1] = fVar9;
    param_3[2] = fVar8;
    sVar4 = _fdclass();
    if (((sVar4 < 1) && (sVar4 = _fdclass(fVar9), sVar4 < 1)) &&
       (sVar4 = _fdclass(fVar8), sVar4 < 1)) {
      return 1;
    }
  }
  return 0;
}


