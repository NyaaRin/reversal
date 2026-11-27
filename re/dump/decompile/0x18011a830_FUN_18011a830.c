// 0x18011a830  FUN_18011a830
// size=224 thunk=false
// signature: undefined FUN_18011a830()
// status: ok


ulonglong FUN_18011a830(undefined8 *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong _Size;
  
  uVar4 = param_1[2];
  if (4 < uVar4) {
    uVar3 = 7;
    if (uVar4 < 7) {
      uVar3 = uVar4;
    }
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    _Size = uVar3;
    if (7 < uVar3) {
      _Size = 7;
    }
    iVar1 = memcmp(puVar2,"http://",_Size);
    in_RAX = CONCAT44(extraout_var,iVar1);
    if ((iVar1 != 0) || (uVar3 != 7)) {
      uVar3 = 8;
      if (uVar4 < 8) {
        uVar3 = uVar4;
      }
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      uVar4 = uVar3;
      if (8 < uVar3) {
        uVar4 = 8;
      }
      iVar1 = memcmp(puVar2,"https://",uVar4);
      in_RAX = CONCAT44(extraout_var_00,iVar1);
      if ((iVar1 != 0) || (uVar3 != 8)) {
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        iVar1 = memcmp(param_1,"asset://",uVar4);
        in_RAX = CONCAT44(extraout_var_01,iVar1);
        if ((iVar1 != 0) || (uVar3 != 8)) goto LAB_18011a8fe;
      }
    }
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_18011a8fe:
  return in_RAX & 0xffffffffffffff00;
}


