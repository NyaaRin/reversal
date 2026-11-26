// 0x18017e8a0  FUN_18017e8a0
// size=2906 thunk=false
// signature: undefined FUN_18017e8a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017e8a0(void)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_148 [32];
  int *local_128;
  undefined *local_120;
  code *local_118;
  longlong **local_110;
  int local_108 [2];
  int local_100 [6];
  undefined1 local_e8 [144];
  undefined1 local_58 [16];
  longlong *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  ulonglong local_28;
  
  plVar4 = DAT_1803fb0f0;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  if (DAT_1803fb0f0 == (longlong *)0x0) {
    return;
  }
  FUN_18017d630(local_e8);
  iVar6 = (**(code **)(*plVar4 + 8))(plVar4);
  FUN_1802aabb0(local_58,"Distance");
  cVar5 = FUN_1801a0b60("Hide on distance##qs_dist",(longlong)plVar4 + 0x15);
  if (cVar5 != '\0') {
    FUN_18017a2c0();
  }
  uVar12 = (ulonglong)_tls_index;
  if (*(char *)((longlong)plVar4 + 0x15) != '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    local_118 = (code *)CONCAT71(local_118._1_7_,1);
    local_120 = &DAT_180350b28;
    local_128 = local_108;
    local_108[0] = 0x469c4000;
    puVar1 = (uint *)(lVar2 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
    local_100[2] = 0x42c80000;
    FUN_1801a6c50("##qs_dist_val",8,plVar4 + 3,local_100 + 2);
    cVar5 = FUN_180272e40();
    if (cVar5 != '\0') {
      FUN_18017a2c0();
    }
  }
  FUN_1802afb40();
  if (iVar6 == 3) {
    plVar11 = plVar4 + 0x10;
LAB_18017e9e0:
    if (plVar11 != (longlong *)0x0) {
      cVar5 = FUN_1801a0b60("Team / Job color##qs_job",plVar11);
      if (cVar5 != '\0') {
        FUN_18017a2c0();
      }
      if ((char)*plVar11 != '\0') goto switchD_18017ea25_default;
    }
  }
  else if (iVar6 - 5U < 2) {
    plVar11 = (longlong *)((longlong)plVar4 + 0x81);
    goto LAB_18017e9e0;
  }
  uVar7 = (**(code **)(*plVar4 + 8))(plVar4);
  switch(uVar7) {
  case 1:
    plVar11 = plVar4 + 9;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    plVar11 = plVar4 + 8;
    break;
  default:
    goto switchD_18017ea25_default;
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_1802aabb0(local_58,"Color");
    cVar5 = FUN_1802bac60("##qs_color",plVar11,0x40020);
    if ((cVar5 != '\0') && (cVar5 = FUN_180272e40(), cVar5 != '\0')) {
      FUN_18017a2c0();
    }
  }
switchD_18017ea25_default:
  if (iVar6 == 3) {
    local_48 = (longlong *)0x180360e00;
    local_40 = "Corner box";
    local_38 = "Top + bottom";
    local_30 = "Side rails";
    FUN_1802afb40();
    FUN_18016a940("##qs_box_size_mode");
    FUN_1802aabb0(local_58,"Style");
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    local_128 = (int *)CONCAT44(local_128._4_4_,4);
    puVar1 = (uint *)(lVar3 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
    cVar5 = FUN_1802b1200("##qs_style",(longlong)plVar4 + 0x7c);
    if (cVar5 != '\0') {
      FUN_18017a2c0();
    }
    FUN_1802aabb0(local_58,"Rounding");
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    local_118 = (code *)CONCAT71(local_118._1_7_,1);
    local_100[0] = 0x41700000;
    local_108[0] = 0;
    puVar1 = (uint *)(lVar2 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
    local_120 = &DAT_180360afc;
    local_128 = local_100;
    FUN_1801a6c50("##qs_round",8,plVar4 + 0xe,local_108);
    return;
  }
  if (iVar6 != 4) {
    if (iVar6 == 6) {
      FUN_1802afb40();
      FUN_1802aabb0(local_58,"Shows");
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar2 + 0xec0);
      puVar1 = (uint *)(lVar3 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
      puVar10 = (undefined8 *)((ulonglong)*(uint *)(plVar4 + 0x19) * 0x20 + DAT_1803fa808);
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      cVar5 = FUN_1802b0590("##qs_dyntype",puVar10,0);
      iVar6 = 0;
      if (cVar5 != '\0') {
        if (0 < (int)(DAT_1803fa810 - DAT_1803fa808 >> 5)) {
          do {
            local_100[0] = 0;
            local_100[1] = 0;
            puVar10 = (undefined8 *)(DAT_1803fa808 + (longlong)iVar6 * 0x20);
            if (0xf < (ulonglong)puVar10[3]) {
              puVar10 = (undefined8 *)*puVar10;
            }
            cVar5 = FUN_1802c1850(puVar10,(int)plVar4[0x19] == iVar6,0,local_100);
            if (cVar5 != '\0') {
              FUN_18017a2c0();
              *(int *)(plVar4 + 0x19) = iVar6;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(DAT_1803fa810 - DAT_1803fa808 >> 5));
        }
        FUN_1802b1130();
      }
      if ((int)plVar4[0x19] == 5) {
        FUN_1802aabb0(local_58,"Weapon name");
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        local_128 = (int *)CONCAT44(local_128._4_4_,2);
        puVar1 = (uint *)(lVar3 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
        local_100[2] = *(int *)((longlong)plVar4 + 0xdc);
        cVar5 = FUN_1802b1200("##qs_wepname",local_100 + 2);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
          *(int *)((longlong)plVar4 + 0xdc) = local_100[2];
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(
                       "Print name is what the SWEP calls itself (\"AK-47\").\nClass name is the entity class (\"ttt_m16\").\nA SWEP with no print name falls back to the class."
                       );
        }
      }
      if ((int)plVar4[0x19] == 0xe) {
        FUN_1802aabb0(local_58,"Script slot");
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        local_118 = (code *)CONCAT71(local_118._1_7_,1);
        local_120 = &DAT_18033f570;
        local_108[0] = 4;
        puVar1 = (uint *)(lVar3 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
        local_100[2] = (int)plVar4[0x1c];
        local_128 = local_108;
        local_100[0] = 1;
        cVar5 = FUN_1801a6c50("##qs_script_slot",4,local_100 + 2,local_100);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
          local_100[0] = 1;
          piVar8 = local_100;
          if (0 < local_100[2]) {
            piVar8 = local_100 + 2;
          }
          if (4 < local_100[2]) {
            piVar8 = &DAT_18033e410;
          }
          *(int *)(plVar4 + 0x1c) = *piVar8;
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(
                       "Which row a script fills:\nmayrr.esp.SetPlayerText(index, slot, text).\nEmpty slot draws nothing."
                       );
        }
      }
      if ((int)plVar4[0x19] == 0xd) {
        FUN_1802aabb0(local_58,"Max lines");
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        local_118 = (code *)CONCAT71(local_118._1_7_,1);
        local_120 = &DAT_18033f570;
        local_100[0] = 0x18;
        puVar1 = (uint *)(lVar3 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
        local_100[2] = (int)plVar4[0x20];
        local_128 = local_100;
        local_108[0] = 1;
        cVar5 = FUN_1801a6c50("##qs_inv_max",4,local_100 + 2,local_108);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
          *(int *)(plVar4 + 0x20) = local_100[2];
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(
                       "Hard ceiling on printed rows.\nWith more weapons than fit, the last row becomes \"+N\"."
                       );
        }
        FUN_1802aabb0(local_58,"Align");
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        local_128 = (int *)CONCAT44(local_128._4_4_,4);
        puVar1 = (uint *)(lVar3 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
        local_108[0] = (int)plVar4[0x21];
        cVar5 = FUN_1802b1200("##qs_inv_align",local_108);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
          *(int *)(plVar4 + 0x21) = local_108[0];
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(&DAT_1803618d0);
        }
        FUN_1802aabb0(local_58,"Weapon name");
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        local_128 = (int *)CONCAT44(local_128._4_4_,2);
        puVar1 = (uint *)(lVar3 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
        local_108[0] = *(int *)((longlong)plVar4 + 0x104);
        cVar5 = FUN_1802b1200("##qs_inv_name",local_108);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
          *(int *)((longlong)plVar4 + 0x104) = local_108[0];
        }
        cVar5 = FUN_1801a0b60("Show ammo##qs_inv",(longlong)plVar4 + 0x10c);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
        }
        cVar5 = FUN_1801a0b60("Mark held weapon##qs_inv",(longlong)plVar4 + 0x10e);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
        }
        cVar5 = FUN_1801a0b60("Hide held weapon##qs_inv",(longlong)plVar4 + 0x10d);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(&DAT_180361a10);
        }
        FUN_1802aabb0(local_58,"Ignore");
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        local_48 = plVar4 + 0x22;
        local_40 = (char *)0x0;
        local_38 = (char *)0x0;
        puVar1 = (uint *)(lVar3 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
        plVar11 = local_48;
        if (0xf < (ulonglong)plVar4[0x25]) {
          plVar11 = (longlong *)*local_48;
        }
        local_100[0] = 0;
        local_100[1] = 0;
        local_118 = FUN_1802d2b00;
        local_128 = local_100;
        local_120 = (undefined *)CONCAT44(local_120._4_4_,0x400000);
        local_110 = &local_48;
        cVar5 = FUN_1802b74e0("##qs_inv_ignore",0,plVar11,(int)plVar4[0x25] + 1);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(&DAT_180362370);
        }
        FUN_1802aabb0(local_58,"Highlight");
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        local_48 = plVar4 + 0x26;
        local_40 = (char *)0x0;
        local_38 = (char *)0x0;
        puVar1 = (uint *)(lVar3 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
        plVar11 = local_48;
        if (0xf < (ulonglong)plVar4[0x29]) {
          plVar11 = (longlong *)*local_48;
        }
        local_100[0] = 0;
        local_100[1] = 0;
        local_118 = FUN_1802d2b00;
        local_128 = local_100;
        local_120 = (undefined *)CONCAT44(local_120._4_4_,0x400000);
        local_110 = &local_48;
        cVar5 = FUN_1802b74e0("##qs_inv_watch",0,plVar11,(int)plVar4[0x29] + 1);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(&DAT_180362590);
        }
        cVar5 = FUN_1801a0b60("Only these##qs_inv",plVar4 + 0x2a);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(&DAT_180362680);
        }
        if ((char)plVar4[0x2a] == '\0') {
          FUN_1802aabb0(local_58,"Highlight color");
          cVar5 = FUN_1802bac60("##qs_inv_watch_col",(longlong)plVar4 + 0x154,0x40020);
          if (cVar5 != '\0') {
            FUN_18017a2c0();
          }
        }
      }
      if ((int)plVar4[0x19] == 4) {
        FUN_1802aabb0(local_58,"On disguise");
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        local_128 = (int *)CONCAT44(local_128._4_4_,3);
        puVar1 = (uint *)(lVar3 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar3 + 0x1ed8) = 0xbf800000;
        local_108[0] = (int)plVar4[0x1f];
        cVar5 = FUN_1802b1200("##qs_disguise",local_108);
        if (cVar5 != '\0') {
          FUN_18017a2c0();
          *(int *)(plVar4 + 0x1f) = local_108[0];
        }
        cVar5 = FUN_18026ee60(0);
        if (cVar5 != '\0') {
          FUN_180280d00(
                       "What to print when the job disagrees with the networked team,\ni.e. when the player is disguised (UnionTeams / JCT keep\nply:Team() honest and only rewrite the job).\n\nShow real team - the long-standing behaviour: reveal what he is.\nShow job -> real - both, so the lie stays readable too.\nIgnore - never swap, always print the job."
                       );
        }
      }
      else if ((int)plVar4[0x19] != 0xc) {
        return;
      }
      FUN_1802aabb0(local_58,"Match");
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0xec0);
      local_128 = (int *)CONCAT44(local_128._4_4_,2);
      puVar1 = (uint *)(lVar2 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
      local_108[0] = *(int *)((longlong)plVar4 + 0xfc);
      cVar5 = FUN_1802b1200("##qs_jobmatch",local_108);
      if (cVar5 != '\0') {
        FUN_18017a2c0();
        *(int *)((longlong)plVar4 + 0xfc) = local_108[0];
      }
      cVar5 = FUN_18026ee60(0);
      if (cVar5 == '\0') {
        return;
      }
      FUN_180280d00(
                   "How job and team names are compared.\n\nExact - case-insensitive equality.\nContains - either string inside the other. Use this when the\nserver decorates jobs (\"Job [VIP]\" against a team named \"Job\"),\nwhich under Exact makes EVERY player read as disguised."
                   );
      return;
    }
    if (iVar6 != 7) {
      return;
    }
  }
  FUN_1802afb40();
  if ((iVar6 == 7) &&
     (cVar5 = FUN_1801a0b60("Combine with HP bar##qs_combine",plVar4 + 0x17), cVar5 != '\0')) {
    FUN_18017a2c0();
  }
  cVar5 = FUN_1801a0b60("Show numbers##qs_hptext",(longlong)plVar4 + 0x71);
  if (cVar5 != '\0') {
    FUN_18017a2c0();
  }
  if (*(char *)((longlong)plVar4 + 0x71) != '\0') {
    FUN_1801a0b60("Only when damaged##qs_hpdmg",(longlong)plVar4 + 0x72);
    FUN_1802aabb0(local_58,"Number color");
    FUN_1802bac60("##qs_hptextcol",plVar4 + 0x11,0x40020);
  }
  pcVar9 = "Low HP color";
  if (iVar6 == 7) {
    pcVar9 = "Low armor color";
  }
  FUN_1802aabb0(local_58,pcVar9);
  FUN_1802bac60("##qs_hplow",plVar4 + 10,0x40020);
  return;
}


