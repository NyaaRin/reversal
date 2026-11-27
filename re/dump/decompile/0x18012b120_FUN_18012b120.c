// 0x18012b120  FUN_18012b120
// size=977 thunk=false
// signature: undefined FUN_18012b120()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18012b120(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  int iVar10;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  iVar10 = 0;
  local_168 = 0;
  local_f8 = param_2;
  local_40 = param_3;
  do {
    if (param_3[2] == 0) break;
    puVar8 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar8 = (undefined8 *)*param_3;
    }
    psVar9 = (short *)((longlong)puVar8 + param_3[2] * 2);
    psVar5 = (short *)FUN_180065240();
    if (psVar9 == psVar5) break;
    do {
      if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) break;
      psVar5 = psVar5 + 1;
    } while (psVar5 != psVar9);
    if (psVar9 == psVar5) break;
    local_f0 = &local_118;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_180211510(&local_118,L"materials",9);
    local_168 = 1;
    local_e8 = &local_138;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    local_120 = 0;
    FUN_180211510(&local_138,L"garrysmod",9);
    local_168 = 3;
    uVar6 = FUN_180066720(local_a0,param_3,&local_138);
    local_168 = 7;
    uVar6 = FUN_180066720(local_c0,uVar6,&local_118);
    local_168 = 0xf;
    puVar7 = (uint *)FUN_180067c80(local_e0,uVar6);
    uVar1 = *puVar7;
    local_168 = 7;
    FUN_18021e290(local_c0);
    local_168 = 3;
    FUN_18021e290(local_a0);
    local_168 = 1;
    FUN_18021e290(&local_138);
    local_168 = 0;
    FUN_18021e290(&local_118);
    local_140 = &local_160;
    if (1 < uVar1) {
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_180211510(&local_160,L"garrysmod",9);
      local_168 = 0;
      FUN_180066720(param_2,param_3,&local_160);
      local_168 = 0x10;
      FUN_18021e290(&local_160);
      goto LAB_18012b419;
    }
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    local_148 = 0;
    FUN_180211510(&local_160,L"materials",9);
    local_168 = 0x20;
    uVar6 = FUN_180066720(local_80,param_3,&local_160);
    local_168 = 0x60;
    puVar7 = (uint *)FUN_180067c80(local_d0,uVar6);
    uVar1 = *puVar7;
    local_168 = 0x20;
    FUN_18021e290(local_80);
    local_168 = 0;
    FUN_18021e290(&local_160);
    if (1 < uVar1) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)param_2 + 4) = uVar2;
      *(undefined4 *)(param_2 + 1) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
      uVar6 = param_3[3];
      param_2[2] = param_3[2];
      param_2[3] = uVar6;
      *(undefined2 *)param_3 = 0;
      param_3[2] = 0;
      param_3[3] = 7;
      local_168 = 0x10;
      goto LAB_18012b419;
    }
    iVar10 = iVar10 + 1;
    uVar6 = FUN_180065cd0(param_3,local_60);
    FUN_180067660(param_3,uVar6);
    FUN_18021e290(local_60);
  } while (iVar10 < 6);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  local_168 = 0x10;
LAB_18012b419:
  FUN_18021e290(param_3);
  return param_2;
}


