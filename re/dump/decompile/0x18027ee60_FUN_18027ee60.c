// 0x18027ee60  FUN_18027ee60
// size=667 thunk=false
// signature: undefined FUN_18027ee60()
// status: ok


char FUN_18027ee60(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  char cVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pcVar13 = "##Tooltip_Error";
  uVar14 = 0xffffffff;
  uVar15 = 0x23;
  lVar8 = *(longlong *)(lVar7 + 0xec0);
  do {
    pcVar13 = pcVar13 + 1;
    if ((((char)uVar15 == '#') && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
      uVar14 = 0xffffffff;
      pcVar13 = pcVar13 + 2;
    }
    else {
      uVar14 = (ulonglong)
               ((uint)(uVar14 >> 8) ^ *(uint *)(&DAT_180331380 + (uVar14 & 0xff ^ uVar15) * 4));
    }
    uVar15 = (ulonglong)(byte)*pcVar13;
  } while (*pcVar13 != 0);
  lVar12 = FUN_1802736c0(~(uint)uVar14);
  if (((*(char *)(lVar8 + 0x11c) == '\0') || (lVar12 == 0)) || (*(char *)(lVar12 + 0xcd) == '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  fVar1 = *(float *)(lVar8 + 0xdf0);
  fVar2 = *(float *)(lVar8 + 0xdf4);
  fVar3 = *(float *)(lVar8 + 0xdf8);
  fVar4 = *(float *)(lVar8 + 0xdfc);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)(lVar7 + 0xec0);
  FUN_18028a220(lVar12 + 0x1fc8);
  fVar10 = DAT_180380a1c;
  if (*(int *)(lVar12 + 0x1fc4) != 4) {
    fVar16 = (0.0 - fVar3) * DAT_180380a1c;
    fVar17 = (DAT_180380bb0 - fVar4) * DAT_180380a1c;
    *(float *)(lVar12 + 0xdf0) = (DAT_180380bb0 - fVar1) * DAT_180380a1c + fVar1;
    *(float *)(lVar12 + 0xdf4) = (0.0 - fVar2) * fVar10 + fVar2;
    *(float *)(lVar12 + 0xdf8) = fVar16 + fVar3;
    *(float *)(lVar12 + 0xdfc) = fVar17 + fVar4;
  }
  if (bVar9) {
    if (*(char *)(lVar7 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = *(longlong *)(lVar7 + 0xec0);
    *(uint *)(lVar12 + 0x1f48) = *(uint *)(lVar12 + 0x1f48) | 1;
    uVar5 = *(undefined8 *)(lVar8 + 0x28b0);
    *(undefined8 *)(lVar12 + 0x1f60) = 0;
    *(undefined8 *)(lVar12 + 0x1f58) = uVar5;
    *(undefined4 *)(lVar12 + 0x1f4c) = 1;
  }
  cVar11 = FUN_180276630("##Tooltip_Error",0,0x200016f);
  FUN_18026a890(1);
  if (cVar11 == '\0') {
    FUN_180278d40();
  }
  else if (*(short *)(*(longlong *)(lVar8 + 0x1520) + 0xda) == 1) {
    FUN_1802affe0("MESSAGE FROM DEAR IMGUI");
    FUN_180282660(*(undefined8 *)(lVar8 + 0x1520));
    FUN_1802825a0(*(undefined8 *)(lVar8 + 0x1520));
    if (*(char *)(lVar7 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
    uVar6 = *(undefined4 *)(lVar7 + 0x28);
    *(undefined4 *)(lVar8 + 0x28b4) = *(undefined4 *)(lVar7 + 0x2c);
    *(undefined4 *)(lVar8 + 0x28b0) = uVar6;
  }
  return cVar11;
}


