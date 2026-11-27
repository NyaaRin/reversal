// 0x1801436c0  FUN_1801436c0
// size=498 thunk=false
// signature: undefined FUN_1801436c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801436c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  size_t sVar8;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char local_168 [336];
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
    if (DAT_180409841 == '\0') {
      DAT_180409841 = '\x01';
      FUN_180014410("[KILLSAY] player_death DELIVERED -- the health poll is off for this map\n");
    }
    if (DAT_1803fa668 != (longlong *)0x0) {
      local_198 = 0x93fd561a96ab0c67;
      local_190 = 0x6507776eb2e9032e;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_198);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_1a8,&local_190);
      pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
      if (*pcVar7 != '\0') {
        iVar2 = FUN_18006da40(param_1,"attacker",0);
        iVar3 = FUN_18006da40(param_1,"userid",0);
        if (((0 < iVar2) && (0 < iVar3)) && (iVar2 != iVar3)) {
          iVar2 = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar2);
          iVar4 = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar3);
          iVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
          if ((iVar2 == iVar5) && (0 < iVar4)) {
            memset(local_168,0,0x144);
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0;
            uStack_170 = 0;
            FUN_18001d080(&local_188,"enemy",5);
            cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,iVar4,local_168);
            if ((cVar1 != '\0') && (local_168[0] != '\0')) {
              sVar8 = strlen(local_168);
              FUN_180212700(&local_188,local_168,sVar8);
            }
            FUN_180142670(&local_188,iVar3,iVar4,1);
            FUN_18020e450(&local_188);
          }
        }
      }
    }
  }
  return;
}


