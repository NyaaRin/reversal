// 0x1801fc280  FUN_1801fc280
// size=432 thunk=false
// signature: undefined FUN_1801fc280()
// status: ok


basic_ostream<char,std::char_traits<char>_> *
FUN_1801fc280(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = 0;
  sVar3 = strlen(param_2);
  lVar6 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if ((lVar6 < 1) || (lVar6 <= (longlong)sVar3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 - sVar3;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  if (*(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) == 0) {
    this = *(basic_ostream<char,std::char_traits<char>_> **)
            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar7 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar7 = *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) == 0;
    }
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    lVar5 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar1 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar1 == -1) goto LAB_1801fc3c3;
      }
      lVar5 = *(longlong *)param_1;
    }
    sVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(lVar5 + 4) + 0x48),param_2,sVar3);
    if (sVar4 == sVar3) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar1 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar1 == -1) goto LAB_1801fc3c3;
      }
    }
    else {
LAB_1801fc3c3:
      iVar2 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar2 = 4;
  }
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


