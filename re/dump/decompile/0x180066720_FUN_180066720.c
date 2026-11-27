// 0x180066720  FUN_180066720
// size=435 thunk=false
// signature: undefined FUN_180066720()
// status: ok


undefined8 * FUN_180066720(undefined8 *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *_Dst;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *_Src;
  
  lVar2 = *(longlong *)(param_3 + 4);
  _Src = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    _Src = *(uint **)param_3;
  }
  if (((lVar2 == 0) ||
      (((3 < lVar2 * 2 && ((*_Src & 0xffffffdf) - 0x3a0041 < 0x1a)) || ((short)*_Src == 0x5c)))) ||
     ((short)*_Src == 0x2f)) {
    FUN_18020e540(param_1,param_2,param_3,param_4,1);
    FUN_1800654d0(param_1,param_3);
    return param_1;
  }
  lVar3 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (lVar3 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
LAB_180066818:
      sVar1 = *(short *)(lVar3 * 2 + -2 + (longlong)param_2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        lVar6 = 1;
        goto LAB_1800667d3;
      }
    }
  }
  else if (lVar3 != 0) goto LAB_180066818;
  lVar6 = 0;
LAB_1800667d3:
  uVar5 = lVar6 + lVar3 + lVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  if ((ulonglong)param_1[3] < uVar5) {
    FUN_18021a2e0(param_1,uVar5 - param_1[2],param_3,param_4,1);
  }
  else {
    param_1[2] = uVar5;
  }
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  memcpy(puVar4,param_2,lVar3 * 2);
  _Dst = (undefined2 *)(lVar3 * 2 + (longlong)puVar4);
  if ((char)lVar6 != '\0') {
    *_Dst = 0x5c;
    _Dst = _Dst + 1;
  }
  memcpy(_Dst,_Src,lVar2 * 2);
  param_1[2] = uVar5;
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)puVar4 + uVar5 * 2) = 0;
  return param_1;
}


