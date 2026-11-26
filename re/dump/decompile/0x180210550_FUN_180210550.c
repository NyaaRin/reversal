// 0x180210550  FUN_180210550
// size=353 thunk=false
// signature: undefined FUN_180210550()
// status: ok


basic_istream<char,std::char_traits<char>_> *
FUN_180210550(basic_istream<char,std::char_traits<char>_> *param_1,undefined8 *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  bVar1 = false;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar2 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,true);
  if (bVar2) {
    param_2[2] = 0;
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar4 = 0;
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    while (uVar3 != 0xffffffff) {
      if (uVar3 == (param_3 & 0xff)) {
        bVar1 = true;
        std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                  (*(basic_streambuf<char,std::char_traits<char>_> **)
                    (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
        goto LAB_180210634;
      }
      if (0x7ffffffffffffffe < (ulonglong)param_2[2]) {
        uVar5 = 2;
        goto LAB_180210634;
      }
      FUN_18020e800(param_2,uVar3 & 0xff);
      bVar1 = true;
      uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    }
    uVar5 = 1;
LAB_180210634:
    if (bVar1) goto LAB_180210678;
  }
  uVar5 = uVar5 | 2;
LAB_180210678:
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),uVar5,false);
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}


