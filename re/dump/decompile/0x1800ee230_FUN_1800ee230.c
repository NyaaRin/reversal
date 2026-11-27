// 0x1800ee230  FUN_1800ee230
// size=328 thunk=false
// signature: undefined FUN_1800ee230()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ee230(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  char *_Str;
  size_t sVar4;
  ulonglong *puVar5;
  char *pcVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    local_18 = 0;
    local_14 = 2;
    puVar5 = (ulonglong *)&local_18;
    do {
      plVar3 = (longlong *)FUN_1800ebf80((int)*puVar5);
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
        _Str = (char *)(**(code **)(*plVar3 + 0x158))(plVar3,1);
        pcVar1 = DAT_180409b98;
        if ((_Str != (char *)0x0) && ((*_Str != '\0' && (DAT_180409b98 != (code *)0x0)))) {
          local_38 = 0;
          uStack_30 = 0;
          local_28 = 0;
          uStack_20 = 0;
          sVar4 = strlen(_Str);
          FUN_18001d080(&local_38,_Str,sVar4);
          cVar2 = (*pcVar1)(&local_38);
          FUN_18020e450(&local_38);
          pcVar6 = "FAILED";
          if (cVar2 != '\0') {
            pcVar6 = "ok";
          }
          FUN_180014410("[LUACFG] script loaded config \'%s\' -> %s\n",_Str,pcVar6);
          (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);
          return 1;
        }
        (**(code **)(*plVar3 + 0xf8))(plVar3,0);
        return 1;
      }
      puVar5 = (ulonglong *)((longlong)puVar5 + 4);
    } while (puVar5 != &local_10);
  }
  return 0;
}


