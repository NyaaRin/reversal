// 0x18020e2c0  std_D_?$collate_vfunc04
// size=303 thunk=false
// signature: undefined std_D_?$collate_vfunc04()
// status: ok


longlong * std_D___collate_vfunc04(longlong param_1,longlong *param_2,char *param_3,char *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong _Size;
  _Collvec *in_stack_ffffffffffffffa8;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  sVar4 = (longlong)param_4 - (longlong)param_3;
  uVar3 = param_2[2];
  if (uVar3 < sVar4) {
    do {
      if (uVar3 < sVar4) {
        _Size = sVar4 - uVar3;
        uVar1 = param_2[3];
        if (uVar1 - uVar3 < _Size) {
          FUN_18022a720(param_2,_Size,uVar1,_Size,
                        (ulonglong)in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
        }
        else {
          param_2[2] = sVar4;
          plVar2 = param_2;
          if (0xf < uVar1) {
            plVar2 = (longlong *)*param_2;
          }
          memset((undefined1 *)((longlong)plVar2 + uVar3),0,_Size);
          ((undefined1 *)((longlong)plVar2 + uVar3))[_Size] = 0;
        }
      }
      else {
        param_2[2] = sVar4;
        if ((ulonglong)param_2[3] < 0x10) {
          *(undefined1 *)((longlong)param_2 + sVar4) = 0;
        }
        else {
          *(undefined1 *)(*param_2 + sVar4) = 0;
        }
      }
      plVar2 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        plVar2 = (longlong *)*param_2;
      }
      in_stack_ffffffffffffffa8 = (_Collvec *)(param_1 + 0x10);
      sVar4 = _Strxfrm((char *)plVar2,(char *)(param_2[2] + (longlong)plVar2),param_3,param_4,
                       (_Collvec *)(param_1 + 0x10));
      if (sVar4 == 0xffffffffffffffff) {
        sVar4 = 0;
        break;
      }
      uVar3 = param_2[2];
    } while (uVar3 < sVar4);
  }
  FUN_18020e770(param_2,sVar4);
  return param_2;
}


