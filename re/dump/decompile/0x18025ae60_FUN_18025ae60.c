// 0x18025ae60  FUN_18025ae60
// size=356 thunk=false
// signature: undefined FUN_18025ae60()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18025ae60(ushort param_1)

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
  undefined4 local_14 [3];
  
  if (param_1 < 0xbb) {
    return false;
  }
  if ((DAT_1805c7db8 & 1) == 0) {
    DAT_1805c7db8 = DAT_1805c7db8 | 1;
    _DAT_1805c7e10 = 0;
    DAT_1805c7e18 = 0;
    _DAT_1805c7e20 = 0;
    DAT_1805c7e28 = 0;
    _DAT_1805c7e30 = 0;
    uRam00000001805c7e38 = 0;
    _DAT_1805c7e40 = 0;
    uRam00000001805c7e48 = 0;
    local_28 = 0x201900bb;
    local_24 = 0x203a201d;
    local_20 = 0x2e052e03;
    local_1c = 0x2e0d2e0a;
    local_18 = 0x2e212e1d;
    local_res10[0] = 0;
    FUN_180262370(&DAT_1805c7e10,local_res10);
    puVar5 = &local_28;
    do {
      FUN_180261500(&DAT_1805c7e10,local_38,puVar5);
      puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    } while (puVar5 != local_14);
    atexit(FUN_18030b790);
  }
  bStackX_9 = (byte)(param_1 >> 8);
  uVar4 = (((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)bStackX_9)
          * 0x100000001b3 & _DAT_1805c7e40;
  lVar3 = *(longlong *)(DAT_1805c7e28 + 8 + uVar4 * 0x10);
  if (lVar3 == DAT_1805c7e18) {
LAB_18025afa7:
    lVar3 = 0;
  }
  else {
    uVar1 = *(ushort *)(lVar3 + 0x10);
    while (param_1 != uVar1) {
      if (lVar3 == *(longlong *)(DAT_1805c7e28 + uVar4 * 0x10)) goto LAB_18025afa7;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(ushort *)(lVar3 + 0x10);
    }
  }
  lVar2 = DAT_1805c7e18;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  return lVar2 != DAT_1805c7e18;
}


