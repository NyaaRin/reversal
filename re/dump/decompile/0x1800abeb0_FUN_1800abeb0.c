// 0x1800abeb0  FUN_1800abeb0
// size=413 thunk=false
// signature: undefined FUN_1800abeb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800abeb0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  char *_Str;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  byte *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_58 = 0;
  if ((DAT_1803fa650 == (longlong *)0x0) || (*(short *)(param_2 + 0x48) < 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_50 = param_1;
    _Str = (char *)(**(code **)(*DAT_1803fa650 + 0x38))
                             (DAT_1803fa650,(int)*(short *)(param_2 + 0x48));
    if ((_Str < (char *)0x10001) || (*_Str == '\0')) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    else {
      local_40 = (byte *)0x0;
      uStack_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      sVar2 = strlen(_Str);
      FUN_18001d080(&local_40,_Str,sVar2);
      pbVar3 = (byte *)&local_40;
      if (0xf < uStack_28) {
        pbVar3 = local_40;
      }
      pbVar4 = pbVar3 + local_30;
      for (; local_48 = pbVar3, pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
        iVar1 = tolower((uint)*pbVar3);
        *pbVar3 = (byte)iVar1;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 *)param_1 = (undefined4)local_40;
      *(undefined4 *)((longlong)param_1 + 4) = local_40._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_38._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_30._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_28;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_28._4_4_;
      local_30 = 0;
      uStack_28 = 0xf;
      local_40 = (byte *)((ulonglong)local_40 & 0xffffffffffffff00);
      local_58 = 1;
      FUN_18020e450(&local_40);
    }
  }
  return param_1;
}


