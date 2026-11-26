// 0x18006cd30  FUN_18006cd30
// size=359 thunk=false
// signature: undefined FUN_18006cd30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18006cd30(undefined8 param_1,undefined4 param_2,char *param_3,undefined8 param_4,
             undefined8 *param_5,int *param_6)

{
  ulonglong uVar1;
  int iVar2;
  void *_Src;
  char *_Src_00;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  int *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = param_6;
  *param_6 = 0;
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  (*DAT_1803faf88)(param_1,0xffffd8f0,param_2);
  iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
  *param_6 = iVar2;
  if (iVar2 == 4) {
    uVar3 = 0;
    if (DAT_1803fb008 != (code *)0x0) {
      local_30 = 0;
      _Src = (void *)(*DAT_1803fb008)(param_1,0xffffffff,&local_30);
      if ((_Src == (void *)0x0) || (param_3 == (char *)0x0)) {
        uVar3 = 0;
      }
      else {
        if (0x1ff < local_30) {
          local_30 = 0x1ff;
        }
        uVar1 = local_30;
        memcpy(param_3,_Src,local_30);
        param_3[uVar1] = '\0';
        uVar3 = 1;
      }
    }
  }
  else if (iVar2 == 3) {
    uVar3 = 0;
    if (DAT_1803fafc0 != (code *)0x0) {
      uVar3 = (*DAT_1803fafc0)(param_1,0xffffffff);
      *param_5 = uVar3;
      uVar3 = 1;
    }
  }
  else if (iVar2 == 1) {
    if ((DAT_1803fb058 == (code *)0x0) || (param_3 == (char *)0x0)) {
      uVar3 = 0;
    }
    else {
      iVar2 = (*DAT_1803fb058)(param_1,0xffffffff);
      _Src_00 = "false";
      if (iVar2 != 0) {
        _Src_00 = "true";
      }
      strncpy_s(param_3,0x200,_Src_00,0xffffffffffffffff);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


