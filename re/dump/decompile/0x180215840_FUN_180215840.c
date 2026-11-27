// 0x180215840  FUN_180215840
// size=498 thunk=false
// signature: undefined FUN_180215840()
// status: ok


basic_istream<char,std::char_traits<char>_> *
FUN_180215840(basic_istream<char,std::char_traits<char>_> *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *local_30;
  
  bVar3 = false;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar4 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,false);
  uVar10 = 0;
  if (bVar4) {
    uVar6 = std::ios_base::getloc((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    lVar7 = FUN_1801fbf10(uVar6);
    if ((local_30 != (longlong *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)(*local_30 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
    param_2[2] = 0;
    plVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar9 = (longlong *)*param_2;
    }
    *(undefined1 *)plVar9 = 0;
    uVar11 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
    if (((longlong)uVar11 < 1) || (0x7ffffffffffffffe < uVar11)) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    for (; uVar10 = 0, uVar11 != 0; uVar11 = uVar11 - 1) {
      if (uVar5 == 0xffffffff) {
        uVar10 = 1;
        break;
      }
      uVar10 = 0;
      if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)(uVar5 & 0xff) * 2) & 0x48) != 0)
      break;
      uVar1 = param_2[2];
      if (uVar1 < (ulonglong)param_2[3]) {
        param_2[2] = uVar1 + 1;
        if ((ulonglong)param_2[3] < 0x10) {
          *(char *)(uVar1 + (longlong)param_2) = (char)uVar5;
          *(undefined1 *)(uVar1 + 1 + (longlong)param_2) = 0;
        }
        else {
          lVar2 = *param_2;
          *(char *)(uVar1 + lVar2) = (char)uVar5;
          *(undefined1 *)(uVar1 + 1 + lVar2) = 0;
        }
      }
      else {
        FUN_18021abd0(param_2);
      }
      bVar3 = true;
      uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  if (!bVar3) {
    uVar10 = uVar10 | 2;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),uVar10,false);
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}


