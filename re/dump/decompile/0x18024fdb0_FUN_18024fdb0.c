// 0x18024fdb0  FUN_18024fdb0
// size=212 thunk=false
// signature: undefined FUN_18024fdb0()
// status: ok


void FUN_18024fdb0(longlong param_1,undefined4 *param_2,char param_3)

{
  void *_Src;
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  void *_Dst;
  
  _Src = *(void **)(param_1 + 0xf0);
  while (_Dst = _Src, _Dst < *(void **)(param_1 + 0xf8)) {
    _Src = (void *)((longlong)_Dst + 0x30);
    if (*(char *)((longlong)_Dst + 0x20) == '\0') {
      memmove(_Dst,_Src,(longlong)*(void **)(param_1 + 0xf8) - (longlong)_Src);
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + -0x30;
      _Src = _Dst;
    }
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
  lVar2 = *(longlong *)(param_1 + 0xf0);
  uVar3 = *(ulonglong *)(param_1 + 0x110);
  uVar8 = (*(longlong *)(param_1 + 0xf8) - lVar2 >> 4) * -0x5555555555555555;
  if (uVar8 < uVar3 || uVar8 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar1 = (undefined4 *)(lVar2 + 0x10 + uVar3 * 0x30);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if (param_3 == '\0') {
    puVar1 = (undefined4 *)(lVar2 + uVar3 * 0x30);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  *(undefined1 *)(lVar2 + 0x22 + uVar3 * 0x30) = 1;
  FUN_18024f370(param_1);
  *(undefined1 *)(param_1 + 0x7fa) = 0;
  return;
}


