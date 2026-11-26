// 0x180068950  FUN_180068950
// size=149 thunk=false
// signature: undefined FUN_180068950()
// status: ok


undefined8 * FUN_180068950(char *param_1)

{
  size_t _Size;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  undefined8 *_Buf1;
  
  puVar2 = DAT_1803eb3d0;
  puVar1 = DAT_1803eb3c8;
  if (param_1 != (char *)0x0) {
    for (; puVar1 != puVar2; puVar1 = puVar1 + 8) {
      if (*(char *)(puVar1 + 7) == '\0') {
        sVar4 = strlen(param_1);
        _Size = puVar1[2];
        _Buf1 = puVar1;
        if (0xf < (ulonglong)puVar1[3]) {
          _Buf1 = (undefined8 *)*puVar1;
        }
        if ((_Size == sVar4) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,param_1,_Size), iVar3 == 0))))
        {
          return puVar1;
        }
      }
    }
  }
  return (undefined8 *)0x0;
}


