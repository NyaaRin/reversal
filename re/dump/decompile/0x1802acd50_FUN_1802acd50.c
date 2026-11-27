// 0x1802acd50  FUN_1802acd50
// size=416 thunk=false
// signature: undefined FUN_1802acd50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802acd50(int param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  uint local_58;
  longlong local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  lVar11 = (longlong)param_1;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  uVar8 = FUN_1802acb60(lVar3,param_1);
  FUN_1802acbe0(&local_40,lVar3,param_1);
  fVar1 = *(float *)(lVar2 + 0xc98);
  bVar4 = *(float *)(lVar3 + 0x28) + fVar1 < local_40;
  bVar5 = local_38 < (*(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30)) - fVar1;
  bVar6 = *(float *)(lVar3 + 0x2c) + fVar1 < local_3c;
  bVar7 = local_34 < (*(float *)(lVar3 + 0x2c) + *(float *)(lVar3 + 0x34)) - fVar1;
  if ((bVar6) || (bVar4)) {
    local_58 = 0x100;
    if (!bVar6) goto LAB_1802ace31;
LAB_1802ace3d:
    uVar12 = 0;
  }
  else {
    local_58 = 0x110;
LAB_1802ace31:
    if (bVar5) goto LAB_1802ace3d;
    uVar12 = 0x20;
  }
  if ((bVar7) || (bVar4)) {
    uVar9 = 0;
    if (!bVar7) goto LAB_1802ace55;
  }
  else {
    uVar9 = 0x40;
LAB_1802ace55:
    if (!bVar5) {
      uVar10 = 0x80;
      goto LAB_1802ace62;
    }
  }
  uVar10 = 0;
LAB_1802ace62:
  fVar1 = *(float *)(lVar3 + 0x58 + lVar11 * 4);
  local_48 = (longlong)*(float *)(lVar3 + 0x98 + lVar11 * 4);
  local_58 = uVar10 | uVar9 | uVar12 | local_58;
  local_60 = (longlong)(fVar1 + fVar1 + *(float *)(lVar3 + 0x40 + lVar11 * 4));
  local_68 = (longlong)
             (*(float *)(lVar3 + 0x230 + lVar11 * 4) - *(float *)(lVar3 + 0x228 + lVar11 * 4));
  FUN_1802acef0(&local_40,uVar8,param_1,&local_48);
  *(float *)(lVar3 + 0x98 + lVar11 * 4) = (float)local_48;
  return;
}


