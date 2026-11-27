// 0x1800214f0  FUN_1800214f0
// size=267 thunk=false
// signature: undefined FUN_1800214f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1800214f0(int param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if (param_1 - 1U < 0x80) {
    lVar2 = 0;
    local_38 = 0;
    uStack_30 = 0;
    if ((DAT_180423a38 != (code *)0x0) &&
       (cVar1 = (*DAT_180423a38)(0,param_2,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *(undefined4 *)param_3 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
    }
    if ((DAT_180425ff8 != (code *)0x0) &&
       (cVar1 = (*DAT_180425ff8)(param_1,param_2 & 0xffffffff,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *(undefined4 *)param_3 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
    }
    if ((DAT_180426120 != (code *)0x0) &&
       (cVar1 = (*DAT_180426120)(param_1,param_2 & 0xffffffff,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *(undefined4 *)param_3 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
    }
    if ((DAT_180425898 != (code *)0x0) &&
       (cVar1 = (*DAT_180425898)(param_1,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *(undefined4 *)param_3 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
    }
    if ((DAT_1804258c8 != (code *)0x0) &&
       (cVar1 = (*DAT_1804258c8)(param_1,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *param_3 = local_38;
      param_3[1] = uStack_30;
    }
  }
  else {
    lVar2 = (ulonglong)(uint3)(param_1 - 1U >> 8) << 8;
  }
  return lVar2;
}


