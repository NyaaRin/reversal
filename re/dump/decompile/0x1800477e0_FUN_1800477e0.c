// 0x1800477e0  FUN_1800477e0
// size=557 thunk=false
// signature: undefined FUN_1800477e0()
// status: ok


uint FUN_1800477e0(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar15;
  undefined4 uVar16;
  
  dVar1 = DAT_180380e80;
  uVar15 = SUB84(DAT_180380e80,0);
  uVar16 = (undefined4)((ulonglong)DAT_180380e80 >> 0x20);
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,param_2,5);
  uVar6 = uVar15;
  uVar14 = uVar16;
  uVar5 = uVar15;
  uVar13 = uVar16;
  uVar3 = uVar15;
  uVar11 = uVar16;
  uVar4 = uVar15;
  uVar12 = uVar16;
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,param_2 & 0xffffffff,PTR_DAT_1803105b8);
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar2 != '\0') {
      uVar7 = (**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      uVar3 = (undefined4)uVar7;
      uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
    (**(code **)(*param_1 + 0x20))(param_1,param_2 & 0xffffffff,PTR_DAT_1803105c0);
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar2 != '\0') {
      uVar7 = (**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      uVar4 = (undefined4)uVar7;
      uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
    (**(code **)(*param_1 + 0x20))(param_1,param_2 & 0xffffffff,PTR_DAT_1803105c8);
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar2 != '\0') {
      uVar7 = (**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      uVar5 = (undefined4)uVar7;
      uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
    (**(code **)(*param_1 + 0x20))(param_1,param_2 & 0xffffffff,PTR_DAT_1803105d0);
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar2 != '\0') {
      uVar7 = (**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      uVar6 = (undefined4)uVar7;
      uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  if (0.0 < (double)CONCAT44(uVar14,uVar6) || (double)CONCAT44(uVar14,uVar6) == 0.0) {
    dVar8 = dVar1;
    if ((double)CONCAT44(uVar14,uVar6) <= dVar1) {
      dVar8 = (double)CONCAT44(uVar14,uVar6);
    }
  }
  else {
    dVar8 = 0.0;
  }
  if (0.0 < (double)CONCAT44(uVar13,uVar5) || (double)CONCAT44(uVar13,uVar5) == 0.0) {
    dVar9 = dVar1;
    if ((double)CONCAT44(uVar13,uVar5) <= dVar1) {
      dVar9 = (double)CONCAT44(uVar13,uVar5);
    }
  }
  else {
    dVar9 = 0.0;
  }
  if (0.0 < (double)CONCAT44(uVar12,uVar4) || (double)CONCAT44(uVar12,uVar4) == 0.0) {
    dVar10 = dVar1;
    if ((double)CONCAT44(uVar12,uVar4) <= dVar1) {
      dVar10 = (double)CONCAT44(uVar12,uVar4);
    }
  }
  else {
    dVar10 = 0.0;
  }
  uVar6 = 0;
  uVar14 = 0;
  if ((0.0 < (double)CONCAT44(uVar11,uVar3) || (double)CONCAT44(uVar11,uVar3) == 0.0) &&
     (uVar6 = uVar15, uVar14 = uVar16, (double)CONCAT44(uVar11,uVar3) <= dVar1)) {
    uVar6 = uVar3;
    uVar14 = uVar11;
  }
  return (int)(double)CONCAT44(uVar14,uVar6) |
         (int)dVar10 << 8 | (int)dVar9 << 0x10 | (int)dVar8 << 0x18;
}


