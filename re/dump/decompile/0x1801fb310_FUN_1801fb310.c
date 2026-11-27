// 0x1801fb310  FUN_1801fb310
// size=142 thunk=false
// signature: undefined FUN_1801fb310()
// status: ok


uint FUN_1801fb310(void)

{
  void *lp;
  BOOL BVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ProcessEnvironmentBlock != (void *)0x0) &&
     (*(longlong *)((longlong)ProcessEnvironmentBlock + 0x18) != 0)) {
    puVar2 = (undefined8 *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x18) + 0x10);
    for (puVar3 = (undefined8 *)*puVar2; (puVar3 != (undefined8 *)0x0 && (puVar3 != puVar2));
        puVar3 = (undefined8 *)*puVar3) {
      if (puVar3[6] == DAT_1803f9288) {
        lp = (void *)puVar3[0x13];
        if ((lp != (void *)0x0) && (BVar1 = IsBadReadPtr(lp,0x20), BVar1 == 0)) {
          if (*(uint *)((longlong)lp + 0x18) < 0x41) {
            return *(uint *)((longlong)lp + 0x18);
          }
          return 0;
        }
        if (0x40 < *(ushort *)((longlong)puVar3 + 0x6c)) {
          return 0;
        }
        return (uint)*(ushort *)((longlong)puVar3 + 0x6c);
      }
    }
  }
  return 0;
}


