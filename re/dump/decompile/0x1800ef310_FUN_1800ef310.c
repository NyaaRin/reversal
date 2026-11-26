// 0x1800ef310  FUN_1800ef310
// size=750 thunk=false
// signature: undefined FUN_1800ef310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ef310(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong *puVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  uint local_c8;
  char *local_c0;
  char *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68 [10];
  
  local_68[0] = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    puVar10 = (ulonglong *)&local_70;
    local_70 = 0;
    local_6c = 2;
    do {
      plVar7 = (longlong *)FUN_1800ebf80((int)*puVar10);
      if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_2)) {
        lVar8 = FUN_18003a890();
        if (lVar8 == 0) {
          return 0;
        }
        dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
        dVar4 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,2);
        pcVar9 = (char *)(**(code **)(*plVar7 + 0x158))(plVar7,3);
        if (pcVar9 == (char *)0x0) {
          return 0;
        }
        uVar6 = FUN_1800477e0(plVar7,4);
        fVar11 = 0.0;
        cVar5 = (**(code **)(*plVar7 + 0x138))(plVar7,5,3);
        if (cVar5 != '\0') {
          dVar2 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,5);
          lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar1 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar1 = *(longlong *)(lVar1 + 0xec0);
          local_98 = 0;
          local_a8 = 0;
          local_b0 = 0;
          local_b8 = (char *)0x0;
          local_c8 = DAT_180381384;
          local_c0 = pcVar9;
          FUN_18029e350(&local_88,*(undefined8 *)(lVar1 + 0x1228),*(undefined4 *)(lVar1 + 0x1238),
                        DAT_180381308);
          if ((int)dVar2 == 1) {
            fVar11 = (float)((uint)(float)(int)(local_88 + DAT_180380ba8) ^ DAT_1803817f0) *
                     DAT_180380ac0;
          }
          else if ((int)dVar2 == 2) {
            fVar11 = (float)((uint)(float)(int)(local_88 + DAT_180380ba8) ^ DAT_1803817f0);
          }
        }
        local_88 = (float)dVar3 + fVar11;
        if ((uVar6 & 0xff000000) == 0) {
          return 0;
        }
        if (*pcVar9 == '\0') {
          return 0;
        }
        local_c0 = (char *)&local_80;
        local_80 = *(undefined4 *)(lVar8 + 0x60);
        uStack_7c = *(undefined4 *)(lVar8 + 100);
        uStack_78 = *(undefined4 *)(lVar8 + 0x68);
        uStack_74 = *(undefined4 *)(lVar8 + 0x6c);
        local_a0 = 0;
        local_a8 = local_a8 & 0xffffffff00000000;
        local_b0 = 0;
        local_c8 = uVar6;
        local_b8 = pcVar9;
        local_84 = (float)dVar4;
        FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar8 + 0x38) + 0x18),lVar8,
                      *(undefined4 *)(*(longlong *)(lVar8 + 0x38) + 0x20),&local_88);
        return 0;
      }
      puVar10 = (ulonglong *)((longlong)puVar10 + 4);
    } while (puVar10 != local_68);
  }
  return 0;
}


