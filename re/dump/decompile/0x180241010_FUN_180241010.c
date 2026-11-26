// 0x180241010  FUN_180241010
// size=619 thunk=false
// signature: undefined FUN_180241010()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180241010(undefined8 *param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *lpAddress;
  PVOID pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  _MEMORY_BASIC_INFORMATION local_88;
  _SYSTEM_INFO local_58;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  GetSystemInfo(&local_58);
  puVar7 = local_58.lpMinimumApplicationAddress;
  if (((undefined8 *)0x40000000 < param_1) &&
     (puVar7 = param_1 + -0x8000000, param_1 + -0x8000000 <= local_58.lpMinimumApplicationAddress))
  {
    puVar7 = local_58.lpMinimumApplicationAddress;
  }
  if (param_1 + 0x8000000 < local_58.lpMaximumApplicationAddress) {
    local_58.lpMaximumApplicationAddress = param_1 + 0x8000000;
  }
  puVar8 = (undefined8 *)((longlong)local_58.lpMaximumApplicationAddress - 0xfff);
  for (puVar4 = DAT_1805c8480; puVar3 = (undefined8 *)0x0, lpAddress = param_1,
      puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    if (((puVar7 <= puVar4) && (puVar4 < puVar8)) && (puVar4[1] != 0)) {
      return puVar4;
    }
  }
  do {
    uVar1 = local_58.dwAllocationGranularity;
    puVar4 = puVar3;
    if (lpAddress < puVar7) goto joined_r0x000180241125;
    pvVar5 = (PVOID)(ulonglong)local_58.dwAllocationGranularity;
    lpAddress = (undefined8 *)
                ((longlong)lpAddress +
                (-(longlong)pvVar5 - (ulonglong)lpAddress % (ulonglong)pvVar5));
    while( true ) {
      uVar1 = local_58.dwAllocationGranularity;
      if ((lpAddress < puVar7) ||
         (SVar2 = VirtualQuery(lpAddress,&local_88,0x30), uVar1 = local_58.dwAllocationGranularity,
         SVar2 == 0)) goto joined_r0x00018024111c;
      if (local_88.State == 0x10000) break;
      if (local_88.AllocationBase < pvVar5) goto joined_r0x00018024111c;
      lpAddress = (undefined8 *)((longlong)local_88.AllocationBase - (longlong)pvVar5);
    }
    if (lpAddress == (undefined8 *)0x0) goto joined_r0x00018024111c;
    puVar3 = VirtualAlloc(lpAddress,0x1000,0x3000,0x40);
  } while (puVar3 == (undefined8 *)0x0);
LAB_180241206:
  *(undefined4 *)(puVar3 + 2) = 0;
  puVar7 = puVar3 + 8;
  puVar4 = (undefined8 *)0x0;
  do {
    puVar8 = puVar7;
    *puVar8 = puVar4;
    puVar3[1] = puVar8;
    puVar7 = puVar8 + 8;
    puVar4 = puVar8;
  } while ((ulonglong)((longlong)(puVar8 + 8) - (longlong)puVar3) < 0xfc1);
  *puVar3 = DAT_1805c8480;
  DAT_1805c8480 = puVar3;
  return puVar3;
joined_r0x00018024111c:
  while (puVar4 = (undefined8 *)0x0, puVar3 == (undefined8 *)0x0) {
joined_r0x000180241125:
    if (puVar8 < param_1) {
      return puVar4;
    }
    param_1 = (undefined8 *)
              (((ulonglong)uVar1 - (ulonglong)param_1 % (ulonglong)uVar1) + (longlong)param_1);
    local_58.dwAllocationGranularity = uVar1;
    while( true ) {
      if (puVar8 < param_1) {
        return puVar4;
      }
      SVar2 = VirtualQuery(param_1,&local_88,0x30);
      if (SVar2 == 0) {
        return puVar4;
      }
      if (local_88.State == 0x10000) break;
      uVar6 = (uVar1 - 1) + local_88.RegionSize + (longlong)local_88.BaseAddress;
      param_1 = (undefined8 *)(uVar6 - uVar6 % (ulonglong)uVar1);
    }
    if (param_1 == (undefined8 *)0x0) {
      return puVar4;
    }
    puVar3 = VirtualAlloc(param_1,0x1000,0x3000,0x40);
    uVar1 = local_58.dwAllocationGranularity;
  }
  goto LAB_180241206;
}


