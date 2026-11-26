// 0x18002d030  FUN_18002d030
// size=116 thunk=false
// signature: undefined FUN_18002d030()
// status: ok


void FUN_18002d030(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    lVar1 = uVar4 * 0x408;
    uVar2 = 0;
    do {
      if (*(int *)(&DAT_1803dab20 + uVar2 * 8 + lVar1) != -1) {
        FUN_18002d8c0(param_1);
      }
      *(undefined4 *)(&DAT_1803dab20 + uVar2 * 8 + lVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_1803dab24 + uVar2 * 8 + lVar1) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x81);
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  } while ((int)uVar3 < 2);
  return;
}


