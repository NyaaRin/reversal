// 0x18021e0d0  FUN_18021e0d0
// size=125 thunk=false
// signature: undefined FUN_18021e0d0()
// status: ok


void FUN_18021e0d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x2c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puVar4 = (undefined8 *)*param_1;
      while (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar4[2];
        puVar4[2] = 0;
        (**(code **)*puVar4)(puVar4,1);
        puVar4 = puVar3;
      }
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 0;
  return;
}


