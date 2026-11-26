// 0x18003afe0  FUN_18003afe0
// size=206 thunk=false
// signature: undefined FUN_18003afe0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018003b098) */

double FUN_18003afe0(longlong param_1,ulonglong param_2)

{
  if (param_2 != 0) {
    return (double)(((((((((param_2 & 0xff ^ *(ulonglong *)(param_1 + 0x28) ^ 0x50fb0739d0383) *
                           0x100000001b3 ^ param_2 >> 8 & 0xff) * 0x100000001b3 ^
                         param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
                        0x100000001b3 ^ param_2 >> 0x20 & 0xff) * 0x100000001b3 ^
                      param_2 >> 0x28 & 0xff) * 0x100000001b3 ^ param_2 >> 0x30 & 0xff) *
                     0x100000001b3 ^ param_2 >> 0x38) * 0x100000001b3 & 0x1fffffffffffff);
  }
  return 0.0;
}


