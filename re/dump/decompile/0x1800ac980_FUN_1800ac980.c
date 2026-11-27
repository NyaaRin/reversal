// 0x1800ac980  FUN_1800ac980
// size=300 thunk=false
// signature: undefined FUN_1800ac980()
// status: ok


undefined8 FUN_1800ac980(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *_Str;
  size_t sVar3;
  longlong *local_18 [2];
  
  FUN_1800ac1d0(local_18);
  if ((local_18[0] == (longlong *)0x0) || (param_1 == 0)) {
    FUN_1800ac3b0(local_18);
    uVar2 = 0;
  }
  else {
    FUN_18001e2b0(param_1,local_18[0]);
    FUN_18002d9c0(local_18[0][1],0xffffffff,"Primary");
    cVar1 = (**(code **)(*local_18[0] + 0x138))(local_18[0],0xffffffff,5);
    if (cVar1 == '\0') {
      FUN_1800ac3b0(local_18);
      uVar2 = 0;
    }
    else {
      FUN_18002db10(local_18[0][1],0xffffffff,&DAT_18034a99c);
      cVar1 = (**(code **)(*local_18[0] + 0x138))(local_18[0],0xffffffff,4);
      if (cVar1 == '\0') {
        FUN_1800ac3b0(local_18);
        uVar2 = 0;
      }
      else {
        _Str = (char *)(**(code **)(*local_18[0] + 0xb8))(local_18[0],0xffffffff,0);
        if (_Str == (char *)0x0) {
          FUN_1800ac3b0(local_18);
          uVar2 = 0;
        }
        else {
          sVar3 = strlen(_Str);
          FUN_180212700(param_4,_Str,sVar3);
          FUN_1800ac3b0(local_18);
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}


