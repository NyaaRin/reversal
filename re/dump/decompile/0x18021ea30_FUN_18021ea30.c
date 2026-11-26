// 0x18021ea30  FUN_18021ea30
// size=180 thunk=false
// signature: undefined FUN_18021ea30()
// status: ok


basic_streambuf<char,std::char_traits<char>_> *
FUN_18021ea30(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  basic_streambuf<char,std::char_traits<char>_> *pbVar5;
  basic_streambuf<char,std::char_traits<char>_> *pbVar6;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    pbVar6 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  }
  else {
    if ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
        param_1 + 0x70) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      lVar2 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar2;
      **(longlong **)(param_1 + 0x38) = lVar2;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
    }
    cVar3 = FUN_18021e940(param_1);
    pbVar5 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    if (cVar3 != '\0') {
      pbVar5 = param_1;
    }
    iVar4 = fclose(*(FILE **)(param_1 + 0x80));
    pbVar6 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    if (iVar4 == 0) {
      pbVar6 = pbVar5;
    }
  }
  param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
  *(undefined8 *)(param_1 + 0x74) = DAT_180570808;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return pbVar6;
}


