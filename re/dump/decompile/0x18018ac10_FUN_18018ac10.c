// 0x18018ac10  FUN_18018ac10
// size=706 thunk=false
// signature: undefined FUN_18018ac10()
// status: ok


float * FUN_18018ac10(float *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  BOOL BVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  
  if (((param_2 != (longlong *)0x0) && (BVar6 = IsBadReadPtr(param_2,8), BVar6 == 0)) &&
     (BVar6 = IsBadReadPtr((void *)*param_2,8), BVar6 == 0)) {
    FUN_18018a830(&local_d8,param_2);
    plVar7 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
    if (plVar7 == (longlong *)0x0) {
      puVar8 = (undefined4 *)FUN_18001bef0(param_2);
      uVar13 = *puVar8;
      uVar14 = puVar8[1];
      fVar12 = (float)puVar8[2];
      puVar8 = (undefined4 *)FUN_18001bfe0(param_2);
    }
    else {
      puVar8 = (undefined4 *)(**(code **)(*plVar7 + 0x18))(plVar7);
      uVar13 = *puVar8;
      uVar14 = puVar8[1];
      fVar12 = (float)puVar8[2];
      puVar8 = (undefined4 *)(**(code **)(*plVar7 + 0x20))(plVar7);
    }
    uVar1 = *puVar8;
    fVar2 = (float)puVar8[2];
    uVar4 = CONCAT44(local_d4,local_d8);
    fVar10 = local_d8 + 0.0;
    uVar3 = puVar8[1];
    fVar11 = local_d4 + 0.0;
    local_e0 = fVar2 + local_d0;
    local_e8 = fVar10;
    local_e4 = fVar11;
    cVar5 = FUN_180021ac0(&local_e8,&local_d8);
    if (cVar5 != '\0') {
      local_c0 = fVar12 + local_d0;
      local_c8 = fVar10;
      local_c4 = fVar11;
      cVar5 = FUN_180021ac0(&local_c8,&local_e8);
      if (cVar5 != '\0') {
        fVar10 = local_e4 - local_d4;
        if (fVar10 < 0.0) {
          fVar10 = (float)((uint)fVar10 ^ DAT_1803817f0);
        }
        if (DAT_180380d30 <= fVar10) {
          fVar11 = local_d4;
          if (local_e4 <= local_d4) {
            fVar11 = local_e4;
          }
          if (local_d4 <= local_e4) {
            local_d4 = local_e4;
          }
          fVar10 = fVar10 * DAT_180380ad4 * DAT_180380ac0;
          fVar9 = (local_e8 + local_d8) * DAT_180380ac0;
          if (param_3 != (undefined4 *)0x0) {
            *(undefined8 *)(param_3 + 6) = uVar4;
            param_3[8] = local_d0;
            *param_3 = uVar13;
            param_3[1] = uVar14;
            param_3[2] = fVar12;
            param_3[3] = uVar1;
            param_3[4] = uVar3;
            param_3[5] = fVar2;
            *(undefined2 *)(param_3 + 9) = 0x100;
          }
          *param_1 = fVar9 - fVar10;
          param_1[1] = fVar11;
          param_1[2] = fVar10 + fVar9;
          param_1[3] = local_d4;
          *(undefined1 *)(param_1 + 4) = 1;
          return param_1;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}


