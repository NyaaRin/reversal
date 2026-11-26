// 0x180198920  FUN_180198920
// size=966 thunk=false
// signature: undefined FUN_180198920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180198920(longlong param_1)

{
  bool bVar1;
  char cVar2;
  uint *******pppppppuVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  uint *******pppppppuVar7;
  short *psVar8;
  undefined1 auStack_128 [32];
  int local_108;
  undefined4 local_104;
  undefined **local_100;
  int local_f8;
  int iStack_f4;
  int local_e8;
  int iStack_e4;
  short *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint ******local_a8;
  longlong local_a0;
  short *local_98;
  longlong local_90;
  uint ******local_88;
  longlong local_80;
  uint ******local_78;
  longlong local_70;
  uint ******local_58 [2];
  longlong local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  FUN_180203b30(local_58,param_1);
  if (local_48 != 0) {
    bVar1 = 7 < local_40;
    pppppppuVar7 = local_58;
    if (7 < local_40) {
      pppppppuVar7 = (uint *******)local_58[0];
    }
    lVar6 = local_48 * 2 >> 1;
    if ((lVar6 < 2) || (0x19 < (*(uint *)pppppppuVar7 & 0xffffffdf) - 0x3a0041)) {
      pppppppuVar3 = (uint *******)FUN_180065240(pppppppuVar7,local_48 * 2 + (longlong)pppppppuVar7)
      ;
      if (pppppppuVar7 != pppppppuVar3) goto LAB_180198c83;
    }
    else if ((2 < lVar6) &&
            ((*(short *)((longlong)pppppppuVar7 + 4) == 0x5c ||
             (*(short *)((longlong)pppppppuVar7 + 4) == 0x2f)))) goto LAB_180198c83;
    local_a8 = (uint ******)local_58;
    if (bVar1) {
      local_a8 = local_58[0];
    }
    local_a0 = local_48;
    psVar8 = (short *)((longlong)local_a8 + local_48 * 2);
    local_98 = (short *)FUN_180065240(local_a8,psVar8);
    for (local_d8 = local_98; (local_d8 != psVar8 && ((*local_d8 == 0x5c || (*local_d8 == 0x2f))));
        local_d8 = local_d8 + 1) {
    }
    local_90 = (longlong)local_d8 - (longlong)local_98 >> 1;
    if (local_90 == 0) {
      pppppppuVar7 = local_58;
      if (7 < local_40) {
        pppppppuVar7 = (uint *******)local_58[0];
      }
      local_80 = local_48;
      local_88 = (uint ******)pppppppuVar7;
      lVar6 = FUN_180065240(pppppppuVar7,(longlong)pppppppuVar7 + local_48 * 2);
      local_70 = lVar6 - (longlong)pppppppuVar7 >> 1;
      local_78 = (uint ******)pppppppuVar7;
      if (local_70 == 0) {
        uVar4 = FUN_1801968e0(&local_78);
        FUN_180066720(local_38,uVar4,local_58);
        FUN_18021e290(&local_78);
        piVar5 = (int *)FUN_180067c80(&local_e8,local_38);
        local_f8 = *piVar5;
        iStack_f4 = piVar5[1];
        local_c0 = *(undefined8 *)piVar5;
        if ((piVar5[2] != 0) && ((local_f8 - 1U & 0xfffffff7) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_180067040("status",piVar5[2],local_38);
        }
        local_b8 = local_c0;
        if (local_f8 == 3) {
          FUN_18021e290(local_38);
          FUN_18021e290(local_58);
          return 0;
        }
        cVar2 = FUN_180198190(local_38,param_1 + 0x20);
        if (cVar2 != '\0') {
          LOCK();
          DAT_180409764 = DAT_180409764 + 1;
          UNLOCK();
          FUN_18021e290(local_38);
          FUN_18021e290(local_58);
          return 1;
        }
        if (DAT_180409758 == '\0') {
          local_108 = 0;
          local_100 = &PTR_vftable_std__System_error_category_1803e9500;
          piVar5 = (int *)FUN_180067c80(&local_f8,local_38);
          local_e8 = *piVar5;
          iStack_e4 = piVar5[1];
          local_b0 = *(undefined8 *)piVar5;
          local_d0 = piVar5[2];
          local_c8 = &PTR_vftable_std__System_error_category_1803e9500;
          local_104 = local_cc;
          local_100 = &PTR_vftable_std__System_error_category_1803e9500;
          if (local_e8 == 0) {
            local_108 = local_d0;
            if (local_d0 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1800670f0("exists",&local_108,local_38);
            }
          }
          else {
            local_108 = 0;
            local_100 = &PTR_vftable_std__System_error_category_1803e9500;
            if (local_e8 != 1) {
              LOCK();
              DAT_180409764 = DAT_180409764 + 1;
              UNLOCK();
              FUN_18021e290(local_38);
              FUN_18021e290(local_58);
              return 1;
            }
          }
        }
        cVar2 = FUN_180198440(local_38,param_1 + 0x20);
        if (cVar2 == '\0') {
          FUN_18021e290(local_38);
          FUN_18021e290(local_58);
          return 0;
        }
        LOCK();
        DAT_18040975c = DAT_18040975c + 1;
        UNLOCK();
        FUN_18021e290(local_38);
        FUN_18021e290(local_58);
        return 1;
      }
    }
  }
LAB_180198c83:
  FUN_18021e290(local_58);
  return 0;
}


