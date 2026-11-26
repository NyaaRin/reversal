// 0x18019a7a0  FUN_18019a7a0
// size=895 thunk=false
// signature: undefined FUN_18019a7a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18019a7a0(char *param_1,float *param_2)

{
  size_t _Size;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined1 *puVar6;
  float *pfVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float *pfVar5;
  
  _Size = DAT_1803dc8e0;
  if (((DAT_1803facfd == '\0') && (param_1 != (char *)0x0)) && (DAT_1803dc8e0 != 0)) {
    sVar3 = strlen(param_1);
    uVar10 = DAT_1803dc8e8;
    puVar8 = _DAT_1803dc8d0;
    puVar6 = &DAT_1803dc8d0;
    if (0xf < DAT_1803dc8e8) {
      puVar6 = _DAT_1803dc8d0;
    }
    if ((_Size == sVar3) && ((_Size == 0 || (iVar1 = memcmp(puVar6,param_1,_Size), iVar1 == 0)))) {
      lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar9 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
        puVar8 = _DAT_1803dc8d0;
        uVar10 = DAT_1803dc8e8;
      }
      if ((float)*(double *)(*(longlong *)(lVar9 + 0xec0) + 0x10) <= _DAT_1803fa558) {
        if (DAT_1803fa544 == '\0') {
          DAT_1803fa544 = '\x01';
          if (*(char *)(lVar9 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar4 = *(longlong *)(lVar9 + 0xec0);
          *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
          for (lVar4 = *(longlong *)(lVar4 + 0x1520); lVar4 != 0;
              lVar4 = *(longlong *)(lVar4 + 0x3b0)) {
            if (((*(uint *)(lVar4 + 0x14) & 0x1000000) == 0) || (0.0 < *(float *)(lVar4 + 0xa4))) {
              if (0.0 < *(float *)(lVar4 + 0xa4)) {
                fVar11 = param_2[1];
                *(undefined4 *)(lVar4 + 0xb4) = 0x3ecccccd;
                *(undefined4 *)(lVar4 + 0xbc) = 0;
                *(float *)(lVar4 + 0xac) =
                     (float)(int)((((fVar11 - *(float *)(lVar4 + 0x2c)) - *(float *)(lVar4 + 0x74))
                                  - *(float *)(lVar4 + 0x84)) + *(float *)(lVar4 + 0x9c));
              }
              break;
            }
          }
        }
        local_res20 = 5.60519e-45;
        pfVar7 = &local_res18;
        local_res18 = 0.0;
        if (-1 < (int)DAT_1803fb24c) {
          pfVar7 = &DAT_1803fb24c;
        }
        pfVar5 = &local_res20;
        if ((int)DAT_1803fb24c < 5) {
          pfVar5 = pfVar7;
        }
        DAT_1803fb24c = *pfVar5;
        lVar4 = (longlong)(int)DAT_1803fb24c;
        if (*(char *)(lVar9 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar11 = sinf((float)*(double *)(*(longlong *)(lVar9 + 0xec0) + 0x10) * DAT_180380f90);
        fVar11 = fVar11 * DAT_180380ac0 + DAT_180380ac0;
        if (*(char *)(lVar9 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar9 = *(longlong *)(lVar9 + 0xec0);
        local_4c = fVar11 * DAT_180380ab0 + DAT_180380a6c;
        *(undefined1 *)(*(longlong *)(lVar9 + 0x1520) + 0xce) = 1;
        lVar4 = lVar4 * 200;
        local_58 = *(undefined4 *)(&DAT_1803dc9c8 + lVar4);
        local_54 = *(undefined4 *)(&DAT_1803dc9cc + lVar4);
        local_4c = local_4c * *(float *)(&DAT_1803dc9d4 + lVar4);
        local_50 = *(undefined4 *)(&DAT_1803dc9d0 + lVar4);
        local_res18 = param_2[2] + DAT_180380e9c;
        local_res1c = param_2[3] + DAT_180380d30;
        local_res20 = *param_2 - DAT_180380e9c;
        local_res24 = param_2[1] - DAT_180380d30;
        uVar2 = FUN_180268ed0(&local_58);
        FUN_180294f00(*(undefined8 *)(*(longlong *)(lVar9 + 0x1520) + 0x2c8),&local_res20,
                      &local_res18,uVar2,DAT_180380f40,DAT_180380c50,0);
      }
      else {
        DAT_1803dc8e0 = 0;
        puVar6 = &DAT_1803dc8d0;
        if (0xf < uVar10) {
          puVar6 = puVar8;
        }
        *puVar6 = 0;
      }
    }
  }
  return;
}


