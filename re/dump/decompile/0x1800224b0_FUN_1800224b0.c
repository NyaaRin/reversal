// 0x1800224b0  FUN_1800224b0
// size=432 thunk=false
// signature: undefined FUN_1800224b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1800224b0(void)

{
  uint uVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  ULONGLONG UVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_a28 [32];
  uint local_a08 [2];
  uint local_a00 [3];
  uint local_9f4;
  undefined8 local_9f0;
  uint *puStack_9e8;
  uint *local_9e0;
  uint local_9d8 [624];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a28;
  uVar2 = std::_Random_device();
  UVar5 = GetTickCount64();
  DVar3 = GetCurrentProcessId();
  uVar6 = rdtsc();
  uVar6 = (CONCAT44(extraout_var,(int)uVar6) | uVar6 & 0xffffffff00000000) ^
          UVar5 * 2 ^ (ulonglong)uVar2;
  local_a00[1] = (uint)(uVar6 >> 0x20) ^ DVar3;
  local_9f0 = 0;
  puStack_9e8 = (uint *)0x0;
  local_9e0 = (uint *)0x0;
  local_a00[0] = (uint)uVar6;
  local_a00[2] = std::_Random_device();
  local_9f0 = 0;
  puStack_9e8 = (uint *)0x0;
  local_9e0 = (uint *)0x0;
  puVar7 = local_a00;
  do {
    local_a08[0] = *puVar7;
    if (puStack_9e8 == local_9e0) {
      FUN_180229d20(&local_9f0,puStack_9e8,local_a08);
    }
    else {
      *puStack_9e8 = local_a08[0];
      puStack_9e8 = puStack_9e8 + 1;
    }
    puVar7 = puVar7 + 1;
  } while (puVar7 != &local_9f4);
  _DAT_1804275f4 = 0xffffffff;
  uVar2 = 0x1571;
  DAT_180426274 = 0x1571;
  uVar6 = 1;
  do {
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * 0x6c078965 + (int)uVar6;
    (&DAT_180426274)[uVar6] = uVar2;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x270);
  _DAT_180426270 = 0x270;
  FUN_18021f0c0(&local_9f0);
  iVar8 = 0;
  uVar2 = 0;
  uVar6 = 0;
  do {
    uVar1 = local_9d8[iVar8];
    (&DAT_180426274)[uVar6] = uVar1;
    uVar4 = uVar1 | uVar2;
    uVar2 = uVar1 >> 0x1f;
    if (uVar6 != 0) {
      uVar2 = uVar4;
    }
    uVar6 = uVar6 + 1;
    iVar8 = iVar8 + 1;
  } while (uVar6 < 0x270);
  if (uVar2 == 0) {
    DAT_180426274 = 0x80000000;
  }
  _DAT_180426270 = 0x270;
  FUN_18021e060(&local_9f0);
  return &DAT_180426270;
}


