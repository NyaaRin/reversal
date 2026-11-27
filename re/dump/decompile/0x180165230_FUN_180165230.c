// 0x180165230  FUN_180165230
// size=176 thunk=false
// signature: undefined FUN_180165230()
// status: ok


longlong FUN_180165230(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  iVar2 = 1;
  if (0 < param_2) {
    iVar2 = param_2;
  }
  switch(param_3) {
  case 0:
  case 1:
  case 0xb:
  case 0xc:
  case 0x10:
    return (longlong)iVar2 * (longlong)iVar1 * 4;
  case 2:
  case 3:
    return (longlong)iVar2 * (longlong)iVar1 * 3;
  default:
    return 0;
  case 0xd:
  case 0x14:
    return (longlong)((int)(iVar1 + 3 + (iVar1 + 3 >> 0x1f & 3U)) >> 2) *
           (longlong)((int)(iVar2 + 3 + (iVar2 + 3 >> 0x1f & 3U)) >> 2) * 8;
  case 0xe:
  case 0xf:
    return (longlong)((int)(iVar1 + 3 + (iVar1 + 3 >> 0x1f & 3U)) >> 2) *
           (longlong)((int)(iVar2 + 3 + (iVar2 + 3 >> 0x1f & 3U)) >> 2) * 0x10;
  }
}


