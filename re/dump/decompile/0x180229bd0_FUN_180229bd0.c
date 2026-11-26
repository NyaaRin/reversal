// 0x180229bd0  FUN_180229bd0
// size=208 thunk=false
// signature: undefined FUN_180229bd0()
// status: ok


longlong * FUN_180229bd0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *_Buf2;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)
           ((*(ulonglong *)(param_1 + 0x30) & param_4) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar5 = (longlong *)puVar4[1];
  if (plVar5 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar1 = (longlong *)*puVar4;
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = plVar5 + 2;
    if (0xf < (ulonglong)plVar5[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    puVar4 = param_3;
    if (0xf < uVar2) {
      puVar4 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar5[4]) && ((_Size == 0 || (iVar3 = memcmp(puVar4,_Buf2,_Size), iVar3 == 0))))
    break;
    if (plVar5 == plVar1) {
      *param_2 = (longlong)plVar5;
      param_2[1] = 0;
      return param_2;
    }
    plVar5 = (longlong *)plVar5[1];
  }
  *param_2 = *plVar5;
  param_2[1] = (longlong)plVar5;
  return param_2;
}


