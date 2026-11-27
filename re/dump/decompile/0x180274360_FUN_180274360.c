// 0x180274360  FUN_180274360
// size=423 thunk=false
// signature: undefined FUN_180274360()
// status: ok


void FUN_180274360(longlong param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5
                  )

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float local_res14;
  
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar4 = fVar6;
  fVar3 = fVar5;
  if ((*(uint *)(param_1 + 0x14) & 0x1000000) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x3b0);
    uVar2 = *(uint *)(lVar1 + 0x14) & 8;
    fVar7 = *(float *)(lVar1 + 0x58);
    if (*(float *)(lVar1 + 0x58) <= *(float *)(lVar1 + 100)) {
      fVar7 = *(float *)(lVar1 + 100);
    }
    fVar8 = *(float *)(lVar1 + 0x5c);
    if (*(float *)(lVar1 + 0x5c) <= *(float *)(lVar1 + 100)) {
      fVar8 = *(float *)(lVar1 + 100);
    }
    if (((*(uint *)(lVar1 + 0x14) & 0x8800) == 0) || (uVar2 != 0)) {
      fVar3 = *(float *)(lVar1 + 0x228) - (float)((uint)fVar7 ^ DAT_1803817f0);
      if ((fVar3 <= fVar5) &&
         (fVar3 = (float)((uint)fVar7 ^ DAT_1803817f0) + *(float *)(lVar1 + 0x230), fVar5 <= fVar3))
      {
        fVar3 = fVar5;
      }
      if (uVar2 != 0) {
        fVar4 = *(float *)(lVar1 + 0x22c) - (float)((uint)fVar8 ^ DAT_1803817f0);
        if ((fVar4 <= fVar6) &&
           (fVar4 = (float)((uint)fVar8 ^ DAT_1803817f0) + *(float *)(lVar1 + 0x234), fVar6 <= fVar4
           )) {
          fVar4 = fVar6;
        }
      }
    }
  }
  fVar6 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30);
  fVar5 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x34);
  fVar8 = (*(float *)(param_1 + 0x28) - fVar3) * *param_3 + fVar3;
  fVar7 = (*(float *)(param_1 + 0x2c) - fVar4) * param_3[1] + fVar4;
  local_res10 = ((fVar3 - fVar6) * *param_3 + fVar6) - fVar8;
  local_res14 = ((fVar4 - fVar5) * param_3[1] + fVar5) - fVar7;
  FUN_180273d40(&local_res8,param_1,&local_res10);
  *param_4 = fVar8;
  param_4[1] = fVar7;
  if (*param_3 == 0.0) {
    *param_4 = fVar8 - (local_res8 - local_res10);
  }
  if (param_3[1] == 0.0) {
    param_4[1] = fVar7 - (fStackX_c - local_res14);
  }
  *param_5 = CONCAT44(fStackX_c,local_res8);
  return;
}


