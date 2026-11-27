// 0x1800937d0  FUN_1800937d0
// size=196 thunk=false
// signature: undefined FUN_1800937d0()
// status: ok


undefined4 FUN_1800937d0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  undefined8 *_Buf2;
  
  uVar1 = param_2[3];
  puVar5 = (undefined8 *)*param_1;
  sVar2 = param_2[2];
  puVar6 = param_2;
  if (0xf < uVar1) {
    puVar6 = (undefined8 *)*param_2;
  }
  sVar3 = puVar5[2];
  if (0xf < (ulonglong)puVar5[3]) {
    puVar5 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == sVar2) && ((sVar3 == 0 || (iVar4 = memcmp(puVar5,puVar6,sVar3), iVar4 == 0)))) {
    return 1;
  }
  puVar5 = (undefined8 *)((undefined8 *)param_1[1])[1];
  puVar6 = *(undefined8 **)param_1[1];
  while( true ) {
    if (puVar6 == puVar5) {
      return 0;
    }
    _Buf2 = param_2;
    if (0xf < uVar1) {
      _Buf2 = (undefined8 *)*param_2;
    }
    sVar3 = puVar6[2];
    _Buf1 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      _Buf1 = (undefined8 *)*puVar6;
    }
    if ((sVar3 == sVar2) && ((sVar3 == 0 || (iVar4 = memcmp(_Buf1,_Buf2,sVar3), iVar4 == 0))))
    break;
    puVar6 = puVar6 + 4;
  }
  if (puVar6 == puVar5) {
    return 0;
  }
  return 1;
}


