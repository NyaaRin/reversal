// 0x18025b6d0  FUN_18025b6d0
// size=459 thunk=false
// signature: undefined FUN_18025b6d0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_18025b6d0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined1 local_18 [16];
  
  if ((DAT_1805c7db0 & 1) == 0) {
    DAT_1805c7db0 = DAT_1805c7db0 | 1;
    DAT_1805c7d48 = 0;
    _DAT_1805c7d50 = 0;
    uRam00000001805c7d58 = 0;
    _DAT_1805c7d60 = 0;
    _DAT_1805c7d68 = 0;
    local_28 = 0x1e0e0831;
    local_24 = 0x92f291f;
    local_20 = 0x12;
    _DAT_1805c7d30 = 0;
    DAT_1805c7d38 = 0;
    _DAT_1805c7d40 = 0;
    DAT_1805c7d38 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c7d38 = DAT_1805c7d38;
    *(longlong *)(DAT_1805c7d38 + 8) = DAT_1805c7d38;
    DAT_1805c7d48 = 0;
    _DAT_1805c7d50 = 0;
    uRam00000001805c7d58 = 0;
    _DAT_1805c7d60 = 7;
    _DAT_1805c7d68 = 8;
    _DAT_1805c7d30 = CONCAT44(DAT_1805c7d30_4,0x3f800000);
    FUN_18022be40(&DAT_1805c7d48,0x10,DAT_1805c7d38);
    puVar3 = &local_28;
    do {
      FUN_180265cb0(&DAT_1805c7d30,local_18,puVar3);
      puVar3 = (undefined4 *)((longlong)puVar3 + 1);
    } while (puVar3 != &local_1f);
    atexit(FUN_18030b880);
  }
  uVar4 = ((ulonglong)*(byte *)(param_1 + 0x12) ^ 0xcbf29ce484222325) * 0x100000001b3 &
          _DAT_1805c7d60;
  lVar2 = *(longlong *)(DAT_1805c7d48 + 8 + uVar4 * 0x10);
  if (lVar2 == DAT_1805c7d38) {
LAB_18025b851:
    lVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x10);
    while (*(byte *)(param_1 + 0x12) != bVar1) {
      if (lVar2 == *(longlong *)(DAT_1805c7d48 + uVar4 * 0x10)) goto LAB_18025b851;
      lVar2 = *(longlong *)(lVar2 + 8);
      bVar1 = *(byte *)(lVar2 + 0x10);
    }
  }
  if (((lVar2 != 0) && (lVar2 != DAT_1805c7d38)) &&
     ((*(char *)(param_1 + 0x2a) - 0x15U & 0xfd) == 0)) {
    if (*(char *)(param_1 + 0x42) != '\x02') {
      return (*(char *)(param_1 + 0x42) != '\x16') + '\x02';
    }
    return '\x02';
  }
  return '\x03';
}


