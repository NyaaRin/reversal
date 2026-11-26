// 0x180296c50  FUN_180296c50
// size=182 thunk=false
// signature: undefined FUN_180296c50()
// status: ok


void FUN_180296c50(int *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < param_1[2]) {
    do {
      lVar4 = (longlong)iVar3 * 0x20;
      if (iVar3 == *param_1) {
        lVar2 = *(longlong *)(param_1 + 4);
        puVar1 = (undefined8 *)(lVar4 + lVar2);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar2);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      lVar2 = *(longlong *)(param_1 + 4);
      if (*(longlong *)(lVar2 + 8 + lVar4) != 0) {
        *(undefined8 *)(lVar2 + lVar4) = 0;
        FUN_18026f680();
        *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
      }
      lVar4 = lVar4 + *(longlong *)(param_1 + 4);
      if (*(longlong *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_18026f680();
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[2]);
  }
  *param_1 = 0;
  param_1[1] = 1;
  if (*(longlong *)(param_1 + 4) != 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18026f680();
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}


