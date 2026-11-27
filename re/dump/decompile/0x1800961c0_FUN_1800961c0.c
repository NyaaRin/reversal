// 0x1800961c0  FUN_1800961c0
// size=189 thunk=false
// signature: undefined FUN_1800961c0()
// status: ok


ulonglong FUN_1800961c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  float *pfVar3;
  ulonglong uVar4;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  pfVar3 = (float *)(*pcVar1)(DAT_1803fa360,uVar2);
  if ((DAT_18040a208 != '\0') && (pfVar3 != (float *)0x0)) {
    pfVar3 = (float *)FUN_18001dbf0(pfVar3);
    if ((pfVar3 == DAT_180409ff8) && (pfVar3 = DAT_1803fa608, DAT_1803fa608 != (float *)0x0)) {
      if ((DAT_1803e87d8 <= (double)*DAT_1803fa608) &&
         ((double)*DAT_1803fa608 - DAT_1803e87d8 <= DAT_180380c48)) {
        uVar4 = FUN_180094690(&DAT_1803e9d20,param_1,param_2,param_3,param_4);
        return uVar4;
      }
    }
  }
  return (ulonglong)pfVar3 & 0xffffffffffffff00;
}


