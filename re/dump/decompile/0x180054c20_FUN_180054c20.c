// 0x180054c20  FUN_180054c20
// size=203 thunk=false
// signature: undefined FUN_180054c20()
// status: ok


undefined8 FUN_180054c20(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 != '\0') {
      lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      if ((lVar5 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
        pcVar1 = *(code **)(*DAT_1803fa668 + 0x30);
        cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);
        if (cVar2 == '\0') {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);
        }
        (*pcVar1)(DAT_1803fa668,lVar5,uVar3);
      }
    }
  }
  return 0;
}


