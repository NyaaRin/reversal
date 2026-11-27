// 0x18025b4c0  FUN_18025b4c0
// size=520 thunk=false
// signature: undefined FUN_18025b4c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_18025b4c0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_1a;
  
  if ((DAT_1805c7db4 & 1) == 0) {
    DAT_1805c7db4 = DAT_1805c7db4 | 1;
    DAT_1805c7d88 = 0;
    _DAT_1805c7d90 = 0;
    uRam00000001805c7d98 = 0;
    _DAT_1805c7da0 = 0;
    _DAT_1805c7da8 = 0;
    local_28 = 0xb2d1229;
    local_24 = 0x1a110d25;
    local_20 = 0x1e0e082a;
    local_1c = 0x2f1f;
    _DAT_1805c7d70 = 0;
    DAT_1805c7d78 = 0;
    _DAT_1805c7d80 = 0;
    DAT_1805c7d78 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c7d78 = DAT_1805c7d78;
    *(longlong *)(DAT_1805c7d78 + 8) = DAT_1805c7d78;
    DAT_1805c7d88 = 0;
    _DAT_1805c7d90 = 0;
    uRam00000001805c7d98 = 0;
    _DAT_1805c7da0 = 7;
    _DAT_1805c7da8 = 8;
    _DAT_1805c7d70 = CONCAT44(DAT_1805c7d70_4,0x3f800000);
    FUN_18022be40(&DAT_1805c7d88,0x10,DAT_1805c7d78);
    puVar5 = &local_28;
    do {
      FUN_180265cb0(&DAT_1805c7d70,(longlong)&local_1a + 2,puVar5);
      puVar5 = (undefined4 *)((longlong)puVar5 + 1);
    } while (puVar5 != &local_1a);
    atexit(FUN_18030b850);
  }
  cVar2 = FUN_18025ae60((short)param_1[8]);
  if ((cVar2 == '\0') || (*(char *)((longlong)param_1 + 0x42) != '%')) {
    return '\x03';
  }
  if (param_1[9] + 1U < (ulonglong)param_1[1]) {
    bVar3 = FUN_18025ad40(*(undefined2 *)(*param_1 + (param_1[9] + 1U) * 0x10));
    if (bVar3 != 0x32) {
      uVar6 = ((ulonglong)bVar3 ^ 0xcbf29ce484222325) * 0x100000001b3 & _DAT_1805c7da0;
      lVar4 = *(longlong *)(DAT_1805c7d88 + 8 + uVar6 * 0x10);
      if (lVar4 == DAT_1805c7d78) {
LAB_18025b694:
        lVar4 = 0;
      }
      else {
        bVar1 = *(byte *)(lVar4 + 0x10);
        while (bVar3 != bVar1) {
          if (lVar4 == *(longlong *)(DAT_1805c7d88 + uVar6 * 0x10)) goto LAB_18025b694;
          lVar4 = *(longlong *)(lVar4 + 8);
          bVar1 = *(byte *)(lVar4 + 0x10);
        }
      }
      if (lVar4 != 0) {
        return (lVar4 != DAT_1805c7d78) + '\x02';
      }
    }
  }
  return '\x02';
}


