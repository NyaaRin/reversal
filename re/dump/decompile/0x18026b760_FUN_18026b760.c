// 0x18026b760  FUN_18026b760
// size=730 thunk=false
// signature: undefined FUN_18026b760()
// status: ok


void FUN_18026b760(longlong param_1,float *param_2,float *param_3,char *param_4,char *param_5,
                  undefined8 *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res10;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  local_res10 = *(undefined8 *)param_2;
  fVar9 = (float)local_res10;
  if (param_6 == (undefined8 *)0x0) {
    pfVar6 = (float *)FUN_180272ad0(&param_6,param_4,param_5,0,0);
  }
  else {
    pfVar6 = (float *)&local_88;
    local_88 = *param_6;
  }
  pfVar7 = param_8 + 2;
  pfVar2 = param_8;
  if (param_8 == (float *)0x0) {
    pfVar7 = param_3;
    pfVar2 = param_2;
  }
  fVar1 = *pfVar7;
  fVar10 = local_res10._4_4_;
  if ((fVar1 <= *pfVar6 + fVar9) || (pfVar7[1] <= pfVar6[1] + local_res10._4_4_)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (param_8 != (float *)0x0) {
    if ((fVar9 < *pfVar2) || (local_res10._4_4_ < pfVar2[1])) {
      bVar4 = 1;
    }
    else {
      bVar4 = 0;
    }
    bVar3 = (bool)(bVar3 | bVar4);
  }
  if (0.0 < *param_7) {
    fVar8 = ((*param_3 - fVar9) - *pfVar6) * *param_7 + fVar9;
    if (fVar9 <= fVar8) {
      fVar9 = fVar8;
    }
    local_res10 = CONCAT44(local_res10._4_4_,fVar9);
  }
  if (0.0 < param_7[1]) {
    fVar9 = ((param_3[1] - fVar10) - pfVar6[1]) * param_7[1] + fVar10;
    if (fVar10 <= fVar9) {
      fVar10 = fVar9;
    }
    local_res10 = CONCAT44(fVar10,(undefined4)local_res10);
  }
  if (bVar3) {
    fVar9 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar8 = pfVar7[1];
    uVar5 = FUN_18026a6a0(0,DAT_180380bb0);
    if ((((uVar5 & 0xff000000) != 0) && (param_4 != param_5)) && (*param_4 != '\0')) {
      local_80 = *(float *)(param_1 + 0x60);
      if (*(float *)(param_1 + 0x60) <= fVar9) {
        local_80 = fVar9;
      }
      fStack_78 = *(float *)(param_1 + 0x68);
      if (fVar1 <= *(float *)(param_1 + 0x68)) {
        fStack_78 = fVar1;
      }
      fStack_7c = *(float *)(param_1 + 100);
      if (*(float *)(param_1 + 100) <= fVar10) {
        fStack_7c = fVar10;
      }
      fStack_74 = *(float *)(param_1 + 0x6c);
      if (fVar8 <= *(float *)(param_1 + 0x6c)) {
        fStack_74 = fVar8;
      }
      FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_res10,uVar5,
                    &local_80,param_4,param_5,0,1);
    }
  }
  else {
    uVar5 = FUN_18026a6a0(0,DAT_180380bb0);
    if ((((uVar5 & 0xff000000) != 0) && (param_4 != param_5)) && (*param_4 != '\0')) {
      local_80 = *(float *)(param_1 + 0x60);
      fStack_7c = *(float *)(param_1 + 100);
      fStack_78 = *(float *)(param_1 + 0x68);
      fStack_74 = *(float *)(param_1 + 0x6c);
      FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_res10,uVar5,
                    &local_80,param_4,param_5,0,0);
    }
  }
  return;
}


