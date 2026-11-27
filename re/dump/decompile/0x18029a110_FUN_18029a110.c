// 0x18029a110  FUN_18029a110
// size=252 thunk=false
// signature: undefined FUN_18029a110()
// status: ok


void FUN_18029a110(longlong param_1,undefined8 *param_2,longlong param_3)

{
  short sVar1;
  char cVar2;
  short *psVar3;
  short local_28 [4];
  short local_20 [4];
  
  if (*(char *)(param_3 + 0x35) == '\0') {
    if (param_2[1] != 0) {
      FUN_18029af20();
    }
    *(undefined1 *)((longlong)param_2 + 0x34) = 0;
    *param_2 = 0;
    param_2[1] = param_1;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  local_20[0] = *(short *)((longlong)param_2 + 0x32);
  local_20[1] = -3;
  local_20[2] = 0x3f;
  local_20[3] = 0x20;
  if (*(short *)((longlong)param_2 + 0x32) == 0) {
    psVar3 = local_20;
    do {
      sVar1 = *psVar3;
      if ((sVar1 != 0) && (cVar2 = FUN_18029da90(param_2,sVar1), cVar2 != '\0')) {
        *(short *)((longlong)param_2 + 0x32) = sVar1;
        break;
      }
      psVar3 = psVar3 + 1;
    } while (psVar3 != (short *)&stack0xffffffffffffffe8);
  }
  local_28[0] = *(short *)(param_3 + 0x3a);
  local_28[1] = 0x2026;
  local_28[2] = 0x85;
  if (*(short *)(param_2 + 6) == 0) {
    psVar3 = local_28;
    do {
      sVar1 = *psVar3;
      if ((sVar1 != 0) && (cVar2 = FUN_18029da90(param_2,sVar1), cVar2 != '\0')) {
        *(short *)(param_2 + 6) = sVar1;
        break;
      }
      psVar3 = psVar3 + 1;
    } while (psVar3 != local_28 + 3);
  }
  if (*(short *)(param_2 + 6) == 0) {
    *(undefined2 *)(param_2 + 6) = 0x85;
    *(undefined1 *)((longlong)param_2 + 0x35) = 1;
  }
  return;
}


