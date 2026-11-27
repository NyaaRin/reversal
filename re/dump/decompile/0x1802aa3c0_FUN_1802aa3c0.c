// 0x1802aa3c0  FUN_1802aa3c0
// size=1809 thunk=false
// signature: undefined FUN_1802aa3c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802aa3c0(char *param_1,char *param_2,uint param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char cVar7;
  size_t sVar8;
  char *pcVar9;
  float *pfVar10;
  char *pcVar11;
  char *_Str;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_138 [32];
  float local_118;
  uint local_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_108 = param_3;
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
  _Str = "";
  pcVar11 = "";
  if (param_1 != param_2) {
    _Str = param_1;
    pcVar11 = param_2;
  }
  if (pcVar11 == (char *)0x0) {
    sVar8 = strlen(_Str);
    pcVar11 = _Str + sVar8;
  }
  fVar16 = *(float *)(lVar3 + 0x1f0);
  fVar1 = *(float *)(lVar3 + 0x118);
  fVar18 = *(float *)(lVar3 + 0x150) + *(float *)(lVar3 + 0x11c);
  local_100 = fVar1;
  fStack_fc = fVar18;
  if ((longlong)pcVar11 - (longlong)_Str < 0x7d1) {
    if (0.0 <= fVar16) goto LAB_1802aa8c5;
  }
  else {
    if (0.0 > fVar16) {
      lVar4 = *(longlong *)(lVar2 + 0xec0);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      uVar13 = local_108;
      uVar6 = DAT_180381384;
      fVar15 = 0.0;
      local_e8 = 0.0;
      fVar16 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238);
      local_f0 = fVar1;
      fStack_ec = fVar18;
      if ((*(char *)(lVar4 + 0x2858) == '\0') &&
         (iVar12 = (int)((*(float *)(lVar3 + 0x26c) - fVar18) / fVar16), 0 < iVar12)) {
        for (iVar14 = 0; (_Str < pcVar11 && (iVar14 < iVar12)); iVar14 = iVar14 + 1) {
          pcVar9 = memchr(_Str,10,(size_t)(pcVar11 + -(longlong)_Str));
          if (pcVar9 == (char *)0x0) {
            pcVar9 = pcVar11;
          }
          if ((uVar13 & 1) == 0) {
            local_118 = (float)uVar6;
            pfVar10 = (float *)FUN_180272ad0(&local_100,_Str,pcVar9,0);
            fVar17 = *pfVar10;
            local_e8 = fVar15;
            if (fVar15 <= fVar17) {
              fVar15 = fVar17;
              local_e8 = fVar17;
            }
          }
          _Str = pcVar9 + 1;
        }
        fStack_ec = (float)iVar14 * fVar16 + fVar18;
      }
      iVar12 = 0;
      fVar17 = fStack_ec;
      if (_Str < pcVar11) {
        fVar21 = fVar1 + DAT_180381308;
        fVar20 = fStack_ec;
        fVar19 = fStack_ec;
        do {
          fVar17 = fStack_ec;
          fVar19 = fVar19 + fVar16;
          if (*(char *)(lVar2 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
          if (((((fVar19 < *(float *)(lVar3 + 0x26c) || fVar19 == *(float *)(lVar3 + 0x26c)) ||
                (*(float *)(lVar3 + 0x274) <= fVar20)) ||
               (fVar21 < *(float *)(lVar3 + 0x268) || fVar21 == *(float *)(lVar3 + 0x268))) ||
              (*(float *)(lVar3 + 0x270) <= fVar1)) &&
             (*(char *)(*(longlong *)(lVar2 + 0xec0) + 0x1592) == '\0')) break;
          pcVar9 = memchr(_Str,10,(longlong)pcVar11 - (longlong)_Str);
          local_118 = (float)uVar6;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = pcVar11;
          }
          pfVar10 = (float *)FUN_180272ad0(&local_100,_Str,pcVar9,0);
          if (fVar15 <= *pfVar10) {
            fVar15 = *pfVar10;
          }
          local_e8 = fVar15;
          FUN_18026b160(CONCAT44(fStack_ec,local_f0),_Str,pcVar9);
          fVar17 = fVar17 + fVar16;
          _Str = pcVar9 + 1;
          fVar20 = fVar20 + fVar16;
          fStack_ec = fVar17;
        } while (_Str < pcVar11);
        if (_Str < pcVar11) {
          uVar13 = local_108 & 1;
          iVar12 = 0;
          do {
            pcVar9 = memchr(_Str,10,(size_t)(pcVar11 + -(longlong)_Str));
            if (pcVar9 == (char *)0x0) {
              pcVar9 = pcVar11;
            }
            if (uVar13 == 0) {
              local_118 = (float)uVar6;
              pfVar10 = (float *)FUN_180272ad0(&local_100,_Str,pcVar9,0);
              fVar19 = *pfVar10;
              local_e8 = fVar15;
              if (fVar15 <= fVar19) {
                fVar15 = fVar19;
                local_e8 = fVar19;
              }
            }
            _Str = pcVar9 + 1;
            iVar12 = iVar12 + 1;
          } while (_Str < pcVar11);
        }
        fVar17 = fVar17 + (float)iVar12 * fVar16;
      }
      local_e4 = fVar17 - fVar18;
      fVar15 = fVar1 + fVar15;
      fVar16 = fVar18 + local_e4;
      fStack_f8 = fVar15;
      fStack_f4 = fVar16;
      FUN_18027f400(&local_e8,0);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0xec0);
      *(uint *)(lVar2 + 0x1efc) = *(uint *)(lVar2 + 0x1eb8) | *(uint *)(lVar2 + 0x1ec4);
      lVar3 = *(longlong *)(lVar2 + 0x1520);
      *(undefined4 *)(lVar2 + 0x1ef8) = 0;
      *(ulonglong *)(lVar2 + 0x1f04) = CONCAT44(fStack_fc,local_100);
      *(ulonglong *)(lVar2 + 0x1f0c) = CONCAT44(fStack_f4,fStack_f8);
      *(undefined4 *)(lVar2 + 0x1f00) = 0;
      *(ulonglong *)(lVar2 + 0x1f14) = CONCAT44(fStack_fc,local_100);
      *(ulonglong *)(lVar2 + 0x1f1c) = CONCAT44(fStack_f4,fStack_f8);
      *(undefined8 *)(lVar2 + 0x1ec0) = 0;
      if (((fVar16 < *(float *)(lVar3 + 0x26c) || fVar16 == *(float *)(lVar3 + 0x26c)) ||
          (*(float *)(lVar3 + 0x274) <= fVar18)) ||
         ((fVar15 < *(float *)(lVar3 + 0x268) || fVar15 == *(float *)(lVar3 + 0x268) ||
          (*(float *)(lVar3 + 0x270) <= fVar1)))) {
        if (*(char *)(lVar2 + 0x1592) == '\0') {
          return;
        }
      }
      else {
        *(undefined4 *)(lVar2 + 0x1f00) = 0x100;
      }
      cVar7 = FUN_18027bdd0(&local_100,&fStack_f8,1);
      if (cVar7 == '\0') {
        return;
      }
      *(uint *)(lVar2 + 0x1f00) = *(uint *)(lVar2 + 0x1f00) | 1;
      return;
    }
