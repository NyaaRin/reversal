// 0x1802217a0  FUN_1802217a0
// size=440 thunk=false
// signature: undefined FUN_1802217a0()
// status: ok


void FUN_1802217a0(int *param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5)

{
  int *_Dst;
  int *piVar1;
  int *_Src;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *_Src_00;
  size_t _Size;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar4 = param_1;
  for (lVar6 = param_3; 0x20 < lVar6; lVar6 = lVar6 + -0x20) {
    piVar4 = (int *)FUN_180214490(piVar4,piVar4 + 0x20,param_5);
  }
  FUN_180214490(piVar4,param_2,param_5);
  piVar4 = param_4;
  piVar7 = param_1;
  lVar6 = param_3;
  if (0x20 < param_3) {
    do {
      lVar8 = lVar6 + -0x20;
      piVar1 = piVar7 + 0x20;
      lVar5 = 0x20;
      if (lVar8 < 0x20) {
        lVar5 = lVar8;
      }
      _Src = piVar1 + lVar5;
      _Src_00 = piVar1;
      do {
        while( true ) {
          _Dst = piVar4 + 1;
          iVar2 = *piVar7;
          iVar3 = *_Src_00;
          if (*(int *)(*param_5 + (longlong)iVar3 * 4) <= *(int *)(*param_5 + (longlong)iVar2 * 4))
          break;
          _Src_00 = _Src_00 + 1;
          *piVar4 = iVar3;
          piVar4 = _Dst;
          if (_Src_00 == _Src) {
            _Size = (longlong)piVar1 - (longlong)piVar7;
            _Src_00 = piVar7;
            goto LAB_180221895;
          }
        }
        piVar7 = piVar7 + 1;
        *piVar4 = iVar2;
        piVar4 = _Dst;
      } while (piVar7 != piVar1);
      _Size = (longlong)_Src - (longlong)_Src_00;
LAB_180221895:
      memmove(_Dst,_Src_00,_Size);
      piVar4 = (int *)((longlong)_Dst + _Size);
      piVar7 = _Src;
      lVar6 = lVar8 - lVar5;
    } while (0x20 < lVar8 - lVar5);
    memmove((int *)((longlong)_Dst + _Size),_Src,param_2 - (longlong)_Src);
    lVar6 = 0x40;
    FUN_180231960(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_180231960(param_1,param_2,param_4,lVar6 * 2,param_3,param_5);
        lVar6 = lVar6 * 4;
        FUN_180231960(param_4,param_4 + param_3,param_1,lVar6,param_3,param_5);
      } while (lVar6 <= (param_3 + -1) / 2);
    }
  }
  return;
}


