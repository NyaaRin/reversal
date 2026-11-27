// 0x18001ccb0  FUN_18001ccb0
// size=279 thunk=false
// signature: undefined FUN_18001ccb0()
// status: ok


undefined8 FUN_18001ccb0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  
  if (param_2 != (longlong *)0x0) {
    pcVar4 = (char *)FUN_18001e410(param_2);
    if (((char *)0x10000 < pcVar4) &&
       ((pcVar5 = strstr(pcVar4,"player_manager"), pcVar5 != (char *)0x0 ||
        (pcVar4 = strstr(pcVar4,"player_resource"), pcVar4 != (char *)0x0)))) {
      return 1;
    }
    BVar2 = IsBadReadPtr(param_2,8);
    if ((((BVar2 == 0) && (BVar2 = IsBadReadPtr((void *)*param_2,8), BVar2 == 0)) &&
        (pvVar6 = (void *)(**(code **)(*param_2 + 0x78))(param_2), pvVar6 != (void *)0x0)) &&
       (((BVar2 = IsBadReadPtr(pvVar6,8), BVar2 == 0 &&
         (pvVar6 = *(void **)((longlong)pvVar6 + 0x18), pvVar6 != (void *)0x0)) &&
        ((BVar2 = IsBadReadPtr(pvVar6,8), BVar2 == 0 &&
         (pcVar4 = *(char **)((longlong)pvVar6 + 0x18), (char *)0xffff < pcVar4)))))) {
      cVar1 = *pcVar4;
      while (cVar1 != '\0') {
        iVar3 = _strnicmp(pcVar4,"PlayerResource",0xe);
        if (iVar3 == 0) {
          return 1;
        }
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
    }
  }
  return 0;
}


