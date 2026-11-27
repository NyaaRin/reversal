// 0x180129320  FUN_180129320
// size=1191 thunk=false
// signature: undefined FUN_180129320()
// status: ok


undefined8 FUN_180129320(void)

{
  int iVar1;
  HMODULE pHVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (DAT_1804015a4 == 1) {
    return 1;
  }
  if ((DAT_1804015a4 != -1) && (pHVar2 = GetModuleHandleA("client.dll"), pHVar2 != (HMODULE)0x0)) {
    local_e0 = 0;
    uStack_d8 = 0;
    uVar10 = 0;
    local_d0 = 0;
    local_c8 = 0;
    FUN_18001d080(&local_e0,"09 91 ? ? ? ? F6 C2 20 0F 85 ? ? ? ? C3",0x27);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,"client.dll",10);
    lVar3 = FUN_180015f40(&local_100,&local_e0);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_18001d080(&local_60,"40 53 48 83 EC 20 48 8B 41 08 48 8B D9 48 83 C1 08 FF 50 18 84 C0",0x41
                 );
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_18001d080(&local_c0,"client.dll",10);
    uVar4 = FUN_180015f40(&local_c0,&local_60);
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_18001d080(&local_a0,"09 91 ? ? ? ? F6 C2 20 0F 85 ? ? ? ? C3",0x27);
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_18001d080(&local_c0,"client.dll",10);
    lVar5 = FUN_1800160e0(&local_c0,&local_a0);
    FUN_18020e450(&local_c0);
    FUN_18020e450(&local_a0);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_18001d080(&local_80,"40 53 48 83 EC 20 48 8B 41 08 48 8B D9 48 83 C1 08 FF 50 18 84 C0",0x41
                 );
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_18001d080(&local_a0,"client.dll",10);
    lVar6 = FUN_1800160e0(&local_a0,&local_80);
    FUN_18020e450(&local_a0);
    FUN_18020e450(&local_80);
    iVar12 = 0;
    if (lVar3 != 0) {
      uVar11 = uVar10;
      if (lVar5 == 1) {
        uVar11 = (ulonglong)*(uint *)(lVar3 + 2);
        uVar10 = (longlong)*(int *)(lVar3 + 0xb) + 0xf + lVar3;
      }
      iVar12 = (int)uVar11;
      if ((((uVar4 != 0) && (lVar5 == 1)) && (lVar6 == 1)) &&
         ((iVar12 - 1U < 0x3fff && (uVar10 == uVar4)))) {
        DAT_1804015a4 = 1;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        DAT_1804015ac = iVar12;
        DAT_1804015b0 = uVar4;
        FUN_18001d080(&local_100,"DT_BaseEntity",0xd);
        uVar7 = FUN_18016d4c0(&local_80,&local_100);
        uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);
        FUN_18020e450(&local_100);
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        FUN_18001d080(&local_e0,"m_fEffects",10);
        uVar8 = FUN_18016d4c0(&local_80,&local_e0);
        iVar1 = FUN_180018c10(uVar7,uVar8);
        FUN_18020e450(&local_e0);
        if ((iVar1 == 0) || (pcVar9 = " MISMATCH", iVar1 == iVar12)) {
          pcVar9 = "";
        }
        FUN_180014410("[FORCEDRAW] UpdateVisibility=%p m_fEffects=+0x%X (netvar says +0x%X)%s\n",
                      uVar4,uVar11,iVar1,pcVar9);
        return 1;
      }
    }
    DAT_1804015a4 = -1;
    FUN_180014410(&DAT_180358590,lVar3,lVar5,uVar4,lVar6,iVar12,uVar10);
  }
  return 0;
}


