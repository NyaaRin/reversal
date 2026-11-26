// 0x18006d8f0  FUN_18006d8f0
// size=206 thunk=false
// signature: undefined FUN_18006d8f0()
// status: ok


bool FUN_18006d8f0(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *_Buf1;
  undefined8 *puVar4;
  
  param_3[2] = 0;
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar2 = 0;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (puVar2 = (undefined8 *)FUN_18006d6f0(), puVar2 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)puVar2[1];
    for (puVar2 = (undefined8 *)*puVar2; puVar2 != puVar4; puVar2 = puVar2 + 10) {
      sVar3 = strlen(param_2);
      _Size = puVar2[2];
      _Buf1 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        _Buf1 = (undefined8 *)*puVar2;
      }
      if ((_Size == sVar3) && ((_Size == 0 || (iVar1 = memcmp(_Buf1,param_2,_Size), iVar1 == 0)))) {
        puVar4 = puVar2 + 4;
        if (param_3 != puVar4) {
          if (0xf < (ulonglong)puVar2[7]) {
            puVar4 = (undefined8 *)*puVar4;
          }
          FUN_180212700(param_3,puVar4,puVar2[6]);
        }
        return param_3[2] != 0;
      }
    }
  }
  return false;
}


