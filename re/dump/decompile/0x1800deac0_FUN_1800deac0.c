// 0x1800deac0  FUN_1800deac0
// size=164 thunk=false
// signature: undefined FUN_1800deac0()
// status: ok


float * FUN_1800deac0(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 local_48 [12];
  undefined1 local_3c [28];
  
  plVar5 = (longlong *)FUN_180076750(param_3);
  if (plVar5 != (longlong *)0x0) {
    pfVar6 = (float *)(**(code **)(*plVar5 + 0x20))(plVar5,local_48,param_3,param_4);
    pfVar7 = (float *)(**(code **)(*plVar5 + 0x28))(plVar5,local_3c,param_3,param_4);
    fVar1 = pfVar7[1];
    fVar2 = pfVar6[1];
    *param_2 = *pfVar6 + *pfVar7;
    fVar3 = pfVar7[2];
    fVar4 = pfVar6[2];
    param_2[1] = fVar1 + fVar2;
    param_2[2] = fVar3 + fVar4;
    return param_2;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return param_2;
}


