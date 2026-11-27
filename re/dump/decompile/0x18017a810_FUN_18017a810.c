// 0x18017a810  FUN_18017a810
// size=262 thunk=false
// signature: undefined FUN_18017a810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18017a810(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  plVar4 = DAT_1803fb108;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if ((DAT_1803fa5f8 != 0) && (plVar5 = DAT_1803fb100, DAT_1803fb100 != DAT_1803fb108)) {
    do {
      if (*plVar5 == DAT_1803fa5f8) break;
      plVar5 = plVar5 + 1;
    } while (plVar5 != DAT_1803fb108);
    plVar3 = plVar5;
    if (plVar5 != DAT_1803fb108) {
      while (plVar3 = plVar3 + 1, plVar3 != plVar4) {
        lVar1 = *plVar3;
        *plVar3 = 0;
        puVar2 = (undefined8 *)*plVar5;
        *plVar5 = lVar1;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        plVar5 = plVar5 + 1;
      }
      puVar2 = (undefined8 *)DAT_1803fb108[-1];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      DAT_1803fb108 = DAT_1803fb108 + -1;
      DAT_1803fa5f8 = 0;
      FUN_180209ce0(&DAT_1803fa860);
      DAT_1803fac7f = 0;
      return 1;
    }
  }
  return 0;
}


