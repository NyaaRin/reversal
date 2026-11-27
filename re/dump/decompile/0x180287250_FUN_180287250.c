// 0x180287250  FUN_180287250
// size=733 thunk=false
// signature: undefined FUN_180287250()
// status: ok


void FUN_180287250(void)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char *pcVar9;
  char *_Str1;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  float local_res10;
  float local_res14;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xec0);
  if (DAT_180380a1c < *(float *)(lVar6 + 0x2270) || DAT_180380a1c == *(float *)(lVar6 + 0x2270)) {
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_res8 = 0x7f7fffff7f7fffff;
    lVar7 = **(longlong **)(*(longlong *)(lVar5 + 0xec0) + 0x2060);
    local_res10 = *(float *)(lVar7 + 0x10) * DAT_180380a3c;
    local_res14 = *(float *)(lVar7 + 0x14) * DAT_180380a3c;
    FUN_180279900(&local_res10,&local_res8);
    fVar10 = *(float *)(lVar7 + 0x10) * DAT_180380ac0;
    fVar11 = *(float *)(lVar7 + 0x14) * DAT_180380ac0;
    fVar2 = *(float *)(lVar7 + 8);
    fVar3 = *(float *)(lVar7 + 0xc);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = *(longlong *)(lVar5 + 0xec0);
    *(uint *)(lVar7 + 0x1f48) = *(uint *)(lVar7 + 0x1f48) | 1;
    *(float *)(lVar7 + 0x1f58) = fVar10 + fVar2;
    *(float *)(lVar7 + 0x1f5c) = fVar11 + fVar3;
    *(undefined4 *)(lVar7 + 0x1f60) = 0x3f000000;
    *(undefined4 *)(lVar7 + 0x1f64) = 0x3f000000;
    *(undefined4 *)(lVar7 + 0x1f4c) = 1;
    local_res8 = CONCAT44(*(float *)(lVar6 + 0xc90) + *(float *)(lVar6 + 0xc90),
                          *(float *)(lVar6 + 0xc8c) + *(float *)(lVar6 + 0xc8c));
    FUN_18026aad0(2,&local_res8);
    FUN_180276630("##NavWindowingOverlay",0,0x31347);
    *(undefined8 *)(lVar6 + 0x2268) = *(undefined8 *)(lVar6 + 0x1520);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_1802affe0(lVar6 + 0x18);
    }
    uVar4 = *(uint *)(lVar6 + 0x14d0);
    while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
      lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x14d8) + (ulonglong)uVar4 * 8);
      if (((*(char *)(lVar7 + 0xcd) != '\0') && (lVar7 == *(longlong *)(lVar7 + 0x3c0))) &&
         ((*(uint *)(lVar7 + 0x14) & 0x20000) == 0)) {
        _Str1 = *(char **)(lVar7 + 8);
        pcVar9 = _Str1;
        if (_Str1 == (char *)0xffffffffffffffff) {
LAB_180287462:
          if ((*(uint *)(lVar7 + 0x14) >> 0x1a & 1) == 0) {
            if (((*(uint *)(lVar7 + 0x14) >> 10 & 1) == 0) ||
               (iVar8 = strcmp(_Str1,"##MainMenuBar"), iVar8 != 0)) {
              if (*(char *)(lVar5 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              pcVar9 = *(char **)(*(longlong *)(lVar5 + 0xec0) + 0x2840);
            }
            else {
              if (*(char *)(lVar5 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              pcVar9 = *(char **)(*(longlong *)(lVar5 + 0xec0) + 0x2830);
            }
          }
          else {
            if (*(char *)(lVar5 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pcVar9 = *(char **)(*(longlong *)(lVar5 + 0xec0) + 0x2838);
          }
          _Str1 = "*Missing Text*";
          if (pcVar9 != (char *)0x0) {
            _Str1 = pcVar9;
          }
        }
        else {
          do {
            if ((*pcVar9 == '\0') || ((pcVar1 = pcVar9 + 1, *pcVar9 == '#' && (*pcVar1 == '#'))))
            break;
            pcVar9 = pcVar1;
          } while (pcVar1 != (char *)0xffffffffffffffff);
          if (_Str1 == pcVar9) goto LAB_180287462;
        }
        local_res8 = 0;
        FUN_1802c1850(_Str1,*(longlong *)(lVar6 + 0x2258) == lVar7,0,&local_res8);
      }
    }
    FUN_180278d40();
    FUN_18026abb0(1);
  }
  return;
}


