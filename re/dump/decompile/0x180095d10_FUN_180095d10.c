// 0x180095d10  FUN_180095d10
// size=279 thunk=false
// signature: undefined FUN_180095d10()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180095d10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_228 [64];
  undefined4 local_28;
  
  uVar7 = DAT_1803813b0;
  DAT_1803e9db0 = DAT_1803813b0;
  _DAT_1803e9db8 = 0;
  _DAT_1803e9dc0 = 0;
  _DAT_1803e9dc8 = 0;
  _DAT_1803e9dd0 = 0;
  _DAT_1803e9dd8 = 0;
  _DAT_1803e9de0 = 0;
  DAT_1803e9de8 = 0;
  memset(local_228,0,0x200);
  local_28 = 0;
  lVar10 = 4;
  puVar8 = local_228;
  puVar9 = &DAT_18040a000;
  do {
    puVar1 = puVar9 + 0x10;
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    puVar2 = puVar8 + 0x10;
    *puVar9 = *puVar8;
    puVar9[1] = uVar3;
    uVar3 = puVar8[4];
    uVar6 = puVar8[5];
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
    uVar4 = puVar8[6];
    uVar5 = puVar8[7];
    puVar9[4] = uVar3;
    puVar9[5] = uVar6;
    uVar3 = puVar8[8];
    uVar6 = puVar8[9];
    puVar9[6] = uVar4;
    puVar9[7] = uVar5;
    uVar4 = puVar8[10];
    uVar5 = puVar8[0xb];
    puVar9[8] = uVar3;
    puVar9[9] = uVar6;
    uVar3 = puVar8[0xc];
    uVar6 = puVar8[0xd];
    puVar9[10] = uVar4;
    puVar9[0xb] = uVar5;
    uVar4 = puVar8[0xe];
    uVar5 = puVar8[0xf];
    puVar9[0xc] = uVar3;
    puVar9[0xd] = uVar6;
    puVar9[0xe] = uVar4;
    puVar9[0xf] = uVar5;
    lVar10 = lVar10 + -1;
    puVar8 = puVar2;
    puVar9 = puVar1;
  } while (lVar10 != 0);
  DAT_1803e87d8 = uVar7;
  *puVar1 = *puVar2;
  DAT_18040a208 = 0;
  DAT_180409ff8 = 0;
  DAT_18040a210 = 0;
  DAT_1803e87d0 = 0xbf800000;
  DAT_180423978 = 0;
  return;
}


