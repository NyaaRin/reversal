// 0x1802076a0  FUN_1802076a0
// size=660 thunk=false
// signature: undefined FUN_1802076a0()
// status: ok


basic_ostream<char,std::char_traits<char>_> *
FUN_1802076a0(basic_ostream<char,std::char_traits<char>_> *param_1,undefined8 *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  pcVar5 = (char *)*param_2;
  pcVar1 = pcVar5 + param_2[1];
  uVar8 = param_2[1] + 2;
  if (pcVar5 != pcVar1) {
    do {
      if ((*pcVar5 == *(char *)(param_2 + 2)) || (*pcVar5 == *(char *)((longlong)param_2 + 0x11))) {
        uVar8 = uVar8 + 1;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != pcVar1);
  }
  uVar2 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if (((longlong)uVar2 < 1) || (uVar2 <= uVar8)) {
    lVar7 = 0;
  }
  else {
    lVar7 = uVar2 - uVar8;
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
      bVar9 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar9 = *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) == 0;
    }
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    lVar6 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar6 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar4 == -1) {
          iVar4 = 4;
          goto LAB_1802077fc;
        }
      }
      lVar6 = *(longlong *)param_1;
    }
    iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(lVar6 + 4) + 0x48),*(char *)(param_2 + 2));
    iVar4 = 0;
    if (iVar3 == -1) {
      iVar4 = 4;
    }
LAB_1802077fc:
    for (pcVar5 = (char *)*param_2; pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
      if ((*pcVar5 == *(char *)(param_2 + 2)) || (*pcVar5 == *(char *)((longlong)param_2 + 0x11))) {
        if (iVar4 == 0) {
          iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                            (*(basic_streambuf<char,std::char_traits<char>_> **)
                              (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                             *(char *)((longlong)param_2 + 0x11));
          if (iVar3 != -1) goto LAB_180207847;
          goto LAB_1802078bb;
        }
      }
      else if (iVar4 == 0) {
LAB_180207847:
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),*pcVar5)
        ;
        if (iVar3 == -1) goto LAB_1802078bb;
      }
    }
    if (iVar4 == 0) {
      iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                         *(char *)(param_2 + 2));
      if (iVar3 == -1) {
LAB_1802078bb:
        iVar4 = 4;
      }
      else {
        for (; lVar7 != 0; lVar7 = lVar7 + -1) {
          iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                            (*(basic_streambuf<char,std::char_traits<char>_> **)
                              (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                             (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
          if (iVar3 == -1) goto LAB_1802078bb;
        }
      }
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar4 = 4;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  iVar4 = std::uncaught_exceptions();
  if (iVar4 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}


