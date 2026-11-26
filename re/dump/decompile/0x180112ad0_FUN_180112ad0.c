// 0x180112ad0  FUN_180112ad0
// size=926 thunk=false
// signature: undefined FUN_180112ad0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180112ad0(longlong param_1,float *param_2,float param_3,uint param_4,uint param_5,
                  char param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  uVar3 = DAT_180380e28;
  fVar1 = DAT_180380ac0;
  uVar5 = 0;
  uVar6 = param_5 & 0xff000000;
  if ((uVar6 != 0) && (DAT_180380ac0 <= param_3 + DAT_180380bb0)) {
    FUN_180293e00(param_1,param_2,(param_3 + DAT_180380bb0) - DAT_180380ac0,0,0x30);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5,
                  uVar3,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (((param_4 & 0xff000000) != 0) && (fVar1 <= param_3)) {
    FUN_180293e00(param_1,param_2,param_3 - fVar1,0,0x30);
    uVar2 = DAT_180380c88;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  uVar2,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (uVar6 != 0) {
    FUN_180293e00(param_1,param_2,DAT_180380cd0,0,0x30);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  puVar8 = (undefined8 *)(param_1 + 0x58);
  piVar7 = (int *)(param_1 + 0x50);
  if ((param_4 & 0xff000000) != 0) {
    FUN_180293e00(param_1,param_2,DAT_180380bf0,0,0x30);
    *piVar7 = *piVar7 + -1;
    FUN_1802938c0(param_1,*puVar8,*piVar7,param_4);
    *piVar7 = 0;
  }
  uVar2 = DAT_180380c34;
  fVar13 = param_3 * DAT_180380ad4;
  param_3 = param_3 * DAT_180380b74;
  local_d8 = _DAT_180381600;
  uStack_d0 = _UNK_180381608;
  local_c8 = _DAT_180381800;
  uStack_c0 = _UNK_180381808;
  do {
    if ((param_6 == '\0') || ((uVar5 & 1) == 0)) {
      fVar10 = *(float *)((longlong)&local_d8 + uVar5 * 8 + 4);
      fVar11 = *(float *)(&local_d8 + uVar5) * fVar13 + *param_2 + fVar1;
      fVar12 = fVar10 * fVar13 + param_2[1] + fVar1;
      fVar9 = *(float *)(&local_d8 + uVar5) * param_3 + *param_2 + fVar1;
      fVar10 = fVar10 * param_3 + param_2[1] + fVar1;
      if (uVar6 != 0) {
        local_f8 = fVar11;
        local_f4 = fVar12;
        FUN_18020dc30(piVar7,&local_f8);
        local_f0 = fVar9;
        local_ec = fVar10;
        FUN_18020dc30(piVar7,&local_f0);
        FUN_1802929d0(param_1,*puVar8,*piVar7,param_5,uVar3,0);
        *piVar7 = 0;
      }
      if ((param_4 & 0xff000000) != 0) {
        local_e8 = fVar11;
        local_e4 = fVar12;
        FUN_18020dc30(piVar7,&local_e8);
        local_e0 = fVar9;
        local_dc = fVar10;
        FUN_18020dc30(piVar7,&local_e0);
        FUN_1802929d0(param_1,*puVar8,*(undefined4 *)(param_1 + 0x50),param_4,uVar2,0);
        *piVar7 = 0;
      }
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while ((int)uVar4 < 4);
  return;
}


