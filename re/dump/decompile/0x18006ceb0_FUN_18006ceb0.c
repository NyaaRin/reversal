// 0x18006ceb0  FUN_18006ceb0
// size=140 thunk=false
// signature: undefined FUN_18006ceb0()
// status: ok


bool FUN_18006ceb0(void *param_1,undefined1 *param_2)

{
  size_t sVar1;
  BOOL BVar2;
  size_t _Size;
  bool bVar3;
  
  if (param_2 == (undefined1 *)0x0) {
    bVar3 = false;
  }
  else {
    *param_2 = 0;
    if ((param_1 == (void *)0x0) || (BVar2 = IsBadReadPtr(param_1,1), BVar2 != 0)) {
      bVar3 = false;
    }
    else {
      sVar1 = 0;
      do {
        _Size = sVar1;
        if (0x7f < _Size + 1) break;
        sVar1 = _Size + 1;
      } while (*(char *)(_Size + (longlong)param_1) != '\0');
      memcpy(param_2,param_1,_Size);
      param_2[_Size] = 0;
      bVar3 = _Size != 0;
    }
  }
  return bVar3;
}


