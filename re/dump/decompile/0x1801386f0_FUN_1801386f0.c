// 0x1801386f0  FUN_1801386f0
// size=110 thunk=false
// signature: undefined FUN_1801386f0()
// status: ok


ulonglong FUN_1801386f0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if ((DAT_180409c29 == '\0') || (plVar4 = DAT_180409c38, DAT_180409c38 == (longlong *)0x0)) {
    uVar1 = FUN_1801321e0();
    puVar2 = (undefined8 *)FUN_1801323e0(uVar1);
    if (puVar2 == (undefined8 *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)*puVar2;
    }
    if (plVar4 == (longlong *)0x0) {
      return (ulonglong)puVar2 & 0xffffffffffffff00;
    }
  }
  uVar3 = FUN_1801318c0(plVar4);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + (longlong)(int)uVar3 * 8))(plVar4);
  }
  return uVar3;
}


