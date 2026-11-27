// 0x1801a7850  FUN_1801a7850
// size=457 thunk=false
// signature: undefined FUN_1801a7850()
// status: ok


undefined8 FUN_1801a7850(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  size_t _Size;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float *pfVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float local_58 [8];
  
  uVar2 = param_2[3];
  _Size = param_2[2];
  uVar13 = param_3 & 0xff ^ 1;
  uVar11 = uVar13;
  do {
    pcVar3 = (&PTR_DAT_18033e418)[(int)uVar11];
    sVar7 = strlen(pcVar3);
    puVar9 = param_2;
    if (0xf < uVar2) {
      puVar9 = (undefined8 *)*param_2;
    }
    if (_Size == sVar7) {
      uVar14 = uVar11;
      if (_Size == 0) break;
      iVar6 = memcmp(puVar9,pcVar3,_Size);
      if (iVar6 == 0) break;
    }
    uVar11 = uVar11 + 1;
    uVar14 = 0xffffffff;
  } while ((int)uVar11 < 7);
  pfVar10 = local_58 + 2;
  local_58[0] = 1.5;
  local_58[2] = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar10 = &DAT_1803da6a4;
  }
  pfVar8 = local_58;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar8 = pfVar10;
  }
  fVar15 = *pfVar8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar15 = fVar15 * DAT_180381190;
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  puVar1 = (uint *)(lVar4 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar4 + 0x1ed8) = fVar15;
  if ((int)uVar14 < 0) {
    puVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar9 = (undefined8 *)*param_2;
    }
  }
  else {
    puVar9 = (undefined8 *)(&PTR_DAT_18033a0b8)[(int)uVar14];
  }
  uVar12 = 0;
  cVar5 = FUN_1802b0590(param_1,puVar9,0);
  if (cVar5 != '\0') {
    do {
      local_58[0] = 0.0;
      local_58[1] = 0.0;
      cVar5 = FUN_1802c1850((&PTR_DAT_18033a0b8)[(int)uVar13],uVar14 == uVar13,0,local_58);
      if (cVar5 != '\0') {
        pcVar3 = (&PTR_DAT_18033e418)[(int)uVar13];
        strlen(pcVar3);
        FUN_180212700(param_2,pcVar3);
        uVar12 = 1;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 7);
    FUN_1802b1130();
  }
  return uVar12;
}


