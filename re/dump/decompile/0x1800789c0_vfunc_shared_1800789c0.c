// 0x1800789c0  vfunc_shared_1800789c0
// size=175 thunk=false
// signature: undefined vfunc_shared_1800789c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 vfunc_shared_1800789c0(undefined8 param_1,undefined8 param_2)

{
  longlong ***ppplVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong **local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  FUN_18001f260(param_2,local_38);
  ppplVar1 = local_38;
  if (0xf < local_20) {
    ppplVar1 = (longlong ***)local_38[0];
  }
  if (local_28 == 7) {
    iVar2 = *(int *)ppplVar1 + -0x625f7763;
    if ((iVar2 == 0) && (iVar2 = *(ushort *)((longlong)ppplVar1 + 4) - 0x7361, iVar2 == 0)) {
      iVar2 = *(byte *)((longlong)ppplVar1 + 6) - 0x65;
    }
    if (iVar2 != 0) goto LAB_180078a27;
  }
  else {
LAB_180078a27:
    ppplVar1 = local_38;
    if (0xf < local_20) {
      ppplVar1 = (longlong ***)local_38[0];
    }
    if ((local_28 != 8) || (*ppplVar1 != (longlong **)0x657361625f627773)) {
      uVar3 = 0;
      goto LAB_180078a4f;
    }
  }
  uVar3 = 1;
LAB_180078a4f:
  FUN_18020e450(local_38);
  return uVar3;
}


