// 0x18025b300  FUN_18025b300
// size=446 thunk=false
// signature: undefined FUN_18025b300()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18025b300(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1e;
  undefined1 local_18 [16];
  
  if ((DAT_1805c7dbc & 1) == 0) {
    DAT_1805c7dbc = DAT_1805c7dbc | 1;
    DAT_1805c8348 = 0;
    _DAT_1805c8350 = 0;
    uRam00000001805c8358 = 0;
    _DAT_1805c8360 = 0;
    _DAT_1805c8368 = 0;
    local_28 = 0x1e0e0831;
    local_24 = 0x1225221f;
    local_20 = 0x2f29;
    _DAT_1805c8330 = 0;
    DAT_1805c8338 = 0;
    _DAT_1805c8340 = 0;
    DAT_1805c8338 = FUN_1802d8350(0x18);
    *(longlong *)DAT_1805c8338 = DAT_1805c8338;
    *(longlong *)(DAT_1805c8338 + 8) = DAT_1805c8338;
    DAT_1805c8348 = 0;
    _DAT_1805c8350 = 0;
    uRam00000001805c8358 = 0;
    _DAT_1805c8360 = 7;
    _DAT_1805c8368 = 8;
    _DAT_1805c8330 = CONCAT44(DAT_1805c8330_4,0x3f800000);
    FUN_18022be40(&DAT_1805c8348,0x10,DAT_1805c8338);
    puVar4 = &local_28;
    do {
      FUN_180265cb0(&DAT_1805c8330,local_18,puVar4);
      puVar4 = (undefined4 *)((longlong)puVar4 + 1);
    } while (puVar4 != &local_1e);
    atexit(FUN_18030b820);
  }
  uVar5 = ((ulonglong)*(byte *)(param_1 + 0x12) ^ 0xcbf29ce484222325) * 0x100000001b3 &
          _DAT_1805c8360;
  lVar3 = *(longlong *)(DAT_1805c8348 + 8 + uVar5 * 0x10);
  if (lVar3 == DAT_1805c8338) {
LAB_18025b481:
    lVar3 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar3 + 0x10);
    while (*(byte *)(param_1 + 0x12) != bVar1) {
      if (lVar3 == *(longlong *)(DAT_1805c8348 + uVar5 * 0x10)) goto LAB_18025b481;
      lVar3 = *(longlong *)(lVar3 + 8);
      bVar1 = *(byte *)(lVar3 + 0x10);
    }
  }
  if ((((lVar3 != 0) && (lVar3 != DAT_1805c8338)) &&
      (cVar2 = FUN_18025afd0(*(undefined2 *)(param_1 + 0x28)), cVar2 != '\0')) &&
     (*(char *)(param_1 + 0x2a) == '%')) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 2;
  }
  return 3;
}


