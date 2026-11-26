// 0x180202170  FUN_180202170
// size=297 thunk=false
// signature: undefined FUN_180202170()
// status: ok


undefined8 *
FUN_180202170(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  basic_streambuf<char,std::char_traits<char>_> *this;
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  char cVar5;
  basic_streambuf<char,std::char_traits<char>_> *local_58;
  char local_50;
  undefined1 local_4f;
  undefined4 local_4e;
  undefined2 local_4a;
  basic_streambuf<char,std::char_traits<char>_> *local_48;
  char local_40;
  undefined1 local_3f;
  undefined4 local_3e;
  undefined2 local_3a;
  
  cVar5 = *(char *)(param_2 + 1);
  this = (basic_streambuf<char,std::char_traits<char>_> *)*param_2;
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)*param_3;
  cVar4 = *(char *)(param_3 + 1);
  uVar2 = *(undefined1 *)((longlong)param_3 + 9);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined1 *)((longlong)param_2 + 9);
  if (cVar5 == '\0') {
    if ((this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
       (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this), iVar3 == -1)) {
      this = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    else {
      uVar1 = (undefined1)iVar3;
    }
    cVar5 = '\x01';
  }
  if (cVar4 == '\0') {
    if ((this_00 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
       (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this_00), iVar3 == -1)) {
      this_00 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    else {
      uVar2 = (undefined1)iVar3;
    }
    cVar4 = '\x01';
  }
  if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    if (this_00 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_180202284:
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
  }
  else if (this_00 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) goto LAB_180202284;
  local_4e = *(undefined4 *)((longlong)param_3 + 10);
  local_4a = *(undefined2 *)((longlong)param_3 + 0xe);
  local_3e = *(undefined4 *)((longlong)param_2 + 10);
  local_3a = *(undefined2 *)((longlong)param_2 + 0xe);
  local_58 = this_00;
  local_50 = cVar4;
  local_4f = uVar2;
  local_48 = this;
  local_40 = cVar5;
  local_3f = uVar1;
  FUN_1802117c0(param_1,&local_48,&local_58,param_4,uVar1);
  return param_1;
}


