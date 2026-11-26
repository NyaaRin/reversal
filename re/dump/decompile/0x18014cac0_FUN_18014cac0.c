// 0x18014cac0  FUN_18014cac0
// size=456 thunk=false
// signature: undefined FUN_18014cac0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014cac0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  char ******_Str1;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  char *****local_30 [2];
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  cVar4 = FUN_18014b9d0(param_3,*param_1);
  if (cVar4 == '\0') {
    return;
  }
  if ((ulonglong)((((longlong *)*param_1)[1] - *(longlong *)*param_1 >> 3) * -0x5555555555555555) <
      5) {
    return;
  }
  pcVar6 = (char *)FUN_18014bba0(local_50,param_3);
  if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
    pcVar6 = *(char **)pcVar6;
  }
  iVar5 = _stricmp(pcVar6,"table");
  FUN_18020e450(local_50);
  if (iVar5 != 0) {
    return;
  }
  FUN_18014bba0(local_30,param_3,*(longlong *)*param_1 + 0x18);
  if (local_20 == 0) goto LAB_18014cc5f;
  FUN_18020d6f0(param_1[1] + 0x28,local_30);
  _Str1 = local_30;
  if (0xf < local_18) {
    _Str1 = (char ******)local_30[0];
  }
  iVar5 = _stricmp((char *)_Str1,"cookies");
  if (iVar5 != 0) goto LAB_18014cc5f;
  *(undefined1 *)(param_1[1] + 0x58) = 1;
  lVar1 = *(longlong *)*param_1;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (lVar2 == 8) {
LAB_18014cc26:
    uVar8 = 0;
  }
  else if (lVar2 == 9) {
    uVar8 = 1;
  }
  else {
    if ((5 < lVar2 - 1U) || (uVar3 = *(ulonglong *)(lVar1 + 0x58), uVar3 == 0)) goto LAB_18014cc26;
    pcVar6 = (char *)(*(longlong *)(lVar1 + 0x50) + *param_3);
    uVar8 = (longlong)*pcVar6 >> 0x3f;
    uVar9 = 0;
    if (uVar3 != 0) {
      do {
        uVar8 = uVar8 << 8 | (ulonglong)(byte)pcVar6[uVar9];
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
  }
  *(ulonglong *)param_1[2] = uVar8;
  uVar7 = FUN_18014bba0(local_50,param_3,*(longlong *)*param_1 + 0x60);
  FUN_18020e8a0(param_1[3],uVar7);
  FUN_18020e450(local_50);
LAB_18014cc5f:
  FUN_18020e450(local_30);
  return;
}


