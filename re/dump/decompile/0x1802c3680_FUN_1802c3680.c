// 0x1802c3680  FUN_1802c3680
// size=1294 thunk=false
// signature: undefined FUN_1802c3680()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802c3680(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  float *pfVar9;
  char *pcVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x1520);
  if (*(char *)(lVar5 + 0xd1) != '\0') {
    return 0;
  }
  uVar8 = FUN_18027b010(param_1);
  pcVar10 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar10 != '\0') {
      pcVar1 = pcVar10 + 1;
      if (((*pcVar10 == '#') && (*pcVar1 == '#')) ||
         (pcVar10 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar18 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
  if (param_1 == pcVar10) {
    fVar17 = 0.0;
  }
  else {
    FUN_18029e350(&local_d8,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),fVar18,
                  DAT_180381308,DAT_180381384,param_1,pcVar10,pcVar10,0);
    fVar17 = (float)(int)(local_d8 + DAT_180380ba8);
    fVar18 = local_d4;
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar2 = *(float *)(lVar4 + 0xcc8);
  fVar13 = (*(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238) +
           *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xcd8)) * _DAT_180380f98;
  uVar11 = FUN_18027f9c0();
  pfVar9 = (float *)FUN_18027faa0(&local_d8,*param_2,uVar11,fVar2 + fVar2 + fVar13);
  fVar2 = *(float *)(lVar5 + 0x118);
  fVar13 = *(float *)(lVar5 + 0x11c);
  fVar15 = (float)(int)*pfVar9 + fVar2;
  fVar16 = (float)(int)pfVar9[1];
  if ((float)(int)pfVar9[1] <= fVar18) {
    fVar16 = fVar18;
  }
  fVar16 = fVar16 + fVar13;
  if (fVar17 <= 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = fVar17 + *(float *)(lVar4 + 0xcdc);
  }
  fVar12 = fVar15 + fVar12;
  fVar14 = fVar16 + 0.0;
  *(undefined8 *)(lVar4 + 0x1ec0) = 0;
  local_d0 = fVar2;
  fStack_cc = fVar13;
  fStack_c8 = fVar12;
  fStack_c4 = fVar14;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  if (((fVar13 < *(float *)(lVar6 + 0x274)) &&
      (*(float *)(lVar6 + 0x26c) <= fVar14 && fVar14 != *(float *)(lVar6 + 0x26c))) &&
     ((fVar2 < *(float *)(lVar6 + 0x270) &&
      (*(float *)(lVar6 + 0x268) <= fVar12 && fVar12 != *(float *)(lVar6 + 0x268))))) {
    FUN_18027fc30();
    if (0.0 < fVar17) {
      fVar14 = fVar15 + *(float *)(lVar4 + 0xcdc);
      fVar12 = fVar13 + *(float *)(lVar4 + 0xcc8);
      FUN_18026b160(CONCAT44(fVar12,fVar14),param_1,pcVar10,0);
      fVar17 = fVar17 + fVar14;
      fVar18 = fVar18 + fVar12;
      fVar12 = *(float *)(lVar5 + 0x130);
      if (*(float *)(lVar5 + 0x130) <= fVar17) {
        fVar12 = fVar17;
      }
      fVar17 = *(float *)(lVar5 + 0x134);
      if (*(float *)(lVar5 + 0x134) <= fVar18) {
        fVar17 = fVar18;
      }
      *(float *)(lVar5 + 0x130) = fVar12;
      *(float *)(lVar5 + 0x134) = fVar17;
      FUN_1802af4c0();
    }
    local_d8 = fVar15 - fVar2;
    local_d4 = fVar16 - fVar13;
    FUN_180273060(0,uVar8,&local_d8,0x80,0);
    return 1;
  }
  local_d4 = fVar14 - fVar13;
  local_d8 = fVar12 - fVar2;
  FUN_18027f400(&local_d8,*(undefined4 *)(lVar4 + 0xcc8));
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  *(uint *)(lVar3 + 0x1efc) = *(uint *)(lVar3 + 0x1eb8) | *(uint *)(lVar3 + 0x1ec4);
  lVar5 = *(longlong *)(lVar3 + 0x1520);
  *(float *)(lVar3 + 0x1f14) = fVar2;
  *(float *)(lVar3 + 0x1f18) = fVar13;
  *(float *)(lVar3 + 0x1f1c) = fVar15;
  *(float *)(lVar3 + 0x1f20) = fVar16;
  *(undefined4 *)(lVar3 + 0x1ef8) = 0;
  *(float *)(lVar3 + 0x1f04) = local_d0;
  *(float *)(lVar3 + 0x1f08) = fStack_cc;
  *(float *)(lVar3 + 0x1f0c) = fStack_c8;
  *(float *)(lVar3 + 0x1f10) = fStack_c4;
  *(undefined4 *)(lVar3 + 0x1f00) = 0;
  *(undefined8 *)(lVar3 + 0x1ec0) = 0;
  if (((fVar14 < *(float *)(lVar5 + 0x26c) || fVar14 == *(float *)(lVar5 + 0x26c)) ||
      (*(float *)(lVar5 + 0x274) <= fVar13)) ||
     ((fVar12 < *(float *)(lVar5 + 0x268) || fVar12 == *(float *)(lVar5 + 0x268) ||
      (*(float *)(lVar5 + 0x270) <= fVar2)))) {
    if (*(char *)(lVar3 + 0x1592) == '\0') goto LAB_1802c3b12;
  }
  else {
    *(undefined4 *)(lVar3 + 0x1f00) = 0x100;
  }
  cVar7 = FUN_18027bdd0(&local_d0,&fStack_c8,1);
  if (cVar7 != '\0') {
    *(uint *)(lVar3 + 0x1f00) = *(uint *)(lVar3 + 0x1f00) | 1;
  }
LAB_1802c3b12:
  *(undefined4 *)(lVar4 + 0x1f48) = 0;
  return 0;
}


