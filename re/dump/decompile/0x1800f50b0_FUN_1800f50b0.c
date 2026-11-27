// 0x1800f50b0  FUN_1800f50b0
// size=388 thunk=false
// signature: undefined FUN_1800f50b0()
// status: ok


undefined1 FUN_1800f50b0(longlong *param_1,undefined8 param_2,byte param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  float local_res8;
  undefined4 local_resc;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  lVar4 = *param_1;
  lVar6 = ((ulonglong)param_3 + 1) * 0x20;
  uVar1 = *(undefined4 *)(lVar6 + lVar4);
  uVar2 = *(undefined4 *)(lVar6 + 4 + lVar4);
  uVar3 = *(undefined4 *)(lVar6 + 8 + lVar4);
  local_58 = uVar1;
  local_54 = uVar2;
  local_50 = uVar3;
  if (param_3 == 0) {
    local_4c = DAT_180380a3c;
    FUN_18026a810(0x16,&local_58);
    local_4c = DAT_180380a6c;
  }
  else {
    local_4c = DAT_180380a74;
    FUN_18026a810(0x16,&local_58);
    local_4c = DAT_180380ab4;
  }
  local_58 = uVar1;
  local_54 = uVar2;
  local_50 = uVar3;
  FUN_18026a810(0x17,&local_58);
  local_4c = 0x3f051eb8;
  local_58 = uVar1;
  local_54 = uVar2;
  local_50 = uVar3;
  FUN_18026a810(0x18,&local_58);
  FUN_18026a810(0,(((ulonglong)param_3 ^ 1) + 7) * 0x10 + *param_1);
  local_res8 = param_4 * *(float *)param_1[1];
  local_resc = *(undefined4 *)param_1[2];
  uVar5 = FUN_1802abf60(param_2,&local_res8,0);
  FUN_18026a890(4);
  return uVar5;
}


