// 0x1800952f0  FUN_1800952f0
// size=328 thunk=false
// signature: undefined FUN_1800952f0()
// status: ok


undefined8 *
FUN_1800952f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  size_t sVar1;
  ulonglong uVar2;
  size_t _Size;
  size_t _Size_00;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  
  uVar9 = 0;
  puVar10 = param_1;
  puVar5 = (undefined8 *)FUN_180095180();
  puVar3 = DAT_1803edd00;
  _Size_00 = DAT_1803e9f88;
  puVar8 = (undefined8 *)*puVar5;
  puVar5 = (undefined8 *)puVar5[1];
  while( true ) {
    if (puVar8 == puVar5) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_18001d080(param_1,"homigrad_base",0xd,param_4,uVar9,puVar10);
      return param_1;
    }
    sVar1 = puVar8[2];
    uVar2 = puVar8[3];
    puVar7 = puVar8;
    if (0xf < uVar2) {
      puVar7 = (undefined8 *)*puVar8;
    }
    puVar6 = &DAT_1803e9f78;
    if (0xf < DAT_1803e9f90) {
      puVar6 = DAT_1803e9f78;
    }
    if ((_Size_00 == sVar1) &&
       ((_Size_00 == 0 || (iVar4 = memcmp(puVar6,puVar7,_Size_00), iVar4 == 0)))) break;
    puVar7 = DAT_1803edcf8;
    if (DAT_1803edcf8 != puVar3) {
      do {
        puVar6 = puVar8;
        if (0xf < uVar2) {
          puVar6 = (undefined8 *)*puVar8;
        }
        _Size = puVar7[2];
        _Buf1 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          _Buf1 = (undefined8 *)*puVar7;
        }
      } while (((_Size != sVar1) ||
               ((_Size != 0 && (iVar4 = memcmp(_Buf1,puVar6,_Size), iVar4 != 0)))) &&
              (puVar7 = puVar7 + 4, puVar7 != puVar3));
      if (puVar7 != puVar3) break;
    }
    puVar8 = puVar8 + 4;
  }
  FUN_18016d4c0(param_1,puVar8);
  return param_1;
}


