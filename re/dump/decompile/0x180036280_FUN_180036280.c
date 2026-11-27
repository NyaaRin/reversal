// 0x180036280  FUN_180036280
// size=423 thunk=false
// signature: undefined FUN_180036280()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180036280(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    if (DAT_1803faf38 == (code *)0x0) {
      return false;
    }
    (*DAT_1803faf38)(param_1,0xffffd8ee);
    iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
    return iVar2 == 5;
  }
  local_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  local_38 = 0;
  uStack_28 = 0;
  local_20 = _DAT_1803814b0;
  uStack_18 = _UNK_1803814b8;
  local_30 = 0;
  cVar1 = FUN_180026bc0(param_2,&local_48,&local_30);
  if (cVar1 != '\0') {
    puVar3 = local_48;
    if (0xf < (ulonglong)local_48[3]) {
      puVar3 = (undefined8 *)*local_48;
    }
    (*DAT_1803fafa0)(param_1,puVar3);
    (*DAT_1803faef0)(param_1,0xffffd8ee);
    iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
    if (iVar2 == 5) {
      uVar5 = 1;
      if (1 < (ulonglong)(lStack_40 - (longlong)local_48 >> 5)) {
        do {
          puVar3 = local_48 + uVar5 * 4;
          if (0xf < (ulonglong)puVar3[3]) {
            puVar3 = (undefined8 *)*puVar3;
          }
          (*DAT_1803fafa0)(param_1,puVar3);
          (*DAT_1803faef0)(param_1,0xfffffffe);
          iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
          if (iVar2 != 5) goto LAB_1800363f2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)(lStack_40 - (longlong)local_48 >> 5));
      }
      bVar4 = true;
      goto LAB_1800363f4;
    }
  }
LAB_1800363f2:
  bVar4 = false;
LAB_1800363f4:
  FUN_18020e450(&local_30);
  FUN_18020d5c0(&local_48);
  return bVar4;
}


