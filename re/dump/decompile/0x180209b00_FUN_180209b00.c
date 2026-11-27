// 0x180209b00  FUN_180209b00
// size=444 thunk=false
// signature: undefined FUN_180209b00()
// status: ok


basic_istream<char,std::char_traits<char>_> *
FUN_180209b00(basic_istream<char,std::char_traits<char>_> *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  basic_streambuf<char,std::char_traits<char>_> *this;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  basic_istream<char,std::char_traits<char>_> *pbVar9;
  longlong *plVar10;
  int iVar11;
  
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar6 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,false);
  iVar11 = 0;
  if (bVar6) {
    this = *(basic_streambuf<char,std::char_traits<char>_> **)
            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48);
    plVar3 = (longlong *)*param_2;
    bVar1 = *(byte *)(param_2 + 1);
    uVar7 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this);
    if (uVar7 != bVar1) {
      pbVar9 = (basic_istream<char,std::char_traits<char>_> *)FUN_180215840(param_1,plVar3);
      if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) ==
          (longlong *)0x0) {
        return pbVar9;
      }
      (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                  0x10))();
      return pbVar9;
    }
    bVar2 = *(byte *)((longlong)param_2 + 9);
    plVar3[2] = 0;
    plVar10 = plVar3;
    if (0xf < (ulonglong)plVar3[3]) {
      plVar10 = (longlong *)*plVar3;
    }
    *(undefined1 *)plVar10 = 0;
    while (uVar7 = std::basic_streambuf<char,std::char_traits<char>_>::snextc(this),
          uVar7 != 0xffffffff) {
      if (uVar7 == bVar2) {
        uVar7 = std::basic_streambuf<char,std::char_traits<char>_>::snextc(this);
        if (uVar7 == 0xffffffff) {
          iVar11 = 3;
          goto LAB_180209c7f;
        }
      }
      else {
        if (uVar7 == bVar1) {
          iVar8 = std::basic_streambuf<char,std::char_traits<char>_>::sbumpc(this);
          iVar11 = 0;
          if (iVar8 == -1) {
            iVar11 = 1;
          }
          goto LAB_180209c7f;
        }
        uVar7 = uVar7 & 0xff;
      }
      uVar4 = plVar3[2];
      if (uVar4 < (ulonglong)plVar3[3]) {
        plVar3[2] = uVar4 + 1;
        if ((ulonglong)plVar3[3] < 0x10) {
          *(char *)(uVar4 + (longlong)plVar3) = (char)uVar7;
          *(undefined1 *)(uVar4 + 1 + (longlong)plVar3) = 0;
        }
        else {
          lVar5 = *plVar3;
          *(char *)(uVar4 + lVar5) = (char)uVar7;
          *(undefined1 *)(uVar4 + 1 + lVar5) = 0;
        }
      }
      else {
        FUN_18021abd0(plVar3);
      }
    }
    iVar11 = 3;
  }
LAB_180209c7f:
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar11,false);
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}


