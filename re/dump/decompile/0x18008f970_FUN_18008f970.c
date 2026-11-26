// 0x18008f970  FUN_18008f970
// size=627 thunk=false
// signature: undefined FUN_18008f970()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018008f9bb) */

ulonglong FUN_18008f970(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulonglong in_RAX;
  longlong lVar8;
  ulonglong uVar9;
  longlong *local_50;
  undefined8 uStack_48;
  longlong *local_40;
  int local_38;
  
  if (DAT_1803fa678 != 0) {
    local_50 = (longlong *)0x0;
    uStack_48 = 0;
    local_40 = (longlong *)0x0;
    in_RAX = FUN_18001bcd0(0,&local_50);
    if (local_50 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar8 = (*pcVar1)(DAT_1803fa360,uVar5);
      if (lVar8 != 0) {
        iVar6 = (**(code **)*local_50)();
        uVar9 = 0;
        local_38 = iVar6;
        FUN_180023e60(local_50,0);
        FUN_18002db10(local_50[1],0xffffffff,"PLAYER_RandomSeed");
        cVar4 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,5);
        if ((cVar4 != '\0') && (cVar4 = FUN_18001e2b0(lVar8,local_50), cVar4 != '\0')) {
          cVar4 = FUN_18002dbf0(local_50[1]);
          if (cVar4 == '\0') {
            (**(code **)(*local_50 + 0x18))(local_50,0xfffffffe);
          }
          cVar4 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,3);
          if (cVar4 != '\0') {
            uVar2 = (**(code **)(*local_50 + 0xc0))(local_50,0xffffffff);
            *param_1 = uVar2;
            uVar9 = 1;
          }
        }
        plVar3 = local_50;
        if ((local_50 != (longlong *)0x0) &&
           (iVar7 = (**(code **)*local_50)(local_50), iVar6 < iVar7)) {
          (**(code **)(*plVar3 + 0x10))(plVar3,iVar7 - iVar6);
        }
        if (local_50 != (longlong *)0x0) {
          (**(code **)*local_50)();
          if (local_40 != (longlong *)0x0) {
            DAT_1803fa330 = local_40;
            DAT_1803fa338 = 1;
            DAT_1803fa339 = uStack_48._1_4_;
            DAT_1803fa33d = uStack_48._5_2_;
            DAT_1803fa33f = uStack_48._7_1_;
            return uVar9;
          }
          DAT_1803fa330 = local_50;
          DAT_1803fa338 = 0;
          DAT_1803fa339 = uStack_48._1_4_;
          DAT_1803fa33d = uStack_48._5_2_;
          DAT_1803fa33f = uStack_48._7_1_;
        }
        return uVar9;
      }
      in_RAX = 0;
      if (local_50 != (longlong *)0x0) {
        (**(code **)*local_50)();
        DAT_1803fa338 = local_40 != (longlong *)0x0;
        DAT_1803fa330 = local_40;
        if (!(bool)DAT_1803fa338) {
          DAT_1803fa330 = local_50;
        }
        DAT_1803fa339 = uStack_48._1_4_;
        DAT_1803fa33d = uStack_48._5_2_;
        in_RAX = 0;
        DAT_1803fa33f = uStack_48._7_1_;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


