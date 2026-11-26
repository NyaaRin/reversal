// 0x180119590  FUN_180119590
// size=193 thunk=false
// signature: undefined FUN_180119590()
// status: ok


char FUN_180119590(void)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar3 = FUN_180116900(lVar2 + 0xfc8);
  if (cVar3 != '\0') {
    cVar3 = FUN_180116900(lVar2 + 0xfc8);
    if (cVar3 != '\0') {
      piVar1 = (int *)(lVar2 + 0xfd0);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined8 *)(lVar2 + 0xfe0) = 0;
      }
      cVar4 = '\x01';
    }
  }
  cVar3 = FUN_180116900(lVar2 + 0xfe8);
  if (cVar3 != '\0') {
    cVar3 = FUN_180116900(lVar2 + 0xfe8);
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        return '\0';
      }
    }
    else {
      piVar1 = (int *)(lVar2 + 0xff0);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined8 *)(lVar2 + 0x1000) = 0;
      }
    }
    return '\x01';
  }
  return cVar4;
}


