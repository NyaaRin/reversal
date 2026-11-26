// 0x1800e2460  FUN_1800e2460
// size=276 thunk=false
// signature: undefined FUN_1800e2460()
// status: ok


undefined8 FUN_1800e2460(longlong *param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if ((param_1 == (longlong *)0x0) || (param_1 == param_2)) {
    uVar5 = 0;
  }
  else {
    BVar2 = IsBadReadPtr(param_1,8);
    if (BVar2 == 0) {
      BVar2 = IsBadReadPtr((void *)*param_1,8);
      if (BVar2 == 0) {
        plVar6 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
        uVar5 = 0;
        if (plVar6 != (longlong *)0x0) {
          iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
          if (iVar3 < 1) {
            uVar5 = 0;
          }
          else {
            cVar1 = (**(code **)(*plVar6 + 0x40))(plVar6);
            if (cVar1 == '\0') {
              iVar4 = FUN_18001c680(param_1);
              if (iVar4 < 1) {
                uVar5 = 0;
              }
              else {
                iVar4 = FUN_18001c560(param_1);
                if (iVar4 == 0x3ea) {
                  uVar5 = 0;
                }
                else {
                  if ((DAT_1803fecc0 != (code *)0x0) &&
                     (cVar1 = (*DAT_1803fecc0)(iVar3), cVar1 != '\0')) {
                    return 0;
                  }
                  if ((DAT_1803fe698 != (code *)0x0) &&
                     (cVar1 = (*DAT_1803fe698)(iVar3), cVar1 != '\0')) {
                    return 0;
                  }
                  if ((iVar3 < 0x81) && ((&DAT_1804097b0)[iVar3] != '\0')) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = 1;
                  }
                }
              }
            }
            else {
              uVar5 = 0;
            }
          }
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


