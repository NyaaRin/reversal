// 0x18001f260  FUN_18001f260
// size=1217 thunk=false
// signature: undefined FUN_18001f260()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18001f260(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  size_t sVar4;
  char *pcVar5;
  char *_Str;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_130;
  undefined4 local_127;
  undefined2 local_123;
  undefined1 local_121;
  longlong *local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 *local_108;
  undefined4 local_f7;
  undefined2 local_f3;
  undefined1 local_f1;
  longlong local_f0;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined1 local_d1;
  longlong local_d0;
  undefined4 local_c7;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_138 = 0;
  local_108 = param_2;
  if (((DAT_1804253e0 != (code *)0x0) &&
      (plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(), plVar3 != (longlong *)0x0)) &&
     (iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), 0 < iVar2)) {
    local_a8[0] = '\0';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\0';
    local_a8[8] = '\0';
    local_a8[9] = '\0';
    local_a8[10] = '\0';
    local_a8[0xb] = '\0';
    local_a8[0xc] = '\0';
    local_a8[0xd] = '\0';
    local_a8[0xe] = '\0';
    local_a8[0xf] = '\0';
    local_a8[0x10] = '\0';
    local_a8[0x11] = '\0';
    local_a8[0x12] = '\0';
    local_a8[0x13] = '\0';
    local_a8[0x14] = '\0';
    local_a8[0x15] = '\0';
    local_a8[0x16] = '\0';
    local_a8[0x17] = '\0';
    local_a8[0x18] = '\0';
    local_a8[0x19] = '\0';
    local_a8[0x1a] = '\0';
    local_a8[0x1b] = '\0';
    local_a8[0x1c] = '\0';
    local_a8[0x1d] = '\0';
    local_a8[0x1e] = '\0';
    local_a8[0x1f] = '\0';
    local_a8[0x20] = '\0';
    local_a8[0x21] = '\0';
    local_a8[0x22] = '\0';
    local_a8[0x23] = '\0';
    local_a8[0x24] = '\0';
    local_a8[0x25] = '\0';
    local_a8[0x26] = '\0';
    local_a8[0x27] = '\0';
    local_a8[0x28] = '\0';
    local_a8[0x29] = '\0';
    local_a8[0x2a] = '\0';
    local_a8[0x2b] = '\0';
    local_a8[0x2c] = '\0';
    local_a8[0x2d] = '\0';
    local_a8[0x2e] = '\0';
    local_a8[0x2f] = '\0';
    local_a8[0x30] = '\0';
    local_a8[0x31] = '\0';
    local_a8[0x32] = '\0';
    local_a8[0x33] = '\0';
    local_a8[0x34] = '\0';
    local_a8[0x35] = '\0';
    local_a8[0x36] = '\0';
    local_a8[0x37] = '\0';
    local_a8[0x38] = '\0';
    local_a8[0x39] = '\0';
    local_a8[0x3a] = '\0';
    local_a8[0x3b] = '\0';
    local_a8[0x3c] = '\0';
    local_a8[0x3d] = '\0';
    local_a8[0x3e] = '\0';
    local_a8[0x3f] = '\0';
    local_a8[0x40] = '\0';
    local_a8[0x41] = '\0';
    local_a8[0x42] = '\0';
    local_a8[0x43] = '\0';
    local_a8[0x44] = '\0';
    local_a8[0x45] = '\0';
    local_a8[0x46] = '\0';
    local_a8[0x47] = '\0';
    local_a8[0x48] = '\0';
    local_a8[0x49] = '\0';
    local_a8[0x4a] = '\0';
    local_a8[0x4b] = '\0';
    local_a8[0x4c] = '\0';
    local_a8[0x4d] = '\0';
    local_a8[0x4e] = '\0';
    local_a8[0x4f] = '\0';
    local_a8[0x50] = '\0';
    local_a8[0x51] = '\0';
    local_a8[0x52] = '\0';
    local_a8[0x53] = '\0';
    local_a8[0x54] = '\0';
    local_a8[0x55] = '\0';
    local_a8[0x56] = '\0';
    local_a8[0x57] = '\0';
    local_a8[0x58] = '\0';
    local_a8[0x59] = '\0';
    local_a8[0x5a] = '\0';
    local_a8[0x5b] = '\0';
    local_a8[0x5c] = '\0';
    local_a8[0x5d] = '\0';
    local_a8[0x5e] = '\0';
    local_a8[0x5f] = '\0';
    local_a8[0x60] = '\0';
    local_a8[0x61] = '\0';
    local_a8[0x62] = '\0';
    local_a8[99] = '\0';
    local_a8[100] = '\0';
    local_a8[0x65] = '\0';
    local_a8[0x66] = '\0';
    local_a8[0x67] = '\0';
    local_a8[0x68] = '\0';
    local_a8[0x69] = '\0';
    local_a8[0x6a] = '\0';
    local_a8[0x6b] = '\0';
    local_a8[0x6c] = '\0';
    local_a8[0x6d] = '\0';
    local_a8[0x6e] = '\0';
    local_a8[0x6f] = '\0';
    local_a8[0x70] = '\0';
    local_a8[0x71] = '\0';
    local_a8[0x72] = '\0';
    local_a8[0x73] = '\0';
    local_a8[0x74] = '\0';
    local_a8[0x75] = '\0';
    local_a8[0x76] = '\0';
    local_a8[0x77] = '\0';
    local_a8[0x78] = '\0';
    local_a8[0x79] = '\0';
    local_a8[0x7a] = '\0';
    local_a8[0x7b] = '\0';
    local_a8[0x7c] = '\0';
    local_a8[0x7d] = '\0';
    local_a8[0x7e] = '\0';
    local_a8[0x7f] = '\0';
    cVar1 = (*DAT_1804253e0)(iVar2,local_a8,0x80);
    if ((cVar1 != '\0') && (local_a8[0] != '\0')) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      sVar4 = strlen(local_a8);
      FUN_18001d080(param_2,local_a8,sVar4);
      return param_2;
    }
  }
  local_120 = (longlong *)0x0;
  uStack_118 = 0;
  local_110 = 0;
  FUN_18001bcd0(0,&local_120);
  if (local_120 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,&DAT_18033e5ea,0);
    local_138 = 1;
    if (local_120 != (longlong *)0x0) {
      (**(code **)*local_120)();
      DAT_1803fa338 = local_110 != 0;
      DAT_1803fa330 = local_110;
      if (!(bool)DAT_1803fa338) {
        DAT_1803fa330 = local_130;
      }
      DAT_1803fa339 = local_127;
      DAT_1803fa33d = local_123;
      DAT_1803fa33f = local_121;
    }
  }
  else {
    cVar1 = FUN_18001e2b0(param_1,local_120);
    if (cVar1 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      FUN_18001d080(param_2,&DAT_18033e5ea,0);
      local_138 = 1;
      if (local_120 != (longlong *)0x0) {
        (**(code **)*local_120)();
        if (local_110 == 0) {
          DAT_1803fa330 = local_f0;
          DAT_1803fa339 = local_e7;
          DAT_1803fa33d = local_e3;
          local_f1 = local_e1;
        }
        else {
          DAT_1803fa330 = local_110;
          DAT_1803fa339 = local_f7;
          DAT_1803fa33d = local_f3;
        }
        DAT_1803fa338 = local_110 != 0;
        DAT_1803fa33f = local_f1;
      }
    }
    else {
      (**(code **)(*local_120 + 0x20))(local_120,0xffffffff,&DAT_1803401d4);
      cVar1 = (**(code **)(*local_120 + 0x138))(local_120,0xffffffff,4);
      if (cVar1 == '\0') {
        (**(code **)(*local_120 + 0x10))(local_120,2);
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        FUN_18001d080(param_2,&DAT_18033e5ea,0);
        local_138 = 1;
        if (local_120 != (longlong *)0x0) {
          (**(code **)*local_120)();
          if (local_110 == 0) {
            DAT_1803fa330 = local_d0;
            DAT_1803fa339 = local_c7;
            DAT_1803fa33d = local_c3;
            local_d1 = local_c1;
          }
          else {
            DAT_1803fa330 = local_110;
            DAT_1803fa339 = local_d7;
            DAT_1803fa33d = local_d3;
          }
          DAT_1803fa338 = local_110 != 0;
          DAT_1803fa33f = local_d1;
        }
      }
      else {
        pcVar5 = (char *)(**(code **)(*local_120 + 0xb8))(local_120,0xffffffff,0);
        (**(code **)(*local_120 + 0x10))(local_120,2);
        _Str = "";
        if (pcVar5 != (char *)0x0) {
          _Str = pcVar5;
        }
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        sVar4 = strlen(_Str);
        FUN_18001d080(param_2,_Str,sVar4);
        local_138 = 1;
        if (local_120 != (longlong *)0x0) {
          (**(code **)*local_120)();
          if (local_110 == 0) {
            DAT_1803fa330 = local_130;
            DAT_1803fa339 = local_127;
            DAT_1803fa33d = local_123;
            local_b1 = local_121;
          }
          else {
            DAT_1803fa330 = local_110;
            DAT_1803fa339 = local_b7;
            DAT_1803fa33d = local_b3;
          }
          DAT_1803fa338 = local_110 != 0;
          DAT_1803fa33f = local_b1;
        }
      }
    }
  }
  return param_2;
}


