// 0x18017a920  FUN_18017a920
// size=861 thunk=false
// signature: undefined FUN_18017a920()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18017a920(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res18;
  float local_res20;
  float local_res24;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar10;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  fVar9 = (float)param_2;
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  fVar7 = fVar8 - _DAT_180381150;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res18 = param_2;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_b0 = 0.4;
  local_ac = 0.44;
  local_a8 = 0x3f051eb8;
  local_a4 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xc84) * DAT_180380ae4;
  uVar2 = FUN_180268ed0(&local_b0);
  fVar7 = fVar7 + DAT_18038101c + _DAT_180380fac;
  local_res18 = CONCAT44(fVar7,fVar9);
  if ((uVar2 & 0xff000000) != 0) {
    FUN_1802941e0(param_1,&local_res18,DAT_18038101c,0,CONCAT44(uVar10,DAT_180380f60),0x1b);
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar2);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  fVar7 = fVar7 + _DAT_180381000;
  fVar6 = fVar8 + DAT_18038104c;
  fVar5 = fVar9 + DAT_180381078;
  local_res20 = fVar9 + _DAT_180381030;
  local_res18 = CONCAT44(fVar6,fVar9 - _DAT_180381030);
  fVar3 = fVar9 - DAT_180381078;
  local_res24 = fVar6;
  local_b8 = fVar5;
  local_b4 = fVar7;
  local_b0 = fVar3;
  local_ac = fVar7;
  FUN_180295350(param_1,&local_b0,&local_b8,&local_res20,&local_res18,uVar2);
  uVar10 = DAT_180380f94;
  local_res20 = fVar3 - _DAT_180380f2c;
  fVar4 = fVar8 + _DAT_180380ff8;
  local_res18 = CONCAT44(fVar4,fVar3 + _DAT_180380fc0);
  local_res24 = fVar7;
  FUN_180295000(param_1,&local_res20,&local_res18,uVar2,DAT_180380f94,0);
  local_res20 = fVar5 - _DAT_180380fc0;
  local_res18 = CONCAT44(fVar4,fVar5 + _DAT_180380f2c);
  local_res24 = fVar7;
  FUN_180295000(param_1,&local_res20,&local_res18,uVar2,uVar10,0);
  uVar10 = DAT_180380fb0;
  fVar7 = DAT_180380d30;
  fVar8 = fVar8 + _DAT_180381144;
  local_res20 = (fVar9 - _DAT_180381018) - DAT_180380d30;
  local_res18 = CONCAT44(fVar8,fVar9 - DAT_180380d30);
  local_res24 = fVar6;
  FUN_180295000(param_1,&local_res20,&local_res18,uVar2,DAT_180380fb0,0);
  local_res20 = fVar9 + fVar7;
  local_res18 = CONCAT44(fVar8,fVar9 + _DAT_180381018 + fVar7);
  local_res24 = fVar6;
  FUN_180295000(param_1,&local_res20,&local_res18,uVar2,uVar10,0);
  return;
}


