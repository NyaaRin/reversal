// 0x18023a7e0  FUN_18023a7e0
// size=597 thunk=false
// signature: undefined FUN_18023a7e0()
// status: ok


undefined8 *
FUN_18023a7e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar14 = param_3;
  while (puVar15 = puVar14, param_2 < puVar15) {
    puVar14 = puVar15 + -4;
    cVar11 = FUN_180201cf0(puVar14,puVar15);
    if ((cVar11 < '\0') || (cVar11 = FUN_180201cf0(puVar15,puVar14), cVar11 < '\0')) break;
  }
  do {
    param_3 = param_3 + 4;
    puVar14 = param_3;
    puVar12 = puVar15;
    if (param_4 <= param_3) break;
    cVar11 = FUN_180201cf0(param_3,puVar15);
    if ((cVar11 < '\0') || (cVar11 = FUN_180201cf0(puVar15,param_3), cVar11 < '\0')) break;
  } while( true );
joined_r0x00018023a873:
  puVar13 = puVar14;
  if (param_4 <= param_3) {
joined_r0x00018023a8c4:
    while (puVar10 = puVar12, puVar9 = puVar15, puVar12 = puVar10, param_2 < puVar9) {
      puVar15 = puVar9 + -4;
      cVar11 = FUN_180201cf0(puVar15,puVar10);
      if (-1 < cVar11) {
        cVar11 = FUN_180201cf0(puVar10,puVar15);
        if (cVar11 < '\0') break;
        puVar12 = puVar10 + -4;
        if (puVar12 != puVar15) {
          uVar1 = *(undefined4 *)((longlong)puVar9 + -0x1c);
          uVar2 = *(undefined4 *)(puVar9 + -3);
          uVar3 = *(undefined4 *)((longlong)puVar9 + -0x14);
          uVar4 = *puVar12;
          uVar5 = puVar10[-3];
          uVar6 = puVar10[-2];
          uVar7 = puVar10[-1];
          *(undefined4 *)puVar12 = *(undefined4 *)puVar15;
          *(undefined4 *)((longlong)puVar10 + -0x1c) = uVar1;
          *(undefined4 *)(puVar10 + -3) = uVar2;
          *(undefined4 *)((longlong)puVar10 + -0x14) = uVar3;
          uVar8 = puVar9[-1];
          puVar10[-2] = puVar9[-2];
          puVar10[-1] = uVar8;
          *puVar15 = uVar4;
          puVar9[-3] = uVar5;
          puVar9[-2] = uVar6;
          puVar9[-1] = uVar7;
        }
      }
    }
    if ((puVar9 == param_2) && (param_3 == param_4)) {
      *param_1 = puVar10;
      param_1[1] = puVar13;
      return param_1;
    }
    if (puVar9 == param_2) {
      if ((puVar13 != param_3) && (puVar10 != puVar13)) {
        uVar1 = *(undefined4 *)((longlong)puVar13 + 4);
        uVar2 = *(undefined4 *)(puVar13 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar13 + 0xc);
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar7 = puVar10[3];
        *(undefined4 *)puVar10 = *(undefined4 *)puVar13;
        *(undefined4 *)((longlong)puVar10 + 4) = uVar1;
        *(undefined4 *)(puVar10 + 1) = uVar2;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uVar3;
        uVar8 = puVar13[3];
        puVar10[2] = puVar13[2];
        puVar10[3] = uVar8;
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        puVar13[2] = uVar6;
        puVar13[3] = uVar7;
      }
      if (puVar10 != param_3) {
        uVar1 = *(undefined4 *)((longlong)param_3 + 4);
        uVar2 = *(undefined4 *)(param_3 + 1);
        uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar7 = puVar10[3];
        *(undefined4 *)puVar10 = *(undefined4 *)param_3;
        *(undefined4 *)((longlong)puVar10 + 4) = uVar1;
        *(undefined4 *)(puVar10 + 1) = uVar2;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uVar3;
        uVar8 = param_3[3];
        puVar10[2] = param_3[2];
        puVar10[3] = uVar8;
        *param_3 = uVar4;
        param_3[1] = uVar5;
        param_3[2] = uVar6;
        param_3[3] = uVar7;
      }
      param_3 = param_3 + 4;
      puVar14 = puVar13 + 4;
      puVar15 = puVar9;
      puVar12 = puVar10 + 4;
    }
    else {
      puVar15 = puVar9 + -4;
      if (param_3 == param_4) {
        puVar12 = puVar10 + -4;
        if (puVar15 != puVar12) {
          uVar1 = *(undefined4 *)((longlong)puVar10 + -0x1c);
          uVar2 = *(undefined4 *)(puVar10 + -3);
          uVar3 = *(undefined4 *)((longlong)puVar10 + -0x14);
          uVar4 = *puVar15;
          uVar5 = puVar9[-3];
          uVar6 = puVar9[-2];
          uVar7 = puVar9[-1];
          *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
          *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar1;
          *(undefined4 *)(puVar9 + -3) = uVar2;
          *(undefined4 *)((longlong)puVar9 + -0x14) = uVar3;
          uVar8 = puVar10[-1];
          puVar9[-2] = puVar10[-2];
          puVar9[-1] = uVar8;
          *puVar12 = uVar4;
          puVar10[-3] = uVar5;
          puVar10[-2] = uVar6;
          puVar10[-1] = uVar7;
        }
        puVar14 = puVar13 + -4;
        if (puVar12 != puVar14) {
          uVar1 = *(undefined4 *)((longlong)puVar13 + -0x1c);
          uVar2 = *(undefined4 *)(puVar13 + -3);
          uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
          uVar4 = *puVar12;
          uVar5 = puVar10[-3];
          uVar6 = puVar10[-2];
          uVar7 = puVar10[-1];
          *(undefined4 *)puVar12 = *(undefined4 *)puVar14;
          *(undefined4 *)((longlong)puVar10 + -0x1c) = uVar1;
          *(undefined4 *)(puVar10 + -3) = uVar2;
          *(undefined4 *)((longlong)puVar10 + -0x14) = uVar3;
          uVar8 = puVar13[-1];
          puVar10[-2] = puVar13[-2];
          puVar10[-1] = uVar8;
          *puVar14 = uVar4;
          puVar13[-3] = uVar5;
          puVar13[-2] = uVar6;
          puVar13[-1] = uVar7;
        }
      }
      else {
        if (param_3 != puVar15) {
          uVar1 = *(undefined4 *)((longlong)puVar9 + -0x1c);
          uVar2 = *(undefined4 *)(puVar9 + -3);
          uVar3 = *(undefined4 *)((longlong)puVar9 + -0x14);
          uVar4 = *param_3;
          uVar5 = param_3[1];
          uVar6 = param_3[2];
          uVar7 = param_3[3];
          *(undefined4 *)param_3 = *(undefined4 *)puVar15;
          *(undefined4 *)((longlong)param_3 + 4) = uVar1;
          *(undefined4 *)(param_3 + 1) = uVar2;
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
          uVar8 = puVar9[-1];
          param_3[2] = puVar9[-2];
          param_3[3] = uVar8;
          *puVar15 = uVar4;
          puVar9[-3] = uVar5;
          puVar9[-2] = uVar6;
          puVar9[-1] = uVar7;
        }
        param_3 = param_3 + 4;
        puVar14 = puVar13;
      }
    }
    goto joined_r0x00018023a873;
  }
  cVar11 = FUN_180201cf0(puVar12,param_3);
  if (-1 < cVar11) {
    cVar11 = FUN_180201cf0(param_3,puVar12);
    if (cVar11 < '\0') goto joined_r0x00018023a8c4;
    if (puVar13 != param_3) {
      uVar1 = *(undefined4 *)((longlong)param_3 + 4);
      uVar2 = *(undefined4 *)(param_3 + 1);
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      uVar6 = puVar13[2];
      uVar7 = puVar13[3];
      *(undefined4 *)puVar13 = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)puVar13 + 4) = uVar1;
      *(undefined4 *)(puVar13 + 1) = uVar2;
      *(undefined4 *)((longlong)puVar13 + 0xc) = uVar3;
      uVar8 = param_3[3];
      puVar13[2] = param_3[2];
      puVar13[3] = uVar8;
      *param_3 = uVar4;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar7;
    }
    puVar13 = puVar13 + 4;
  }
  param_3 = param_3 + 4;
  puVar14 = puVar13;
  goto joined_r0x00018023a873;
}


