// 0x1800bd320  FUN_1800bd320
// size=180 thunk=false
// signature: undefined FUN_1800bd320()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1800bd320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77,param_3,param_4,0);
  uVar1 = FUN_180241610(uVar1,0x2e7b87382f9b768);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  if (*piVar2 == 1) {
    return 0xffffffff;
  }
  if (*piVar2 != 2) {
    if (DAT_1803fa608 != 0) {
      iVar3 = *(int *)(DAT_1803fa608 + 0x20);
    }
    if (0xb < iVar3 - _DAT_180426190) {
      DAT_1803feb74 = DAT_1803feb74 == '\0';
      _DAT_180426190 = iVar3;
    }
    uVar1 = 0xffffffff;
    if (DAT_1803feb74 != '\0') {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 1;
}


