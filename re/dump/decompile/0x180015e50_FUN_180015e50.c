// 0x180015e50  FUN_180015e50
// size=225 thunk=false
// signature: undefined FUN_180015e50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180015ec7) */

undefined4 FUN_180015e50(undefined4 param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = 0x67452301;
  local_74 = 0xab89;
  uStack_72 = 0xefcd;
  local_70 = 0xdcfe;
  uStack_6e = 0x98ba;
  uStack_58 = 0;
  local_6c = 0x10325476;
  local_68 = 0x20;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_60 = (ulonglong)CONCAT14(0x80,param_1);
  memset((void *)((longlong)&local_60 + 5),0,0x33);
  uStack_28 = local_68;
  FUN_180015630(&local_78,&local_60);
  return CONCAT22(local_70,uStack_72);
}


