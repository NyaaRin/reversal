// 0x18025b8a0  FUN_18025b8a0
// size=534 thunk=false
// signature: undefined FUN_18025b8a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_18025b8a0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 local_48;
  undefined1 local_46;
  undefined2 local_45 [2];
  undefined1 local_40 [32];
  
  if ((DAT_1805c83b0 & 1) == 0) {
    DAT_1805c83b0 = DAT_1805c83b0 | 1;
    DAT_1805c7cc8 = 0;
    _DAT_1805c7cd0 = 0;
    uRam00000001805c7cd8 = 0;
    DAT_1805c7ce0 = 0;
    _DAT_1805c7ce8 = 0;
    local_48 = 0xf18;
    local_46 = 0x10;
    _DAT_1805c7cb0 = 0;
    DAT_1805c7cb8 = 0;
    _DAT_1805c7cc0 = 0;
    DAT_1805c7cb8 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c7cb8 = DAT_1805c7cb8;
    *(longlong *)(DAT_1805c7cb8 + 8) = DAT_1805c7cb8;
    DAT_1805c7cc8 = 0;
    _DAT_1805c7cd0 = 0;
    uRam00000001805c7cd8 = 0;
    DAT_1805c7ce0 = 7;
    _DAT_1805c7ce8 = 8;
    _DAT_1805c7cb0 = CONCAT44(DAT_1805c7cb0_4,0x3f800000);
    FUN_18022be40(&DAT_1805c7cc8,0x10,DAT_1805c7cb8);
    puVar4 = &local_48;
    do {
      FUN_180265cb0(&DAT_1805c7cb0,local_40,puVar4);
      puVar4 = (undefined2 *)((longlong)puVar4 + 1);
    } while (puVar4 != local_45);
    atexit(FUN_18030b8b0);
  }
  if (*(char *)(param_1 + 0x2a) == '$') {
    bVar1 = *(byte *)(param_1 + 0x42);
    uVar5 = ((ulonglong)bVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 & DAT_1805c7ce0;
    lVar3 = *(longlong *)(DAT_1805c7cc8 + 8 + uVar5 * 0x10);
    if (lVar3 == DAT_1805c7cb8) {
LAB_18025ba31:
      lVar3 = 0;
    }
    else {
      bVar2 = *(byte *)(lVar3 + 0x10);
      while (bVar1 != bVar2) {
        if (lVar3 == *(longlong *)(DAT_1805c7cc8 + uVar5 * 0x10)) goto LAB_18025ba31;
        lVar3 = *(longlong *)(lVar3 + 8);
        bVar2 = *(byte *)(lVar3 + 0x10);
      }
    }
    if ((lVar3 != 0) && (lVar3 != DAT_1805c7cb8)) {
      return '\x02';
    }
  }
  if (*(byte *)(param_1 + 0x42) == 0x23) {
    uVar5 = ((ulonglong)*(byte *)(param_1 + 0x2a) ^ 0xcbf29ce484222325) * 0x100000001b3 &
            DAT_1805c7ce0;
    lVar3 = *(longlong *)(DAT_1805c7cc8 + 8 + uVar5 * 0x10);
    if (lVar3 == DAT_1805c7cb8) {
LAB_18025ba91:
      lVar3 = 0;
    }
    else {
      bVar1 = *(byte *)(lVar3 + 0x10);
      while (*(byte *)(param_1 + 0x2a) != bVar1) {
        if (lVar3 == *(longlong *)(DAT_1805c7cc8 + uVar5 * 0x10)) goto LAB_18025ba91;
        lVar3 = *(longlong *)(lVar3 + 8);
        bVar1 = *(byte *)(lVar3 + 0x10);
      }
    }
    if (lVar3 != 0) {
      return (lVar3 == DAT_1805c7cb8) + '\x02';
    }
  }
  return '\x03';
}


