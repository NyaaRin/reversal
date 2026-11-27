// 0x180127c80  FUN_180127c80
// size=871 thunk=false
// signature: undefined FUN_180127c80()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180127c80(longlong *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  
  fVar1 = *param_2;
  fVar2 = param_2[2];
  uVar6 = *(undefined8 *)param_1[1];
  fVar3 = param_2[1];
  fVar4 = param_2[3];
  iVar5 = *(int *)(*param_1 + 0x28);
  fVar7 = fVar2 - fVar1;
  if (fVar4 - fVar3 <= fVar2 - fVar1) {
    fVar7 = fVar4 - fVar3;
  }
  fVar8 = fVar7 * _DAT_180380a64;
  if (DAT_180381078 <= fVar7 * _DAT_180380a64) {
    fVar8 = DAT_180381078;
  }
  local_c4 = fVar3;
  if (iVar5 == 1) {
    fVar7 = fVar7 * DAT_180380ac0 - DAT_180380d30;
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    if (DAT_180380d30 <= fVar8) {
      local_c8 = fVar8 + fVar1;
      FUN_180294c90(uVar6,param_2,&local_c8,param_3,param_4);
      local_c8 = fVar1;
      local_c4 = fVar8 + fVar3;
      FUN_180294c90(*(undefined8 *)param_1[1],param_2,&local_c8,param_3,param_4);
      local_c8 = fVar2;
      local_c4 = fVar3;
      local_c0 = fVar2 - fVar8;
      local_bc = fVar3;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c0,&local_c8,param_3,param_4);
      local_c8 = fVar2;
      local_c4 = fVar3;
      local_c0 = fVar2;
      local_bc = fVar8 + fVar3;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c8,&local_c0,param_3,param_4);
      local_c8 = fVar1;
      local_c4 = fVar4 - fVar8;
      local_c0 = fVar1;
      local_bc = fVar4;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c8,&local_c0,param_3,param_4);
      local_c8 = fVar1;
      local_c4 = fVar4;
      local_c0 = fVar8 + fVar1;
      local_bc = fVar4;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c8,&local_c0,param_3,param_4);
      local_c0 = fVar2 - fVar8;
      local_bc = fVar4;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c0,param_2 + 2,param_3,param_4);
      local_c0 = fVar2;
      local_bc = fVar4 - fVar8;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c0,param_2 + 2,param_3,param_4);
      return;
    }
LAB_180127dcf:
    FUN_180294f00(uVar6,param_2,param_2 + 2,param_3,0,param_4,0xf);
  }
  else {
    if (iVar5 == 2) {
      local_c8 = fVar2;
      FUN_180294c90(uVar6,param_2,&local_c8,param_3,param_4);
      local_c8 = fVar1;
      local_c4 = fVar4;
    }
    else {
      if (iVar5 != 3) goto LAB_180127dcf;
      local_c8 = fVar1;
      local_c4 = fVar4;
      FUN_180294c90(uVar6,param_2,&local_c8,param_3,param_4);
      local_c8 = fVar2;
      local_c4 = fVar3;
    }
    FUN_180294c90(*(undefined8 *)param_1[1],&local_c8,param_2 + 2,param_3,param_4);
  }
  return;
}


