// 0x1802a7f10  FUN_1802a7f10
// size=671 thunk=false
// signature: undefined FUN_1802a7f10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802a7f10(undefined8 param_1,char param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  float local_d8;
  float local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [4];
  undefined4 local_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_d8 = (float)DAT_180381384;
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  lVar6 = *(longlong *)(lVar5 + 0x1520);
  FUN_180272ad0(local_c0,param_1,0,1);
  local_d8 = (float)(int)(*(float *)(lVar5 + 0x1238) * DAT_180380bf0);
  fVar15 = (float)FUN_1802c3ed0(lVar6 + 0x184,0);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar7 + 0x1c8) != 0) ||
     (lVar13 = 0x280, *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368) != 0)) {
    lVar13 = 0x250;
  }
  fVar1 = *(float *)(lVar6 + 0x118);
  fVar2 = *(float *)(lVar6 + 0x150);
  fVar3 = *(float *)(lVar6 + 0x11c);
  fVar17 = (*(float *)(lVar7 + lVar13) - *(float *)(lVar7 + 0x118)) - fVar15;
  iVar11 = FUN_18027b010(param_1);
  uVar12 = 0x1800020;
  uVar9 = 0x1800000;
  if ((*(int *)(lVar5 + 0x1594) == iVar11) && (uVar9 = uVar12, *(char *)(lVar5 + 0x15a4) != '\0')) {
    bVar8 = true;
  }
  else {
    uVar12 = uVar9;
    bVar8 = false;
  }
  FUN_180279170(param_3 ^ 1);
  local_c4 = local_bc;
  local_c8 = fVar15;
  cVar10 = FUN_1802c1850(param_1,0,uVar12,&local_c8);
  if ((cVar10 == '\0') || (bVar8)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  if (((*(uint *)(lVar5 + 0x1f00) & 0x100) != 0) && (param_2 != '\0')) {
    fVar16 = *(float *)(lVar5 + 0x1238) * _DAT_180380b54;
    uVar12 = FUN_18026a6a0(0,DAT_180380bb0);
    fVar15 = 0.0;
    if (0.0 <= fVar17) {
      fVar15 = fVar17;
    }
    FUN_18029f350(*(undefined8 *)(lVar6 + 0x2c8),
                  CONCAT44(*(float *)(lVar5 + 0x1238) * _DAT_180380a10 * DAT_180380ac0 +
                           fVar3 + fVar2,
                           (float)*(ushort *)(lVar6 + 0x194) + fVar15 +
                           *(float *)(lVar5 + 0x1238) * DAT_180380a94 + fVar1),uVar12,fVar16);
  }
  FUN_180279200();
  return uVar14;
}


