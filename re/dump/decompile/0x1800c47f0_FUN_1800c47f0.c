// 0x1800c47f0  FUN_1800c47f0
// size=258 thunk=false
// signature: undefined FUN_1800c47f0()
// status: ok


void FUN_1800c47f0(ulonglong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *_Memory;
  ulonglong uVar7;
  
  lVar4 = DAT_1803fa7c8;
  plVar5 = DAT_1803fa7b8;
  iVar6 = (int)param_1;
  uVar7 = ((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)(iVar6 >> 8 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(iVar6 >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)(iVar6 >> 0x18 & 0xff)) * 0x100000001b3 & DAT_1803fa7e0;
  _Memory = *(longlong **)(DAT_1803fa7c8 + 8 + uVar7 * 0x10);
  if (_Memory == DAT_1803fa7b8) {
LAB_1800c4888:
    _Memory = (longlong *)0x0;
  }
  else {
    iVar2 = (int)_Memory[2];
    while (iVar6 != iVar2) {
      if (_Memory == *(longlong **)(DAT_1803fa7c8 + uVar7 * 0x10)) goto LAB_1800c4888;
      _Memory = (longlong *)_Memory[1];
      iVar2 = (int)_Memory[2];
    }
  }
  if (_Memory != (longlong *)0x0) {
    plVar1 = (longlong *)(uVar7 * 0x10 + DAT_1803fa7c8);
    plVar3 = *(longlong **)(uVar7 * 0x10 + DAT_1803fa7c8);
    if (*(longlong **)(DAT_1803fa7c8 + 8 + uVar7 * 0x10) == _Memory) {
      if (plVar3 == _Memory) {
        *plVar1 = (longlong)DAT_1803fa7b8;
        *(longlong **)(lVar4 + 8 + uVar7 * 0x10) = plVar5;
      }
      else {
        *(longlong *)(DAT_1803fa7c8 + 8 + uVar7 * 0x10) = _Memory[1];
      }
    }
    else if (plVar3 == _Memory) {
      *plVar1 = *_Memory;
    }
    lVar4 = *_Memory;
    DAT_1803fa7c0 = DAT_1803fa7c0 + -1;
    *(longlong *)_Memory[1] = lVar4;
    *(longlong *)(lVar4 + 8) = _Memory[1];
    free(_Memory);
    return;
  }
  return;
}


