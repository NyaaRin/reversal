// 0x1801377f0  FUN_1801377f0
// size=563 thunk=false
// signature: undefined FUN_1801377f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801377f0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  HMODULE pHVar6;
  HANDLE pvVar7;
  char *pcVar8;
  HMODULE pHVar9;
  undefined1 auStack_108 [32];
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  cVar2 = DAT_180409c8c;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  LOCK();
  DAT_180409c8c = 1;
  UNLOCK();
  if (cVar2 == '\0') {
    local_68 = &local_e8;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    FUN_18001d080(&local_e8,"E8 ? ? ? ? 48 8B C8 44 88 74 24 30 48 8D 44 24 50",0x31);
    local_60 = &local_c8;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"engine.dll",10);
    lVar4 = FUN_180015f40(&local_c8,&local_e8);
    local_58 = &local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_18001d080(&local_a8,"48 8D BB B4 00 00 00 83 3F 00 0F 87",0x23);
    local_50 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_18001d080(&local_88,"engine.dll",10);
    lVar5 = FUN_180015f40(&local_88,&local_a8);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      FUN_180014410("[AS] CSteam3Client: signature miss (callSite=%p gate=%p) - the engine\'s ticket cache will NOT be reset, so only the first account will join\n"
                    ,lVar4,lVar5);
    }
    else {
      pcVar8 = (char *)((longlong)*(int *)(lVar4 + 1) + 5 + lVar4);
      if ((((*pcVar8 == 'H') && (pcVar8[1] == -0x73)) && (pcVar8[2] == '\x05')) &&
         (pcVar8[7] == -0x3d)) {
        pHVar9 = (HMODULE)(pcVar8 + (longlong)*(int *)(pcVar8 + 3) + 7);
        iVar1 = *(int *)(lVar5 + 3);
        pHVar6 = GetModuleHandleA("engine.dll");
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        if (pHVar6 != (HMODULE)0x0) {
          pvVar7 = GetCurrentProcess();
          iVar3 = K32GetModuleInformation(pvVar7,pHVar6,&local_48,0x18);
          if (((iVar3 != 0) && (pHVar6 <= pHVar9)) &&
             ((pHVar9 < (HMODULE)((longlong)&pHVar6->unused + (uStack_40 & 0xffffffff)) &&
              (iVar1 - 0x40U < 0x3fc1)))) {
            LOCK();
            UNLOCK();
            LOCK();
            UNLOCK();
            DAT_180409c88 = iVar1;
            DAT_180409c90 = pHVar9;
            FUN_180014410("[AS] CSteam3Client resolved: instance=%p m_cubTicket=+0x%X (engine+0x%llX)\n"
                          ,pHVar9,iVar1,(longlong)pHVar9 - (longlong)pHVar6);
            return;
          }
        }
        FUN_180014410("[AS] CSteam3Client: instance %p / m_cubTicket +0x%X failed validation\n",
                      pHVar9,iVar1);
      }
      else {
        FUN_180014410("[AS] CSteam3Client: %p is not the lea/ret accessor - not resolving\n",pcVar8,
                      lVar5);
      }
    }
  }
  return;
}


