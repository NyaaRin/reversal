// 0x18025b140  FUN_18025b140
// size=439 thunk=false
// signature: undefined FUN_18025b140()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18025b140(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_22;
  
  if ((DAT_1805c7e00 & 1) == 0) {
    DAT_1805c7e00 = DAT_1805c7e00 | 1;
    DAT_1805c8308 = 0;
    _DAT_1805c8310 = 0;
    uRam00000001805c8318 = 0;
    _DAT_1805c8320 = 0;
    _DAT_1805c8328 = 0;
    local_28 = 0x1f1e0e08;
    local_24 = 0x2f29;
    _DAT_1805c82f0 = 0;
    DAT_1805c82f8 = 0;
    _DAT_1805c8300 = 0;
    DAT_1805c82f8 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c82f8 = DAT_1805c82f8;
    *(longlong *)(DAT_1805c82f8 + 8) = DAT_1805c82f8;
    DAT_1805c8308 = 0;
    _DAT_1805c8310 = 0;
    uRam00000001805c8318 = 0;
    _DAT_1805c8320 = 7;
    _DAT_1805c8328 = 8;
    _DAT_1805c82f0 = CONCAT44(DAT_1805c82f0_4,0x3f800000);
    FUN_18022be40(&DAT_1805c8308,0x10,DAT_1805c82f8);
    puVar3 = &local_28;
    do {
      FUN_180265cb0(&DAT_1805c82f0,(longlong)&local_22 + 2,puVar3);
      puVar3 = (undefined4 *)((longlong)puVar3 + 1);
    } while (puVar3 != &local_22);
    atexit(FUN_18030b7f0);
  }
  uVar4 = ((ulonglong)*(byte *)(param_1 + 0x2a) ^ 0xcbf29ce484222325) * 0x100000001b3 &
          _DAT_1805c8320;
  lVar2 = *(longlong *)(DAT_1805c8308 + 8 + uVar4 * 0x10);
  if (lVar2 == DAT_1805c82f8) {
LAB_18025b2c1:
    lVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x10);
    while (*(byte *)(param_1 + 0x2a) != bVar1) {
      if (lVar2 == *(longlong *)(DAT_1805c8308 + uVar4 * 0x10)) goto LAB_18025b2c1;
      lVar2 = *(longlong *)(lVar2 + 8);
      bVar1 = *(byte *)(lVar2 + 0x10);
    }
  }
  if (((lVar2 == 0) || (lVar2 == DAT_1805c82f8)) &&
     ((*(char *)(param_1 + 0x42) == '\f' || (*(char *)(param_1 + 0x42) == '0')))) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    return 2;
  }
  return 3;
}


