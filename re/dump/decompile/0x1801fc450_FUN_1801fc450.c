// 0x1801fc450  FUN_1801fc450
// size=441 thunk=false
// signature: undefined FUN_1801fc450()
// status: ok


basic_ostream<char,std::char_traits<char>_> *
FUN_1801fc450(basic_ostream<char,std::char_traits<char>_> *param_1,char param_2)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = 0;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  if (*(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) == 0) {
    this = *(basic_ostream<char,std::char_traits<char>_> **)
            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar6 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar6 = *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) == 0;
    }
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    lVar4 = 0;
    if (1 < *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28)) {
      lVar4 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) + -1;
    }
    lVar3 = *(longlong *)param_1;
    iVar5 = 4;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x18) & 0x1c0) == 0x40) {
LAB_1801fc551:
      iVar1 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x48),param_2);
      if (iVar1 == -1) {
        iVar2 = iVar5;
      }
      for (; (iVar2 == 0 && (0 < lVar4)); lVar4 = lVar4 + -1) {
        iVar1 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar1 == -1) {
          iVar2 = iVar5;
        }
      }
    }
    else {
      while (iVar2 == 0) {
        if (lVar4 < 1) {
          lVar3 = *(longlong *)param_1;
          goto LAB_1801fc551;
        }
        iVar1 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar1 == -1) {
          iVar2 = iVar5;
        }
        lVar4 = lVar4 + -1;
      }
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar2,false);
  iVar2 = std::uncaught_exceptions();
  if (iVar2 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}


