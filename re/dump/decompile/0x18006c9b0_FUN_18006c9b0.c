// 0x18006c9b0  FUN_18006c9b0
// size=468 thunk=false
// signature: undefined FUN_18006c9b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_18006c9b0(void)

{
  void *pvVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  undefined8 *lp;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  int local_b0;
  void *local_a8;
  longlong local_98;
  int aiStack_90 [30];
  ulonglong local_18;
  
  pvVar1 = DAT_1803fafe0;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if (DAT_1803fafe0 != (void *)0x0) {
    local_98 = 0;
    aiStack_90[0] = 0;
    aiStack_90[1] = 0;
    aiStack_90[2] = 0;
    aiStack_90[3] = 0;
    aiStack_90[4] = 0;
    aiStack_90[5] = 0;
    aiStack_90[6] = 0;
    aiStack_90[7] = 0;
    aiStack_90[8] = 0;
    aiStack_90[9] = 0;
    aiStack_90[10] = 0;
    aiStack_90[0xb] = 0;
    aiStack_90[0xc] = 0;
    aiStack_90[0xd] = 0;
    aiStack_90[0xe] = 0;
    aiStack_90[0xf] = 0;
    aiStack_90[0x10] = 0;
    aiStack_90[0x11] = 0;
    aiStack_90[0x12] = 0;
    aiStack_90[0x13] = 0;
    aiStack_90[0x14] = 0;
    aiStack_90[0x15] = 0;
    aiStack_90[0x16] = 0;
    aiStack_90[0x17] = 0;
    aiStack_90[0x18] = 0;
    aiStack_90[0x19] = 0;
    aiStack_90[0x1a] = 0;
    aiStack_90[0x1b] = 0;
    aiStack_90[0x1c] = 0;
    aiStack_90[0x1d] = 0;
    iVar4 = 0;
    BVar2 = IsBadReadPtr(DAT_1803fafe0,0x100);
    if (BVar2 != 0) {
      return (void *)0x0;
    }
    local_b4 = 0;
    while (local_b4 + 7 < 0x101) {
      lVar6 = (longlong)local_b4;
      if (((*(char *)(lVar6 + (longlong)pvVar1) == 'H') &&
          (*(char *)((longlong)(local_b4 + 1) + (longlong)pvVar1) == -0x75)) &&
         (*(char *)((longlong)(local_b4 + 2) + (longlong)pvVar1) == '\r')) {
        lVar6 = (longlong)*(int *)(lVar6 + 3 + (longlong)pvVar1) + 7 + lVar6 + (longlong)pvVar1;
        local_b8 = 0;
        while ((iVar3 = -1, local_b8 < iVar4 &&
               (iVar3 = local_b8, (&local_98)[(longlong)local_b8 * 2] != lVar6))) {
          local_b8 = local_b8 + 1;
        }
        if (iVar3 < 0) {
          if (iVar4 < 8) {
            (&local_98)[(longlong)iVar4 * 2] = lVar6;
            aiStack_90[(longlong)iVar4 * 4] = 1;
            iVar4 = iVar4 + 1;
            local_b0 = iVar4;
          }
          local_b4 = local_b4 + 1;
        }
        else {
          aiStack_90[(longlong)iVar3 * 4] = aiStack_90[(longlong)iVar3 * 4] + 1;
          local_b4 = local_b4 + 1;
        }
      }
      else {
        local_b4 = local_b4 + 1;
      }
    }
    lp = (undefined8 *)0x0;
    iVar5 = 0;
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        if (aiStack_90[(longlong)iVar3 * 4] == 1) {
          iVar5 = iVar5 + 1;
          lp = (undefined8 *)(&local_98)[(longlong)iVar3 * 2];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    if (iVar5 == 1) {
      BVar2 = IsBadReadPtr(lp,8);
      if (BVar2 != 0) {
        return (void *)0x0;
      }
      pvVar1 = (void *)*lp;
      if ((pvVar1 != (void *)0x0) &&
         (local_a8 = pvVar1, BVar2 = IsBadReadPtr(pvVar1,0x30), BVar2 == 0)) {
        FUN_180014410("[NWSTORE] manager global @ %p -> mgr=%p (unique rip-global in GetNWString)\n"
                      ,lp,pvVar1);
        return pvVar1;
      }
      return (void *)0x0;
    }
    FUN_180014410("[NWSTORE] manager NOT resolved: %d rip-globals in GetNWString, %d of them unique (need exactly 1)\n"
                  ,iVar4);
  }
  return (void *)0x0;
}


