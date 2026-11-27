// 0x180191540  FUN_180191540
// size=569 thunk=false
// signature: undefined FUN_180191540()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180191540(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  char *pcVar7;
  DWORD DVar8;
  longlong *plVar9;
  DWORD unaff_R12D;
  DWORD unaff_R14D;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined *local_60;
  DWORD local_58;
  DWORD local_54;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  cVar4 = FUN_1801913f0();
  local_68 = &DAT_1803e8860;
  iVar5 = _Mtx_lock(&DAT_1803e8860);
  puVar2 = DAT_1804ecae8;
  if (iVar5 != 0) {
LAB_18019176d:
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (DAT_1803e88ac != 0x7fffffff) {
    unaff_R12D = 0;
    unaff_R14D = unaff_R12D;
    for (puVar1 = (undefined8 *)*DAT_1804ecae8; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
      if ((puVar1[2] != 0) && (puVar1[3] != 0)) {
        plVar9 = (longlong *)(puVar1[2] + 0x18);
        BVar6 = IsBadReadPtr(plVar9,8);
        if (BVar6 == 0) {
          local_58 = 0;
          BVar6 = VirtualProtect(plVar9,8,0x40,&local_58);
          if (BVar6 != 0) {
            LOCK();
            if ((code *)*plVar9 == FUN_180190fd0) {
              *plVar9 = puVar1[3];
            }
            UNLOCK();
            local_54 = 0;
            VirtualProtect(plVar9,8,local_58,&local_54);
            unaff_R14D = unaff_R14D + 1;
          }
        }
      }
    }
    FUN_180209ce0(&DAT_1804ecae0);
    _Mtx_unlock(&DAT_1803e8860);
    local_60 = &DAT_1803e8860;
    iVar5 = _Mtx_lock(&DAT_1803e8860);
    if (iVar5 != 0) goto LAB_18019176d;
    if (DAT_1803e88ac != 0x7fffffff) goto LAB_18019167d;
  }
  DAT_1803e88ac = 0x7ffffffe;
  std::_Throw_Cpp_error(6);
LAB_18019167d:
  puVar1 = DAT_180458aa8;
  DVar8 = unaff_R12D;
  for (puVar2 = (undefined8 *)*DAT_180458aa8; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    if ((puVar2[2] != 0) && (puVar2[3] != 0)) {
      plVar9 = (longlong *)(puVar2[2] + 0x60);
      BVar6 = IsBadReadPtr(plVar9,8);
      if ((BVar6 == 0) &&
         (local_58 = unaff_R12D, BVar6 = VirtualProtect(plVar9,8,0x40,&local_58), BVar6 != 0)) {
        LOCK();
        if ((code *)*plVar9 == FUN_180191020) {
          *plVar9 = puVar2[3];
        }
        UNLOCK();
        local_54 = unaff_R12D;
        VirtualProtect(plVar9,8,local_58,&local_54);
        DVar8 = DVar8 + 1;
      }
    }
  }
  FUN_180209ce0(&DAT_180458aa0);
  _Mtx_unlock(&DAT_1803e8860);
  pcVar7 = "STUCK";
  if (cVar4 != '\0') {
    pcVar7 = "out";
  }
  FUN_180014410("[ESP] lifecycle footprint released: listener=%s transmit=%d recreate=%d\n",pcVar7,
                unaff_R14D,DVar8);
  return;
}


