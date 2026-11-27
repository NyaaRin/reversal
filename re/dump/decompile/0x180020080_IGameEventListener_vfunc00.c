// 0x180020080  IGameEventListener_vfunc00
// size=43 thunk=false
// signature: undefined IGameEventListener_vfunc00()
// status: ok


undefined8 * IGameEventListener_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_IGameEventListener;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


