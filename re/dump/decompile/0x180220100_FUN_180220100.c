// 0x180220100  FUN_180220100
// size=141 thunk=false
// signature: undefined FUN_180220100()
// status: ok


longlong FUN_180220100(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar3 = FUN_180227870(uVar3,param_3,
                          *(undefined8 *)
                           (*(longlong *)(lVar1 + 8) +
                           (*(longlong *)(lVar1 + 0x10) - 1U & uVar2) * 8));
    param_3 = param_3 + 0x98;
    uVar2 = uVar2 + 1;
  }
  FUN_180217fc0(param_3,param_3);
  return param_3;
}


