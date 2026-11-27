// 0x18014bba0  FUN_18014bba0
// size=108 thunk=false
// signature: undefined FUN_18014bba0()
// status: ok


undefined8 *
FUN_18014bba0(undefined8 *param_1,longlong *param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*param_3 < 0xc) || (uVar1 = param_3[2], uVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    lVar2 = *param_2;
    uVar3 = param_3[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,lVar2 + uVar3,uVar1,param_4,0);
  }
  return param_1;
}


