// 0x180022740  FUN_180022740
// size=258 thunk=false
// signature: undefined FUN_180022740()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180022740(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if ((DAT_1805c7bf8 & 1) == 0) {
    DAT_1805c7bf8 = DAT_1805c7bf8 | 1;
    DAT_1805c7ad0 = (undefined8 *)0x0;
    uRam00000001805c7ad8 = 0;
    _DAT_1805c7ae0 = 0;
    DAT_1805c7ae8 = 0;
    FUN_18001d080(&DAT_1805c7ad0,"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
                  0x3e,param_4,0,param_1);
    atexit((_func_5014 *)&LAB_180308ad0);
  }
  FUN_18020ea80(param_1,param_2,0);
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (param_2 != 0) {
    iVar1 = FUN_180022680(0,_DAT_1805c7ae0 & 0xffffffff);
    uVar3 = (ulonglong)iVar1;
    if (uVar3 < _DAT_1805c7ae0) {
      do {
        puVar2 = &DAT_1805c7ad0;
        if (0xf < DAT_1805c7ae8) {
          puVar2 = DAT_1805c7ad0;
        }
        *(undefined1 *)puVar4 = *(undefined1 *)((longlong)puVar2 + uVar3);
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return param_1;
        }
        puVar4 = (undefined8 *)((longlong)puVar4 + 1);
        iVar1 = FUN_180022680(0,_DAT_1805c7ae0 & 0xffffffff);
        uVar3 = (ulonglong)iVar1;
      } while (uVar3 < _DAT_1805c7ae0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_18022ec00();
  }
  return param_1;
}


