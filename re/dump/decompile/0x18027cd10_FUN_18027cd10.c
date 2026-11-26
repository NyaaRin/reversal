// 0x18027cd10  FUN_18027cd10
// size=2015 thunk=false
// signature: undefined FUN_18027cd10()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18027cd10(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  undefined4 local_res8;
  float local_resc;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  if (*(longlong *)(lVar3 + 0x1548) != 0) {
    fVar11 = *(float *)(lVar3 + 0x1560) - *(float *)(lVar3 + 0x40);
    *(float *)(lVar3 + 0x1560) = fVar11;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
      fVar11 = *(float *)(lVar3 + 0x1560);
    }
    if (((*(float *)(*(longlong *)(lVar2 + 0xec0) + 0x100) < DAT_180381444) ||
        (*(float *)(*(longlong *)(lVar2 + 0xec0) + 0x104) < DAT_180381444)) ||
       (fVar10 = *(float *)(lVar3 + 0x104) - *(float *)(lVar3 + 0x1554),
       fVar9 = *(float *)(lVar3 + 0x100) - *(float *)(lVar3 + 0x1550),
       fVar10 * fVar10 + fVar9 * fVar9 <= *(float *)(lVar3 + 0x90) * *(float *)(lVar3 + 0x90))) {
      if (0.0 < fVar11) goto LAB_18027ce64;
    }
    else {
      *(undefined4 *)(lVar3 + 0x1560) = 0;
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar2 + 0xec0);
    *(undefined4 *)(lVar6 + 0x1560) = 0;
    if (*(longlong *)(lVar6 + 0x1548) != 0) {
      if ((*(byte *)(lVar6 + 0x28e4) & 0x80) != 0) {
        FUN_180289170("[io] LockWheelingWindow() \"%s\"\n",&DAT_18037acb0);
      }
      *(undefined8 *)(lVar6 + 0x1550) = *(undefined8 *)(lVar6 + 0x100);
      *(undefined8 *)(lVar6 + 0x1548) = 0;
      *(undefined4 *)(lVar6 + 0x1558) = 0xffffffff;
      *(undefined8 *)(lVar6 + 0x156c) = 0;
    }
  }
