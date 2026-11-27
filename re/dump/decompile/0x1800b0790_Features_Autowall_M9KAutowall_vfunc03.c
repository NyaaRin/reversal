// 0x1800b0790  Features_Autowall_M9KAutowall_vfunc03
// size=514 thunk=false
// signature: undefined Features_Autowall_M9KAutowall_vfunc03()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Autowall_M9KAutowall_vfunc03(ulonglong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float *pfVar3;
  longlong *plVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  char local_c8;
  undefined1 local_c7 [7];
  ulonglong local_c0;
  float local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  float *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  puVar1 = (undefined1 *)(param_1 + 0x15);
  *puVar1 = 0;
  puVar2 = (undefined1 *)(param_1 + 0x10);
  *puVar2 = 0;
  pfVar3 = (float *)(param_1 + 0xc);
  *pfVar3 = 0.0;
  local_c0 = param_1;
  local_b0 = puVar1;
  local_a8 = puVar2;
  local_a0 = pfVar3;
  local_98 = param_2;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar8 = FUN_1800acab0("M9KDisablePenetration");
    *(undefined8 *)(param_1 + 0x18) = uVar8;
  }
  plVar4 = (longlong *)(param_1 + 0x20);
  local_90 = plVar4;
  if (*plVar4 == 0) {
    lVar9 = FUN_1800acab0("M9KDamageMultiplier");
    *plVar4 = lVar9;
  }
  *(undefined1 *)(param_1 + 0x11) = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar7 = FUN_1800197a0(*(undefined8 *)(param_1 + 0x18));
    *(bool *)(param_1 + 0x11) = iVar7 == 0;
  }
  local_c7[0] = 1;
  local_c8 = '\0';
  cVar6 = FUN_1800ac790(param_2,"Penetration",local_c7,&local_c8);
  if ((cVar6 == '\0') || (local_c8 == '\0')) {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = local_c7[0];
  }
  uStack_80 = 0;
  local_78 = _DAT_1803814b0;
  uStack_70 = _UNK_1803814b8;
  local_88 = 0;
  cVar6 = FUN_1800ac980(param_2);
  if (cVar6 != '\0') {
    uVar10 = FUN_1800b0540(&local_88,param_1 + 0x14,param_1 + 0x13);
    *(undefined4 *)(param_1 + 8) = uVar10;
    local_c0 = local_c0 & 0xffffffff00000000;
    cVar6 = FUN_1800ac860(param_2);
    fVar12 = DAT_180380bb0;
    if ((cVar6 != '\0') && (fVar5 = (float)local_c0, 0.0 < (float)local_c0)) {
      local_b8 = DAT_180380bb0;
      if ((*plVar4 != 0) && (fVar11 = (float)FUN_180019700(*plVar4), fVar11 != 0.0)) {
        fVar12 = (float)((uint)fVar11 & _DAT_1803817c0);
        local_b8 = fVar12;
      }
      *pfVar3 = fVar12 * fVar5;
      *puVar2 = 1;
    }
    *puVar1 = 1;
  }
  FUN_18020e450(&local_88);
  return;
}