LAB_1802aa8c5:
    if (0.0 <= fVar16) {
      fVar17 = fVar1;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
        fVar17 = *(float *)(lVar3 + 0x118);
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
      if (fVar16 == 0.0) {
        fVar15 = *(float *)(lVar3 + 0x250) - fVar17;
        if (fVar15 <= DAT_180380bb0) {
          fVar15 = DAT_180380bb0;
        }
      }
      else {
        if (0.0 < fVar16) {
          fVar16 = (*(float *)(lVar3 + 0x28) - *(float *)(lVar3 + 0x98)) + fVar16;
        }
        fVar15 = fVar16 - fVar17;
        if (fVar16 - fVar17 <= DAT_180380bb0) {
          fVar15 = DAT_180380bb0;
        }
      }
      goto LAB_1802aa943;
    }
  }
  fVar15 = 0.0;
LAB_1802aa943:
  local_118 = fVar15;
  FUN_180272ad0(&local_e8,_Str,pcVar11,0);
  fVar16 = fVar1 + local_e8;
  fVar17 = fVar18 + local_e4;
  fStack_f8 = fVar16;
  fStack_f4 = fVar17;
  FUN_18027f400(&local_e8,0);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = CONCAT44(fStack_fc,local_100);
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(uint *)(lVar2 + 0x1efc) = *(uint *)(lVar2 + 0x1eb8) | *(uint *)(lVar2 + 0x1ec4);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  *(undefined4 *)(lVar2 + 0x1ef8) = 0;
  *(undefined8 *)(lVar2 + 0x1f04) = uVar5;
  *(ulonglong *)(lVar2 + 0x1f0c) = CONCAT44(fStack_f4,fStack_f8);
  *(undefined4 *)(lVar2 + 0x1f00) = 0;
  *(undefined8 *)(lVar2 + 0x1f14) = uVar5;
  *(ulonglong *)(lVar2 + 0x1f1c) = CONCAT44(fStack_f4,fStack_f8);
  *(undefined8 *)(lVar2 + 0x1ec0) = 0;
  if (((fVar17 < *(float *)(lVar3 + 0x26c) || fVar17 == *(float *)(lVar3 + 0x26c)) ||
      (*(float *)(lVar3 + 0x274) <= fVar18)) ||
     ((fVar16 < *(float *)(lVar3 + 0x268) || fVar16 == *(float *)(lVar3 + 0x268) ||
      (*(float *)(lVar3 + 0x270) <= fVar1)))) {
    if (*(char *)(lVar2 + 0x1592) == '\0') {
      return;
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x1f00) = 0x100;
  }
  cVar7 = FUN_18027bdd0(&local_100,&fStack_f8,1);
  if (cVar7 != '\0') {
    *(uint *)(lVar2 + 0x1f00) = *(uint *)(lVar2 + 0x1f00) | 1;
  }
  FUN_18026b470(uVar5,_Str,pcVar11,fVar15);
  return;
}


