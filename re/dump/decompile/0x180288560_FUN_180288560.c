// 0x180288560  FUN_180288560
// size=256 thunk=false
// signature: undefined FUN_180288560()
// status: ok


undefined8 * FUN_180288560(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  char cVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  undefined1 *local_res20;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (*(char *)(lVar2 + 0xa6) == '\0') {
    cVar7 = *param_1;
    pcVar5 = param_1;
    while (pcVar3 = pcVar5, cVar7 != '\0') {
      while (((pcVar5 = pcVar3 + 1, cVar7 == '#' && (*pcVar5 == '#')) && (pcVar3[2] == '#'))) {
        param_1 = pcVar3 + 3;
        cVar7 = *pcVar5;
        pcVar3 = pcVar5;
      }
      cVar7 = *pcVar5;
    }
  }
  sVar6 = strlen(param_1);
  iVar1 = *(int *)(lVar2 + 0x27c8);
  uVar9 = (int)sVar6 + 0x18U & 0xfffffffc;
  FUN_18028a8d0(lVar2 + 0x27c8,iVar1 + uVar9);
  *(uint *)((longlong)iVar1 + *(longlong *)(lVar2 + 0x27d0)) = uVar9;
  puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x27d0) + 4 + (longlong)iVar1);
  local_res20 = local_res10;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = 0;
  }
  local_res18 = puVar8;
  uVar4 = FUN_180268980(param_1,sVar6,0,param_4,puVar8);
  *(undefined4 *)puVar8 = uVar4;
  memcpy(puVar8 + 2,param_1,sVar6 + 1);
  return puVar8;
}


