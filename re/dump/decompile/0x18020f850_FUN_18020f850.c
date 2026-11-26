// 0x18020f850  FUN_18020f850
// size=108 thunk=false
// signature: undefined FUN_18020f850()
// status: ok


void FUN_18020f850(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = vftable_std_std_D_DU__char_traits___basic_filebuf;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
      param_1 + 0x70)) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
  }
  if (param_1[0x7c] != (basic_streambuf<char,std::char_traits<char>_>)0x0) {
    FUN_18021ea30(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018020f8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  return;
}


