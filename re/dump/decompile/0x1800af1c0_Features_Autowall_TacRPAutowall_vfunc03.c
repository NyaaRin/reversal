// 0x1800af1c0  Features_Autowall_TacRPAutowall_vfunc03
// size=218 thunk=false
// signature: undefined Features_Autowall_TacRPAutowall_vfunc03()
// status: ok


void Features_Autowall_TacRPAutowall_vfunc03(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  float local_res8 [2];
  
  *(undefined8 *)(param_1 + 8) = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (lVar3 == 0) {
    lVar3 = FUN_1800acab0("tacrp_penetration");
    *(longlong *)(param_1 + 0x18) = lVar3;
  }
  uVar1 = FUN_1800acae0(lVar3);
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  local_res8[0] = 0.0;
  cVar2 = FUN_1800ac530(param_2,"GetValue","Penetration",local_res8,0);
  if ((cVar2 != '\0') && (0.0 < local_res8[0])) {
    *(float *)(param_1 + 8) = local_res8[0];
    local_res8[0] = 0.0;
    cVar2 = FUN_1800ac530(param_2,"GetValue","Damage_Max",local_res8,0);
    if ((cVar2 != '\0') && (0.0 < local_res8[0])) {
      *(float *)(param_1 + 0xc) = local_res8[0];
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}


