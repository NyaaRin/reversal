// 0x18021f060  FUN_18021f060
// size=37 thunk=false
// signature: undefined FUN_18021f060()
// status: ok


undefined8 * FUN_18021f060(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)param_1 = *param_2;
  param_1[7] = &.H::RTTI_Type_Descriptor;
  return param_1;
}


