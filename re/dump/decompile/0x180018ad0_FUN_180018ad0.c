// 0x180018ad0  FUN_180018ad0
// size=316 thunk=false
// signature: undefined FUN_180018ad0()
// status: ok


void FUN_180018ad0(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if ((param_3 != (longlong *)0x0) && (iVar5 = 0, 0 < (int)param_3[1])) {
    do {
      puVar4 = (undefined8 *)((longlong)iVar5 * 0x60 + *param_3);
      if ((puVar4 != (undefined8 *)0x0) &&
         (((char *)*puVar4 != (char *)0x0 &&
          (iVar2 = strcmp((char *)*puVar4,"baseclass"), iVar2 != 0)))) {
        iVar2 = *(int *)(puVar4 + 9);
        iVar3 = 0;
        if (0 < param_5) {
          do {
            FUN_1800129b0(param_2,&DAT_18033f514);
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_5);
        }
        FUN_1800129b0(param_2,"  [0x%04X] %s",iVar2 + param_4,*puVar4);
        lVar1 = puVar4[8];
        if ((lVar1 == 0) || (*(int *)(lVar1 + 8) < 1)) {
          FUN_1800129b0(param_2,&DAT_18033e92c);
        }
        else {
          FUN_1800129b0(param_2," -> %s\n",*(undefined8 *)(lVar1 + 0x18));
          FUN_180018ad0(&DAT_1803fac80,param_2,puVar4[8],iVar2 + param_4,param_5 + 1);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_3[1]);
  }
  return;
}


