// 0x1801e97c0  FUN_1801e97c0
// size=190 thunk=false
// signature: undefined FUN_1801e97c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801e97c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  cVar2 = FUN_1801e9760(0,&local_48);
  if (cVar2 == '\0') {
    if (param_1 != 0) {
      local_60 = param_1;
      for (uVar3 = 0; uVar3 < 0x1200; uVar3 = uVar3 + 8) {
        lVar1 = *(longlong *)(uVar3 + param_1);
        local_68 = uVar3;
        local_50 = lVar1;
        cVar2 = FUN_1801e9760(lVar1,&local_48);
        if (cVar2 != '\0') {
          if (DAT_1803fe689 != '\0') {
            return lVar1;
          }
          DAT_1803fe689 = 1;
          FUN_180014410("[VIS] selected nested render D3D device raw=%p usable=%p off=0x%llX\n",
                        param_1,lVar1,uVar3);
          return lVar1;
        }
      }
    }
    param_1 = 0;
  }
  return param_1;
}


