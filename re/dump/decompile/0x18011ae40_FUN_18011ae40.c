// 0x18011ae40  FUN_18011ae40
// size=344 thunk=false
// signature: undefined FUN_18011ae40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18011ae40(undefined8 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  size_t sVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  char local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uVar8 = 0x14650fb0739d0383;
  pbVar4 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar4 = *(byte **)param_2;
  }
  pbVar7 = pbVar4 + *(longlong *)(param_2 + 0x10);
  for (; pbVar4 != pbVar7; pbVar4 = pbVar4 + 1) {
    uVar8 = (uVar8 ^ *pbVar4) * 0x100000001b3;
  }
  local_40 = param_1;
  FUN_180012ac0(local_38,0x28,"loading_%016llx.html",uVar8);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  sVar5 = strlen(local_38);
  FUN_18001d080(&local_60,local_38,sVar5);
  local_68 = 2;
  puVar6 = (undefined4 *)FUN_18022a630(&local_60);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(undefined4 *)param_1 = *puVar6;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  uVar1 = puVar6[5];
  uVar2 = puVar6[6];
  uVar3 = puVar6[7];
  *(undefined4 *)(param_1 + 2) = puVar6[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined1 *)puVar6 = 0;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0xf;
  local_68 = 1;
  FUN_18020e450(&local_60);
  return param_1;
}


