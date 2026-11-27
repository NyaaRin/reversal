// 0x180122350  FUN_180122350
// size=239 thunk=false
// signature: undefined FUN_180122350()
// status: ok


undefined8 * FUN_180122350(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar4 = DAT_1803eb380;
  puVar8 = DAT_1803eb378;
  if (DAT_1803eb378 != DAT_1803eb380) {
    uVar2 = param_1[3];
    sVar3 = param_1[2];
    puVar9 = DAT_1803eb378;
    do {
      _Buf2 = param_1;
      if (0xf < uVar2) {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = puVar9[2];
      _Buf1 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        _Buf1 = (undefined8 *)*puVar9;
      }
      if ((_Size == sVar3) && ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) {
        return puVar9;
      }
      puVar9 = puVar9 + 0xe;
    } while (puVar9 != puVar4);
    do {
      puVar9 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar9 = (undefined8 *)*puVar8;
      }
      if ((((puVar8[2] != 0) &&
           (lVar1 = puVar8[2] + (longlong)puVar9, lVar7 = thunk_FUN_1802d5c20(puVar9,lVar1,0x2a),
           lVar7 != lVar1)) && (lVar7 - (longlong)puVar9 != -1)) &&
         (cVar5 = FUN_180121f30(puVar8,param_1), cVar5 != '\0')) {
        return puVar8;
      }
      puVar8 = puVar8 + 0xe;
    } while (puVar8 != puVar4);
  }
  return (undefined8 *)0x0;
}


