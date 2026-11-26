// 0x1802b4230  FUN_1802b4230
// size=193 thunk=false
// signature: undefined FUN_1802b4230()
// status: ok


void FUN_1802b4230(undefined4 *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  
  lVar1 = param_2[4];
  lVar2 = *param_2;
  lVar3 = (int)param_2[3] + lVar1;
  local_res10 = 0;
  FUN_18029e350(&local_res8,*(undefined8 *)(lVar2 + 0x1228),*(undefined4 *)(lVar2 + 0x1238),
                DAT_180381308,*(undefined4 *)(lVar2 + 0x2580),lVar1 + param_3,lVar3,lVar3,
                &local_res10);
  param_1[5] = ((int)local_res10 - (int)lVar1) - param_3;
  param_1[1] = local_res8;
  param_1[2] = local_resc;
  param_1[4] = local_resc;
  *param_1 = 0;
  param_1[3] = 0;
  return;
}


