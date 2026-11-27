// 0x18029db30  FUN_18029db30
// size=521 thunk=false
// signature: undefined FUN_18029db30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18029db30(longlong *param_1,float param_2,float param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  float local_64;
  float local_60;
  byte local_5c [4];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  fVar10 = (float)(int)(param_2 + DAT_180380ac0);
  if (param_3 < 0.0) {
    param_3 = *(float *)((longlong)param_1 + 0x14);
  }
  if (((lVar2 != 0) && (*(float *)(lVar2 + 0x14) == fVar10)) &&
     (*(float *)(lVar2 + 0x18) == param_3)) {
    return lVar2;
  }
  pbVar7 = (byte *)&local_68;
  uVar9 = 0xffffffff;
  lVar2 = param_1[1];
  local_64 = fVar10;
  lVar3 = *(longlong *)(lVar2 + 0x2b0);
  local_60 = param_3;
  local_68 = (int)param_1[3];
  do {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    uVar8 = (uint)(uVar9 >> 8) ^ *(uint *)(&DAT_180331380 + (uVar9 & 0xff ^ (ulonglong)bVar1) * 4);
    uVar9 = (ulonglong)uVar8;
  } while (pbVar7 < local_5c);
  uVar8 = ~uVar8;
  uVar9 = (longlong)*(int *)(lVar3 + 0xd8);
  puVar5 = *(uint **)(lVar3 + 0xe0);
  while (uVar4 = uVar9, uVar4 != 0) {
    uVar9 = uVar4 >> 1;
    if (puVar5[uVar9 * 4] < uVar8) {
      puVar5 = puVar5 + uVar9 * 4 + 4;
      uVar9 = uVar4 + (-1 - uVar9);
    }
  }
  if ((puVar5 == *(uint **)(lVar3 + 0xe0) + (longlong)*(int *)(lVar3 + 0xd8) * 4) ||
     (*puVar5 != uVar8)) {
    local_70 = 0;
    local_78[0] = uVar8;
    puVar5 = (uint *)FUN_18028a9f0(lVar3 + 0xd8,puVar5,local_78);
  }
  lVar6 = *(longlong *)(puVar5 + 2);
  if (lVar6 == 0) {
    if (((*(byte *)(param_1 + 2) & 8) == 0) && (*(char *)(lVar2 + 0x50) == '\0')) {
LAB_18029dcc4:
      local_88 = uVar8;
      lVar6 = FUN_18029a700(lVar2,param_1,fVar10,param_3);
      *(longlong *)(puVar5 + 2) = lVar6;
      if (lVar6 != 0) goto LAB_18029dce9;
    }
    else {
      lVar6 = FUN_18029aa80(lVar2,param_1,fVar10,param_3);
      if (lVar6 != 0) goto LAB_18029dce9;
      if (*(char *)(lVar2 + 0x50) == '\0') goto LAB_18029dcc4;
    }
    lVar6 = 0;
  }
  else {
LAB_18029dce9:
    *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(lVar3 + 0xa4);
    *param_1 = lVar6;
  }
  return lVar6;
}


