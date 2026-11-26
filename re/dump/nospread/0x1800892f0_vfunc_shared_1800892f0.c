// 1800892f0  vfunc_shared_1800892f0
// signature: undefined vfunc_shared_1800892f0()
// status: ok


void vfunc_shared_1800892f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if ((((DAT_1803fa608 != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
      (DAT_1803f9290 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*DAT_1803f9290 + 0x78))(), cVar1 != '\0')) {
    iVar2 = *(int *)(DAT_1803fa608 + 0x20) - *(int *)(param_1 + 0x58);
    if (((iVar2 == 0) || (*(char *)(param_1 + 0x5c) == '\0')) || (8 < iVar2 + 4U)) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      return;
    }
    if (iVar2 != *(int *)(param_1 + 0x50)) {
      *(int *)(param_1 + 0x50) = iVar2;
      *(undefined4 *)(param_1 + 0x54) = 1;
      return;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if (1 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
      *(undefined8 *)(param_1 + 0x50) = 0;
      FUN_180014410("[ARC9-NS] lua tick offset calibrated: now %d (measured %+d)\n",
                    *(undefined4 *)(param_1 + 0x4c),iVar2);
      return;
    }
  }
  return;
}


