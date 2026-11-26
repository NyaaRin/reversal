// 0x18021aef0  FUN_18021aef0
// size=130 thunk=false
// signature: undefined FUN_18021aef0()
// status: ok


undefined8 * FUN_18021aef0(undefined8 *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[2];
  uVar2 = param_1[3];
  if (uVar2 - lVar1 < param_3) {
    puVar3 = (undefined8 *)FUN_18022a080(param_1,param_3,uVar2,param_2,param_3);
    return puVar3;
  }
  param_1[2] = lVar1 + param_3;
  puVar3 = param_1;
  if (0xf < uVar2) {
    puVar3 = (undefined8 *)*param_1;
  }
  memmove((void *)(lVar1 + (longlong)puVar3),param_2,param_3);
  *(undefined1 *)(lVar1 + (longlong)puVar3 + param_3) = 0;
  return param_1;
}


