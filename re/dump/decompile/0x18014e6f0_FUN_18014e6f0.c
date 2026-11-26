// 0x18014e6f0  FUN_18014e6f0
// size=730 thunk=false
// signature: undefined FUN_18014e6f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18014e6f0(undefined8 param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint *puVar7;
  undefined1 auStack_e8 [32];
  undefined8 ******local_c8;
  longlong *plStack_c0;
  undefined8 ******local_b8;
  longlong *plStack_b0;
  undefined8 ******local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined **local_98;
  undefined8 ******local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined **local_60;
  int local_58;
  undefined4 local_54;
  undefined **local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  puVar7 = (uint *)FUN_180067c80(&local_b8,param_1);
  if (1 < *puVar7) {
    local_c8 = (undefined8 *******)0x0;
    plStack_c0 = (longlong *)0x0;
    iVar6 = FUN_180201e70(&local_c8,param_1,2);
    plVar5 = plStack_c0;
    local_68 = CONCAT44(local_68._4_4_,iVar6);
    local_60 = &PTR_vftable_std__System_error_category_1803e9500;
    if (iVar6 == 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      local_a8 = &local_b8;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
      local_b8 = local_c8;
      plStack_b0 = plStack_c0;
      FUN_180067810(&local_48,&local_b8);
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_a8 = &local_88;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
      local_88 = local_c8;
      plStack_80 = plStack_c0;
      FUN_1800678f0(&local_78,&local_88);
      do {
        while( true ) {
          lVar4 = local_48;
          plVar5 = plStack_70;
          if (local_48 == local_78) {
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_70 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_70)(plStack_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            plVar5 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_40 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            plVar5 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_c0 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_c0)(plStack_c0);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            return 1;
          }
          if (param_3 != '\0') break;
LAB_18014e8b4:
          lVar3 = *(longlong *)(param_2 + 8);
          if (lVar3 == *(longlong *)(param_2 + 0x10)) {
            FUN_180224360(param_2,lVar3);
          }
          else {
            local_68 = lVar3;
            FUN_18020e540(lVar3,lVar4 + 0x20);
            *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
          }
          FUN_180067700(&local_48);
        }
        local_a0 = 0;
        local_98 = &PTR_vftable_std__System_error_category_1803e9500;
        FUN_180067150(local_48,&local_b8);
        local_58 = (int)plStack_b0;
        local_50 = &PTR_vftable_std__System_error_category_1803e9500;
        local_a0 = (int)plStack_b0;
        local_9c = local_54;
        local_98 = &PTR_vftable_std__System_error_category_1803e9500;
        local_a8 = local_b8;
        if (((int)local_b8 == 2) && ((int)plStack_b0 == 0)) goto LAB_18014e8b4;
        FUN_180067700(&local_48);
      } while( true );
    }
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
  }
  return 0;
}


