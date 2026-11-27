// 0x1802cf300  FUN_1802cf300
// size=296 thunk=false
// signature: undefined FUN_1802cf300()
// status: ok


longlong FUN_1802cf300(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined1 *local_res18;
  void *local_res20;
  
  iVar1 = param_1[8];
  if (iVar1 == *param_1) {
    iVar5 = *param_1 + 1;
    iVar2 = param_1[1];
    if (iVar2 < iVar5) {
      if (iVar2 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar2 / 2 + iVar2;
      }
      iVar7 = iVar5;
      if (iVar5 < iVar3) {
        iVar7 = iVar3;
      }
      if (iVar2 < iVar7) {
        pvVar4 = (void *)FUN_18026f580();
        if (*(void **)(param_1 + 2) != (void *)0x0) {
          memcpy(pvVar4,*(void **)(param_1 + 2),(longlong)*param_1 * 0xb0);
          FUN_18026f680();
        }
        *(void **)(param_1 + 2) = pvVar4;
        param_1[1] = iVar7;
      }
    }
    *param_1 = iVar5;
    param_1[8] = param_1[8] + 1;
  }
  else {
    param_1[8] = *(int *)((longlong)iVar1 * 0xb0 + *(longlong *)(param_1 + 2));
  }
  lVar6 = (longlong)iVar1 * 0xb0;
  pvVar4 = (void *)(*(longlong *)(param_1 + 2) + lVar6);
  local_res18 = local_res8;
  if (pvVar4 != (void *)0x0) {
    *(undefined8 *)((longlong)pvVar4 + 8) = 0;
    *(undefined8 *)((longlong)pvVar4 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar4 + 0x38) = 0;
    *(undefined8 *)((longlong)pvVar4 + 0x40) = 0;
    *(undefined8 *)((longlong)pvVar4 + 0x90) = 0;
    *(undefined8 *)((longlong)pvVar4 + 0x98) = 0;
    *(undefined8 *)((longlong)pvVar4 + 0xa0) = 0;
    *(undefined8 *)((longlong)pvVar4 + 0xa8) = 0;
    local_res10 = pvVar4;
    local_res20 = pvVar4;
    memset(pvVar4,0,0xb0);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = 0xffffffffffffffff;
    *(undefined2 *)((longlong)pvVar4 + 0x8a) = 0xffff;
  }
  param_1[9] = param_1[9] + 1;
  return *(longlong *)(param_1 + 2) + lVar6;
}


