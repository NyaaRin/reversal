// 0x1800c69c0  FUN_1800c69c0
// size=230 thunk=false
// signature: undefined FUN_1800c69c0()
// status: ok


ulonglong FUN_1800c69c0(undefined4 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  float fVar7;
  
  iVar5 = *(int *)(param_2 + 0x1854);
  if (0 < iVar5) {
    in_RAX = FUN_1800c64b0();
    iVar5 = (int)in_RAX + iVar5;
    if (0 < iVar5) {
      iVar2 = FUN_1800c6790();
      iVar3 = iVar2;
      if (((DAT_1803fa608 != 0) && (0.0 < *(double *)(DAT_1803fa608 + 0x28))) &&
         (cVar1 = FUN_1800b8200(), cVar1 == '\0')) {
        if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
           (fVar7 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
          fVar7 = 0.0;
        }
        if (fVar7 <= DAT_180380964) {
          dVar6 = floor(DAT_180380c60 / *(double *)(DAT_1803fa608 + 0x28));
          iVar3 = (int)dVar6;
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          if (iVar2 < iVar3) {
            iVar3 = iVar2;
          }
        }
      }
      uVar4 = FUN_1800c6930(param_1,iVar5,iVar3);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


