// 0x180095a10  FUN_180095a10
// size=258 thunk=false
// signature: undefined FUN_180095a10()
// status: ok


ulonglong FUN_180095a10(longlong *param_1,undefined4 param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_48,lVar1);
    (*DAT_1803faee8)(lVar1,param_2,param_3);
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,10);
  if (cVar2 == '\0') {
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  else {
    puVar4 = (uint *)(**(code **)(*param_1 + 0x178))(param_1,0xffffffff);
    *param_4 = *puVar4;
    param_4[1] = puVar4[1];
    param_4[2] = puVar4[2];
    (**(code **)(*param_1 + 0x10))(param_1,1);
    uVar5 = (ulonglong)(*param_4 & 0x7f800000);
    if (((*param_4 & 0x7f800000) != 0x7f800000) &&
       (uVar5 = (ulonglong)(param_4[1] & 0x7f800000), (param_4[1] & 0x7f800000) != 0x7f800000)) {
      uVar3 = param_4[2] & 0x7f800000;
      uVar5 = (ulonglong)uVar3;
      if (uVar3 != 0x7f800000) {
        return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


