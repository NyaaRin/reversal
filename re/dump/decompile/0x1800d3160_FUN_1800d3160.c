// 0x1800d3160  FUN_1800d3160
// size=298 thunk=false
// signature: undefined FUN_1800d3160()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800d3160(void)

{
  byte bVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28 = 0x9653fa4f0c4e1755;
  local_20 = 0xf7521f28977a3033;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_20);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_28);
  pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  if (*pcVar3 != '\0') {
    local_28 = 0xf7521f28977a3033;
    local_20 = 0xd80d0afae9fc7f5a;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_28);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_48,&local_20);
    pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
    if (*pcVar3 != '\0') {
      plVar2 = (longlong *)FUN_180014300(&local_28);
      if (*plVar2 == DAT_18040a4b8) {
        return (ulonglong)plVar2 & 0xffffffffffffff00;
      }
      bVar1 = 0xff;
      if (DAT_18040a4b8 <= *plVar2) {
        bVar1 = 0;
      }
      return (ulonglong)(bVar1 >> 7);
    }
  }
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}


