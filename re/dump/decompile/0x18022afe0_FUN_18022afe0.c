// 0x18022afe0  FUN_18022afe0
// size=95 thunk=false
// signature: undefined FUN_18022afe0()
// status: ok


void FUN_18022afe0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    _eh_vector_destructor_iterator_
              ((void *)(*(longlong *)(param_1 + 8) + 0x28),0x48,4,FUN_180021090);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


