// 0x18008e960  FUN_18008e960
// size=524 thunk=false
// signature: undefined FUN_18008e960()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018008e9c7) */
/* WARNING: Removing unreachable block (ram,0x00018008e9df) */
/* WARNING: Removing unreachable block (ram,0x00018008e9d6) */
/* WARNING: Removing unreachable block (ram,0x00018008e9eb) */

undefined1 FUN_18008e960(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *local_30;
  undefined8 uStack_28;
  longlong local_20;
  float local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x2d) == '\0') {
    return 1;
  }
  if ((DAT_1803fa678 != 0) && (param_2 != 0)) {
    local_30 = (longlong *)0x0;
    uStack_28 = 0;
    local_20 = 0;
    FUN_18001bcd0(0,&local_30);
    if (local_30 != (longlong *)0x0) {
      iVar3 = (**(code **)*local_30)();
      uVar6 = 0;
      local_14 = iVar3;
      FUN_18001e2b0(param_2,local_30);
      cVar2 = (**(code **)(*local_30 + 0x138))(local_30,0xffffffff,9);
      if (cVar2 != '\0') {
        local_18 = -1.0;
        uVar4 = (**(code **)*local_30)();
        cVar2 = FUN_18008e820(local_30,uVar4,"GetFireMode",&local_18);
        if ((cVar2 == '\0') || ((int)local_18 != 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
      }
      plVar1 = local_30;
      if ((local_30 != (longlong *)0x0) && (iVar5 = (**(code **)*local_30)(local_30), iVar3 < iVar5)
         ) {
        (**(code **)(*plVar1 + 0x10))(plVar1,iVar5 - iVar3);
      }
      if (local_30 != (longlong *)0x0) {
        (**(code **)*local_30)();
        if (local_20 != 0) {
          DAT_1803fa330 = (longlong *)local_20;
          DAT_1803fa338 = 1;
          DAT_1803fa339 = uStack_28._1_4_;
          DAT_1803fa33d = uStack_28._5_2_;
          DAT_1803fa33f = uStack_28._7_1_;
          return uVar6;
        }
        DAT_1803fa330 = local_30;
        DAT_1803fa338 = 0;
        DAT_1803fa339 = uStack_28._1_4_;
        DAT_1803fa33d = uStack_28._5_2_;
        DAT_1803fa33f = uStack_28._7_1_;
      }
      return uVar6;
    }
  }
  return 0;
}


