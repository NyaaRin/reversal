// 0x180137380  FUN_180137380
// size=450 thunk=false
// signature: undefined FUN_180137380()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180137380(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  ulonglong uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [160];
  undefined1 local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  local_188 = 0;
  FUN_180137260(local_d8,param_2,param_1,&local_188);
  DAT_180409c98 = 0;
  local_198 = (undefined1 *)param_5;
  iVar2 = (*DAT_180409c68)(param_1,param_2,param_3,param_4);
  if (param_4 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *param_4;
  }
  local_180 = 0;
  FUN_180137260(local_178);
  LOCK();
  UNLOCK();
  iVar6 = DAT_180409c5c + 1;
  if (iVar2 == 0) {
    local_198 = local_178;
    DAT_180409c5c = DAT_180409c5c + 1;
    FUN_180014410("[AS] TICKET #%d: REFUSED (handle=0) as %llu\n[AS]   before:%s\n[AS]   after :%s\n"
                  ,iVar6,local_188,local_d8);
  }
  else {
    local_198 = (undefined1 *)local_188;
    DAT_180409c5c = DAT_180409c5c + 1;
    FUN_180014410("[AS] TICKET #%d: handle=%u bytes=%u as %llu\n",iVar6,iVar2,uVar7);
    if ((DAT_180409c29 != '\0') && (DAT_180409c49 != '\0')) {
      DVar3 = GetTickCount();
      iVar6 = (int)(DAT_180409c98 >> 0x20);
      uVar1 = DAT_180409c98;
      while (DAT_180409c98 = uVar1, iVar6 != iVar2) {
        DVar4 = GetTickCount();
        if (2999 < DVar4 - DVar3) {
          FUN_180014410("[AS] ticket %u NOT acknowledged within %u ms - letting the connect go out anyway; a kick with STEAM validation rejected right after the join is explained by this line\n"
                        ,iVar2,3000);
          return iVar2;
        }
        Sleep(10);
        uVar1 = DAT_180409c98;
        iVar6 = (int)(DAT_180409c98 >> 0x20);
      }
      uVar5 = FUN_180132470(uVar1 & 0xffffffff);
      DVar4 = GetTickCount();
      local_198 = (undefined1 *)uVar5;
      FUN_180014410("[AS] ticket %u acknowledged by Steam after %u ms (EResult=%u %s)\n",iVar2,
                    DVar4 - DVar3,uVar1 & 0xffffffff);
    }
  }
  return iVar2;
}


