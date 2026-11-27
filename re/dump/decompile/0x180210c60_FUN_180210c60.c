// 0x180210c60  FUN_180210c60
// size=436 thunk=false
// signature: undefined FUN_180210c60()
// status: ok


basic_ostream<char,std::char_traits<char>_> *
FUN_180210c60(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2,ulonglong param_3)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar2 = 0;
  uVar3 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if (((longlong)uVar3 < 1) || (uVar3 <= param_3)) {
    lVar5 = 0;
  }
  else {
    lVar5 = uVar3 - param_3;
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
    lVar4 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; lVar5 != 0; lVar5 = lVar5 + -1) {
        iVar1 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar1 == -1) {
          iVar2 = 4;
          goto LAB_180210d50;
        }
      }
      lVar4 = *(longlong *)param_1;
    }
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(lVar4 + 4) + 0x48),param_2,param_3);
    if (uVar3 == param_3) {
LAB_180210d50:
      do {
        if (lVar5 == 0) goto LAB_180210d78;
        iVar1 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar1 == -1) break;
        lVar5 = lVar5 + -1;
      } while( true );
    }
    iVar2 = 4;
LAB_180210d78:
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


