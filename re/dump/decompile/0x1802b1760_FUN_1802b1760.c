// 0x1802b1760  FUN_1802b1760
// size=277 thunk=false
// signature: undefined FUN_1802b1760()
// status: ok


ulonglong FUN_1802b1760(undefined4 param_1,double *param_2,double *param_3)

{
  switch(param_1) {
  case 0:
    if (*(char *)param_3 <= *(char *)param_2) {
      return (ulonglong)(*(char *)param_3 < *(char *)param_2);
    }
    break;
  case 1:
    if (*(byte *)param_3 <= *(byte *)param_2) {
      return (ulonglong)(*(byte *)param_3 < *(byte *)param_2);
    }
    break;
  case 2:
    if (*(short *)param_3 <= *(short *)param_2) {
      return (ulonglong)(*(short *)param_3 < *(short *)param_2);
    }
    break;
  case 3:
    if (*(ushort *)param_3 <= *(ushort *)param_2) {
      return (ulonglong)(*(ushort *)param_3 < *(ushort *)param_2);
    }
    break;
  case 4:
    if ((int)*(float *)param_3 <= (int)*(float *)param_2) {
      return (ulonglong)((int)*(float *)param_3 < (int)*(float *)param_2);
    }
    break;
  case 5:
    if ((uint)*(float *)param_3 <= (uint)*(float *)param_2) {
      return (ulonglong)((uint)*(float *)param_3 < (uint)*(float *)param_2);
    }
    break;
  case 6:
    if ((longlong)*param_3 <= (longlong)*param_2) {
      return (ulonglong)((longlong)*param_3 < (longlong)*param_2);
    }
    break;
  case 7:
    if ((ulonglong)*param_3 <= (ulonglong)*param_2) {
      return (ulonglong)((ulonglong)*param_3 < (ulonglong)*param_2);
    }
    break;
  case 8:
    if (*(float *)param_3 <= *(float *)param_2) {
      return (ulonglong)(*(float *)param_3 < *(float *)param_2);
    }
    break;
  case 9:
    if (*param_3 <= *param_2) {
      return (ulonglong)(*param_3 < *param_2);
    }
    break;
  default:
    return 0;
  }
  return 0xffffffff;
}


