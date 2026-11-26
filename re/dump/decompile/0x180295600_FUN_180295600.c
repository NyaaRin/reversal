// 0x180295600  FUN_180295600
// size=115 thunk=false
// signature: undefined FUN_180295600()
// status: ok


void FUN_180295600(longlong param_1,undefined8 param_2,uint param_3,char *param_4,char *param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((((param_3 & 0xff000000) != 0) && (param_4 != param_5)) && (*param_4 != '\0')) {
    local_18 = *(undefined4 *)(param_1 + 0x60);
    uStack_14 = *(undefined4 *)(param_1 + 100);
    uStack_10 = *(undefined4 *)(param_1 + 0x68);
    uStack_c = *(undefined4 *)(param_1 + 0x6c);
    FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),param_2,param_3,&local_18,
                  param_4,param_5,0,0);
  }
  return;
}


