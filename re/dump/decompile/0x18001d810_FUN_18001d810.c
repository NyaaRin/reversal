// 0x18001d810  FUN_18001d810
// size=488 thunk=false
// signature: undefined FUN_18001d810()
// status: ok


void FUN_18001d810(longlong param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_1803ff11c == '\0') {
    DAT_1803ff11c = '\x01';
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_18001d080(&local_98,
                  "8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3"
                  ,0x53);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_18001d080(&local_78,"client.dll",10);
    pcVar4 = (code *)FUN_180015f40(&local_78,&local_98);
    if (pcVar4 == (code *)0x0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_18001d080(&local_58,
                    "FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3",0x45);
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      local_20 = 0;
      FUN_18001d080(&local_38,"client.dll",10);
      lVar5 = FUN_180015f40(&local_38,&local_58);
      pcVar4 = (code *)(lVar5 + -6);
      if (lVar5 == 0) {
        pcVar4 = (code *)0x0;
      }
      if (pcVar4 == (code *)0x0) {
        FUN_180014410(&DAT_18033fcf0);
        goto LAB_18001d940;
      }
    }
    iVar1 = *(int *)(pcVar4 + 10);
    iVar2 = *(int *)(pcVar4 + 0x1b);
    if (((iVar1 - 0x101U < 0x3eff) && (iVar2 - 0x101U < 0x3eff)) && (iVar2 != iVar1)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((iVar1 != 0x1718) || (pcVar7 = " [matches the documented layout]", iVar2 != 0x1a88)) {
      pcVar7 = "";
    }
    pcVar6 = "REJECTED (offsets outside the bone block)";
    if (bVar3) {
      pcVar6 = "accepted";
    }
    FUN_180014410(&DAT_18033fde0,pcVar4,iVar1,iVar2,pcVar6,pcVar7);
    if (bVar3) goto LAB_18001d947;
  }
LAB_18001d940:
  pcVar4 = DAT_1803fead8;
LAB_18001d947:
  DAT_1803fead8 = pcVar4;
  if (DAT_1803fead8 != (code *)0x0) {
    (*DAT_1803fead8)(param_1);
  }
  return;
}


