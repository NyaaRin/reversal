// 0x180128ae0  FUN_180128ae0
// size=144 thunk=false
// signature: undefined FUN_180128ae0()
// status: ok


ulonglong FUN_180128ae0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  
  uVar2 = 0;
  if (param_1[2] != 0) {
    do {
      cVar1 = *(char *)(param_2 + uVar2);
      if (cVar1 == '\0') {
LAB_180128b63:
        return uVar2 & 0xffffffffffffff00;
      }
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      cVar4 = *(char *)((longlong)puVar3 + uVar2);
      cVar5 = cVar4 + ' ';
      if (0x19 < (byte)(cVar4 + 0xbfU)) {
        cVar5 = cVar4;
      }
      cVar4 = cVar1 + ' ';
      if (0x19 < (byte)(cVar1 + 0xbfU)) {
        cVar4 = cVar1;
      }
      if (cVar5 != cVar4) goto LAB_180128b63;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_1[2]);
  }
  return CONCAT71((int7)(uVar2 >> 8),*(char *)(uVar2 + param_2) == '\0');
}


