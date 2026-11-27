// 0x1802d3a10  FUN_1802d3a10
// size=82 thunk=false
// signature: undefined FUN_1802d3a10()
// status: ok


void FUN_1802d3a10(float param_1,float *param_2,float *param_3)

{
  double dVar1;
  
  dVar1 = sin((double)param_1);
  *param_2 = (float)dVar1;
  dVar1 = cos((double)param_1);
  *param_3 = (float)dVar1;
  return;
}


