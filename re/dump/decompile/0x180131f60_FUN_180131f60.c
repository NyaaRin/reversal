// 0x180131f60  FUN_180131f60
// size=216 thunk=false
// signature: undefined FUN_180131f60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180131f60(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  size_t sVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  char local_98 [120];
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_98[0x30] = '\0';
  local_98[0x31] = '\0';
  local_98[0x32] = '\0';
  local_98[0x33] = '\0';
  local_98[0x34] = '\0';
  local_98[0x35] = '\0';
  local_98[0x36] = '\0';
  local_98[0x37] = '\0';
  local_98[0x38] = '\0';
  local_98[0x39] = '\0';
  local_98[0x3a] = '\0';
  local_98[0x3b] = '\0';
  local_98[0x3c] = '\0';
  local_98[0x3d] = '\0';
  local_98[0x3e] = '\0';
  local_98[0x3f] = '\0';
  local_98[0x40] = '\0';
  local_98[0x41] = '\0';
  local_98[0x42] = '\0';
  local_98[0x43] = '\0';
  local_98[0x44] = '\0';
  local_98[0x45] = '\0';
  local_98[0x46] = '\0';
  local_98[0x47] = '\0';
  local_98[0x48] = '\0';
  local_98[0x49] = '\0';
  local_98[0x4a] = '\0';
  local_98[0x4b] = '\0';
  local_98[0x4c] = '\0';
  local_98[0x4d] = '\0';
  local_98[0x4e] = '\0';
  local_98[0x4f] = '\0';
  local_98[0x50] = '\0';
  local_98[0x51] = '\0';
  local_98[0x52] = '\0';
  local_98[0x53] = '\0';
  local_98[0x54] = '\0';
  local_98[0x55] = '\0';
  local_98[0x56] = '\0';
  local_98[0x57] = '\0';
  local_98[0x58] = '\0';
  local_98[0x59] = '\0';
  local_98[0x5a] = '\0';
  local_98[0x5b] = '\0';
  local_98[0x5c] = '\0';
  local_98[0x5d] = '\0';
  local_98[0x5e] = '\0';
  local_98[0x5f] = '\0';
  local_98[0x60] = '\0';
  local_98[0x61] = '\0';
  local_98[0x62] = '\0';
  local_98[99] = '\0';
  local_98[100] = '\0';
  local_98[0x65] = '\0';
  local_98[0x66] = '\0';
  local_98[0x67] = '\0';
  local_98[0x68] = '\0';
  local_98[0x69] = '\0';
  local_98[0x6a] = '\0';
  local_98[0x6b] = '\0';
  local_98[0x6c] = '\0';
  local_98[0x6d] = '\0';
  local_98[0x6e] = '\0';
  local_98[0x6f] = '\0';
  local_98[0x70] = '\0';
  local_98[0x71] = '\0';
  local_98[0x72] = '\0';
  local_98[0x73] = '\0';
  local_98[0x74] = '\0';
  local_98[0x75] = '\0';
  local_98[0x76] = '\0';
  local_98[0x77] = '\0';
  uStack_20 = 0;
  local_a0 = param_1;
  cVar1 = FUN_180131ef0(param_2,local_98);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (cVar1 == '\0') {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uStack_20 = uStack_20 & 0xffffffffffffff;
    param_1[3] = 0;
    sVar2 = strlen(local_98);
    FUN_18001d080(param_1,local_98,sVar2);
  }
  return param_1;
}


