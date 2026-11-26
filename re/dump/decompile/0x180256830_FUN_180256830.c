// 0x180256830  FUN_180256830
// size=244 thunk=false
// signature: undefined FUN_180256830()
// status: ok


void FUN_180256830(longlong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  short sVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (param_3 <= param_4) {
    do {
      uVar3 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
      if (uVar3 < param_3 || uVar3 - param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      bVar2 = false;
      plVar5 = (longlong *)(param_3 * 0x60 + *param_1);
      plVar5[3] = 0;
      uVar4 = plVar5[1] - *plVar5 >> 4;
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          if (bVar2) break;
          sVar1 = *(short *)(*plVar5 + uVar3 * 0x10);
          if (sVar1 == 0x20) {
            plVar5[3] = plVar5[3] + 1;
          }
          else if (sVar1 == 9) {
            plVar5[3] = plVar5[3] + (*param_2 - (ulonglong)plVar5[3] % *param_2);
          }
          else {
            bVar2 = true;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      param_3 = param_3 + 1;
    } while (param_3 <= param_4);
  }
  return;
}


