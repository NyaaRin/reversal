// 0x1800aecf0  Features_Autowall_ARC9Autowall_vfunc03
// size=436 thunk=false
// signature: undefined Features_Autowall_ARC9Autowall_vfunc03()
// status: ok


void Features_Autowall_ARC9Autowall_vfunc03(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float local_48 [16];
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  lVar5 = *(longlong *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (lVar5 == 0) {
    lVar5 = FUN_1800acab0("arc9_mod_penetration");
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  uVar2 = FUN_1800acae0(lVar5);
  *(undefined1 *)(param_1 + 0x1c) = uVar2;
  local_48[0] = 0.0;
  cVar3 = FUN_1800ac530(param_2,"GetProcessedValue","Penetration",local_48,1);
  fVar8 = DAT_1803809ec;
  if ((cVar3 != '\0') && (0.0 < local_48[0])) {
    *(float *)(param_1 + 8) = local_48[0];
    local_48[0] = 0.1;
    cVar3 = FUN_1800ac530(param_2,"GetProcessedValue","PenetrationDelta",local_48,1);
    fVar1 = DAT_180380bb0;
    if ((cVar3 != '\0') && (!NAN(local_48[0]))) {
      local_48[2] = 1.0;
      local_48[1] = 0.0;
      pfVar7 = local_48 + 1;
      if (0.0 <= local_48[0]) {
        pfVar7 = local_48;
      }
      pfVar6 = local_48 + 2;
      if (local_48[0] <= DAT_180380bb0) {
        pfVar6 = pfVar7;
      }
      fVar8 = *pfVar6;
    }
    *(float *)(param_1 + 0xc) = fVar8;
    local_48[0] = 0.0;
    cVar3 = FUN_1800ac530(param_2,"GetProcessedValue","Damage_Max",local_48,1);
    if ((cVar3 != '\0') && (0.0 < local_48[0])) {
      *(float *)(param_1 + 0x10) = local_48[0];
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    local_48[0] = 3.0;
    cVar3 = FUN_1800ac6b0(param_2,"MaxPenetrationLayers",local_48);
    if ((cVar3 == '\0') || (iVar4 = (int)local_48[0], local_48[0] < fVar1)) {
      iVar4 = 3;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return;
}


