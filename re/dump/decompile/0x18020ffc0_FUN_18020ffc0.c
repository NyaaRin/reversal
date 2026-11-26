// 0x18020ffc0  FUN_18020ffc0
// size=193 thunk=false
// signature: undefined FUN_18020ffc0()
// status: ok


void FUN_18020ffc0(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  basic_streambuf<char,std::char_traits<char>_> *local_18;
  
  *(undefined ***)param_1 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
  local_18 = param_1;
  if (((byte)param_1[0x70] & 1) != 0) {
    if (**(longlong **)(param_1 + 0x40) == 0) {
      lVar3 = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
    }
    else {
      lVar3 = (longlong)**(int **)(param_1 + 0x58) + **(longlong **)(param_1 + 0x40);
    }
    pvVar1 = (void *)**(longlong **)(param_1 + 0x18);
    _Memory = pvVar1;
    puVar4 = auStack_38;
    if ((0xfff < (ulonglong)(lVar3 - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar4 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar4 = auStack_30;
    }
    *(undefined8 *)(puVar4 + -8) = 0x180210040;
    free(_Memory);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x00018021007a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  return;
}


