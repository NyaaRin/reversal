// 0x1801f62b0  FUN_1801f62b0
// size=983 thunk=false
// signature: undefined FUN_1801f62b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801f62b0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined *local_78;
  undefined8 *local_70;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 != '\0')) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar8 = (*pcVar1)(DAT_1803fa360,uVar6);
    if ((lVar8 != 0) &&
       (((DAT_1803fa452 != '\0' && (DAT_1803fa4d0 != 0)) && (DAT_1803fa46f == '\0')))) {
      local_54 = 0;
      local_58 = 0;
      (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_54,&local_58);
      if ((0 < local_54) && (0 < local_58)) {
        local_78 = &DAT_1803da6b0;
        iVar7 = _Mtx_lock();
        if (iVar7 == 0) {
          if (DAT_1803da6fc == 0x7fffffff) {
            DAT_1803da6fc = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          local_80 = 0xec8;
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          *(undefined1 *)(lVar8 + 0xec8) = 1;
          lVar2 = DAT_1803fa4d0;
          local_90 = 0x10;
          if (*(char *)(lVar8 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          local_88 = 0xec0;
          *(longlong *)(lVar8 + 0xec0) = lVar2;
          cVar5 = *(char *)(lVar8 + 0x10);
          if (cVar5 == '\0') {
            __dyn_tls_on_demand_init();
            cVar5 = *(char *)(lVar8 + 0x10);
          }
          if ((*(longlong *)(lVar8 + 0xec0) != 0) && (cVar5 == '\0')) {
            __dyn_tls_on_demand_init();
          }
          fVar11 = (float)local_58;
          fVar12 = (float)local_54;
          if (*(char *)(lVar8 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar2 = *(longlong *)(lVar8 + 0xec0);
          *(float *)(lVar2 + 0x30) = fVar12;
          *(float *)(lVar2 + 0x34) = fVar11;
          uVar6 = FUN_1801f5f50();
          if (*(char *)(lVar8 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          *(undefined4 *)(*(longlong *)(lVar8 + 0xec0) + 0x40) = uVar6;
          FUN_180270230();
          if (*(char *)(lVar8 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar2 = *(longlong *)(lVar8 + 0xec0);
          *(uint *)(lVar2 + 0x1f48) = *(uint *)(lVar2 + 0x1f48) | 1;
          *(undefined8 *)(lVar2 + 0x1f58) = 0;
          *(undefined8 *)(lVar2 + 0x1f60) = 0;
          *(undefined4 *)(lVar2 + 0x1f4c) = 1;
          fVar11 = (float)local_58;
          fVar12 = (float)local_54;
          if (*(char *)(lVar8 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar2 = *(longlong *)(lVar8 + 0xec0);
          *(uint *)(lVar2 + 0x1f48) = *(uint *)(lVar2 + 0x1f48) | 2;
          *(float *)(lVar2 + 0x1f68) = fVar12;
          *(float *)(lVar2 + 0x1f6c) = fVar11;
          *(undefined4 *)(lVar2 + 0x1f50) = 1;
          if (*(char *)(lVar8 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          *(undefined4 *)(*(longlong *)(lVar8 + 0xec0) + 0xc94) = 0;
          if (*(char *)(lVar8 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          *(undefined4 *)(*(longlong *)(lVar8 + 0xec0) + 0xc98) = 0;
          if (*(char *)(lVar8 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          *(undefined8 *)(*(longlong *)(lVar8 + 0xec0) + 0xc8c) = 0;
          FUN_180276630(&DAT_18036ebe0,0,0x302ab);
          local_98 = _set_se_translator(FUN_180014ce0);
          puVar3 = DAT_1803fcc70;
          local_a0 = DAT_1803fcc70;
          for (puVar10 = DAT_1803fcc68; local_a8 = puVar10, puVar10 != puVar3; puVar10 = puVar10 + 1
              ) {
            local_70 = puVar10;
            (**(code **)(*(longlong *)*puVar10 + 0x30))();
          }
          FUN_180196380();
          cVar5 = FUN_18003a090("Paint");
          if (cVar5 != '\0') {
            DAT_1803ff8ed = 1;
            FUN_1801fd250("Paint");
            DAT_1803ff8ed = 0;
          }
          DAT_1803fa566 = 1;
          FUN_1800cee80();
          _set_se_translator(local_98);
          lVar2 = local_90;
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar8 + local_90) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar4 = local_88;
          if (*(longlong *)(lVar8 + local_88) != 0) {
            if (*(char *)(lVar8 + lVar2) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if (*(longlong *)(*(longlong *)(lVar8 + lVar4) + 0x1520) != 0) {
              FUN_180278d40();
            }
          }
          FUN_180272030();
          FUN_1801f60d0(local_54,local_58);
          *(undefined1 *)(lVar8 + local_80) = 0;
          _Mtx_unlock(local_78);
          return 1;
        }
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        uVar9 = (*pcVar1)();
        return uVar9;
      }
    }
  }
  return 0;
}


