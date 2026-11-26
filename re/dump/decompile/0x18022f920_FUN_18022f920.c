// 0x18022f920  FUN_18022f920
// size=700 thunk=false
// signature: undefined FUN_18022f920()
// status: ok


void FUN_18022f920(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  fVar1 = *(float *)(param_1 + 2);
  lVar7 = (longlong)param_3 - (longlong)param_1 >> 5;
  if (lVar7 < 0x29) {
    if (*(float *)(param_2 + 2) <= fVar1 && fVar1 != *(float *)(param_2 + 2)) {
      uVar2 = param_1[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *param_2 = *param_1;
      param_2[1] = uVar2;
      uVar2 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
    }
    if (*(float *)(param_3 + 2) <= *(float *)(param_2 + 2) &&
        *(float *)(param_2 + 2) != *(float *)(param_3 + 2)) {
      uVar2 = param_2[1];
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *param_3 = *param_2;
      param_3[1] = uVar2;
      uVar2 = param_2[3];
      param_3[2] = param_2[2];
      param_3[3] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      param_2[2] = uVar5;
      param_2[3] = uVar6;
      if (*(float *)(param_2 + 2) <= *(float *)(param_1 + 2) &&
          *(float *)(param_1 + 2) != *(float *)(param_2 + 2)) {
        uVar2 = param_1[1];
        *param_2 = *param_1;
        param_2[1] = uVar2;
        uVar2 = param_1[3];
        param_2[2] = param_1[2];
        param_2[3] = uVar2;
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = uVar6;
      }
    }
  }
  else {
    lVar7 = lVar7 + 1 >> 3;
    if (*(float *)(param_1 + lVar7 * 4 + 2) <= fVar1 && fVar1 != *(float *)(param_1 + lVar7 * 4 + 2)
       ) {
      uVar2 = param_1[1];
      uVar3 = param_1[lVar7 * 4];
      uVar4 = (param_1 + lVar7 * 4)[1];
      uVar5 = param_1[lVar7 * 4 + 2];
      uVar6 = (param_1 + lVar7 * 4 + 2)[1];
      param_1[lVar7 * 4] = *param_1;
      (param_1 + lVar7 * 4)[1] = uVar2;
      uVar2 = param_1[3];
      param_1[lVar7 * 4 + 2] = param_1[2];
      (param_1 + lVar7 * 4 + 2)[1] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
    }
    if (*(float *)(param_1 + lVar7 * 8 + 2) <= *(float *)(param_1 + lVar7 * 4 + 2) &&
        *(float *)(param_1 + lVar7 * 4 + 2) != *(float *)(param_1 + lVar7 * 8 + 2)) {
      uVar2 = (param_1 + lVar7 * 4)[1];
      uVar3 = param_1[lVar7 * 8];
      uVar4 = (param_1 + lVar7 * 8)[1];
      uVar5 = param_1[lVar7 * 8 + 2];
      uVar6 = (param_1 + lVar7 * 8 + 2)[1];
      param_1[lVar7 * 8] = param_1[lVar7 * 4];
      (param_1 + lVar7 * 8)[1] = uVar2;
      uVar2 = (param_1 + lVar7 * 4 + 2)[1];
      param_1[lVar7 * 8 + 2] = param_1[lVar7 * 4 + 2];
      (param_1 + lVar7 * 8 + 2)[1] = uVar2;
      param_1[lVar7 * 4] = uVar3;
      (param_1 + lVar7 * 4)[1] = uVar4;
      param_1[lVar7 * 4 + 2] = uVar5;
      (param_1 + lVar7 * 4 + 2)[1] = uVar6;
      if (*(float *)(param_1 + lVar7 * 4 + 2) <= *(float *)(param_1 + 2) &&
          *(float *)(param_1 + 2) != *(float *)(param_1 + lVar7 * 4 + 2)) {
        uVar2 = param_1[1];
        param_1[lVar7 * 4] = *param_1;
        (param_1 + lVar7 * 4)[1] = uVar2;
        uVar2 = param_1[3];
        param_1[lVar7 * 4 + 2] = param_1[2];
        (param_1 + lVar7 * 4 + 2)[1] = uVar2;
        *param_1 = uVar3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = uVar6;
      }
    }
    puVar8 = param_2 + lVar7 * -4;
    if (*(float *)(param_2 + 2) <= *(float *)(puVar8 + 2) &&
        *(float *)(puVar8 + 2) != *(float *)(param_2 + 2)) {
      uVar2 = puVar8[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *param_2 = *puVar8;
      param_2[1] = uVar2;
      uVar2 = puVar8[3];
      param_2[2] = puVar8[2];
      param_2[3] = uVar2;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    if (*(float *)(param_2 + lVar7 * 4 + 2) <= *(float *)(param_2 + 2) &&
        *(float *)(param_2 + 2) != *(float *)(param_2 + lVar7 * 4 + 2)) {
      uVar2 = param_2[1];
      uVar3 = param_2[lVar7 * 4];
      uVar4 = (param_2 + lVar7 * 4)[1];
      uVar5 = param_2[lVar7 * 4 + 2];
      uVar6 = (param_2 + lVar7 * 4 + 2)[1];
      param_2[lVar7 * 4] = *param_2;
      (param_2 + lVar7 * 4)[1] = uVar2;
      uVar2 = param_2[3];
      param_2[lVar7 * 4 + 2] = param_2[2];
      (param_2 + lVar7 * 4 + 2)[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      param_2[2] = uVar5;
      param_2[3] = uVar6;
      if (*(float *)(param_2 + 2) <= *(float *)(puVar8 + 2) &&
          *(float *)(puVar8 + 2) != *(float *)(param_2 + 2)) {
        uVar2 = puVar8[1];
        *param_2 = *puVar8;
        param_2[1] = uVar2;
        uVar2 = puVar8[3];
        param_2[2] = puVar8[2];
        param_2[3] = uVar2;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
    }
    puVar9 = param_3 + lVar7 * -8;
    puVar8 = param_3 + lVar7 * -4;
    if (*(float *)(puVar8 + 2) <= *(float *)(puVar9 + 2) &&
        *(float *)(puVar9 + 2) != *(float *)(puVar8 + 2)) {
      uVar2 = puVar9[1];
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar2;
      uVar2 = puVar9[3];
      puVar8[2] = puVar9[2];
      puVar8[3] = uVar2;
      *puVar9 = uVar3;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
    }
    if (*(float *)(param_3 + 2) <= *(float *)(puVar8 + 2) &&
        *(float *)(puVar8 + 2) != *(float *)(param_3 + 2)) {
      uVar2 = puVar8[1];
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *param_3 = *puVar8;
      param_3[1] = uVar2;
      uVar2 = puVar8[3];
      param_3[2] = puVar8[2];
      param_3[3] = uVar2;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      if (*(float *)(puVar8 + 2) <= *(float *)(puVar9 + 2) &&
          *(float *)(puVar9 + 2) != *(float *)(puVar8 + 2)) {
        uVar2 = puVar9[1];
        *puVar8 = *puVar9;
        puVar8[1] = uVar2;
        uVar2 = puVar9[3];
        puVar8[2] = puVar9[2];
        puVar8[3] = uVar2;
        *puVar9 = uVar3;
        puVar9[1] = uVar4;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
      }
    }
    if (*(float *)(param_2 + 2) <= *(float *)(param_1 + lVar7 * 4 + 2) &&
        *(float *)(param_1 + lVar7 * 4 + 2) != *(float *)(param_2 + 2)) {
      uVar2 = (param_1 + lVar7 * 4)[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *param_2 = param_1[lVar7 * 4];
      param_2[1] = uVar2;
      uVar2 = (param_1 + lVar7 * 4 + 2)[1];
      param_2[2] = param_1[lVar7 * 4 + 2];
      param_2[3] = uVar2;
      param_1[lVar7 * 4] = uVar3;
      (param_1 + lVar7 * 4)[1] = uVar4;
      param_1[lVar7 * 4 + 2] = uVar5;
      (param_1 + lVar7 * 4 + 2)[1] = uVar6;
    }
    if (*(float *)(puVar8 + 2) <= *(float *)(param_2 + 2) &&
        *(float *)(param_2 + 2) != *(float *)(puVar8 + 2)) {
      uVar2 = param_2[1];
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *puVar8 = *param_2;
      puVar8[1] = uVar2;
      uVar2 = param_2[3];
      puVar8[2] = param_2[2];
      puVar8[3] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      param_2[2] = uVar5;
      param_2[3] = uVar6;
      if (*(float *)(param_2 + 2) <= *(float *)(param_1 + lVar7 * 4 + 2) &&
          *(float *)(param_1 + lVar7 * 4 + 2) != *(float *)(param_2 + 2)) {
        uVar2 = (param_1 + lVar7 * 4)[1];
        *param_2 = param_1[lVar7 * 4];
        param_2[1] = uVar2;
        uVar2 = (param_1 + lVar7 * 4 + 2)[1];
        param_2[2] = param_1[lVar7 * 4 + 2];
        param_2[3] = uVar2;
        param_1[lVar7 * 4] = uVar3;
        (param_1 + lVar7 * 4)[1] = uVar4;
        param_1[lVar7 * 4 + 2] = uVar5;
        (param_1 + lVar7 * 4 + 2)[1] = uVar6;
        return;
      }
    }
  }
  return;
}


