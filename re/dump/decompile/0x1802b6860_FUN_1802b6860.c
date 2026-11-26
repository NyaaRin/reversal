// 0x1802b6860  FUN_1802b6860
// size=300 thunk=false
// signature: undefined FUN_1802b6860()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b6860(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  undefined1 *puVar4;
  void *_Dst;
  undefined1 auStack_48 [32];
  char local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  iVar2 = FUN_180268db0(local_28,param_2,param_2 & 0xffffffff);
  local_28[iVar2] = '\0';
  sVar3 = strlen(local_28);
  piVar1 = *(int **)(param_1 + 8);
  if ((local_28[0] == '\n') && (*(char *)((longlong)piVar1 + 0x17) != '\0')) goto LAB_1802b696c;
  if (((char)piVar1[3] == '\0') || (piVar1[1] != piVar1[2])) {
LAB_1802b692d:
    FUN_1802b51c0(param_1,piVar1);
    iVar2 = FUN_1802b49e0(param_1,*piVar1,local_28,sVar3 & 0xffffffff);
    if (iVar2 == 0) goto LAB_1802b696c;
    FUN_1802b60c0(piVar1 + 8,*piVar1,0,iVar2);
    *piVar1 = *piVar1 + iVar2;
  }
  else {
    iVar2 = *piVar1;
    if (*(int *)(param_1 + 0x18) <= iVar2) goto LAB_1802b692d;
    puVar4 = (undefined1 *)FUN_1802b60c0(piVar1 + 8,iVar2,1);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = *(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    }
    _Dst = (void *)((longlong)*piVar1 + *(longlong *)(param_1 + 0x30));
    memmove(_Dst,(void *)((longlong)_Dst + 1),(longlong)(*(int *)(param_1 + 0x18) - *piVar1));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(undefined2 *)(param_1 + 0x73) = 0x101;
    iVar2 = FUN_1802b49e0(param_1,*piVar1,local_28,sVar3 & 0xffffffff);
    if (iVar2 == 0) goto LAB_1802b696c;
    *piVar1 = *piVar1 + iVar2;
  }
  *(undefined1 *)((longlong)piVar1 + 0x16) = 0;
LAB_1802b696c:
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0xbe99999a;
  return;
}


