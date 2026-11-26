// 0x180115420  FUN_180115420
// size=207 thunk=false
// signature: undefined FUN_180115420()
// status: ok


ulonglong FUN_180115420(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  uVar5 = FUN_1801153d0();
  if ((char)uVar5 == '\0') {
    DAT_1803ff2b0 = DAT_1803ff2b0 + 1;
    if (DAT_1803ff2b0 < 6) {
      uVar5 = FUN_180014410("[SP] HooksFor invalid self #%d self=%p\n",DAT_1803ff2b0,param_1);
    }
    return uVar5 & 0xffffffffffffff00;
  }
  uVar5 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_18040a360);
  iVar8 = 0;
  if (0 < DAT_18040a270) {
    do {
      lVar6 = (longlong)iVar8;
      lVar7 = lVar6 * 0x30;
      if ((&DAT_18040a2a0)[lVar6 * 6] == 0) {
        lVar4 = (&DAT_18040a2a8)[lVar6 * 6];
        uVar5 = 1;
        *param_2 = (&DAT_18040a2a0)[lVar6 * 6];
        param_2[1] = lVar4;
        lVar4 = *(longlong *)(&DAT_18040a2b8 + lVar7);
        param_2[2] = (&DAT_18040a2b0)[lVar6 * 6];
        param_2[3] = lVar4;
        uVar1 = *(undefined4 *)((longlong)&DAT_18040a2c0 + lVar7 + 4);
        uVar2 = *(undefined4 *)(&DAT_18040a2c8 + lVar6 * 6);
        uVar3 = *(undefined4 *)((longlong)&DAT_18040a2c8 + lVar7 + 4);
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(&DAT_18040a2c0 + lVar6 * 6);
        *(undefined4 *)((longlong)param_2 + 0x24) = uVar1;
        *(undefined4 *)(param_2 + 5) = uVar2;
        *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < DAT_18040a270);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a360);
  return uVar5;
}


