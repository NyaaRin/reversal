// 0x1800c1480  FUN_1800c1480
// size=236 thunk=false
// signature: undefined FUN_1800c1480()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001800c1550) */

void * FUN_1800c1480(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  void *lp;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  void *pvVar5;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  cVar2 = FUN_1800b4440((longlong)param_2 + *(longlong *)*param_1,&local_res8);
  lp = local_res8;
  if (((cVar2 != '\0') && (local_res8 != (void *)0x0)) &&
     (BVar3 = IsBadReadPtr(local_res8,8), BVar3 == 0)) {
    pvVar1 = *(void **)*param_1;
    lVar4 = FUN_1800b58b0();
    if (((lp != (void *)0x0) && (pvVar1 != (void *)0x0)) &&
       ((lVar4 != 0 && (BVar3 = IsBadReadPtr(lp,lVar4 + 8), BVar3 == 0)))) {
      local_res8 = (void *)0x0;
      cVar2 = FUN_1800b4440(lVar4 + (longlong)lp,&local_res8);
      if (cVar2 != '\0') {
        pvVar5 = (void *)0x0;
        if (local_res8 == pvVar1) {
          pvVar5 = lp;
        }
        return pvVar5;
      }
    }
    return (void *)0x0;
  }
  return (void *)0x0;
}


