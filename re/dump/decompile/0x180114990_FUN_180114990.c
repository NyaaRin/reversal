// 0x180114990  FUN_180114990
// size=414 thunk=false
// signature: undefined FUN_180114990()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180114990(int *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_34 = 0;
  if (DAT_1803fa668 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_38,&local_34);
  }
  local_28 = 0x4f6b04c86bf5c594;
  local_30 = 0x93fd561a96ab0c67;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_58,&local_30);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_48,&local_28);
  piVar3 = (int *)FUN_1802029c0(*plVar2 + 0x28);
  iVar5 = *piVar3;
  if (iVar5 < 0x28) {
    iVar5 = 0x28;
  }
  else if (100 < iVar5) {
    iVar5 = 100;
  }
  local_28 = 0x93fd561a96ab0c67;
  local_30 = 0xd5eedd6096f28a0d;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_58,&local_30);
  pcVar4 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  if ((*pcVar4 == '\0') || (DAT_1803e8840 == '\0')) {
    iVar5 = 100;
  }
  if (0 < local_38) {
    local_38 = (iVar5 * local_38) / 100;
  }
  *param_1 = local_38;
  if (0 < local_34) {
    local_34 = (iVar5 * local_34) / 100;
  }
  *param_2 = local_34;
  if (*param_1 - 1U < 0xf) {
    *param_1 = 0x10;
  }
  iVar1 = *param_2;
  if (iVar1 - 1U < 0xf) {
    *param_2 = 0x10;
  }
  return CONCAT31((int3)(iVar1 - 1U >> 8),iVar5 < 100);
}


