// 0x18001bbe0  CUtlCharConversion_vfunc00
// size=124 thunk=false
// signature: undefined CUtlCharConversion_vfunc00()
// status: ok


ulonglong CUtlCharConversion_vfunc00(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar5 = (ulonglong)*(byte *)(uVar4 + 0x24 + param_1);
      iVar2 = strcmp(param_2,*(char **)(param_1 + (uVar5 + 0x13) * 0x10));
      in_RAX = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) {
        *param_3 = *(undefined4 *)(param_1 + 0x128 + uVar5 * 0x10);
        return (ulonglong)*(byte *)(uVar4 + 0x24 + param_1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar1);
  }
  *param_3 = 0;
  return in_RAX & 0xffffffffffffff00;
}


