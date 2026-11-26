// 0x18001bd90  INetMessage_vfunc00
// size=43 thunk=false
// signature: undefined INetMessage_vfunc00()
// status: ok


undefined8 * INetMessage_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_INetMessage;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


