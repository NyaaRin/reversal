// 0x18020af80  FUN_18020af80
// size=300 thunk=false
// signature: undefined FUN_18020af80()
// status: ok


undefined8 FUN_18020af80(undefined8 param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *_Memory;
  
  lVar2 = DAT_180458228;
  plVar3 = DAT_180458218;
  uVar4 = (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
            0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
          0x100000001b3 & DAT_180458240;
  _Memory = *(longlong **)(DAT_180458228 + 8 + uVar4 * 0x10);
  if (_Memory == DAT_180458218) {
LAB_18020b012:
    _Memory = (longlong *)0x0;
  }
  else {
    iVar1 = (int)_Memory[2];
    while (*(int *)param_2 != iVar1) {
      if (_Memory == *(longlong **)(DAT_180458228 + uVar4 * 0x10)) goto LAB_18020b012;
      _Memory = (longlong *)_Memory[1];
      iVar1 = (int)_Memory[2];
    }
  }
  if (_Memory != (longlong *)0x0) {
    lVar5 = uVar4 * 0x10;
    if (*(longlong **)(DAT_180458228 + 8 + uVar4 * 0x10) == _Memory) {
      if (*(longlong **)(lVar5 + DAT_180458228) == _Memory) {
        *(longlong **)(lVar5 + DAT_180458228) = DAT_180458218;
        *(longlong **)(lVar2 + 8 + uVar4 * 0x10) = plVar3;
      }
      else {
        *(longlong *)(DAT_180458228 + 8 + uVar4 * 0x10) = _Memory[1];
      }
    }
    else if (*(longlong **)(lVar5 + DAT_180458228) == _Memory) {
      *(longlong *)(lVar5 + DAT_180458228) = *_Memory;
    }
    lVar2 = *_Memory;
    DAT_180458220 = DAT_180458220 + -1;
    *(longlong *)_Memory[1] = lVar2;
    *(longlong *)(lVar2 + 8) = _Memory[1];
    FUN_18020e450(_Memory + 4);
    free(_Memory);
    return 1;
  }
  return 0;
}


