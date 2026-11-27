// 0x18022fbe0  FUN_18022fbe0
// size=870 thunk=false
// signature: undefined FUN_18022fbe0()
// status: ok


undefined8 *
FUN_18022fbe0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar7 = param_3 + 4;
  for (; param_2 < param_3; param_3 = param_3 + -4) {
    if ((*(float *)(param_3 + -2) < *(float *)(param_3 + 2)) ||
       (*(float *)(param_3 + 2) < *(float *)(param_3 + -2))) break;
  }
  puVar8 = puVar7;
  puVar11 = param_3;
  if (puVar7 < param_4) {
    do {
      puVar8 = puVar7;
      if ((*(float *)(puVar7 + 2) < *(float *)(param_3 + 2)) ||
         (*(float *)(param_3 + 2) < *(float *)(puVar7 + 2))) break;
      puVar7 = puVar7 + 4;
      puVar8 = puVar7;
    } while (puVar7 < param_4);
  }
  do {
    puVar10 = param_3;
    puVar9 = puVar8;
    if (puVar8 < param_4) {
      if (0x7f < ((longlong)param_4 + (0x1f - (longlong)puVar8) & 0xffffffffffffffe0U)) {
        do {
          if (*(float *)(puVar8 + 2) <= *(float *)(param_3 + 2)) {
            puVar9 = puVar8;
            if (*(float *)(puVar8 + 2) < *(float *)(param_3 + 2)) goto joined_r0x00018022fde0;
            if (puVar7 != puVar8) {
              uVar1 = puVar8[1];
              uVar2 = *puVar7;
              uVar3 = puVar7[1];
              uVar4 = puVar7[2];
              uVar5 = puVar7[3];
              *puVar7 = *puVar8;
              puVar7[1] = uVar1;
              uVar1 = puVar8[3];
              puVar7[2] = puVar8[2];
              puVar7[3] = uVar1;
              *puVar8 = uVar2;
              puVar8[1] = uVar3;
              puVar8[2] = uVar4;
              puVar8[3] = uVar5;
            }
            puVar7 = puVar7 + 4;
          }
          if (*(float *)(puVar8 + 6) <= *(float *)(param_3 + 2)) {
            puVar9 = puVar8 + 4;
            if (*(float *)(puVar8 + 6) < *(float *)(param_3 + 2)) goto joined_r0x00018022fde0;
            if (puVar7 != puVar9) {
              uVar1 = puVar8[5];
              uVar2 = *puVar7;
              uVar3 = puVar7[1];
              uVar4 = puVar7[2];
              uVar5 = puVar7[3];
              *puVar7 = *puVar9;
              puVar7[1] = uVar1;
              uVar1 = puVar8[7];
              puVar7[2] = puVar8[6];
              puVar7[3] = uVar1;
              *puVar9 = uVar2;
              puVar8[5] = uVar3;
              puVar8[6] = uVar4;
              puVar8[7] = uVar5;
            }
            puVar7 = puVar7 + 4;
          }
          if (*(float *)(puVar8 + 10) <= *(float *)(param_3 + 2)) {
            puVar9 = puVar8 + 8;
            if (*(float *)(puVar8 + 10) < *(float *)(param_3 + 2)) goto joined_r0x00018022fde0;
            if (puVar7 != puVar9) {
              uVar1 = puVar8[9];
              uVar2 = *puVar7;
              uVar3 = puVar7[1];
              uVar4 = puVar7[2];
              uVar5 = puVar7[3];
              *puVar7 = *puVar9;
              puVar7[1] = uVar1;
              uVar1 = puVar8[0xb];
              puVar7[2] = puVar8[10];
              puVar7[3] = uVar1;
              *puVar9 = uVar2;
              puVar8[9] = uVar3;
              puVar8[10] = uVar4;
              puVar8[0xb] = uVar5;
            }
            puVar7 = puVar7 + 4;
          }
          if (*(float *)(puVar8 + 0xe) <= *(float *)(param_3 + 2)) {
            puVar9 = puVar8 + 0xc;
            if (*(float *)(puVar8 + 0xe) < *(float *)(param_3 + 2)) goto joined_r0x00018022fde0;
            if (puVar7 != puVar9) {
              uVar1 = puVar8[0xd];
              uVar2 = *puVar7;
              uVar3 = puVar7[1];
              uVar4 = puVar7[2];
              uVar5 = puVar7[3];
              *puVar7 = *puVar9;
              puVar7[1] = uVar1;
              uVar1 = puVar8[0xf];
              puVar7[2] = puVar8[0xe];
              puVar7[3] = uVar1;
              *puVar9 = uVar2;
              puVar8[0xd] = uVar3;
              puVar8[0xe] = uVar4;
              puVar8[0xf] = uVar5;
            }
            puVar7 = puVar7 + 4;
          }
          puVar8 = puVar8 + 0x10;
        } while (puVar8 < param_4 + -0xc);
      }
      for (; puVar9 = puVar8, puVar8 < param_4; puVar8 = puVar8 + 4) {
        if (*(float *)(puVar8 + 2) <= *(float *)(param_3 + 2)) {
          if (*(float *)(puVar8 + 2) < *(float *)(param_3 + 2)) break;
          if (puVar7 != puVar8) {
            uVar1 = puVar8[1];
            uVar2 = *puVar7;
            uVar3 = puVar7[1];
            uVar4 = puVar7[2];
            uVar5 = puVar7[3];
            *puVar7 = *puVar8;
            puVar7[1] = uVar1;
            uVar1 = puVar8[3];
            puVar7[2] = puVar8[2];
            puVar7[3] = uVar1;
            *puVar8 = uVar2;
            puVar8[1] = uVar3;
            puVar8[2] = uVar4;
            puVar8[3] = uVar5;
          }
          puVar7 = puVar7 + 4;
        }
      }
    }
joined_r0x00018022fde0:
    puVar6 = puVar11;
    param_3 = puVar10;
    if (param_2 < puVar6) {
      puVar11 = puVar6 + -4;
      puVar10 = param_3;
      if (*(float *)(param_3 + 2) <= *(float *)(puVar6 + -2)) {
        if (*(float *)(param_3 + 2) < *(float *)(puVar6 + -2)) goto LAB_18022fe3e;
        puVar10 = param_3 + -4;
        if (puVar10 != puVar11) {
          uVar1 = puVar6[-3];
          uVar2 = *puVar10;
          uVar3 = param_3[-3];
          uVar4 = param_3[-2];
          uVar5 = param_3[-1];
          *puVar10 = *puVar11;
          param_3[-3] = uVar1;
          uVar1 = puVar6[-1];
          param_3[-2] = puVar6[-2];
          param_3[-1] = uVar1;
          *puVar11 = uVar2;
          puVar6[-3] = uVar3;
          puVar6[-2] = uVar4;
          puVar6[-1] = uVar5;
        }
      }
      goto joined_r0x00018022fde0;
    }
LAB_18022fe3e:
    if (puVar6 == param_2) {
      if (puVar9 == param_4) {
        *param_1 = param_3;
        param_1[1] = puVar7;
        return param_1;
      }
      if (puVar7 != puVar9) {
        uVar1 = puVar7[1];
        uVar2 = *param_3;
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        *param_3 = *puVar7;
        param_3[1] = uVar1;
        uVar1 = puVar7[3];
        param_3[2] = puVar7[2];
        param_3[3] = uVar1;
        *puVar7 = uVar2;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
      }
      uVar1 = puVar9[1];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *param_3 = *puVar9;
      param_3[1] = uVar1;
      uVar1 = puVar9[3];
      param_3[2] = puVar9[2];
      param_3[3] = uVar1;
      *puVar9 = uVar2;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar7 = puVar7 + 4;
      puVar8 = puVar9 + 4;
      param_3 = param_3 + 4;
      puVar11 = puVar6;
    }
    else {
      puVar11 = puVar6 + -4;
      if (puVar9 == param_4) {
        puVar10 = param_3 + -4;
        if (puVar11 != puVar10) {
          uVar1 = param_3[-3];
          uVar2 = *puVar11;
          uVar3 = puVar6[-3];
          uVar4 = puVar6[-2];
          uVar5 = puVar6[-1];
          *puVar11 = *puVar10;
          puVar6[-3] = uVar1;
          uVar1 = param_3[-1];
          puVar6[-2] = param_3[-2];
          puVar6[-1] = uVar1;
          *puVar10 = uVar2;
          param_3[-3] = uVar3;
          param_3[-2] = uVar4;
          param_3[-1] = uVar5;
        }
        uVar1 = puVar7[-3];
        uVar2 = *puVar10;
        uVar3 = param_3[-3];
        uVar4 = param_3[-2];
        uVar5 = param_3[-1];
        *puVar10 = puVar7[-4];
        param_3[-3] = uVar1;
        uVar1 = puVar7[-1];
        param_3[-2] = puVar7[-2];
        param_3[-1] = uVar1;
        puVar7[-4] = uVar2;
        puVar7[-3] = uVar3;
        puVar7[-2] = uVar4;
        puVar7[-1] = uVar5;
        puVar7 = puVar7 + -4;
        puVar8 = puVar9;
        param_3 = puVar10;
      }
      else {
        uVar1 = *puVar9;
        uVar2 = puVar9[1];
        uVar3 = puVar9[2];
        uVar4 = puVar9[3];
        uVar5 = puVar6[-3];
        *puVar9 = *puVar11;
        puVar9[1] = uVar5;
        uVar5 = puVar6[-1];
        puVar9[2] = puVar6[-2];
        puVar9[3] = uVar5;
        *puVar11 = uVar1;
        puVar6[-3] = uVar2;
        puVar6[-2] = uVar3;
        puVar6[-1] = uVar4;
        puVar8 = puVar9 + 4;
      }
    }
  } while( true );
}


