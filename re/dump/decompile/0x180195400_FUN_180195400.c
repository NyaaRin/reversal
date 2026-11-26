// 0x180195400  FUN_180195400
// size=1019 thunk=false
// signature: undefined FUN_180195400()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180195400(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  uint local_e8;
  char *local_e0;
  char *local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  if (DAT_1803ebbd0 != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar7 = DAT_180380db8;
    fVar9 = (float)*(double *)(*(longlong *)(lVar1 + 0xec0) + 0x10) - _DAT_1803e897c;
    if ((((0.0 <= fVar9) && (fVar9 <= DAT_180380db8)) && (DAT_1803fa668 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 != '\0')) {
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*(longlong *)(lVar1 + 0xec0) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520), lVar2 != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x2c8);
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if ((lVar2 != 0) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228), lVar3 != 0)) {
          local_80 = 0;
          local_7c = 0;
          (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_80,&local_7c);
          if ((1 < local_80) && (1 < local_7c)) {
            fVar7 = (fVar7 - fVar9) / DAT_180380ae4;
            if (0.0 <= fVar7) {
              fVar9 = DAT_180380bb0;
              if (fVar7 <= DAT_180380bb0) {
                fVar9 = fVar7;
              }
            }
            else {
              fVar9 = 0.0;
            }
            if (*(char *)(lVar1 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            fVar9 = fVar9 * *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xc84);
            if (*(char *)(lVar1 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pcVar6 = (char *)&DAT_1803ebbc0;
            if (0xf < DAT_1803ebbd8) {
              pcVar6 = DAT_1803ebbc0;
            }
            fVar7 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238);
            local_b8 = 0;
            local_c8 = 0;
            local_d0 = 0;
            local_d8 = (char *)0x0;
            local_e8 = 0;
            local_e0 = pcVar6;
            FUN_18029e350(&local_98,lVar3,fVar7,DAT_180381308);
            local_a8 = 0;
            local_a0 = 0;
            fVar10 = (float)local_80 * DAT_180380ac0 - local_98 * DAT_180380ac0;
            local_9c = fVar9 * DAT_180380b4c;
            fVar8 = (float)local_7c * DAT_180380ac0 + _DAT_18038108c;
            local_98 = fVar10;
            local_94 = fVar8;
            uVar5 = FUN_180268ed0(&local_a8);
            local_a8 = CONCAT44(fVar8 + DAT_180380bb0,fVar10 + DAT_180380bb0);
            if ((((uVar5 & 0xff000000) != 0) && (pcVar6 != (char *)0x0)) && (*pcVar6 != '\0')) {
              fVar8 = fVar7;
              if (fVar7 == 0.0) {
                fVar8 = *(float *)(*(longlong *)(lVar2 + 0x38) + 0x20);
              }
              local_90 = *(undefined4 *)(lVar2 + 0x60);
              uStack_8c = *(undefined4 *)(lVar2 + 100);
              uStack_88 = *(undefined4 *)(lVar2 + 0x68);
              uStack_84 = *(undefined4 *)(lVar2 + 0x6c);
              local_c0 = 0;
              local_e0 = (char *)&local_90;
              local_c8 = local_c8 & 0xffffffff00000000;
              local_d0 = 0;
              local_e8 = uVar5;
              local_d8 = pcVar6;
              FUN_18029e990(lVar3,lVar2,fVar8,&local_a8);
            }
            local_a8 = 0x3f59999a3f19999a;
            local_a0 = 0x3f800000;
            local_9c = fVar9;
            local_e8 = FUN_180268ed0(&local_a8);
            if ((((local_e8 & 0xff000000) != 0) && (pcVar6 != (char *)0x0)) && (*pcVar6 != '\0')) {
              if (fVar7 == 0.0) {
                fVar7 = *(float *)(*(longlong *)(lVar2 + 0x38) + 0x20);
              }
              local_90 = *(undefined4 *)(lVar2 + 0x60);
              uStack_8c = *(undefined4 *)(lVar2 + 100);
              uStack_88 = *(undefined4 *)(lVar2 + 0x68);
              uStack_84 = *(undefined4 *)(lVar2 + 0x6c);
              local_c0 = 0;
              local_e0 = (char *)&local_90;
              local_c8 = local_c8 & 0xffffffff00000000;
              local_d0 = 0;
              local_d8 = pcVar6;
              FUN_18029e990(lVar3,lVar2,fVar7,&local_98);
            }
          }
        }
      }
    }
  }
  return;
}


