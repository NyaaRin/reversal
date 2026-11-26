// 0x1800faa70  FUN_1800faa70
// size=165 thunk=false
// signature: undefined FUN_1800faa70()
// status: ok


int FUN_1800faa70(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  longlong lVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  int iVar5;
  int iVar6;
  
  lVar3 = DAT_1803e9c20;
  iVar6 = (int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333;
  if (0 < iVar6) {
    uVar1 = param_1[3];
    iVar5 = 0;
    sVar2 = param_1[2];
    do {
      _Buf1 = (undefined8 *)((longlong)iVar5 * 0x50 + lVar3);
      _Buf2 = param_1;
      if (0xf < uVar1) {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((_Size == sVar2) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  return -1;
}


