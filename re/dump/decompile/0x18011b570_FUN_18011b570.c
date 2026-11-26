// 0x18011b570  FUN_18011b570
// size=260 thunk=false
// signature: undefined FUN_18011b570()
// status: ok


longlong * FUN_18011b570(longlong *param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar6 = 1;
  plVar7 = param_1;
  do {
    if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
      return param_1;
    }
    if (cVar1 == '\"') {
      uVar5 = 6;
      pcVar4 = "&quot;";
LAB_18011b654:
      FUN_18021aef0(param_1,pcVar4,uVar5,cVar1,uVar6,plVar7);
    }
    else {
      if (cVar1 == '&') {
        uVar5 = 5;
        pcVar4 = "&amp;";
        goto LAB_18011b654;
      }
      if (cVar1 == '<') {
        uVar5 = 4;
        pcVar4 = "&lt;";
        goto LAB_18011b654;
      }
      if (cVar1 == '>') {
        uVar5 = 4;
        pcVar4 = "&gt;";
        goto LAB_18011b654;
      }
      uVar2 = param_1[2];
      if (uVar2 < (ulonglong)param_1[3]) {
        param_1[2] = uVar2 + 1;
        if ((ulonglong)param_1[3] < 0x10) {
          *(char *)(uVar2 + (longlong)param_1) = cVar1;
          *(undefined1 *)(uVar2 + 1 + (longlong)param_1) = 0;
        }
        else {
          lVar3 = *param_1;
          *(char *)(uVar2 + lVar3) = cVar1;
          *(undefined1 *)(uVar2 + 1 + lVar3) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1);
      }
    }
    param_2 = param_2 + 1;
  } while( true );
}


