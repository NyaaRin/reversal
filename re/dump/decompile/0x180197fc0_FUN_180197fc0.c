// 0x180197fc0  FUN_180197fc0
// size=191 thunk=false
// signature: undefined FUN_180197fc0()
// status: ok


undefined8 *
FUN_180197fc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  puVar3 = &DAT_1803e7c20;
  puVar4 = param_1;
  iVar1 = _Mtx_trylock(&DAT_1803e7c20);
  if ((iVar1 == 0) && (DAT_1803e9fc8 != 0)) {
    FUN_18016d4c0(param_1,s_unknown_server_1803e9fb8);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,"unknown_server",0xe,param_4,uVar2,puVar3,iVar1 == 0,puVar4);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  _Mtx_unlock(&DAT_1803e7c20);
  return param_1;
}