LAB_18027ce64:
  lVar6 = *(longlong *)(lVar3 + 0x1548);
  if ((lVar6 == 0) && (lVar6 = *(longlong *)(lVar3 + 0x1528), lVar6 == 0)) {
    return;
  }
  if (*(char *)(lVar6 + 0xcf) != '\0') {
    return;
  }
  cVar5 = *(char *)(lVar2 + 0x10);
  iVar1 = *(int *)(lVar6 + 0x10);
  if (cVar5 == '\0') {
    __dyn_tls_on_demand_init();
    cVar5 = *(char *)(lVar2 + 0x10);
  }
  lVar4 = *(longlong *)(lVar2 + 0xec0);
  if (iVar1 == 0) {
    if (*(char *)(lVar4 + 0x1d10) != '\0') goto LAB_18027d13d;
LAB_18027cecf:
    fVar11 = *(float *)(lVar3 + 0x114);
  }
  else {
    if ((*(int *)(lVar4 + 0x1d08) == iVar1) ||
       ((*(char *)(lVar4 + 0x1d10) == '\0' && (*(int *)(lVar4 + 0x1d08) == -1))))
    goto LAB_18027cecf;
LAB_18027d13d:
    fVar11 = 0.0;
  }
  if (cVar5 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar2 + 0xec0);
  if (iVar1 == 0) {
    if (*(char *)(lVar4 + 0x1d1c) != '\0') goto LAB_18027d166;
LAB_18027cefa:
    fVar9 = *(float *)(lVar3 + 0x110);
  }
  else {
    if ((*(int *)(lVar4 + 0x1d14) == iVar1) ||
       ((*(char *)(lVar4 + 0x1d1c) == '\0' && (*(int *)(lVar4 + 0x1d14) == -1))))
    goto LAB_18027cefa;
LAB_18027d166:
    fVar9 = 0.0;
  }
  if (*(longlong *)(lVar3 + 0x1548) != 0) {
    cVar5 = *(char *)(lVar2 + 0x10);
    if (cVar5 == '\0') {
      __dyn_tls_on_demand_init();
      cVar5 = *(char *)(lVar2 + 0x10);
    }
    lVar4 = *(longlong *)(lVar2 + 0xec0);
    *(int *)(lVar4 + 0x1d0c) = iVar1;
    *(int *)(lVar4 + 0x1d08) = iVar1;
    *(undefined2 *)(lVar4 + 0x1d10) = 0;
    if (cVar5 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar2 + 0xec0);
    *(int *)(lVar4 + 0x1d18) = iVar1;
    *(int *)(lVar4 + 0x1d14) = iVar1;
    *(undefined2 *)(lVar4 + 0x1d1c) = 0;
  }
  uVar12 = _DAT_1803817c0;
  fVar10 = DAT_180381068;
  if (fVar9 != 0.0) {
    if (*(char *)(lVar3 + 0x11c) == '\0') goto LAB_18027d17b;
    if (*(char *)(lVar3 + 0x70) != '\0') {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0xec0);
      fVar11 = (float)((uint)fVar9 & _DAT_1803817c0) * DAT_180380b10 + *(float *)(lVar2 + 0x1560);
      if (DAT_180380b10 <= fVar11) {
        fVar11 = DAT_180380b10;
      }
      *(float *)(lVar2 + 0x1560) = fVar11;
      if (*(longlong *)(lVar2 + 0x1548) != lVar6) {
        if ((*(byte *)(lVar2 + 0x28e4) & 0x80) != 0) {
          FUN_180289170("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar6 + 8));
        }
        *(undefined8 *)(lVar2 + 0x1550) = *(undefined8 *)(lVar2 + 0x100);
        *(longlong *)(lVar2 + 0x1548) = lVar6;
      }
      fVar11 = *(float *)(lVar6 + 0x2b8);
      fVar10 = *(float *)(lVar3 + 0x110) * DAT_1803809ec + fVar11;
      fVar9 = DAT_180380ac0;
      if ((DAT_180380ac0 <= fVar10) && (fVar9 = DAT_180380db8, fVar10 <= DAT_180380db8)) {
        fVar9 = fVar10;
      }
      *(float *)(lVar6 + 0x2b8) = fVar9;
      if (lVar6 != *(longlong *)(lVar6 + 0x3c0)) {
        return;
      }
      fVar9 = fVar9 / fVar11;
      local_res8 = (*(float *)(lVar6 + 0x30) * (DAT_180380bb0 - fVar9) *
                   (*(float *)(lVar3 + 0x100) - *(float *)(lVar6 + 0x28))) /
                   *(float *)(lVar6 + 0x30) + *(float *)(lVar6 + 0x28);
      local_resc = ((*(float *)(lVar3 + 0x104) - *(float *)(lVar6 + 0x2c)) *
                   *(float *)(lVar6 + 0x34) * (DAT_180380bb0 - fVar9)) / *(float *)(lVar6 + 0x34) +
                   *(float *)(lVar6 + 0x2c);
      FUN_1802795a0(lVar6,&local_res8,0);
      *(float *)(lVar6 + 0x30) = (float)(int)(fVar9 * *(float *)(lVar6 + 0x30));
      *(float *)(lVar6 + 0x34) = (float)(int)(fVar9 * *(float *)(lVar6 + 0x34));
      *(float *)(lVar6 + 0x38) = (float)(int)(fVar9 * *(float *)(lVar6 + 0x38));
      *(float *)(lVar6 + 0x3c) = (float)(int)(fVar9 * *(float *)(lVar6 + 0x3c));
      FUN_180287ee0(lVar6);
      return;
    }
  }
  if (*(char *)(lVar3 + 0x11c) != '\0') {
    return;
  }
