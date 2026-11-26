// 0x18026a5b0  FUN_18026a5b0
// size=226 thunk=false
// signature: undefined FUN_18026a5b0()
// status: ok


char FUN_18026a5b0(int *param_1)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 10);
  fVar1 = (float)param_1[4];
  cVar3 = FUN_180269ce0();
  if (cVar3 == '\0') {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\0';
    if (*param_1 < param_1[1]) {
      cVar5 = cVar3;
    }
  }
  if (((*(longlong *)(lVar2 + 0x2368) != 0) &&
      (*(char *)(*(longlong *)(lVar2 + 0x2368) + 0x245) == '\0')) &&
     ((*(byte *)(lVar2 + 0x28e4) & 0x20) != 0)) {
    FUN_180289170("Clipper: Step(): inside frozen table row.\n");
  }
  if (((fVar1 <= 0.0) && (0.0 < (float)param_1[4])) && ((*(byte *)(lVar2 + 0x28e4) & 0x20) != 0)) {
    FUN_180289170("Clipper: Step(): computed ItemsHeight: %.2f.\n",(double)(float)param_1[4]);
  }
  uVar4 = *(uint *)(lVar2 + 0x28e4) & 0x20;
  if (cVar5 == '\0') {
    if (uVar4 != 0) {
      FUN_180289170("Clipper: Step(): End.\n");
    }
    FUN_180269ad0(param_1);
  }
  else if (uVar4 != 0) {
    FUN_180289170("Clipper: Step(): display %d to %d.\n",*param_1,param_1[1]);
  }
  return cVar5;
}


