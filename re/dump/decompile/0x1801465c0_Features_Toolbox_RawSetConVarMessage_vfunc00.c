// 0x1801465c0  Features_Toolbox_RawSetConVarMessage_vfunc00
// size=47 thunk=false
// signature: undefined Features_Toolbox_RawSetConVarMessage_vfunc00()
// status: ok


undefined8 * Features_Toolbox_RawSetConVarMessage_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_INetMessage;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


