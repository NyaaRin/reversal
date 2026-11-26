// 0x180072260  FUN_180072260
// size=315 thunk=false
// signature: undefined FUN_180072260()
// status: ok


void FUN_180072260(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18 [4];
  
  pcVar4 = DAT_180423978;
  local_20 = FUN_180071bf0();
  if (pcVar4 == (code *)0x0) {
    if (DAT_180423964 == '\0') {
      local_18[0] = 0.9;
      pfVar3 = &local_1c;
      local_1c = 0.0;
      if (0.0 <= DAT_180423980) {
        pfVar3 = &DAT_180423980;
      }
      pfVar2 = local_18;
      if (DAT_180423980 <= DAT_180380b68) {
        pfVar2 = pfVar3;
      }
      local_28 = (DAT_180380bb0 - *pfVar2) * *param_2;
      local_24 = param_2[1];
    }
    else {
      local_28 = *param_2;
      local_24 = param_2[1];
      local_20 = 0;
    }
    FUN_1800720d0(param_1,&local_28);
  }
  else {
    local_28 = *param_2;
    local_24 = param_2[1];
    cVar1 = (*pcVar4)(param_1,&local_28,param_5,param_6);
    if (cVar1 == '\0') {
      *param_5 = 0x7149f2ca;
      param_5[1] = 0x7149f2ca;
      param_5[2] = 0x7149f2ca;
      *param_6 = 0;
      *(undefined4 *)(param_6 + 1) = 0;
      return;
    }
  }
  return;
}


