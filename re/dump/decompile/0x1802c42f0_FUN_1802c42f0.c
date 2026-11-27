// 0x1802c42f0  FUN_1802c42f0
// size=1672 thunk=false
// signature: undefined FUN_1802c42f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802c42f0(char *param_1,undefined8 param_2,char *param_3,char param_4,char param_5)

{
  char *pcVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  char cVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  float *pfVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_108 [32];
  float local_e8;
  char local_d8;
  char local_d7;
  float local_d4;
  undefined4 local_d0;
  float local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_d8 = param_4;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar6 + 0xec0);
  uVar13 = *(ulonglong *)(lVar7 + 0x1520);
  *(undefined1 *)(uVar13 + 0xce) = 1;
  lVar7 = *(longlong *)(lVar7 + 0x1520);
  if (*(char *)(lVar7 + 0xd1) == '\0') {
    if (*(char *)(lVar6 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar16 = DAT_180381384;
    lVar8 = *(longlong *)(lVar6 + 0xec0);
    fVar2 = *(float *)(lVar7 + 0x118);
    fVar18 = *(float *)(lVar7 + 0x11c);
    pcVar15 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar15 != '\0') {
        pcVar1 = pcVar15 + 1;
        if (((*pcVar15 == '#') && (*pcVar1 == '#')) ||
           (pcVar15 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
      }
    }
    local_e8 = DAT_180381384;
    FUN_180272ad0(&local_c8,param_1,pcVar15,0);
    local_d7 = FUN_1802c4220();
    if (local_d7 != '\0') {
      FUN_180279080(0x2000,1);
    }
    FUN_18027abf0(param_1);
    if (param_5 == '\0') {
      if (*(char *)(lVar6 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar9 = *(longlong *)(lVar6 + 0xec0);
      uVar4 = *(uint *)(lVar9 + 0x1eb8);
      if ((uVar4 & 0x40) == 0) {
        *(float *)(lVar9 + 0x26d0) = *(float *)(lVar9 + 0xc84);
        *(float *)(lVar9 + 0xc84) = *(float *)(lVar9 + 0xc84) * *(float *)(lVar9 + 0xc88);
      }
      *(uint *)(lVar9 + 0x1eb8) = uVar4 | 0x40;
      FUN_18028a630(lVar9 + 0x2008);
      *(short *)(lVar9 + 0x26d4) = *(short *)(lVar9 + 0x26d4) + 1;
    }
    fVar19 = DAT_180380ac0;
    if (*(int *)(lVar7 + 0x1d4) == 0) {
      fVar2 = *(float *)(lVar7 + 0x150);
      fVar18 = *(float *)(lVar7 + 0x11c);
      fVar16 = (float)(int)(*(float *)(lVar8 + 0xcd4) * DAT_180380ac0) + *(float *)(lVar7 + 0x118);
      *(float *)(lVar7 + 0x118) = fVar16;
      uVar3 = *(ushort *)(lVar7 + 400);
      FUN_18026aa00(0xe,*(float *)(lVar8 + 0xcd4) + *(float *)(lVar8 + 0xcd4));
      local_d4 = local_c8;
      local_d0 = 0;
      bVar10 = FUN_1802c1850(&DAT_18033e5ea,param_4,0x2800000,&local_d4);
      FUN_18026abb0(1);
      if ((*(uint *)(lVar8 + 0x1f00) & 0x100) != 0) {
        FUN_18026b160(CONCAT44(fVar2 + fVar18,(float)uVar3 + fVar16),param_1,pcVar15,0);
      }
      *(float *)(lVar7 + 0x118) =
           *(float *)(lVar7 + 0x118) - (float)(int)(*(float *)(lVar8 + 0xcd4) * fVar19);
    }
    else {
      if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
        fVar16 = 0.0;
      }
      else {
        local_e8 = fVar16;
        pfVar14 = (float *)FUN_180272ad0(&local_d4,param_3,0,0);
        fVar16 = *pfVar14;
      }
      local_e8 = (float)(int)(*(float *)(lVar8 + 0x1238) * DAT_180380bf0);
      local_d4 = (float)FUN_1802c3ed0(lVar7 + 0x184);
      if (*(char *)(lVar6 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520);
      if ((*(longlong *)(lVar9 + 0x1c8) != 0) ||
         (pfVar14 = (float *)(lVar9 + 0x280),
         *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x2368) != 0)) {
        pfVar14 = (float *)(lVar9 + 0x250);
      }
      fVar19 = *(float *)(lVar7 + 0x150);
      local_d0 = local_c4;
      fVar17 = (*pfVar14 - *(float *)(lVar9 + 0x118)) - local_d4;
      bVar10 = FUN_1802c1850(&DAT_18033e5ea,0,0x3800000,&local_d4);
      if ((*(uint *)(lVar8 + 0x1f00) & 0x100) != 0) {
        fVar19 = fVar19 + fVar18;
        fVar18 = 0.0;
        if (0.0 <= fVar17) {
          fVar18 = fVar17;
        }
        fVar17 = fVar19 + 0.0;
        FUN_18026b160(CONCAT44(fVar17,(float)*(ushort *)(lVar7 + 400) + fVar2),param_1,pcVar15,0);
        if (0.0 < fVar16) {
          FUN_18026a810(0,lVar8 + 0xdc0);
          if (*(char *)(lVar6 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar9 = *(longlong *)(lVar6 + 0xec0);
          *(undefined **)(lVar9 + 0x2880) = &DAT_1803804e8;
          *(undefined **)(lVar9 + 0x2888) = &DAT_1803467cc;
          FUN_18026b160(CONCAT44(fVar17,(float)*(ushort *)(lVar7 + 0x192) + fVar18 + fVar2),param_3,
                        0,0);
          FUN_18026a890(1);
        }
        if (local_d8 != '\0') {
          fVar16 = *(float *)(lVar8 + 0x1238) * _DAT_180380b54;
          uVar12 = FUN_18026a6a0(0);
          FUN_18029f350(*(undefined8 *)(lVar7 + 0x2c8),
                        CONCAT44(*(float *)(lVar8 + 0x1238) * _DAT_180380a10 * DAT_180380ac0 +
                                 fVar19,(float)*(ushort *)(lVar7 + 0x194) + fVar18 +
                                        *(float *)(lVar8 + 0x1238) * DAT_180380a94 + fVar2),uVar12,
                        fVar16);
        }
      }
    }
    if ((((*(int *)(lVar8 + 0x1594) == *(int *)(lVar8 + 0x1ef8)) &&
         (*(int *)(lVar8 + 0x157c) != *(int *)(lVar8 + 0x1ef8))) && (*(int *)(lVar8 + 0x15b4) == 1))
       && (cVar11 = FUN_18027bec0(0), cVar11 != '\0')) {
      FUN_18026ea90(0,0);
      if (*(char *)(lVar6 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar7 = *(longlong *)(lVar6 + 0xec0);
      *(undefined8 *)(lVar7 + 0x1ccc) = 0xffffffffffffffff;
      *(undefined2 *)(lVar7 + 0x1cd4) = 0;
    }
    if (param_5 == '\0') {
      FUN_180279200();
    }
    if (*(char *)(lVar6 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520);
    iVar5 = *(int *)(lVar7 + 0x108);
    if (iVar5 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar7 + 0x108) = iVar5 + -1;
    }
    if (local_d7 != '\0') {
      if (*(char *)(lVar6 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(lVar6 + 0xec0);
      iVar5 = *(int *)(lVar6 + 0x2008);
      if (iVar5 < 2) {
        FUN_18027e9c0("Calling PopItemFlag() too many times!");
      }
      else {
        *(int *)(lVar6 + 0x2008) = iVar5 + -1;
        *(undefined4 *)(lVar6 + 0x1eb8) =
             *(undefined4 *)(*(longlong *)(lVar6 + 0x2010) + -8 + (longlong)iVar5 * 4);
      }
    }
    uVar13 = (ulonglong)bVar10;
  }
  else {
    uVar13 = uVar13 & 0xffffffffffffff00;
  }
  return uVar13;
}


