// 0x18006aa00  FUN_18006aa00
// size=1006 thunk=false
// signature: undefined FUN_18006aa00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18006aa00(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  int local_100;
  undefined8 **local_f8;
  longlong *plStack_f0;
  int local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined8 **local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 **local_a8 [2];
  undefined8 **local_98;
  undefined8 **local_90;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong *plStack_40;
  undefined8 **local_38;
  longlong *plStack_30;
  undefined4 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    uVar6 = 0;
  }
  else {
    uStack_60 = 0;
    local_58 = _DAT_1803814a0;
    uStack_50 = _UNK_1803814a8;
    local_68 = 0;
    uVar6 = (**(code **)(*plVar5 + 0x158))(plVar5,1);
    cVar3 = FUN_1800694e0(uVar6,&local_68);
    if (cVar3 == '\0') {
      (**(code **)(*plVar5 + 0xe0))();
      FUN_18021e290(&local_68);
      uVar6 = 1;
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5);
      iVar9 = 0;
      plVar7 = (longlong *)FUN_180067c80(local_a8,&local_68);
      local_e0 = (int)*plVar7;
      uStack_dc = *(undefined4 *)((longlong)plVar7 + 4);
      local_108 = (undefined8 **)*plVar7;
      if (((int)plVar7[1] != 0) && ((local_e0 - 1U & 0xfffffff7) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_180067040("status",(int)plVar7[1],&local_68);
      }
      local_98 = local_108;
      if (local_e0 == 3) {
        local_f8 = (undefined8 ***)0x0;
        plStack_f0 = (longlong *)0x0;
        iVar4 = FUN_180201e70(&local_f8,&local_68,0);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180067040("directory_iterator::directory_iterator",iVar4,&local_68);
        }
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        local_108 = &local_38;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
        }
        local_38 = local_f8;
        plStack_30 = plStack_f0;
        FUN_180067810(&local_48,&local_38);
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        local_108 = &local_c8;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
        }
        local_c8 = local_f8;
        plStack_c0 = plStack_f0;
        FUN_1800678f0(&local_b8,&local_c8);
        while (lVar2 = local_48, plVar7 = plStack_b0, local_48 != local_b8) {
          FUN_180067150(local_48,&local_108);
          if ((local_100 != 0) && (((int)local_108 - 1U & 0xfffffff7) != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_180067040("directory_entry::status",local_100,lVar2 + 0x20);
          }
          local_90 = local_108;
          local_a8[0] = local_108;
          if ((int)local_108 == 2) {
            iVar9 = iVar9 + 1;
            local_e8 = iVar9;
            (**(code **)(*plVar5 + 0xf0))(plVar5,(double)iVar9);
            uVar6 = FUN_180065de0(lVar2 + 0x20,local_88);
            FUN_180065350(uVar6,&local_38);
            FUN_18021e290(local_88);
            pppuVar8 = &local_38;
            if (0xf < local_20) {
              pppuVar8 = (undefined8 ***)local_38;
            }
            (**(code **)(*plVar5 + 0xe8))(plVar5,pppuVar8,local_28);
            (**(code **)(*plVar5 + 0x38))(plVar5,0xfffffffd);
            FUN_18020e450(&local_38);
            FUN_180067700(&local_48);
          }
          else {
            FUN_180067700(&local_48);
          }
        }
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar5 = plStack_b0 + 1;
          lVar2 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
          }
        }
        plVar5 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_40 + 1;
          lVar2 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        plVar5 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_f0 + 1;
          lVar2 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
      }
      FUN_18021e290(&local_68);
      uVar6 = 1;
    }
  }
  return uVar6;
}


