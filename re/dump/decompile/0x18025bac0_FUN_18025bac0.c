// 0x18025bac0  FUN_18025bac0
// size=975 thunk=false
// signature: undefined FUN_18025bac0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_18025bac0(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined1 local_20 [24];
  
  if ((DAT_1805c7ea0 & 1) == 0) {
    DAT_1805c7ea0 = DAT_1805c7ea0 | 1;
    DAT_1805c7c88 = 0;
    _DAT_1805c7c90 = 0;
    uRam00000001805c7c98 = 0;
    _DAT_1805c7ca0 = 0;
    _DAT_1805c7ca8 = 0;
    local_28 = 0x2423;
    _DAT_1805c7c70 = 0;
    DAT_1805c7c78 = 0;
    _DAT_1805c7c80 = 0;
    DAT_1805c7c78 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c7c78 = DAT_1805c7c78;
    *(longlong *)(DAT_1805c7c78 + 8) = DAT_1805c7c78;
    DAT_1805c7c88 = 0;
    _DAT_1805c7c90 = 0;
    uRam00000001805c7c98 = 0;
    _DAT_1805c7ca0 = 7;
    _DAT_1805c7ca8 = 8;
    _DAT_1805c7c70 = CONCAT44(DAT_1805c7c70_4,0x3f800000);
    FUN_18022be40(&DAT_1805c7c88,0x10,DAT_1805c7c78);
    puVar6 = &local_28;
    do {
      FUN_180265cb0(&DAT_1805c7c70,local_20,puVar6);
      puVar6 = (undefined2 *)((longlong)puVar6 + 1);
    } while (puVar6 != &local_26);
    atexit(FUN_18030b910);
  }
  if ((DAT_1805c7ea0 & 2) == 0) {
    DAT_1805c7ea0 = DAT_1805c7ea0 | 2;
    DAT_1805c8388 = 0;
    _DAT_1805c8390 = 0;
    uRam00000001805c8398 = 0;
    _DAT_1805c83a0 = 0;
    _DAT_1805c83a8 = 0;
    local_24 = 0xd0b;
    _DAT_1805c8370 = 0;
    DAT_1805c8378 = 0;
    _DAT_1805c8380 = 0;
    DAT_1805c8378 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c8378 = DAT_1805c8378;
    *(longlong *)(DAT_1805c8378 + 8) = DAT_1805c8378;
    DAT_1805c8388 = 0;
    _DAT_1805c8390 = 0;
    uRam00000001805c8398 = 0;
    _DAT_1805c83a0 = 7;
    _DAT_1805c83a8 = 8;
    _DAT_1805c8370 = CONCAT44(DAT_1805c8370_4,0x3f800000);
    FUN_18022be40(&DAT_1805c8388,0x10,DAT_1805c8378);
    puVar6 = &local_24;
    do {
      FUN_180265cb0(&DAT_1805c8370,local_20,puVar6);
      puVar6 = (undefined2 *)((longlong)puVar6 + 1);
    } while (puVar6 != &local_22);
    atexit(FUN_18030b8e0);
  }
  uVar7 = ((ulonglong)*(byte *)((longlong)param_1 + 0x42) ^ 0xcbf29ce484222325) * 0x100000001b3 &
          _DAT_1805c7ca0;
  lVar5 = *(longlong *)(DAT_1805c7c88 + 8 + uVar7 * 0x10);
  if (lVar5 == DAT_1805c7c78) {
LAB_18025bd31:
    lVar5 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar5 + 0x10);
    while (*(byte *)((longlong)param_1 + 0x42) != bVar1) {
      if (lVar5 == *(longlong *)(DAT_1805c7c88 + uVar7 * 0x10)) goto LAB_18025bd31;
      lVar5 = *(longlong *)(lVar5 + 8);
      bVar1 = *(byte *)(lVar5 + 0x10);
    }
  }
  if ((lVar5 == 0) || (lVar5 == DAT_1805c7c78)) {
    if (*(char *)((longlong)param_1 + 0x42) == '!') goto LAB_18025bdaa;
  }
  else {
    uVar7 = ((ulonglong)*(byte *)((longlong)param_1 + 0x2a) ^ 0xcbf29ce484222325) * 0x100000001b3 &
            _DAT_1805c83a0;
    lVar5 = *(longlong *)(DAT_1805c8388 + 8 + uVar7 * 0x10);
    if (lVar5 == DAT_1805c8378) {
LAB_18025bd91:
      lVar5 = 0;
    }
    else {
      bVar1 = *(byte *)(lVar5 + 0x10);
      while (*(byte *)((longlong)param_1 + 0x2a) != bVar1) {
        if (lVar5 == *(longlong *)(DAT_1805c8388 + uVar7 * 0x10)) goto LAB_18025bd91;
        lVar5 = *(longlong *)(lVar5 + 8);
        bVar1 = *(byte *)(lVar5 + 0x10);
      }
    }
    if ((lVar5 == 0) || (lVar5 == DAT_1805c8378)) {
LAB_18025bdaa:
      uVar7 = param_1[6];
    }
    else {
      uVar7 = param_1[3];
    }
    if (uVar7 != 0xffffffffffffffff) {
      uVar2 = param_1[1];
      while (uVar7 < uVar2) {
        cVar3 = FUN_18025ad40(*(undefined2 *)(*param_1 + uVar7 * 0x10));
        if (cVar3 != '\x1a') {
          if (cVar3 == '!') {
            return '\x02';
          }
          if (cVar3 != '*') break;
        }
        if ((uVar7 == 0) || (uVar7 = uVar7 - 1, uVar7 == 0xffffffffffffffff)) break;
      }
    }
  }
  cVar3 = *(char *)((longlong)param_1 + 0x2a);
  if (1 < (byte)(cVar3 - 0x23U)) goto LAB_18025be42;
  cVar4 = *(char *)((longlong)param_1 + 0x42);
  if (cVar4 == '\"') {
    lVar5 = param_1[9];
    uVar7 = lVar5 + 1;
    if (((ulonglong)param_1[1] <= uVar7) ||
       (cVar4 = FUN_18025ad40(*(undefined2 *)(*param_1 + uVar7 * 0x10)), cVar4 == '2'))
    goto LAB_18025be42;
    if (cVar4 == '!') {
      return '\x02';
    }
    if ((cVar4 != '\x1a') || (uVar7 = lVar5 + 2, (ulonglong)param_1[1] <= uVar7))
    goto LAB_18025be42;
    cVar4 = FUN_18025ad40(*(undefined2 *)(*param_1 + uVar7 * 0x10));
  }
  if (cVar4 == '!') {
    return '\x02';
  }
LAB_18025be42:
  if (cVar3 == '\x17') {
    if (*(char *)((longlong)param_1 + 0x42) == '!') {
      return '\x02';
    }
  }
  else if (cVar3 == '\x1a') {
    return (*(char *)((longlong)param_1 + 0x42) != '!') + '\x02';
  }
  return '\x03';
}


