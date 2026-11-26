// 0x18001af40  FUN_18001af40
// size=153 thunk=false
// signature: undefined FUN_18001af40()
// status: ok


uint FUN_18001af40(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  lVar3 = param_1[2];
  if (0 < param_2) {
    uVar4 = 0;
    do {
      iVar2 = (int)param_1[2];
      if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      }
      else {
        bVar1 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
        *(int *)(param_1 + 2) = iVar2 + 1;
        if ((bVar1 >> ((byte)iVar2 & 7) & 1) != 0) {
          uVar5 = uVar5 | (&DAT_18033d650)[uVar4 & 0x1f];
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < param_2);
  }
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = lVar3;
  param_1[3] = param_1[3];
  return uVar5;
}


