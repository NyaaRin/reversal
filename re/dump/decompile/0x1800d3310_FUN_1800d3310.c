// 0x1800d3310  FUN_1800d3310
// size=336 thunk=false
// signature: undefined FUN_1800d3310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d3310(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28 = 0x9653fa4f0c4e1755;
  local_20 = 0xf7521f28977a3033;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_20);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_38,&local_28);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  lVar1 = DAT_18040a410;
  if (*pcVar5 != '\0') {
    local_28 = 0xf7521f28977a3033;
    local_20 = 0xd80d0afae9fc7f5a;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_28);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_48,&local_20);
    pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
    lVar1 = DAT_18040a410;
    if ((((*pcVar5 != '\0') && (lVar1 = param_1, DAT_18040a410 != 0)) &&
        (lVar1 = param_1, DAT_18040a410 != param_1)) &&
       (cVar2 = FUN_1800d30d0(), lVar1 = param_1, cVar2 == '\0')) {
      iVar3 = rand();
      plVar4 = (longlong *)FUN_180014300(&local_28);
      DAT_18040a4b8 = *plVar4 + (longlong)(iVar3 % 0x28 + 0xf0) * 1000000;
      lVar1 = param_1;
    }
  }
  DAT_18040a410 = lVar1;
  return;
}


