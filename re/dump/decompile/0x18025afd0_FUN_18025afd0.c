// 0x18025afd0  FUN_18025afd0
// size=356 thunk=false
// signature: undefined FUN_18025afd0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18025afd0(ushort param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  byte bStackX_9;
  undefined4 local_res10 [2];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  if (param_1 < 0xab) {
    return false;
  }
  if ((DAT_1805c8400 & 1) == 0) {
    DAT_1805c8400 = DAT_1805c8400 | 1;
    _DAT_1805c82b0 = 0;
    DAT_1805c82b8 = 0;
    _DAT_1805c82c0 = 0;
    DAT_1805c82c8 = 0;
    _DAT_1805c82d0 = 0;
    uRam00000001805c82d8 = 0;
    _DAT_1805c82e0 = 0;
    uRam00000001805c82e8 = 0;
    local_28 = 0x201800ab;
    local_24 = 0x201c201b;
    local_20 = 0x2039201f;
    local_1c = 0x2e042e02;
    local_18 = 0x2e0c2e09;
    local_14 = 0x2e202e1c;
    local_res10[0] = 0;
    FUN_180262370(&DAT_1805c82b0,local_res10);
    puVar5 = &local_28;
    do {
      FUN_180261500(&DAT_1805c82b0,local_38,puVar5);
      puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    } while (puVar5 != local_10);
    atexit(FUN_18030b7c0);
  }
  bStackX_9 = (byte)(param_1 >> 8);
  uVar4 = (((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)bStackX_9)
          * 0x100000001b3 & _DAT_1805c82e0;
  lVar3 = *(longlong *)(DAT_1805c82c8 + 8 + uVar4 * 0x10);
  if (lVar3 == DAT_1805c82b8) {
LAB_18025b117:
    lVar3 = 0;
  }
  else {
    uVar1 = *(ushort *)(lVar3 + 0x10);
    while (param_1 != uVar1) {
      if (lVar3 == *(longlong *)(DAT_1805c82c8 + uVar4 * 0x10)) goto LAB_18025b117;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(ushort *)(lVar3 + 0x10);
    }
  }
  lVar2 = DAT_1805c82b8;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  return lVar2 != DAT_1805c82b8;
}


