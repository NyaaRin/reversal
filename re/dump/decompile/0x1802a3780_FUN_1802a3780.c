// 0x1802a3780  FUN_1802a3780
// size=927 thunk=false
// signature: undefined FUN_1802a3780()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a3780(longlong param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  char cVar8;
  float *pfVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  char local_a8;
  char local_a7 [7];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar7 = DAT_180381454;
  fVar6 = DAT_1803809d4;
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  if (*(short *)(param_1 + 0x78) == 0) {
    lVar11 = param_1 + 0x1a8;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x1c8) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
  }
  pfVar9 = (float *)(param_1 + 0xf4);
  fVar18 = (float)(int)(*(float *)(lVar5 + 0x1248) * DAT_180380e9c);
  if (*(short *)(param_1 + 0x22a) < 1) {
    pfVar9 = (float *)(param_1 + 0x114);
  }
  uVar13 = 0;
  fVar17 = *(float *)(param_1 + 0xe8) + *pfVar9;
  fVar1 = *(float *)(lVar11 + 8);
  fVar14 = (fVar17 + *(float *)(lVar11 + 4)) - *(float *)(param_1 + 0xe8);
  fVar16 = *(float *)(param_1 + 0xfc);
  if (*(float *)(param_1 + 0xfc) <= fVar14) {
    fVar16 = fVar14;
  }
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x48) + ((longlong)(int)uVar13 >> 5) * 4) >>
           (uVar13 & 0x1f) & 1) != 0) {
        sVar2 = *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar13 * 2);
        lVar11 = *(longlong *)(param_1 + 0x18);
        lVar12 = (longlong)sVar2 * 0x74;
        if ((((*(uint *)(lVar11 + lVar12) & 0x40000020) == 0) &&
            ((local_94 = fVar16, (*(uint *)(param_1 + 4) & 0x800) == 0 ||
             (local_94 = fVar17 + fVar1, *(char *)(param_1 + 0x23d) != '\0')))) &&
           ((*(char *)(lVar11 + 0x69 + lVar12) != '\0' || (*(short *)(param_1 + 0x214) == sVar2))))
        {
          if (*(short *)(param_1 + 0x78) == 0) {
            piVar10 = (int *)(param_1 + 0x1a8);
          }
          else {
            piVar10 = (int *)(*(longlong *)(param_1 + 0x1c8) +
                             (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18);
          }
          local_98 = *(float *)(lVar11 + 0xc + lVar12);
          iVar3 = *piVar10;
          local_a0 = local_98 - fVar18;
          local_98 = local_98 + fVar18;
          local_9c = fVar17;
          FUN_18027f160(&local_a0,sVar2 + iVar3 + 1,0,2);
          local_a7[0] = '\0';
          local_a8 = '\0';
          local_b8 = 0x40910;
          cVar8 = FUN_1802ab600(&local_a0,sVar2 + iVar3 + 1,local_a7,&local_a8);
          if (cVar8 == '\0') {
LAB_1802a3a33:
            if (local_a8 != '\0') {
              if (*(short *)(param_1 + 0x214) == -1) {
                uVar15 = uVar7;
                if (*(short *)(param_1 + 0x220) != -1) {
                  uVar15 = *(undefined4 *)
                            ((longlong)*(short *)(param_1 + 0x220) * 0x74 + 0xc +
                            *(longlong *)(param_1 + 0x18));
                }
                *(undefined4 *)(param_1 + 0xe0) = uVar15;
              }
              *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
              *(short *)(param_1 + 0x212) = sVar2;
            }
          }
          else {
            if (*(char *)(lVar4 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if (*(short *)(*(longlong *)(lVar4 + 0xec0) + 0xb3a) != 2) goto LAB_1802a3a33;
            if (*(char *)(lVar4 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if (*(char *)(*(longlong *)(lVar4 + 0xec0) + 0x1cd4) != '\0') goto LAB_1802a3a33;
            if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x66 + lVar12) != '\0') {
              *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x70 + lVar12) = 1;
              *(short *)(param_1 + 0x210) = sVar2;
            }
            FUN_18026ea90(0);
            local_a8 = '\0';
          }
          if (((local_a7[0] != '\0') && (fVar6 < *(float *)(lVar5 + 0x1588))) || (local_a8 != '\0'))
          {
            cVar8 = *(char *)(lVar4 + 0x10);
            *(short *)(param_1 + 0x20c) = sVar2;
            if (cVar8 == '\0') {
              __dyn_tls_on_demand_init();
            }
            *(undefined4 *)(*(longlong *)(lVar4 + 0xec0) + 0x2508) = 4;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < *(int *)(param_1 + 0x6c));
  }
  return;
}


