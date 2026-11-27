// 0x18011faf0  FUN_18011faf0
// size=423 thunk=false
// signature: undefined FUN_18011faf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011faf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char local_b8;
  char local_a8 [64];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  local_c8 = 0x93fd561a96ab0c67;
  local_c0 = 0xd1ec5445d87064a8;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,&local_c8);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,&local_e8,&local_c0);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if (((*pcVar2 != '\0') && (param_1 != 0)) && (param_2 != 0)) {
    FUN_18011f6f0(param_1,local_68);
    FUN_18011f690(param_2,local_a8,0x40);
    if (local_a8[0] != '\0') {
      pcVar2 = local_68;
      if (local_68[0] == '\0') {
        pcVar2 = "<unknown>";
      }
      local_e8 = (undefined8 ***)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      sVar3 = strlen(pcVar2);
      FUN_18001d080(&local_e8,pcVar2,sVar3);
      FUN_18021aef0(&local_e8,&DAT_18035808c,2);
      sVar3 = strlen(local_a8);
      FUN_18021aef0(&local_e8,local_a8,sVar3);
      if (DAT_1804301b0 < 400) {
        FUN_180219e20(&DAT_1804301a0,&local_c0,&local_e8);
        if (local_b8 != '\0') {
          pppuVar4 = &local_e8;
          if (0xf < uStack_d0) {
            pppuVar4 = (undefined8 ***)local_e8;
          }
          FUN_180014410("[SEPROBE] %s\n",pppuVar4);
        }
      }
      FUN_18020e450(&local_e8);
    }
  }
  (*DAT_1804236f8)(param_1,param_2);
  return;
}


