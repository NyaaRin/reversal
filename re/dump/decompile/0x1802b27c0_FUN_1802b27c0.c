// 0x1802b27c0  FUN_1802b27c0
// size=829 thunk=false
// signature: undefined FUN_1802b27c0()
// status: ok


ulonglong FUN_1802b27c0(undefined8 param_1,ulonglong param_2,undefined4 param_3,ushort *param_4,
                       short *param_5,short *param_6,undefined8 param_7)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint local_res18 [4];
  
  uVar1 = param_2 & 0xffffffff;
  switch(param_3) {
  case 0:
    local_res18[0] = (uint)(char)(byte)*param_4;
    uVar1 = FUN_1802ca2b0(param_1,uVar1,4,local_res18,(int)(char)*param_5,(int)(char)*param_6,
                          param_7);
    if ((char)uVar1 != '\0') {
      *(byte *)param_4 = (byte)local_res18[0];
      return uVar1;
    }
    break;
  case 1:
    local_res18[0] = (uint)(byte)*param_4;
    uVar1 = FUN_1802ca8b0(param_1,uVar1,5,local_res18,(char)*param_5,(char)*param_6,param_7);
    if ((char)uVar1 != '\0') {
      *(byte *)param_4 = (byte)local_res18[0];
      return uVar1;
    }
    break;
  case 2:
    local_res18[0] = (uint)(short)*param_4;
    uVar1 = FUN_1802ca2b0(param_1,uVar1,4,local_res18,(int)*param_5,(int)*param_6,param_7);
    if ((char)uVar1 != '\0') {
      *param_4 = (ushort)local_res18[0];
      return uVar1;
    }
    break;
  case 3:
    local_res18[0] = (uint)*param_4;
    uVar1 = FUN_1802ca8b0(param_1,uVar1,5,local_res18,*param_5,*param_6,param_7);
    if ((char)uVar1 != '\0') {
      *param_4 = (ushort)local_res18[0];
      return uVar1;
    }
    break;
  case 4:
    uVar1 = FUN_1802ca2b0(param_1,param_2,4);
    return uVar1;
  case 5:
    uVar1 = FUN_1802ca8b0(param_1,param_2,5);
    return uVar1;
  case 6:
    uVar1 = FUN_1802caec0(param_1,param_2,6);
    return uVar1;
  case 7:
    uVar1 = FUN_1802cb4d0(param_1,param_2,7);
    return uVar1;
  case 8:
    uVar1 = FUN_1802cbb20(param_1,*(undefined4 *)param_5,8);
    return uVar1;
  case 9:
    uVar1 = FUN_1802cc150(param_1,*(undefined8 *)param_5,9);
    return uVar1;
  default:
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  return uVar1;
}


