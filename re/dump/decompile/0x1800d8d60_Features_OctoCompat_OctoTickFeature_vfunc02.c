// 0x1800d8d60  Features_OctoCompat_OctoTickFeature_vfunc02
// size=1022 thunk=false
// signature: undefined Features_OctoCompat_OctoTickFeature_vfunc02()
// status: ok


void Features_OctoCompat_OctoTickFeature_vfunc02
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 **ppuVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined8 *local_e0;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined1 local_d1;
  undefined4 local_c7;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined8 *local_c0;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined4 local_a7;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined8 *local_a0;
  undefined4 local_97;
  undefined2 local_93;
  undefined1 local_91;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  char local_78;
  undefined8 *local_70;
  undefined4 uStack_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  
  lVar14 = 0;
  DAT_18040a240 = 0;
  if ((param_3 != 0) && (DAT_1803fa545 == '\0')) {
    uVar6 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800,param_3,param_4,0);
    uVar6 = FUN_180241610(uVar6,0x402819404e703058);
    pcVar7 = (char *)FUN_1801fcfc0(uVar6);
    if (*pcVar7 == '\0') {
      pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar8 = (*pcVar2)(DAT_1803fa360,uVar5);
      if ((((lVar8 != 0) && (cVar4 = FUN_18001c330(lVar8), cVar4 != '\0')) &&
          (lVar8 = FUN_18001dbf0(lVar8), lVar8 != 0)) &&
         (plVar9 = (longlong *)FUN_180076750(lVar8), plVar9 != (longlong *)0x0)) {
        lVar10 = (**(code **)*plVar9)(plVar9);
        lVar12 = lVar14;
        do {
          pcVar7 = (char *)(lVar10 + lVar12);
          lVar13 = lVar12 + 1;
          if (*pcVar7 != (&DAT_18034a0a8)[lVar12]) {
            return;
          }
          lVar12 = lVar13;
        } while (lVar13 != 5);
        bVar15 = DAT_1803fa678 == 0;
        if (bVar15) {
          local_70 = (undefined8 *)0x0;
          uStack_68 = 0;
          local_60 = (undefined8 *)0x0;
          ppuVar11 = &local_70;
        }
        else {
          ppuVar11 = (undefined8 **)FUN_18001bcd0(*pcVar7,&local_90);
        }
        puVar3 = *ppuVar11;
        local_58 = puVar3;
        puStack_50 = ppuVar11[1];
        puVar1 = ppuVar11[2];
        local_48 = puVar1;
        if ((bVar15) && (local_70 != (undefined8 *)0x0)) {
          (**(code **)*local_70)();
          if (local_60 == (undefined8 *)0x0) {
            DAT_1803fa330 = local_e0;
            DAT_1803fa339 = local_d7;
            DAT_1803fa33d = local_d3;
            local_e1 = local_d1;
          }
          else {
            DAT_1803fa330 = local_60;
            DAT_1803fa339 = local_e7;
            DAT_1803fa33d = local_e3;
          }
          DAT_1803fa338 = local_60 != (undefined8 *)0x0;
          DAT_1803fa33f = local_e1;
        }
        if ((!bVar15) && (local_90 != (undefined8 *)0x0)) {
          (**(code **)*local_90)();
          DAT_1803fa330 = (undefined8 *)CONCAT44(uStack_7c,local_80);
          bVar15 = DAT_1803fa330 == (undefined8 *)0x0;
          if (bVar15) {
            DAT_1803fa330 = local_c0;
            DAT_1803fa339 = local_b7;
            DAT_1803fa33d = local_b3;
            local_c1 = local_b1;
          }
          else {
            DAT_1803fa339 = local_c7;
            DAT_1803fa33d = local_c3;
          }
          DAT_1803fa338 = !bVar15;
          DAT_1803fa33f = local_c1;
        }
        if (puVar3 != (undefined8 *)0x0) {
          lVar14 = puVar3[1];
        }
        FUN_18002dc30(&local_90,lVar14);
        (**(code **)(*plVar9 + 0xe8))(plVar9,lVar8,param_3);
        FUN_1800d8960(lVar8);
        (**(code **)(*plVar9 + 0xe0))(plVar9,lVar8,param_3);
        if ((local_78 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
          (*DAT_1803faf78)(local_90,local_88,local_80,uStack_7c);
        }
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          if (puVar1 == (undefined8 *)0x0) {
            DAT_1803fa330 = local_a0;
            DAT_1803fa339 = local_97;
            DAT_1803fa33d = local_93;
            local_a1 = local_91;
          }
          else {
            DAT_1803fa339 = local_a7;
            DAT_1803fa33d = local_a3;
            DAT_1803fa330 = puVar1;
          }
          DAT_1803fa338 = puVar1 != (undefined8 *)0x0;
          DAT_1803fa33f = local_a1;
        }
      }
    }
  }
  return;
}


