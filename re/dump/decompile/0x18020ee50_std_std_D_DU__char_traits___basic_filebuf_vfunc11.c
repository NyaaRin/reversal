// 0x18020ee50  std_std_D_DU?$char_traits_?$basic_filebuf_vfunc11
// size=211 thunk=false
// signature: undefined std_std_D_DU?$char_traits_?$basic_filebuf_vfunc11()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
std_std_D_DU__char_traits___basic_filebuf_vfunc11
          (longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  local_28 = param_3[1] + *param_3;
  if (((*(longlong *)(param_1 + 0x80) != 0) && (cVar3 = FUN_18021e940(), cVar3 != '\0')) &&
     (iVar4 = fsetpos(*(FILE **)(param_1 + 0x80),&local_28), iVar4 == 0)) {
    *(longlong *)(param_1 + 0x74) = param_3[2];
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar1 = *(longlong *)(param_1 + 0x88);
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      **(longlong **)(param_1 + 0x18) = lVar1;
      **(longlong **)(param_1 + 0x38) = lVar1;
      **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar1;
    }
    lVar1 = *(longlong *)(param_1 + 0x74);
    *param_2 = local_28;
    param_2[2] = lVar1;
    param_2[1] = 0;
    return param_2;
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}


