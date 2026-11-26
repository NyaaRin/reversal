// 0x18025be90  FUN_18025be90
// size=888 thunk=false
// signature: undefined FUN_18025be90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_18025be90(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20 [6];
  
  if ((DAT_1805c7ea8 & 1) == 0) {
    DAT_1805c7ea8 = DAT_1805c7ea8 | 1;
    DAT_1805c7e78 = 0;
    _DAT_1805c7e80 = 0;
    uRam00000001805c7e88 = 0;
    _DAT_1805c7e90 = 0;
    _DAT_1805c7e98 = 0;
    local_24 = 0x14131d1b;
    _DAT_1805c7e60 = 0;
    DAT_1805c7e68 = 0;
    _DAT_1805c7e70 = 0;
    DAT_1805c7e68 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c7e68 = DAT_1805c7e68;
    *(longlong *)(DAT_1805c7e68 + 8) = DAT_1805c7e68;
    DAT_1805c7e78 = 0;
    _DAT_1805c7e80 = 0;
    uRam00000001805c7e88 = 0;
    _DAT_1805c7e90 = 7;
    _DAT_1805c7e98 = 8;
    _DAT_1805c7e60 = CONCAT44(DAT_1805c7e60_4,0x3f800000);
    FUN_18022be40(&DAT_1805c7e78,0x10,DAT_1805c7e68);
    puVar5 = &local_24;
    do {
      FUN_180265cb0(&DAT_1805c7e60,local_20,puVar5);
      puVar5 = (undefined4 *)((longlong)puVar5 + 1);
    } while (puVar5 != local_20);
    atexit(FUN_18030b970);
  }
  if ((DAT_1805c7ea8 & 2) == 0) {
    DAT_1805c7ea8 = DAT_1805c7ea8 | 2;
    DAT_1805c7d08 = 0;
    _DAT_1805c7d10 = 0;
    uRam00000001805c7d18 = 0;
    _DAT_1805c7d20 = 0;
    _DAT_1805c7d28 = 0;
    local_28 = 0x1c1d;
    _DAT_1805c7cf0 = 0;
    DAT_1805c7cf8 = 0;
    _DAT_1805c7d00 = 0;
    DAT_1805c7cf8 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c7cf8 = DAT_1805c7cf8;
    *(longlong *)(DAT_1805c7cf8 + 8) = DAT_1805c7cf8;
    DAT_1805c7d08 = 0;
    _DAT_1805c7d10 = 0;
    uRam00000001805c7d18 = 0;
    _DAT_1805c7d20 = 7;
    _DAT_1805c7d28 = 8;
    _DAT_1805c7cf0 = CONCAT44(DAT_1805c7cf0_4,0x3f800000);
    FUN_18022be40(&DAT_1805c7d08,0x10,DAT_1805c7cf8);
    puVar6 = &local_28;
    do {
      FUN_180265cb0(&DAT_1805c7cf0,local_20,puVar6);
      puVar6 = (undefined2 *)((longlong)puVar6 + 1);
    } while (puVar6 != &local_26);
    atexit(FUN_18030b940);
  }
  cVar1 = *(char *)(param_1 + 0x2a);
  if (cVar1 == '\x13') {
LAB_18025c17e:
    uVar4 = ((ulonglong)*(byte *)(param_1 + 0x42) ^ 0xcbf29ce484222325) * 0x100000001b3 &
            _DAT_1805c7d20;
    lVar3 = *(longlong *)(DAT_1805c7d08 + 8 + uVar4 * 0x10);
    if (lVar3 == DAT_1805c7cf8) {
LAB_18025c1e4:
      lVar3 = 0;
    }
    else {
      bVar2 = *(byte *)(lVar3 + 0x10);
      while (*(byte *)(param_1 + 0x42) != bVar2) {
        if (lVar3 == *(longlong *)(DAT_1805c7d08 + uVar4 * 0x10)) goto LAB_18025c1e4;
        lVar3 = *(longlong *)(lVar3 + 8);
        bVar2 = *(byte *)(lVar3 + 0x10);
      }
    }
    if (lVar3 != 0) {
      return (lVar3 == DAT_1805c7cf8) + '\x02';
    }
  }
  else {
    if (cVar1 != '\x14') {
      if (cVar1 == '\x1b') {
        uVar4 = ((ulonglong)*(byte *)(param_1 + 0x42) ^ 0xcbf29ce484222325) * 0x100000001b3 &
                _DAT_1805c7e90;
        lVar3 = *(longlong *)(DAT_1805c7e78 + 8 + uVar4 * 0x10);
        if (lVar3 == DAT_1805c7e68) {
LAB_18025c143:
          lVar3 = 0;
        }
        else {
          bVar2 = *(byte *)(lVar3 + 0x10);
          while (*(byte *)(param_1 + 0x42) != bVar2) {
            if (lVar3 == *(longlong *)(DAT_1805c7e78 + uVar4 * 0x10)) goto LAB_18025c143;
            lVar3 = *(longlong *)(lVar3 + 8);
            bVar2 = *(byte *)(lVar3 + 0x10);
          }
        }
        if (lVar3 == 0) {
          return '\x03';
        }
        if (lVar3 != DAT_1805c7e68) {
          return '\x02';
        }
        return '\x03';
      }
      if (cVar1 != '\x1c') {
        if (cVar1 != '\x1d') {
          return '\x03';
        }
        goto LAB_18025c17e;
      }
    }
    if (*(char *)(param_1 + 0x42) == '\x1c') {
      return '\x02';
    }
  }
  return '\x03';
}