LAB_18027d17b:
  fVar13 = fVar9;
  if (*(char *)(lVar3 + 0xb8a) != '\0') {
    fVar13 = 0.0;
    fVar11 = fVar9;
  }
  fVar9 = *(float *)(lVar3 + 0x1570) / DAT_180381068;
  *(float *)(lVar3 + 0x156c) =
       (float)((uint)fVar11 & _DAT_1803817c0) / DAT_180381068 +
       (*(float *)(lVar3 + 0x156c) - *(float *)(lVar3 + 0x156c) / DAT_180381068);
  *(float *)(lVar3 + 0x1570) =
       (float)((uint)fVar13 & uVar12) / fVar10 + (*(float *)(lVar3 + 0x1570) - fVar9);
  fVar11 = fVar11 + *(float *)(lVar3 + 0x1564);
  fVar13 = fVar13 + *(float *)(lVar3 + 0x1568);
  *(undefined8 *)(lVar3 + 0x1564) = 0;
  if ((((fVar11 != 0.0) || (fVar13 != 0.0)) &&
      ((lVar6 = *(longlong *)(lVar3 + 0x1548), local_res8 = fVar11, local_resc = fVar13, lVar6 != 0
       || (lVar6 = FUN_18027cb50(&local_res8), uVar12 = _DAT_1803817c0, lVar6 != 0)))) &&
     (fVar9 = DAT_180380b10, (*(uint *)(lVar6 + 0x14) & 0x210) == 0)) {
    if ((fVar11 == 0.0) || (*(float *)(lVar6 + 0xa0) == 0.0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    if ((fVar13 == 0.0) || (*(float *)(lVar6 + 0xa4) == 0.0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    local_res8._0_2_ = CONCAT11(cVar7,cVar5);
    if (cVar5 != '\0') {
      if (cVar7 != '\0') {
        *(undefined1 *)
         ((longlong)&local_res8 +
         (ulonglong)
         (*(float *)(lVar3 + 0x1570) <= *(float *)(lVar3 + 0x156c) &&
         *(float *)(lVar3 + 0x156c) != *(float *)(lVar3 + 0x1570))) = 0;
        cVar5 = (char)local_res8;
        cVar7 = local_res8._1_1_;
      }
      if (cVar5 != '\0') {
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
          uVar12 = _DAT_1803817c0;
        }
        lVar4 = *(longlong *)(lVar2 + 0xec0);
        fVar10 = (float)((uint)fVar11 & uVar12) * fVar9 + *(float *)(lVar4 + 0x1560);
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
        *(float *)(lVar4 + 0x1560) = fVar10;
        if (*(longlong *)(lVar4 + 0x1548) != lVar6) {
          if ((*(byte *)(lVar4 + 0x28e4) & 0x80) != 0) {
            FUN_180289170("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar6 + 8));
            uVar12 = _DAT_1803817c0;
          }
          *(undefined8 *)(lVar4 + 0x1550) = *(undefined8 *)(lVar4 + 0x100);
          *(longlong *)(lVar4 + 0x1548) = lVar6;
        }
        fVar10 = *(float *)(lVar6 + 0x2c0) + *(float *)(lVar6 + 0x2c0);
        *(undefined4 *)(lVar6 + 0xb0) = 0;
        *(undefined4 *)(lVar6 + 0xb8) = 0;
        fVar8 = (*(float *)(lVar6 + 0x230) - *(float *)(lVar6 + 0x228)) * _DAT_180380b08;
        if (fVar8 <= fVar10) {
          fVar10 = fVar8;
        }
        *(float *)(lVar6 + 0xa8) = *(float *)(lVar6 + 0x98) - (float)(int)fVar10 * fVar11;
        *(undefined4 *)(lVar3 + 0x155c) = *(undefined4 *)(lVar3 + 4);
      }
    }
    if (cVar7 != '\0') {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
        uVar12 = _DAT_1803817c0;
      }
      lVar2 = *(longlong *)(lVar2 + 0xec0);
      fVar11 = (float)((uint)fVar13 & uVar12) * fVar9 + *(float *)(lVar2 + 0x1560);
      if (fVar9 <= fVar11) {
        fVar11 = fVar9;
      }
      *(float *)(lVar2 + 0x1560) = fVar11;
      if (*(longlong *)(lVar2 + 0x1548) != lVar6) {
        if ((*(byte *)(lVar2 + 0x28e4) & 0x80) != 0) {
          FUN_180289170("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar6 + 8));
        }
        *(undefined8 *)(lVar2 + 0x1550) = *(undefined8 *)(lVar2 + 0x100);
        *(longlong *)(lVar2 + 0x1548) = lVar6;
      }
      fVar11 = *(float *)(lVar6 + 0x2c0) * DAT_180380f00;
      *(undefined4 *)(lVar6 + 0xb4) = 0;
      *(undefined4 *)(lVar6 + 0xbc) = 0;
      fVar9 = (*(float *)(lVar6 + 0x234) - *(float *)(lVar6 + 0x22c)) * _DAT_180380b08;
      if (fVar9 <= fVar11) {
        fVar11 = fVar9;
      }
      *(float *)(lVar6 + 0xac) = *(float *)(lVar6 + 0x9c) - (float)(int)fVar11 * fVar13;
      *(undefined4 *)(lVar3 + 0x155c) = *(undefined4 *)(lVar3 + 4);
    }
  }
  return;
}


