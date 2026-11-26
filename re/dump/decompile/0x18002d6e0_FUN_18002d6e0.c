// 0x18002d6e0  FUN_18002d6e0
// size=189 thunk=false
// signature: undefined FUN_18002d6e0()
// status: ok


ulonglong FUN_18002d6e0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *in_RAX;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((((((param_1 != 0) && (DAT_1803faf38 != 0)) && (DAT_1803faf88 != 0)) &&
       ((DAT_1803fb000 != 0 && (DAT_1803faee0 != 0)))) &&
      ((DAT_1803faff8 != 0 && ((DAT_1803fb088 != 0 && (DAT_1803faf10 != 0)))))) &&
     ((DAT_1803fafd8 != 0 && (uVar2 = *(ulonglong *)(param_1 + 0x10), uVar2 != 0)))) {
    in_RAX = (longlong *)DAT_1803fa7f0[1];
    cVar1 = *(char *)((longlong)in_RAX + 0x19);
    plVar4 = DAT_1803fa7f0;
    while (cVar1 == '\0') {
      plVar3 = in_RAX;
      if ((ulonglong)in_RAX[4] < uVar2) {
        in_RAX = in_RAX + 2;
        plVar3 = plVar4;
      }
      in_RAX = (longlong *)*in_RAX;
      plVar4 = plVar3;
      cVar1 = *(char *)((longlong)in_RAX + 0x19);
    }
    if ((*(char *)((longlong)plVar4 + 0x19) != '\0') || (uVar2 < (ulonglong)plVar4[4])) {
      plVar4 = DAT_1803fa7f0;
    }
    if (plVar4 != DAT_1803fa7f0) {
      in_RAX = (longlong *)0x0;
      if (plVar4 + 5 != (longlong *)0x0) {
        return CONCAT71((int7)((ulonglong)(plVar4 + 5) >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


