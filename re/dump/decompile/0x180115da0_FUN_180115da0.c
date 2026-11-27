// 0x180115da0  FUN_180115da0
// size=245 thunk=false
// signature: undefined FUN_180115da0()
// status: ok


void FUN_180115da0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a360);
  for (iVar4 = 0; iVar4 < DAT_18040a270; iVar4 = iVar4 + 1) {
    lVar2 = (longlong)iVar4;
    plVar3 = &DAT_18040a2a0 + lVar2 * 6;
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x40) == DAT_18040a288) {
        FUN_1801159e0(lVar1,8,(&DAT_18040a2c0)[lVar2 * 6]);
      }
      if (*(longlong *)(*plVar3 + 0x58) == DAT_18040a278) {
        FUN_1801159e0(*plVar3,0xb,(&DAT_18040a2c8)[lVar2 * 6]);
      }
      if (*(code **)(*plVar3 + 0x78) == FUN_180115600) {
        FUN_1801159e0(*plVar3,0xf,(&DAT_18040a2a8)[lVar2 * 6]);
      }
      if (*(code **)(*plVar3 + 0x368) == FUN_1801158b0) {
        FUN_1801159e0(*plVar3,0x6d,(&DAT_18040a2b0)[lVar2 * 6]);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a360);
  return;
}


