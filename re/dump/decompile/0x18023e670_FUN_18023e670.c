// 0x18023e670  FUN_18023e670
// size=278 thunk=false
// signature: undefined FUN_18023e670()
// status: ok


undefined8 FUN_18023e670(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  short sVar3;
  char *pcVar4;
  int iVar5;
  
  lVar2 = *param_1;
  if (lVar2 != param_1[1]) {
    sVar3 = FUN_18023b640(param_1[0xb],lVar2,lVar2 + 1,*(uint *)(param_1 + 0xd) >> 8 & 0xffffff01);
    if (sVar3 != 0) {
      cVar1 = *(char *)((longlong)param_1 + 0x75);
      if (cVar1 == 'W') {
        iVar5 = 0x100;
      }
      else if (cVar1 == 'S') {
        iVar5 = 0x200;
      }
      else {
        iVar5 = 0;
        if (cVar1 == 'D') {
          iVar5 = 0x400;
        }
      }
      if (param_2 != '\0') {
        FUN_18023f080(param_1 + 7);
        if (iVar5 != 0) {
          *(uint *)(param_1[8] + 0xc) = *(uint *)(param_1[8] + 0xc) ^ 1;
          iVar5 = 0;
        }
      }
      FUN_18023ff60(param_1 + 7,sVar3,iVar5);
      pcVar4 = (char *)*param_1;
      if (pcVar4 != (char *)param_1[1]) {
        if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1])) &&
           ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
            (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = (longlong)pcVar4;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      return 1;
    }
  }
  return 0;
}


