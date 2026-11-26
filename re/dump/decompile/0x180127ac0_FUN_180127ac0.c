// 0x180127ac0  FUN_180127ac0
// size=436 thunk=false
// signature: undefined FUN_180127ac0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180127ac0(undefined8 param_1,float *param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_res8 [2];
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  longlong local_78;
  undefined8 *local_70;
  
  if (*(char *)(param_3 + 0x21) != '\0') {
    local_88 = *(undefined8 *)(param_3 + 0x2c);
    fStack_7c = param_4 * *(float *)(param_3 + 0x38);
    fStack_80 = *(float *)(param_3 + 0x34);
    local_res8[0] = param_1;
    uVar4 = FUN_180268ed0(&local_88);
    fStack_7c = param_4 * _DAT_180380b48;
    local_88 = 0;
    fStack_80 = 0.0;
    uVar5 = FUN_180268ed0(&local_88);
    fVar3 = DAT_180380bb0;
    fVar7 = *param_2;
    fVar6 = param_2[1];
    fVar1 = param_2[2];
    fVar2 = param_2[3];
    fStack_80 = fVar1 + DAT_180380bb0;
    local_70 = local_res8;
    local_88 = CONCAT44(fVar6 - DAT_180380bb0,fVar7 - DAT_180380bb0);
    fStack_7c = fVar2 + DAT_180380bb0;
    local_78 = param_3;
    FUN_180127c80(&local_78,&local_88,uVar5,DAT_180380bb0);
    fStack_80 = fVar1 - fVar3;
    fVar7 = fVar7 + fVar3;
    if (fVar7 < fStack_80) {
      fStack_7c = fVar2 - fVar3;
      fVar6 = fVar6 + fVar3;
      if (fVar6 < fStack_7c) {
        local_88 = CONCAT44(fVar6,fVar7);
        FUN_180127c80(&local_78,&local_88,uVar5,fVar3);
      }
    }
    local_88 = *(undefined8 *)param_2;
    fStack_80 = param_2[2];
    fStack_7c = param_2[3];
    FUN_180127c80(&local_78,&local_88,uVar4,fVar3);
  }
  return;
}


