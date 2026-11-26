// 0x18014fa80  FUN_18014fa80
// size=608 thunk=false
// signature: undefined FUN_18014fa80()
// status: ok


undefined8 *
FUN_18014fa80(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  uVar8 = 0;
  cVar1 = *(char *)(param_3 + 1);
  local_88 = param_1;
  if (cVar1 == '\0') {
    puVar9 = &local_e8;
    pwVar2 = (wchar_t *)*param_3;
    sVar5 = wcslen(pwVar2);
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    FUN_180211510(&local_e8,pwVar2,sVar5,param_4,uVar8,puVar9);
    puVar7 = (undefined4 *)FUN_180066720(local_78,param_2,&local_e8,param_4,0x10);
  }
  else {
    local_80 = &local_a8;
    pwVar2 = (wchar_t *)*param_3;
    sVar5 = wcslen(pwVar2);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_180211510(&local_a8,pwVar2,sVar5,param_4,uVar8);
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_180211510(&local_c8,L"garrysmod",9,param_4,1,&local_c8);
    uVar6 = FUN_180066720(local_38,param_2,&local_c8,param_4,3);
    puVar7 = (undefined4 *)FUN_180066720(local_58,uVar6,&local_a8,param_4,7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar8 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)param_1 = *puVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar8;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar8 = puVar7[5];
  uVar3 = puVar7[6];
  uVar4 = puVar7[7];
  *(undefined4 *)(param_1 + 2) = puVar7[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar8;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined2 *)puVar7 = 0;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 7;
  if (cVar1 == '\0') {
    FUN_18021e290(local_78);
    FUN_18021e290(&local_e8);
  }
  else {
    FUN_18021e290(local_58);
    FUN_18021e290(local_38);
    FUN_18021e290(&local_c8);
    FUN_18021e290(&local_a8);
  }
  return param_1;
}


