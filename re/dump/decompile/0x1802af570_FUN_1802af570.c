// 0x1802af570  FUN_1802af570
// size=1482 thunk=false
// signature: undefined FUN_1802af570()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802af570(ulonglong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  size_t sVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  char *local_a8;
  longlong local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x1520);
  if (*(char *)(lVar3 + 0xd1) != '\0') {
    return;
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar2 + 0xec0);
  if ((param_1 & 2) != 0) {
    fVar20 = *(float *)(lVar3 + 0x11c);
    fVar18 = *(float *)(lVar3 + 0x118);
    fVar19 = fVar20 + *(float *)(lVar3 + 0x144);
    fVar17 = fVar18 + param_2;
    local_a8 = (char *)(ulonglong)(uint)param_2;
    local_98 = fVar18;
    fStack_94 = fVar20;
    fStack_90 = fVar17;
    fStack_8c = fVar19;
    FUN_18027f400(&local_a8,DAT_180381384);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    *(uint *)(lVar2 + 0x1efc) = *(uint *)(lVar2 + 0x1eb8) | *(uint *)(lVar2 + 0x1ec4);
    lVar5 = *(longlong *)(lVar2 + 0x1520);
    *(undefined4 *)(lVar2 + 0x1ef8) = 0;
    *(float *)(lVar2 + 0x1f04) = local_98;
    *(float *)(lVar2 + 0x1f08) = fStack_94;
    *(float *)(lVar2 + 0x1f0c) = fStack_90;
    *(float *)(lVar2 + 0x1f10) = fStack_8c;
    *(undefined4 *)(lVar2 + 0x1f00) = 0;
    *(float *)(lVar2 + 0x1f14) = local_98;
    *(float *)(lVar2 + 0x1f18) = fStack_94;
    *(float *)(lVar2 + 0x1f1c) = fStack_90;
    *(float *)(lVar2 + 0x1f20) = fStack_8c;
    *(undefined8 *)(lVar2 + 0x1ec0) = 0;
    if ((((fVar19 < *(float *)(lVar5 + 0x26c) || fVar19 == *(float *)(lVar5 + 0x26c)) ||
         (*(float *)(lVar5 + 0x274) <= fVar20)) ||
        (fVar17 < *(float *)(lVar5 + 0x268) || fVar17 == *(float *)(lVar5 + 0x268))) ||
       (*(float *)(lVar5 + 0x270) <= fVar18)) {
      if (*(char *)(lVar2 + 0x1592) == '\0') {
        return;
      }
    }
    else {
      *(undefined4 *)(lVar2 + 0x1f00) = 0x100;
    }
    cVar8 = FUN_18027bdd0(&local_98,&fStack_90,1);
    if (cVar8 != '\0') {
      *(uint *)(lVar2 + 0x1f00) = *(uint *)(lVar2 + 0x1f00) | 1;
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x2c8);
    uVar9 = FUN_18026a6a0(0x1c,DAT_180380bb0);
    local_b0 = 0;
    local_b8 = (char *)((ulonglong)local_b8._4_4_ << 0x20);
    FUN_180295000(uVar6,&local_98,&fStack_90,uVar9);
    if (*(char *)(lVar4 + 0x2858) == '\0') {
      return;
    }
    FUN_180287bb0(&DAT_18037ffec);
    return;
  }
  if ((param_1 & 1) == 0) {
    return;
  }
  fVar20 = *(float *)(lVar3 + 0x118);
  fVar18 = *(float *)(lVar3 + 0x250);
  if ((param_1 & 4) == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = *(longlong *)(lVar3 + 0x1c8);
    if (local_a0 != 0) {
      fVar20 = *(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x15c);
      fVar18 = *(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30);
      FUN_1802a9c70();
    }
  }
  fStack_94 = *(float *)(lVar3 + 0x11c);
  fStack_8c = fStack_94 + param_2;
  local_a8 = (char *)((ulonglong)(uint)param_2 << 0x20);
  local_98 = fVar20;
  fStack_90 = fVar18;
  FUN_18027f400(&local_a8,DAT_180381384);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar2 + 0xec0);
  *(undefined4 *)(lVar5 + 0x1ef8) = 0;
  *(ulonglong *)(lVar5 + 0x1f04) = CONCAT44(fStack_94,local_98);
  *(ulonglong *)(lVar5 + 0x1f0c) = CONCAT44(fStack_8c,fStack_90);
  *(uint *)(lVar5 + 0x1efc) = *(uint *)(lVar5 + 0x1eb8) | *(uint *)(lVar5 + 0x1ec4);
  lVar7 = *(longlong *)(lVar5 + 0x1520);
  *(float *)(lVar5 + 0x1f14) = local_98;
  *(float *)(lVar5 + 0x1f18) = fStack_94;
  *(float *)(lVar5 + 0x1f1c) = fStack_90;
  *(float *)(lVar5 + 0x1f20) = fStack_8c;
  *(undefined4 *)(lVar5 + 0x1f00) = 0;
  *(undefined8 *)(lVar5 + 0x1ec0) = 0;
  if (((fStack_8c < *(float *)(lVar7 + 0x26c) || fStack_8c == *(float *)(lVar7 + 0x26c)) ||
      (*(float *)(lVar7 + 0x274) <= fStack_94)) ||
     ((fStack_90 < *(float *)(lVar7 + 0x268) || fStack_90 == *(float *)(lVar7 + 0x268) ||
      (*(float *)(lVar7 + 0x270) <= local_98)))) {
    if (*(char *)(lVar5 + 0x1592) == '\0') goto LAB_1802afb19;
  }
  else {
    *(undefined4 *)(lVar5 + 0x1f00) = 0x100;
  }
  cVar8 = FUN_18027bdd0(&local_98,&fStack_90,1);
  if (cVar8 != '\0') {
    *(uint *)(lVar5 + 0x1f00) = *(uint *)(lVar5 + 0x1f00) | 1;
  }
  fVar20 = DAT_180380bb0;
  uVar6 = *(undefined8 *)(lVar3 + 0x2c8);
  uVar9 = FUN_18026a6a0(0x1c,DAT_180380bb0);
  local_b0 = 0;
  local_b8 = (char *)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_180295000(uVar6,&local_98,&fStack_90,uVar9);
  if (*(char *)(lVar4 + 0x2858) != '\0') {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    pcVar16 = "--------------------------------\n";
    local_a8 = *(char **)(lVar2 + 0x2888);
    pcVar15 = *(char **)(lVar2 + 0x2880);
    lVar4 = *(longlong *)(lVar2 + 0x1520);
    *(undefined8 *)(lVar2 + 0x2888) = 0;
    *(undefined8 *)(lVar2 + 0x2880) = 0;
    pcVar14 = "--------------------------------\n";
    do {
      if ((*pcVar14 == '\0') || ((pcVar12 = pcVar14 + 1, *pcVar14 == '#' && (*pcVar12 == '#'))))
      break;
      pcVar14 = pcVar12;
    } while (pcVar12 != (char *)0xffffffffffffffff);
    fVar18 = *(float *)(lVar2 + 0xcc8);
    if (*(float *)(lVar2 + 0xcc8) <= *(float *)(lVar2 + 0xcd8)) {
      fVar18 = *(float *)(lVar2 + 0xcd8);
    }
    fVar17 = *(float *)(lVar2 + 0x2890);
    *(float *)(lVar2 + 0x2890) = fStack_94;
    if (fVar18 + fVar17 + fVar20 < fStack_94) {
      FUN_180287bb0(&DAT_18033f5ac);
      *(undefined1 *)(lVar2 + 0x2859) = 1;
    }
    if (pcVar15 != (char *)0x0) {
      sVar11 = strlen(pcVar15);
      FUN_180287c20(&local_98,pcVar15,pcVar15 + sVar11);
    }
    iVar1 = *(int *)(lVar4 + 0x1a0);
    iVar10 = *(int *)(lVar2 + 0x2894);
    if (iVar1 < iVar10) {
      *(int *)(lVar2 + 0x2894) = iVar1;
      iVar10 = iVar1;
    }
    iVar1 = *(int *)(lVar4 + 0x1a0);
    while( true ) {
      pcVar12 = memchr(pcVar16,10,(longlong)pcVar14 - (longlong)pcVar16);
      pcVar15 = pcVar14;
      if (pcVar12 != (char *)0x0) {
        pcVar15 = pcVar12;
      }
      if ((pcVar16 == pcVar15) && (pcVar15 == pcVar14)) break;
      iVar13 = (iVar1 - iVar10) * 4;
      if (*(char *)(lVar2 + 0x2859) == '\0') {
        iVar13 = 1;
      }
      local_b8 = pcVar16;
      FUN_180287bb0("%*s%.*s",iVar13,&DAT_18033e5ea,(int)pcVar15 - (int)pcVar16);
      *(undefined1 *)(lVar2 + 0x2859) = 0;
      if (*pcVar15 == '\n') {
        FUN_180287bb0(&DAT_18033f5ac);
        *(undefined1 *)(lVar2 + 0x2859) = 1;
      }
      if (pcVar15 == pcVar14) break;
      pcVar16 = pcVar15 + 1;
    }
    pcVar16 = local_a8;
    if (local_a8 != (char *)0x0) {
      sVar11 = strlen(local_a8);
      FUN_180287c20(&local_98,pcVar16,pcVar16 + sVar11);
    }
  }
LAB_1802afb19:
  lVar2 = local_a0;
  if (local_a0 != 0) {
    FUN_1802a9d60();
    *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(lVar3 + 0x11c);
  }
  return;
}


