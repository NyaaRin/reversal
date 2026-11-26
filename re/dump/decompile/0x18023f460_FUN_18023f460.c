// 0x18023f460  FUN_18023f460
// size=137 thunk=false
// signature: undefined FUN_18023f460()
// status: ok


void FUN_18023f460(uint *param_1,undefined1 param_2)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  if (param_1[1] < uVar1) {
LAB_18023f4bf:
    *(undefined1 *)((ulonglong)param_1[1] + *(longlong *)(param_1 + 2)) = param_2;
    param_1[1] = param_1[1] + 1;
    return;
  }
  uVar5 = 0x10;
  if (0x10 < uVar1 >> 1) {
    uVar5 = uVar1 >> 1;
  }
  uVar4 = uVar1 + uVar5;
  if (~uVar5 <= uVar1) {
    uVar4 = 0xffffffff;
  }
  if (uVar4 != uVar1) {
    pvVar3 = realloc(*(void **)(param_1 + 2),(ulonglong)uVar4);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_1 + 2) = pvVar3;
      *param_1 = uVar4;
      goto LAB_18023f4bf;
    }
  }
  std::_Xregex_error(9);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


