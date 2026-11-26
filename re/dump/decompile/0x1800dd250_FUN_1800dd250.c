// 0x1800dd250  FUN_1800dd250
// size=567 thunk=false
// signature: undefined FUN_1800dd250()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800dd250(uint *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [32];
  double local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1800dcc60(&local_60);
  local_68 = (double)FUN_1800dcb60(&local_60);
  dVar3 = DAT_180381060;
  dVar2 = DAT_180380d08;
  dVar1 = floor((local_68 - DAT_180380d08) * DAT_180381060);
  uVar7 = (ulonglong)(dVar1 + dVar2);
  local_68 = (double)FUN_1800dcb60(&local_60);
  dVar1 = floor((local_68 - dVar2) * dVar3);
  uVar9 = (ulonglong)(dVar1 + dVar2);
  local_68 = (double)FUN_1800dcb60(&local_60);
  dVar1 = floor((local_68 - dVar2) * dVar3);
  uVar14 = (ulonglong)(dVar1 + dVar2);
  local_68 = (double)FUN_1800dcb60(&local_60);
  iVar8 = 2;
  dVar1 = floor((local_68 - dVar2) * dVar3);
  uVar5 = (ulonglong)(dVar1 + dVar2);
  do {
    uVar10 = (uint)uVar9;
    uVar11 = uVar10 ^ (uint)uVar5;
    uVar4 = (uint)uVar7 ^ (uint)uVar14;
    uVar6 = uVar4 ^ uVar10;
    uVar12 = (uVar11 >> 0x15 | uVar11 << 0xb) ^ uVar6;
    uVar11 = uVar11 ^ (uint)uVar7;
    uVar4 = uVar10 << 9 ^ uVar11 ^ uVar4;
    uVar11 = uVar12 ^ uVar11;
    uVar10 = uVar4 ^ uVar6;
    uVar13 = (uVar12 >> 0x15 | uVar12 << 0xb) ^ uVar10;
    uVar4 = uVar6 << 9 ^ uVar11 ^ uVar4;
    uVar11 = uVar13 ^ uVar11;
    uVar12 = uVar4 ^ uVar10;
    uVar13 = (uVar13 >> 0x15 | uVar13 << 0xb) ^ uVar12;
    uVar10 = uVar10 << 9 ^ uVar4 ^ uVar11;
    uVar11 = uVar13 ^ uVar11;
    uVar6 = uVar12 ^ uVar10;
    uVar4 = (uVar13 >> 0x15 | uVar13 << 0xb) ^ uVar6;
    uVar10 = uVar12 << 9 ^ uVar11 ^ uVar10;
    uVar12 = uVar10 ^ uVar6;
    uVar13 = (uVar4 >> 0x15 | uVar4 << 0xb) ^ uVar12;
    uVar4 = uVar4 ^ uVar11;
    uVar10 = uVar6 << 9 ^ uVar4 ^ uVar10;
    uVar4 = uVar13 ^ uVar4;
    uVar11 = uVar10 ^ uVar12;
    uVar13 = (uVar13 >> 0x15 | uVar13 << 0xb) ^ uVar11;
    uVar10 = uVar12 << 9 ^ uVar4 ^ uVar10;
    uVar4 = uVar13 ^ uVar4;
    uVar6 = uVar10 ^ uVar11;
    uVar12 = (uVar13 >> 0x15 | uVar13 << 0xb) ^ uVar6;
    uVar10 = uVar11 << 9 ^ uVar4 ^ uVar10;
    uVar4 = uVar12 ^ uVar4;
    uVar12 = uVar12 >> 0x15 | uVar12 << 0xb;
    param_1[3] = uVar12;
    uVar11 = uVar10 ^ uVar6;
    uVar7 = (ulonglong)uVar4;
    uVar9 = (ulonglong)uVar11;
    uVar10 = uVar6 << 9 ^ uVar10;
    param_1[1] = uVar11;
    param_1[2] = uVar10;
    iVar8 = iVar8 + -1;
    uVar14 = (ulonglong)uVar10;
    uVar5 = (ulonglong)uVar12;
  } while (iVar8 != 0);
  *param_1 = uVar4;
  return;
}


