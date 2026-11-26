// 0x1802cdb00  FUN_1802cdb00
// size=233 thunk=false
// signature: undefined FUN_1802cdb00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802cdb00(byte *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  char *_String;
  byte *pbVar4;
  double dVar5;
  undefined1 auStack_a8 [40];
  byte local_80 [40];
  char local_58;
  char local_57 [63];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    if (bVar1 == 0x25) {
      if (param_1[1] != 0x25) break;
      param_1 = param_1 + 1;
    }
    pbVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar1 = *pbVar4;
  }
  if ((*param_1 == 0x25) && (param_1[1] != 0x25)) {
    pbVar4 = local_80;
    pbVar2 = (byte *)FUN_1802b32c0(param_1);
    while (param_1 < pbVar2) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar3 = bVar1 - 0x24;
      if ((0x3b < (byte)uVar3) || ((0x800000000000009U >> ((ulonglong)uVar3 & 0x3f) & 1) == 0)) {
        *pbVar4 = bVar1;
        pbVar4 = pbVar4 + 1;
      }
    }
    *pbVar4 = 0;
    FUN_180268750(&local_58,0x40,local_80,param_3);
    _String = &local_58;
    while (local_58 == ' ') {
      _String = _String + 1;
      local_58 = *_String;
    }
    dVar5 = atof(_String);
    param_3 = (longlong)dVar5;
  }
  return param_3;
}


