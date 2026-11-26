// 18001e2b0  FUN_18001e2b0
// signature: undefined FUN_18001e2b0()
// status: ok


undefined8 FUN_18001e2b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_18001e1b0();
    if (cVar1 != '\0') {
      return 1;
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
    if ((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), -1 < iVar2))
    {
      if ((DAT_180426020 == (code *)0x0) ||
         (cVar1 = (*DAT_180426020)(param_2[1],param_2,iVar2), cVar1 == '\0')) {
        if (DAT_1803fd050 == '\0') {
          DAT_1803fd050 = '\x01';
          FUN_180014410(&DAT_18033ffe0,DAT_1803fcf38,DAT_180426020);
        }
        FUN_180023e60(param_2,0);
        (**(code **)(*param_2 + 0x20))(param_2,0xffffffff,"Entity");
        (**(code **)(*param_2 + 0xf0))(param_2,(double)iVar2);
        (**(code **)(*param_2 + 0x50))(param_2,1,1);
        (**(code **)(*param_2 + 0x78))(param_2,0xfffffffe);
        cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,9);
        if (cVar1 == '\0') {
          (**(code **)(*param_2 + 0x10))(param_2,1);
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


