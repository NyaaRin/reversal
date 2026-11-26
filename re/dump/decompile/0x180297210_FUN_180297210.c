// 0x180297210  FUN_180297210
// size=211 thunk=false
// signature: undefined FUN_180297210()
// status: ok


void FUN_180297210(int *param_1,int *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*param_1 == param_3) {
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 2);
  puVar1 = (undefined8 *)((longlong)*param_1 * 0x20 + *(longlong *)(param_1 + 4));
  *puVar1 = *(undefined8 *)param_2;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 6);
  puVar1 = (undefined8 *)((longlong)*param_1 * 0x20 + 0x10 + *(longlong *)(param_1 + 4));
  *puVar1 = *(undefined8 *)(param_2 + 4);
  puVar1[1] = uVar2;
  *param_1 = param_3;
  puVar1 = (undefined8 *)((longlong)param_3 * 0x20 + *(longlong *)(param_1 + 4));
  uVar2 = puVar1[1];
  *(undefined8 *)param_2 = *puVar1;
  *(undefined8 *)(param_2 + 2) = uVar2;
  puVar1 = (undefined8 *)((longlong)param_3 * 0x20 + 0x10 + *(longlong *)(param_1 + 4));
  uVar2 = puVar1[1];
  *(undefined8 *)(param_2 + 4) = *puVar1;
  *(undefined8 *)(param_2 + 6) = uVar2;
  *(longlong *)(param_2 + 0x12) = *(longlong *)(param_2 + 6) + (longlong)param_2[4] * 2;
  if ((*param_2 != 0) &&
     (puVar1 = (undefined8 *)(*(longlong *)(param_2 + 2) + ((longlong)*param_2 * 9 + -9) * 8),
     puVar1 != (undefined8 *)0x0)) {
    if (*(int *)(puVar1 + 5) == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x1a);
      *puVar1 = *(undefined8 *)(param_2 + 0x18);
      puVar1[1] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x1e);
      puVar1[2] = *(undefined8 *)(param_2 + 0x1c);
      puVar1[3] = uVar2;
      *(int *)(puVar1 + 4) = param_2[0x20];
      return;
    }
    iVar3 = memcmp(puVar1,param_2 + 0x18,0x24);
    if (iVar3 == 0) {
      return;
    }
  }
  FUN_1802922a0(param_2);
  return;
}


