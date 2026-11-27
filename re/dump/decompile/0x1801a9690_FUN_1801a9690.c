// 0x1801a9690  FUN_1801a9690
// size=158 thunk=false
// signature: undefined FUN_1801a9690()
// status: ok


void FUN_1801a9690(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  int iVar6;
  int iVar7;
  
  lVar3 = DAT_1803fcc98;
  iVar7 = (int)(DAT_1803fcca0 - DAT_1803fcc98 >> 5);
  iVar4 = DAT_1803dc960;
  if (0 < iVar7) {
    iVar6 = 0;
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    do {
      _Buf1 = (undefined8 *)((longlong)iVar6 * 0x20 + lVar3);
      _Buf2 = param_1;
      if (0xf < uVar1) {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
    } while (((_Size != sVar2) ||
             ((iVar4 = iVar6, _Size != 0 && (iVar5 = memcmp(_Buf1,_Buf2,_Size), iVar5 != 0)))) &&
            (iVar6 = iVar6 + 1, iVar4 = DAT_1803dc960, iVar6 < iVar7));
  }
  DAT_1803dc960 = iVar4;
  return;
}


