// 1800dd840  FUN_1800dd840
// signature: undefined FUN_1800dd840()
// status: ok


void FUN_1800dd840(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong local_58;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  char local_18;
  
  DVar3 = GetTickCount();
  if ((DAT_18040a5dc != 0) && (DVar3 - DAT_18040a5dc < 5000)) {
    return;
  }
  DAT_18040a5d8 = '\0';
  DAT_18040a55d = 0;
  if (DAT_1803fa678 == 0) {
    DAT_18040a55d = 0;
    DAT_18040a5d8 = 0;
    DAT_18040a5dc = DVar3;
    return;
  }
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  DAT_18040a5dc = DVar3;
  FUN_18001bcd0(0,&local_48);
  if ((local_48 == (longlong *)0x0) || (lVar1 = local_48[1], lVar1 == 0)) goto LAB_1800dda3d;
  FUN_18002dc30(&local_30,lVar1);
  iVar4 = (**(code **)*local_48)();
  FUN_18002db10(lVar1,0xffffd8ee,"LeyHitreg");
  cVar2 = (**(code **)(*local_48 + 0x138))(local_48,0xffffffff,5);
  if (cVar2 != '\0') {
    FUN_18002db10(lVar1,0xffffffff,"ApplyBulletSpread");
    DAT_18040a5d8 = (**(code **)(*local_48 + 0x138))(local_48,0xffffffff,6);
  }
  iVar5 = (**(code **)*local_48)();
  while (iVar4 < iVar5) {
    (**(code **)(*local_48 + 0x10))(local_48,1);
    iVar5 = (**(code **)*local_48)();
  }
  if (DAT_18040a5d8 != '\0') {
    cVar2 = FUN_1800dd770(lVar1,local_48,"Disabled");
    if ((cVar2 == '\0') &&
       (cVar2 = FUN_1800dd770(lVar1,local_48,"DisabledOnlyOnClient"), cVar2 == '\0')) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    cVar2 = FUN_1800dd770(lVar1,local_48,"NoSpread");
    if (cVar2 == '\0') {
      cVar2 = FUN_1800dd770(lVar1,local_48,"BrokenSpread");
      DAT_18040a5d0 = 0;
      if (cVar2 != '\0') goto LAB_1800dd9dd;
    }
    else {
LAB_1800dd9dd:
      DAT_18040a5d0 = 1;
    }
    DAT_1803db5f6 = uVar6;
    DAT_18040a55d = uVar6;
    if (DAT_1803fe732 == '\0') {
      DAT_1803fe732 = '\x01';
      FUN_180014410("[LEYHITREG] detected: enabled=%d their_nospread=%d\n",uVar6,DAT_18040a5d0);
    }
  }
  if ((local_18 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_30,local_28,local_20,local_1c);
  }
LAB_1800dda3d:
  if (local_48 != (longlong *)0x0) {
    (**(code **)*local_48)();
    DAT_1803fa338 = local_38 != 0;
    DAT_1803fa330 = local_58;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_38;
    }
    DAT_1803fa339 = local_4f;
    DAT_1803fa33d = local_4b;
    DAT_1803fa33f = local_49;
  }
  return;
}


