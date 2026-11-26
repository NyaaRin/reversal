// 0x18003d8b0  FUN_18003d8b0
// size=612 thunk=false
// signature: undefined FUN_18003d8b0()
// status: ok


undefined8 FUN_18003d8b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_2)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar4 = (uint)dVar7;
  if ((((((int)uVar4 < 1) || (uVar3 = (ulonglong)(uVar4 & 0xf), 7 < (uVar4 & 0xf))) ||
       ((&DAT_1803e75c0)[uVar3 * 0x30] == '\0')) ||
      ((*(uint *)(&DAT_1803e75c4 + uVar3 * 0x30) != uVar4 >> 4 || ((&DAT_1803e75d0)[uVar3 * 6] == 0)
       ))) || ((&DAT_1803e75d8)[uVar3 * 6] == 0)) {
    (**(code **)(*plVar2 + 0xf8))(plVar2,0);
    return 1;
  }
  if (DAT_1803fb038 == (code *)0x0) {
    lVar6 = *plVar2;
  }
  else {
    iVar1 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar3 * 6],2);
    lVar6 = *plVar2;
    if (iVar1 != 0) {
      dVar7 = (double)(**(code **)(lVar6 + 0x160))(plVar2,2);
      iVar1 = (int)dVar7;
      if (iVar1 + 0x2714U < 2) {
        (**(code **)(*plVar2 + 0xf8))(plVar2,0);
        (**(code **)(*plVar2 + 0xe8))(plVar2,"that special table is not reachable from a script",0);
        return 2;
      }
      if (iVar1 == 1) {
        (**(code **)(*plVar2 + 0xf8))(plVar2,0);
        (**(code **)(*plVar2 + 0xe8))
                  (plVar2,"there is no environment to speak of on a state we are not running in",0);
        return 2;
      }
      if (iVar1 != 0) {
        if (iVar1 != 2) {
          (**(code **)(*plVar2 + 0xf8))(plVar2,0);
          (**(code **)(*plVar2 + 0xe8))(plVar2,"unknown special",0);
          return 2;
        }
        if (*(int *)(&DAT_1803e75c8 + uVar3 * 0x30) == 0) {
          (**(code **)(*plVar2 + 0xf8))(plVar2,0);
          (**(code **)(*plVar2 + 0xe8))(plVar2,"only SPECIAL.GLOB is allowed on the client state",0)
          ;
          return 2;
        }
      }
      if ((&DAT_1803e75d0)[uVar3 * 6] != 0) {
        if ((DAT_1803faf38 == (code *)0x0) ||
           (lVar6 = *(longlong *)((&DAT_1803e75d0)[uVar3 * 6] + 8), lVar6 == 0)) {
LAB_18003da8e:
          FUN_180023e60();
        }
        else if (iVar1 == 2) {
          (*DAT_1803faf38)(lVar6,0xffffd8f0);
        }
        else {
          if (iVar1 != 0) goto LAB_18003da8e;
          (*DAT_1803faf38)(lVar6,0xffffd8ee);
        }
      }
      lVar6 = *plVar2;
      uVar5 = 1;
      goto LAB_18003da98;
    }
  }
  uVar5 = 0;
LAB_18003da98:
  (**(code **)(lVar6 + 0xf8))(plVar2,uVar5);
  return 1;
}


