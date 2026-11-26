// 0x18020b4e0  FUN_18020b4e0
// size=292 thunk=false
// signature: undefined FUN_18020b4e0()
// status: ok


undefined8 FUN_18020b4e0(undefined8 param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *_Memory;
  
  lVar2 = DAT_1805c39a8;
  plVar3 = DAT_1805c3998;
  uVar4 = (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
            0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
          0x100000001b3 & DAT_1805c39c0;
  _Memory = *(longlong **)(DAT_1805c39a8 + 8 + uVar4 * 0x10);
  if (_Memory == DAT_1805c3998) {
LAB_18020b572:
    _Memory = (longlong *)0x0;
  }
  else {
    iVar1 = (int)_Memory[2];
    while (*(int *)param_2 != iVar1) {
      if (_Memory == *(longlong **)(DAT_1805c39a8 + uVar4 * 0x10)) goto LAB_18020b572;
      _Memory = (longlong *)_Memory[1];
      iVar1 = (int)_Memory[2];
    }
  }
  if (_Memory != (longlong *)0x0) {
    lVar5 = uVar4 * 0x10;
    if (*(longlong **)(DAT_1805c39a8 + 8 + uVar4 * 0x10) == _Memory) {
      if (*(longlong **)(lVar5 + DAT_1805c39a8) == _Memory) {
        *(longlong **)(lVar5 + DAT_1805c39a8) = DAT_1805c3998;
        *(longlong **)(lVar2 + 8 + uVar4 * 0x10) = plVar3;
      }
      else {
        *(longlong *)(DAT_1805c39a8 + 8 + uVar4 * 0x10) = _Memory[1];
      }
    }
    else if (*(longlong **)(lVar5 + DAT_1805c39a8) == _Memory) {
      *(longlong *)(lVar5 + DAT_1805c39a8) = *_Memory;
    }
    lVar2 = *_Memory;
    DAT_1805c39a0 = DAT_1805c39a0 + -1;
    *(longlong *)_Memory[1] = lVar2;
    *(longlong *)(lVar2 + 8) = _Memory[1];
    FUN_18020e450();
    free(_Memory);
    return 1;
  }
  return 0;
}


