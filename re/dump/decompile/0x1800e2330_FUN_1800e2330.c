// 0x1800e2330  FUN_1800e2330
// size=215 thunk=false
// signature: undefined FUN_1800e2330()
// status: ok


undefined1 FUN_1800e2330(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 != 0) {
    plVar2 = (longlong *)FUN_180076750();
    if ((plVar2 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,param_1), cVar1 != '\0')) {
      return 1;
    }
    pcVar3 = (char *)FUN_18001e4e0(param_1);
    if (((char *)0x10000 < pcVar3) &&
       ((((pcVar4 = strstr(pcVar3,"ar2"), pcVar4 != (char *)0x0 ||
          (pcVar4 = strstr(pcVar3,"AR2"), pcVar4 != (char *)0x0)) ||
         (pcVar4 = strstr(pcVar3,"smg1"), pcVar4 != (char *)0x0)) ||
        (((pcVar4 = strstr(pcVar3,"SMG1"), pcVar4 != (char *)0x0 ||
          (pcVar4 = strstr(pcVar3,"smg"), pcVar4 != (char *)0x0)) ||
         (pcVar3 = strstr(pcVar3,"SMG"), pcVar3 != (char *)0x0)))))) {
      return 1;
    }
  }
  return 0;
}


