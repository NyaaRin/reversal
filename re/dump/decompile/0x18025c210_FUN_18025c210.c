// 0x18025c210  FUN_18025c210
// size=473 thunk=false
// signature: undefined FUN_18025c210()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18025c210(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_23;
  
  if ((DAT_1805c7ea4 & 1) == 0) {
    DAT_1805c7ea4 = DAT_1805c7ea4 | 1;
    DAT_1805c83d8 = 0;
    _DAT_1805c83e0 = 0;
    uRam00000001805c83e8 = 0;
    _DAT_1805c83f0 = 0;
    _DAT_1805c83f8 = 0;
    local_28 = 0x131c1d1b;
    local_24 = 0x14;
    _DAT_1805c83c0 = 0;
    DAT_1805c83c8 = 0;
    _DAT_1805c83d0 = 0;
    DAT_1805c83c8 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c83c8 = DAT_1805c83c8;
    *(longlong *)(DAT_1805c83c8 + 8) = DAT_1805c83c8;
    DAT_1805c83d8 = 0;
    _DAT_1805c83e0 = 0;
    uRam00000001805c83e8 = 0;
    _DAT_1805c83f0 = 7;
    _DAT_1805c83f8 = 8;
    _DAT_1805c83c0 = CONCAT44(DAT_1805c83c0_4,0x3f800000);
    FUN_18022be40(&DAT_1805c83d8,0x10,DAT_1805c83c8);
    puVar3 = &local_28;
    do {
      FUN_180265cb0(&DAT_1805c83c0,(longlong)&local_23 + 3,puVar3);
      puVar3 = (undefined4 *)((longlong)puVar3 + 1);
    } while (puVar3 != &local_23);
    atexit(FUN_18030b9a0);
  }
  switch(*(undefined1 *)(param_1 + 0x2a)) {
  case 0x13:
  case 0x14:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    if (*(char *)(param_1 + 0x42) == '#') {
      return 2;
    }
    break;
  case 0x24:
    uVar4 = ((ulonglong)*(byte *)(param_1 + 0x42) ^ 0xcbf29ce484222325) * 0x100000001b3 &
            _DAT_1805c83f0;
    lVar2 = *(longlong *)(DAT_1805c83d8 + 8 + uVar4 * 0x10);
    if (lVar2 == DAT_1805c83c8) {
LAB_18025c3d0:
      lVar2 = 0;
    }
    else {
      bVar1 = *(byte *)(lVar2 + 0x10);
      while (*(byte *)(param_1 + 0x42) != bVar1) {
        if (lVar2 == *(longlong *)(DAT_1805c83d8 + uVar4 * 0x10)) goto LAB_18025c3d0;
        lVar2 = *(longlong *)(lVar2 + 8);
        bVar1 = *(byte *)(lVar2 + 0x10);
      }
    }
    if ((lVar2 != 0) && (lVar2 != DAT_1805c83c8)) {
      return 2;
    }
  }
  return 3;
}


