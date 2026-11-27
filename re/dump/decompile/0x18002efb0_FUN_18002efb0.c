// 0x18002efb0  FUN_18002efb0
// size=517 thunk=false
// signature: undefined FUN_18002efb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18002efb0(undefined4 param_1,char *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  char *_Source;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  
  plVar5 = (longlong *)(DAT_1803da4c0 ^ (ulonglong)auStack_68);
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    *param_2 = '\0';
    local_40 = plVar5;
    plVar5 = (longlong *)FUN_18002e100();
    if (((char)plVar5 != '\0') &&
       (((DAT_1803faee8 != (code *)0x0 && (DAT_1803faff8 != (code *)0x0)) &&
        (DAT_1803fb008 != (code *)0x0)))) {
      if (DAT_1803fa678 == (longlong *)0x0) {
        lVar7 = 0;
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
        if (plVar5 == (longlong *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = plVar5[1];
        }
        if (DAT_1803fa678 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
          plVar6 = plVar5;
        }
      }
      if ((lVar7 != 0) && (plVar6 != (longlong *)0x0)) {
        if ((DAT_1803fb088 == (code *)0x0) || (plVar6[1] == 0)) {
          iVar2 = (**(code **)*plVar6)(plVar6);
        }
        else {
          iVar2 = (*DAT_1803fb088)();
        }
        bVar8 = 0;
        cVar1 = FUN_18002eb00(lVar7,plVar6,param_1);
        if (cVar1 != '\0') {
          (*DAT_1803faee8)(lVar7,0xffffffff,&DAT_1803401d4);
          iVar3 = (*DAT_1803faff8)(lVar7,0xffffffff);
          if (iVar3 == 4) {
            local_48 = 0;
            _Source = (char *)(*DAT_1803fb008)(lVar7,0xffffffff,&local_48);
            if (_Source != (char *)0x0) {
              strncpy(param_2,_Source,(ulonglong)((int)param_3 - 1));
              param_2[param_3 + -1] = '\0';
              bVar8 = 1;
            }
          }
        }
        while( true ) {
          if ((DAT_1803fb088 == (code *)0x0) || (plVar6[1] == 0)) {
            iVar3 = (**(code **)*plVar6)(plVar6);
          }
          else {
            iVar3 = (*DAT_1803fb088)();
          }
          if (iVar3 <= iVar2) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar6[1] == 0)
             ) {
            (**(code **)(*plVar6 + 0x10))(plVar6,1);
          }
          else {
            iVar4 = (*DAT_1803fb088)();
            iVar3 = 0;
            if (-1 < iVar4 + -1) {
              iVar3 = iVar4 + -1;
            }
            (*DAT_1803faf10)(plVar6[1],iVar3);
          }
        }
        return (ulonglong)bVar8;
      }
    }
  }
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}


