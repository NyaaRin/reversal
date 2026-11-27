// 0x18006eb10  FUN_18006eb10
// size=404 thunk=false
// signature: undefined FUN_18006eb10()
// status: ok


void FUN_18006eb10(void)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  void *_Memory;
  undefined1 *puVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  void *local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined4 local_10;
  
  puVar6 = auStack_48;
  local_28 = (void *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  iVar5 = _Mtx_lock(&DAT_1803e7260);
  while (iVar5 == 0) {
    if (DAT_1803e72ac == 0x7fffffff) {
      DAT_1803e72ac = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (DAT_1805c3988 == 0) goto LAB_18006ec76;
    lVar2 = *(longlong *)(DAT_1805c3970 + (DAT_1805c3978 - 1U & DAT_1805c3980) * 8);
    FUN_18020caf0(&local_28,lVar2);
    uVar1 = *(undefined4 *)(lVar2 + 0x18);
    local_10 = uVar1;
    FUN_18006e960(*(undefined8 *)(DAT_1805c3970 + (DAT_1805c3978 - 1U & DAT_1805c3980) * 8));
    DAT_1805c3988 = DAT_1805c3988 + -1;
    if (DAT_1805c3988 == 0) {
      DAT_1805c3980 = 0;
    }
    else {
      DAT_1805c3980 = DAT_1805c3980 + 1;
    }
    _Mtx_unlock(&DAT_1803e7260);
    pvVar4 = local_28;
    FUN_18006e9c0(local_28,(int)uStack_20 - (int)local_28,uVar1);
    if (pvVar4 != (void *)0x0) {
      _Memory = pvVar4;
      if ((0xfff < (ulonglong)(local_18 - (longlong)pvVar4)) &&
         (_Memory = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) goto LAB_18006ec6f;
      free(_Memory);
    }
    local_28 = (void *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    iVar5 = _Mtx_lock(&DAT_1803e7260);
  }
  std::_Throw_Cpp_error(5);
LAB_18006ec6f:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar6 = auStack_40;
LAB_18006ec76:
  *(undefined8 *)(puVar6 + -8) = 0x18006ec7f;
  _Mtx_unlock(&DAT_1803e7260);
  return;
}


