// 0x180116900  FUN_180116900
// size=109 thunk=false
// signature: undefined FUN_180116900()
// status: ok


ulonglong FUN_180116900(uint *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong in_RAX;
  ULONGLONG UVar3;
  ulonglong uVar4;
  
  if (param_1[2] == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  cVar2 = FUN_180114310(*(undefined8 *)(param_1 + 6));
  if (cVar2 != '\0') {
    if (DAT_1803fa608 == 0) {
      lVar1 = *(longlong *)(param_1 + 4);
      UVar3 = GetTickCount64();
      uVar4 = UVar3 - lVar1;
      if (uVar4 < 0xfb) goto LAB_180116965;
    }
    else {
      uVar4 = (ulonglong)*(uint *)(DAT_1803fa608 + 4);
      if (*param_1 == *(uint *)(DAT_1803fa608 + 4)) {
LAB_180116965:
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return 0;
}


