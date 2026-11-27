// 0x180268db0  FUN_180268db0
// size=171 thunk=false
// signature: undefined FUN_180268db0()
// status: ok


undefined8 FUN_180268db0(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = (byte)param_3;
  if (param_3 < 0x80) {
    *param_1 = bVar1;
    return 1;
  }
  if (param_3 < 0x800) {
    *param_1 = (char)(param_3 >> 6) - 0x40;
    param_1[1] = (bVar1 & 0x3f) + 0x80;
    return 2;
  }
  if (param_3 < 0x10000) {
    *param_1 = (char)(param_3 >> 0xc) - 0x20;
    param_1[1] = ((byte)(param_3 >> 6) & 0x3f) + 0x80;
    param_1[2] = (bVar1 & 0x3f) + 0x80;
    return 3;
  }
  if (param_3 < 0x110000) {
    *param_1 = (char)(param_3 >> 0x12) - 0x10;
    param_1[1] = ((byte)(param_3 >> 0xc) & 0x3f) + 0x80;
    param_1[2] = ((byte)(param_3 >> 6) & 0x3f) + 0x80;
    param_1[3] = (bVar1 & 0x3f) + 0x80;
    return 4;
  }
  return 0;
}


