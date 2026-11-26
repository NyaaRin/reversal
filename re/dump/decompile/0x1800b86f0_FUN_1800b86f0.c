// 0x1800b86f0  FUN_1800b86f0
// size=73 thunk=false
// signature: undefined FUN_1800b86f0()
// status: ok


ulonglong FUN_1800b86f0(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  if (DAT_180409cb4 == '\0') {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0x5b93262b0c9c00e0);
    pbVar2 = (byte *)FUN_1801fcfc0(uVar1);
    uVar3 = (ulonglong)*pbVar2;
  }
  return uVar3;
}


