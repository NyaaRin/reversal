// 0x1800cf820  FUN_1800cf820
// size=619 thunk=false
// signature: undefined FUN_1800cf820()
// status: ok


float FUN_1800cf820(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5,float *param_6,float param_7,float param_8)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  longlong *local_b0;
  longlong lStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  float *local_88;
  undefined8 *local_80;
  
  local_88 = param_6;
  local_90 = param_2;
  local_80 = param_1;
  fVar7 = (float)FUN_1800ce630(*param_1,param_4,param_5,param_6);
  if (((*(char *)param_1[1] != '\0') && (param_3 == 0)) && (param_2 != (longlong *)0x0)) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
    iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if (iVar3 - 1U < 0x81) {
      lVar5 = (longlong)iVar3 * 3;
      puVar6 = &DAT_1803e8a60;
      *(float *)(&DAT_1803e8a60 + (longlong)iVar3 * 0xc) = fVar7;
      uVar8 = FUN_1800c4900(lVar5,param_2);
      *(undefined4 *)(puVar6 + lVar5 * 4 + 4) = uVar8;
      if (DAT_1803fa608 == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)(DAT_1803fa608 + 0x20);
      }
      *(undefined4 *)(puVar6 + lVar5 * 4 + 8) = uVar8;
    }
  }
  fVar10 = fVar7;
  if ((0.0 <= param_8) && (fVar10 = param_8, fVar7 <= param_8)) {
    fVar10 = fVar7;
  }
  fVar9 = DAT_1803e8a48;
  if (((param_2 != (longlong *)0x0) && (param_2 == DAT_1803e8a28)) &&
     ((0.0 <= DAT_1803e8a40 &&
      ((DAT_1803e8a40 <= DAT_1803e8a30 && (DAT_1803e8a30 - DAT_1803e8a40 <= DAT_180380c80)))))) {
    fVar9 = DAT_1803e8a48 * DAT_180380a1c;
    if (DAT_180380c50 <= DAT_1803e8a48 * DAT_180380a1c) {
      fVar9 = DAT_180380c50;
    }
    fVar9 = fVar9 + DAT_1803e8a48;
    if (DAT_180381188 <= fVar9) {
      fVar9 = DAT_180381188;
    }
  }
  if (fVar10 <= fVar9) {
    if (param_8 < 0.0) {
      param_8 = fVar7;
    }
    local_b0 = param_2;
    lStack_a8 = param_3;
    if (*(char *)param_1[2] == '\0') {
      local_a0 = param_8 + param_7;
    }
    else {
      pfVar1 = (float *)*param_1;
      local_a0 = (float)(*(code *)PTR_FUN_1803da018)
                                  ((param_6[1] - pfVar1[1]) * (param_6[1] - pfVar1[1]) +
                                   (*param_6 - *pfVar1) * (*param_6 - *pfVar1) +
                                   (param_6[2] - pfVar1[2]) * (param_6[2] - pfVar1[2]));
    }
    if ((param_2 != (longlong *)0x0) && (param_2 == DAT_1803e8a28)) {
      local_a0 = local_a0 * DAT_180380b4c;
    }
    lVar5 = param_1[3];
    puVar2 = *(undefined8 **)(lVar5 + 8);
    if (puVar2 == *(undefined8 **)(lVar5 + 0x10)) {
      fStack_9c = fVar10;
      fStack_98 = param_8;
      FUN_180225c00(lVar5,puVar2,&local_b0);
    }
    else {
      *puVar2 = local_b0;
      puVar2[1] = lStack_a8;
      puVar2[2] = CONCAT44(fVar10,local_a0);
      puVar2[3] = CONCAT44(uStack_94,param_8);
      *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x20;
    }
  }
  return fVar7;
}


