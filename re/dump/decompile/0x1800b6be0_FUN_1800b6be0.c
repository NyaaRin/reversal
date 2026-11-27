// 0x1800b6be0  FUN_1800b6be0
// size=115 thunk=false
// signature: undefined FUN_1800b6be0()
// status: ok


undefined8 FUN_1800b6be0(void)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar2 = 0;
  if ((DAT_1803facf8 != '\0') && (uVar2 = 0, 2 < DAT_1803fb0dc - 1)) {
    uVar2 = FUN_1800b7350(0);
  }
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
     (fVar4 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
    fVar4 = 0.0;
  }
  fVar1 = (float)uVar2;
  if ((float)uVar2 <= fVar4) {
    fVar1 = fVar4;
  }
  if ((fVar1 <= 0.0) || (DAT_180380bb0 <= fVar1)) {
    fVar1 = 0.0;
    uVar3 = 0;
  }
  return CONCAT44(uVar3,fVar1);
}


