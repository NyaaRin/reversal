// 0x180055e30  FUN_180055e30
// size=112 thunk=false
// signature: undefined FUN_180055e30()
// status: ok


undefined8 FUN_180055e30(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *(undefined8 *)(DAT_1803fa608 + 0x10) = uVar3;
    }
  }
  return 0;
}


