// 0x18018ab90  FUN_18018ab90
// size=123 thunk=false
// signature: undefined FUN_18018ab90()
// status: ok


ulonglong FUN_18018ab90(longlong *param_1)

{
  ulonglong in_RAX;
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x20))();
    in_RAX = 0;
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
      in_RAX = uVar2;
      if (((((int)uVar2 - 1U < 0x80) && (0.0 <= DAT_1803e9228)) && (DAT_1803fa608 != (float *)0x0))
         && (((0.0 <= (double)*DAT_1803fa608 - DAT_1803e9228 &&
              ((double)*DAT_1803fa608 - DAT_1803e9228 <= DAT_180380cb0)) &&
             (in_RAX = (ulonglong)(int)uVar2, (&DAT_1804239a0)[in_RAX] != '\0')))) {
        return CONCAT71((int7)(int3)(uVar2 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


