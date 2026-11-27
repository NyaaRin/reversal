// 0x18025d600  FUN_18025d600
// size=1140 thunk=false
// signature: undefined FUN_18025d600()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18025d600(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  short *psVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  short *psVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  short **local_e8;
  short **local_e0;
  char local_d8;
  char local_d7;
  char local_d6;
  short local_d4;
  longlong local_d0;
  short *local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  short *local_a8;
  short *local_a0;
  short *local_98;
  longlong *local_90;
  longlong *plStack_88;
  longlong *local_80;
  longlong *local_78;
  longlong *plStack_70;
  ulonglong *local_68;
  ulonglong *puStack_60;
  ulonglong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_b8 = 0;
  param_2[6] = 1;
  local_68 = (ulonglong *)0x0;
  puStack_60 = (ulonglong *)0x0;
  local_58 = (ulonglong *)0x0;
  plVar6 = (longlong *)0x0;
  local_c0 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  local_b0 = (longlong *)0x0;
  local_98 = (short *)0x0;
  local_c8 = (short *)0x0;
  psVar8 = (short *)0x0;
  local_a8 = (short *)0x0;
  local_d7 = '\x01';
  local_d8 = '\x01';
  plVar10 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_90 = (longlong *)(param_2[1] - *param_2 >> 4);
  puVar7 = (ulonglong *)0x0;
  local_d0 = param_1;
  local_78 = local_90;
  if (local_90 != (longlong *)0x0) {
    do {
      psVar4 = local_c8;
      local_a0 = (short *)(*param_2 + (longlong)plVar10 * 0x10);
      local_d6 = *(char *)((longlong)local_a0 + 3);
      if (local_d6 == '\0') {
        param_2[6] = param_2[6] + 1;
        if (puVar7 == local_58) {
          local_e0 = &local_a8;
          local_e8 = &local_c8;
          FUN_180263f60(&local_68,puVar7,&local_c0,&local_80);
          param_1 = local_d0;
        }
        else {
          *puVar7 = (ulonglong)plVar6;
          puVar7[1] = (ulonglong)plVar10;
          puVar7[2] = (ulonglong)local_c8;
          puVar7[3] = (ulonglong)psVar8;
          puStack_60 = puStack_60 + 4;
        }
        local_c8 = (short *)0x0;
        psVar8 = (short *)0x0;
        local_a8 = (short *)0x0;
        local_d7 = '\x01';
        local_d8 = '\x01';
        plVar6 = (longlong *)((longlong)plVar10 + 1);
        puVar7 = puStack_60;
        plVar11 = plVar6;
        local_c0 = plVar6;
        local_b0 = plVar6;
      }
      else {
        local_d4 = *local_a0;
        if (local_d7 == '\0') {
LAB_18025d7c9:
          if (local_d4 == 9) goto LAB_18025d7cf;
LAB_18025d78e:
          local_c8 = (short *)((longlong)psVar4 + 1);
          param_1 = local_d0;
        }
        else {
          cVar5 = FUN_18025f490(local_d4);
          param_1 = local_d0;
          if (cVar5 == '\0') {
            local_d7 = '\0';
            goto LAB_18025d7c9;
          }
          if (*local_a0 != 9) {
            psVar8 = (short *)((longlong)psVar8 + 1);
            local_a8 = psVar8;
            goto LAB_18025d78e;
          }
          psVar8 = (short *)(((ulonglong)psVar8 / *(ulonglong *)(local_d0 + 0x18) + 1) *
                            *(longlong *)(local_d0 + 0x18));
          local_a8 = psVar8;
LAB_18025d7cf:
          local_c8 = (short *)(((ulonglong)psVar4 / *(ulonglong *)(param_1 + 0x18) + 1) *
                              *(longlong *)(param_1 + 0x18));
        }
        if (local_c8 < *(short **)(param_1 + 0x28)) {
          if (local_d6 == '\x01') {
            plVar11 = (longlong *)((longlong)plVar10 + 1);
            local_b0 = plVar11;
            local_98 = local_c8;
          }
          plVar10 = (longlong *)((longlong)plVar10 + 1);
          local_80 = plVar10;
        }
        else {
          local_a0 = psVar8;
          if (plVar11 == plVar6) {
            plVar11 = (longlong *)((longlong)plVar10 + 1);
            if (local_d8 != '\0') {
              local_a0 = (short *)0x0;
            }
            local_b0 = plVar11;
            if (puVar7 == local_58) {
              local_e8 = &local_c8;
              goto LAB_18025d85a;
            }
            puVar7[2] = (ulonglong)local_c8;
LAB_18025d834:
            puVar7[1] = (ulonglong)plVar11;
            *puVar7 = (ulonglong)plVar6;
            puVar7[3] = (ulonglong)local_a0;
            puStack_60 = puStack_60 + 4;
            plVar6 = plVar11;
          }
          else {
            if (local_d8 != '\0') {
              local_a0 = (short *)0x0;
            }
            if (puVar7 != local_58) {
              puVar7[2] = (ulonglong)local_98;
              goto LAB_18025d834;
            }
            local_e8 = &local_98;
LAB_18025d85a:
            local_e0 = &local_a0;
            FUN_180263f60(&local_68,puVar7,&local_c0,&local_b0);
            param_1 = local_d0;
            plVar6 = plVar11;
          }
          param_2[6] = param_2[6] + 1;
          local_d8 = '\0';
          puVar7 = puStack_60;
          plVar10 = plVar6;
          plVar11 = plVar6;
          local_c8 = psVar8;
          local_c0 = plVar6;
          local_98 = psVar8;
          local_80 = plVar6;
        }
      }
    } while (plVar10 < local_90);
  }
  psVar4 = local_c8;
  if ((ulonglong)param_2[6] < 2) {
    local_90 = (longlong *)0x0;
    plStack_88 = (longlong *)0x0;
    local_78 = (longlong *)param_2[8];
    param_2[8] = 0;
    plVar6 = (longlong *)param_2[9];
    param_2[9] = 0;
    plStack_70 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar6 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    param_2[7] = (longlong)psVar4;
  }
  else {
    if (puVar7 == local_58) {
      local_e0 = &local_a8;
      local_e8 = &local_c8;
      FUN_180263f60(&local_68,puVar7,&local_c0,&local_78);
    }
    else {
      *puVar7 = (ulonglong)plVar6;
      puVar7[1] = (ulonglong)local_90;
      puVar7[2] = (ulonglong)local_c8;
      puVar7[3] = (ulonglong)psVar8;
      puStack_60 = puStack_60 + 4;
    }
    plVar6 = (longlong *)FUN_1802d8350(0x28);
    *plVar6 = 0;
    plVar6[1] = 0;
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)
              vftable_std_std_std_TextEditor_ULineSection_V__allocator_TextEditor_ULineSection_V__vector____Ref_count_obj2
    ;
    local_78 = plVar6;
    FUN_180266800(plVar6 + 2,&local_68);
    local_b8 = 1;
    local_90 = plVar6 + 2;
    plStack_88 = plVar6;
    FUN_1802608b0(param_2 + 8);
    plVar6 = plStack_88;
    local_b8 = 0;
    if (plStack_88 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_88 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_88)(plStack_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    param_2[7] = 0;
    if (local_68 != puStack_60) {
      uVar9 = 0;
      puVar7 = local_68;
      do {
        if (uVar9 < puVar7[2]) {
          uVar9 = puVar7[2];
        }
        param_2[7] = uVar9;
        puVar7 = puVar7 + 4;
      } while (puVar7 != puStack_60);
    }
  }
  FUN_18020bc50(&local_68);
  return;
}


