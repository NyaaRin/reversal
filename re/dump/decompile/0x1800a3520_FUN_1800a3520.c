// 0x1800a3520  FUN_1800a3520
// size=304 thunk=false
// signature: undefined FUN_1800a3520()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1800a3520(longlong *param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_1878;
  undefined8 uStack_1870;
  undefined4 local_1868;
  undefined4 local_1864;
  undefined8 local_1860;
  undefined8 local_1858;
  undefined8 local_1850;
  undefined8 local_1848;
  undefined8 uStack_1840;
  undefined8 local_1838;
  undefined1 local_1830;
  undefined1 local_1828 [6136];
  undefined8 uStack_30;
  
  uStack_30 = 0x1800a3531;
  if ((param_1 != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))(), plVar2 != (longlong *)0x0)) {
    iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
    lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
    puVar5 = &DAT_1804f6cf0;
    puVar4 = &DAT_1804f6cf0;
    do {
      if ((((longlong *)*puVar4 == param_1) && (*(int *)(puVar4 + 2) == iVar1)) &&
         (puVar4[1] == lVar3)) {
        return puVar4;
      }
      if ((double)puVar4[3] <= (double)puVar5[3] && (double)puVar5[3] != (double)puVar4[3]) {
        puVar5 = puVar4;
      }
      puVar4 = puVar4 + 0x30a;
    } while (puVar4 != (undefined8 *)&DAT_1805580f0);
    if (param_2 != '\0') {
      local_1868 = 0xffffffff;
      local_1864 = 0;
      local_1878 = 0;
      uStack_1870 = 0;
      local_1860 = DAT_1803813b0;
      local_1850 = DAT_1803813b0;
      local_1848 = 0;
      uStack_1840 = 0;
      local_1858 = 0;
      local_1838 = 0;
      local_1830 = 0;
      memset(local_1828,0,0x1800);
      FUN_180202a70(local_1828);
      FUN_1800a2ba0(puVar5,&local_1878);
      *puVar5 = param_1;
      *(int *)(puVar5 + 2) = iVar1;
      puVar5[1] = lVar3;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}


