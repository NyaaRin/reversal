// 0x180243790  FUN_180243790
// size=238 thunk=false
// signature: undefined FUN_180243790()
// status: ok


ulonglong FUN_180243790(longlong param_1,float *param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  if (((*(char *)(param_1 + 0x4b0) == '\0') &&
      (fVar4 = *param_2 - *(float *)(param_1 + 0x4b8), 0.0 <= fVar4)) &&
     (fVar5 = param_2[1] - *(float *)(param_1 + 0x4bc), 0.0 <= fVar5)) {
    fVar5 = fVar5 / *(float *)(param_1 + 0x4dc);
    in_RAX = 0;
    if ((DAT_180381300 <= fVar5) && (fVar5 = fVar5 - DAT_180381300, fVar5 < DAT_180381300)) {
      in_RAX = 0x8000000000000000;
    }
    uVar3 = (longlong)fVar5 + in_RAX;
    if (uVar3 < *(ulonglong *)(param_1 + 0x210)) {
      uVar1 = (*(longlong *)(param_1 + 0x1e0) - *(longlong *)(param_1 + 0x1d8) >> 3) *
              -0x5555555555555555;
      if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      lVar2 = 0;
      fVar4 = (fVar4 - *(float *)(param_1 + 0x4f0)) / *(float *)(param_1 + 0x4d8);
      if ((DAT_180381300 <= fVar4) && (fVar4 = fVar4 - DAT_180381300, fVar4 < DAT_180381300)) {
        lVar2 = -0x8000000000000000;
      }
      in_RAX = uVar3 * 3;
      if ((ulonglong)((longlong)fVar4 + lVar2) <=
          *(ulonglong *)(*(longlong *)(param_1 + 0x1d8) + 0x10 + (longlong)fVar5 * 0x18)) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


