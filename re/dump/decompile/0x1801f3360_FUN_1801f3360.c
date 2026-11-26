// 0x1801f3360  FUN_1801f3360
// size=217 thunk=false
// signature: undefined FUN_1801f3360()
// status: ok


void FUN_1801f3360(undefined8 param_1,uint *param_2)

{
  char cVar1;
  
  if (DAT_1803ff270 != '\0') {
    if ((((*param_2 & 0x7f800000) == 0x7f800000) || ((param_2[1] & 0x7f800000) == 0x7f800000)) ||
       ((param_2[2] & 0x7f800000) == 0x7f800000)) {
      DAT_1803fe9e0 = DAT_1803fe9e0 + 1;
      if (DAT_1803fe9e0 < 0xb) {
        FUN_180014410("[SAFE] blocked NaN SetViewAngles #%d\n");
      }
    }
    else if (((DAT_1803db439 == '\0') || (DAT_1803db43b != '\0')) &&
            (((DAT_1803db43a == '\0' ||
              ((DAT_1803db43b != '\0' || (DAT_1803f9290 == (longlong *)0x0)))) ||
             (cVar1 = (**(code **)(*DAT_1803f9290 + 0x70))(), cVar1 == '\0')))) goto LAB_1801f33fc;
    return;
  }
  if (DAT_1803fa380 == (code *)0x0) {
    return;
  }
LAB_1801f33fc:
                    /* WARNING: Could not recover jumptable at 0x0001801f340c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fa380)(param_1,param_2);
  return;
}


