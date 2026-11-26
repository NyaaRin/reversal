// 0x18025c410  FUN_18025c410
// size=502 thunk=false
// signature: undefined FUN_18025c410()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_18025c410(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 local_28;
  undefined1 local_26;
  undefined2 local_25 [2];
  undefined1 local_20 [24];
  
  if ((DAT_1805c7e50 & 1) == 0) {
    DAT_1805c7e50 = DAT_1805c7e50 | 1;
    DAT_1805c7dd8 = 0;
    _DAT_1805c7de0 = 0;
    uRam00000001805c7de8 = 0;
    _DAT_1805c7df0 = 0;
    _DAT_1805c7df8 = 0;
    local_28 = 0x1602;
    local_26 = 0x21;
    _DAT_1805c7dc0 = 0;
    DAT_1805c7dc8 = 0;
    _DAT_1805c7dd0 = 0;
    DAT_1805c7dc8 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c7dc8 = DAT_1805c7dc8;
    *(longlong *)(DAT_1805c7dc8 + 8) = DAT_1805c7dc8;
    DAT_1805c7dd8 = 0;
    _DAT_1805c7de0 = 0;
    uRam00000001805c7de8 = 0;
    _DAT_1805c7df0 = 7;
    _DAT_1805c7df8 = 8;
    _DAT_1805c7dc0 = CONCAT44(DAT_1805c7dc0_4,0x3f800000);
    FUN_18022be40(&DAT_1805c7dd8,0x10,DAT_1805c7dc8);
    puVar4 = &local_28;
    do {
      FUN_180265cb0(&DAT_1805c7dc0,local_20,puVar4);
      puVar4 = (undefined2 *)((longlong)puVar4 + 1);
    } while (puVar4 != local_25);
    atexit(FUN_18030b9d0);
  }
  cVar2 = *(char *)(param_1 + 0x2a);
  if (cVar2 != '\x02') {
    if (cVar2 == '\r') {
      cVar2 = FUN_18025f540(*(undefined2 *)(param_1 + 0x28));
      if (cVar2 != '\0') {
        return '\x03';
      }
      uVar5 = ((ulonglong)*(byte *)(param_1 + 0x42) ^ 0xcbf29ce484222325) * 0x100000001b3 &
              _DAT_1805c7df0;
      lVar3 = *(longlong *)(DAT_1805c7dd8 + 8 + uVar5 * 0x10);
      if (lVar3 == DAT_1805c7dc8) {
LAB_18025c5e0:
        lVar3 = 0;
      }
      else {
        bVar1 = *(byte *)(lVar3 + 0x10);
        while (*(byte *)(param_1 + 0x42) != bVar1) {
          if (lVar3 == *(longlong *)(DAT_1805c7dd8 + uVar5 * 0x10)) goto LAB_18025c5e0;
          lVar3 = *(longlong *)(lVar3 + 8);
          bVar1 = *(byte *)(lVar3 + 0x10);
        }
      }
      if (lVar3 == 0) {
        return '\x03';
      }
      if (lVar3 == DAT_1805c7dc8) {
        return '\x03';
      }
      return '\x02';
    }
    if ((cVar2 != '\x16') && (cVar2 != '!')) {
      return '\x03';
    }
  }
  if (*(char *)(param_1 + 0x42) != '\"') {
    return '\x03';
  }
  cVar2 = FUN_18025f540(*(undefined2 *)(param_1 + 0x40));
  return (cVar2 != '\0') + '\x02';
}


