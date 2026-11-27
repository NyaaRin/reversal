// 0x180035650  FUN_180035650
// size=1361 thunk=false
// signature: undefined FUN_180035650()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180035650(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  void *_Memory;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong *puVar12;
  char cVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined4 local_118;
  uint local_114;
  ulonglong *local_110;
  ulonglong *local_108;
  undefined1 local_100 [40];
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  void *local_a0;
  ulonglong local_98;
  undefined1 local_90;
  longlong local_88;
  ulonglong *local_80;
  ulonglong *puStack_78;
  undefined8 local_70;
  ulonglong local_68;
  
  puVar8 = auStack_138;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  lVar11 = *param_5;
  lVar1 = param_5[1];
  if (lVar11 != lVar1) {
    do {
      local_88 = lVar11;
      FUN_18020e450(lVar11 + 0x20);
      FUN_18020e450(lVar11);
      lVar11 = lVar11 + 0x50;
    } while (lVar11 != lVar1);
    param_5[1] = *param_5;
    local_88 = lVar11;
  }
  if (*(int *)(param_3 + 0x88) == 0) {
    cVar13 = *(int *)(param_3 + 0x7c) != -1;
  }
  else {
    cVar13 = *(char *)(param_3 + 0x8c);
  }
  puVar9 = auStack_138;
  if (((((cVar13 != '\0') && (puVar9 = auStack_138, DAT_1803faef0 != (code *)0x0)) &&
       (puVar9 = auStack_138, DAT_1803fafa0 != (code *)0x0)) &&
      ((puVar9 = auStack_138, DAT_1803faed8 != 0 &&
       (puVar9 = auStack_138, DAT_1803faff8 != (code *)0x0)))) &&
     (((puVar9 = auStack_138, DAT_1803fb008 != (code *)0x0 &&
       (puVar9 = auStack_138, DAT_1803fafc0 != (code *)0x0)) &&
      ((DAT_1803fb038 == (code *)0x0 ||
       (iVar3 = (*DAT_1803fb038)(param_1,6), puVar9 = auStack_138, iVar3 != 0)))))) {
    if (param_2 == (longlong *)0x0) {
      local_114 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
      local_114 = (**(code **)*param_2)(param_2);
    }
    else {
      local_114 = (*DAT_1803fb088)();
    }
    cVar13 = FUN_180033aa0(param_1,param_2,param_3,param_4);
    if (cVar13 != '\0') {
      if (param_2 == (longlong *)0x0) {
        uVar16 = 0;
      }
      else if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
        uVar16 = (**(code **)*param_2)(param_2);
      }
      else {
        uVar16 = (*DAT_1803fb088)();
      }
      local_80 = (ulonglong *)0x0;
      puStack_78 = (ulonglong *)0x0;
      local_70 = 0;
      local_118 = uVar16;
      FUN_180034850(param_1,uVar16,&local_80,0x20);
      local_110 = puStack_78;
      puVar12 = local_80;
      puVar7 = puStack_78;
      if (local_80 != puStack_78) {
        do {
          puVar6 = puVar12;
          if (0xf < puVar12[3]) {
            puVar6 = (ulonglong *)*puVar12;
          }
          (*DAT_1803fafa0)(param_1,puVar6);
          (*DAT_1803faef0)(param_1,uVar16);
          iVar3 = (*DAT_1803faff8)(param_1,0xffffffff);
          if (iVar3 - 3U < 2) {
            uStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0xf;
            local_d8 = 0;
            pvStack_b0 = (void *)0x0;
            local_a8 = (void *)0x0;
            local_a0 = (void *)0xf;
            local_b8 = (void *)0x0;
            uVar16 = 0;
            uVar17 = 0;
            local_98 = 0;
            local_90 = 0;
            if (&local_d8 != puVar12) {
              puVar7 = puVar12;
              if (0xf < puVar12[3]) {
                puVar7 = (ulonglong *)*puVar12;
              }
              FUN_180212700(&local_d8,puVar7,puVar12[2]);
              uVar16 = (undefined4)local_98;
              uVar17 = (undefined4)(local_98 >> 0x20);
            }
            pvVar10 = local_a0;
            uVar14 = iVar3 == 3;
            local_90 = uVar14;
            if (iVar3 == 4) {
              local_88 = 0;
              lVar11 = (*DAT_1803fb008)(param_1,0xffffffff,&local_88);
              uVar15 = CONCAT44(uVar17,uVar16);
              if (lVar11 != 0) {
                FUN_180212700(&local_b8,lVar11,local_88);
                pvVar10 = local_a0;
                uVar14 = local_90;
                uVar15 = local_98;
              }
            }
            else {
              uVar15 = (*DAT_1803fafc0)(param_1,0xffffffff);
              local_98 = uVar15;
              ppvVar5 = (void **)FUN_180027490(local_100,(int)uVar15);
              if (&local_b8 != ppvVar5) {
                if ((void *)0xf < pvVar10) {
                  _Memory = local_b8;
                  if ((0xfff < (longlong)pvVar10 + 1U) &&
                     (_Memory = *(void **)((longlong)local_b8 + -8),
                     0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)_Memory)))) {
                    pcVar2 = (code *)swi(0x29);
                    (*pcVar2)(5);
                    puVar8 = auStack_130;
                    goto LAB_180035b03;
                  }
                  free(_Memory);
                }
                local_b8 = *ppvVar5;
                pvStack_b0 = ppvVar5[1];
                local_a8 = ppvVar5[2];
                pvVar10 = ppvVar5[3];
                ppvVar5[2] = (void *)0x0;
                ppvVar5[3] = (void *)0xf;
                *(undefined1 *)ppvVar5 = 0;
                local_a0 = pvVar10;
              }
              FUN_18020e450();
            }
            puVar7 = (ulonglong *)param_5[1];
            if (puVar7 == (ulonglong *)param_5[2]) {
              FUN_1802293c0(param_5,puVar7,&local_d8);
            }
            else {
              *puVar7 = local_d8;
              puVar7[1] = uStack_d0;
              puVar7[2] = local_c8;
              puVar7[3] = local_c0;
              local_c8 = 0;
              local_c0 = 0xf;
              local_d8 = local_d8 & 0xffffffffffffff00;
              puVar7[4] = (ulonglong)local_b8;
              puVar7[5] = (ulonglong)pvStack_b0;
              puVar7[6] = (ulonglong)local_a8;
              puVar7[7] = (ulonglong)pvVar10;
              local_a8 = (void *)0x0;
              local_a0 = (void *)0xf;
              local_b8 = (void *)((ulonglong)local_b8 & 0xffffffffffffff00);
              puVar7[8] = uVar15;
              *(undefined1 *)(puVar7 + 9) = uVar14;
              param_5[1] = param_5[1] + 0x50;
              local_108 = puVar7;
            }
            FUN_18020e450(&local_b8);
            FUN_18020e450(&local_d8);
            puVar7 = local_110;
            uVar16 = local_118;
          }
          if (param_2 != (longlong *)0x0) {
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
               (param_2[1] == 0)) {
              (**(code **)(*param_2 + 0x10))(param_2,1);
            }
            else {
              iVar4 = (*DAT_1803fb088)();
              iVar3 = 0;
              if (-1 < iVar4 + -1) {
                iVar3 = iVar4 + -1;
              }
              (*DAT_1803faf10)(param_2[1],iVar3);
            }
          }
          puVar12 = puVar12 + 4;
        } while (puVar12 != puVar7);
      }
      FUN_18020d5c0(&local_80);
    }
    puVar12 = (ulonglong *)(ulonglong)local_114;
    do {
      if (param_2 == (longlong *)0x0) goto LAB_180035af8;
LAB_180035b03:
      if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
        pcVar2 = *(code **)*param_2;
        *(undefined8 *)(puVar8 + -8) = 0x180035b24;
        iVar3 = (*pcVar2)(param_2);
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x180035b1a;
        iVar3 = (*DAT_1803fb088)();
      }
      while( true ) {
        puVar9 = puVar8;
        if (iVar3 <= (int)puVar12) goto LAB_180035b79;
        if (param_2 != (longlong *)0x0) break;
LAB_180035af8:
        iVar3 = 0;
      }
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0)) {
        pcVar2 = *(code **)(*param_2 + 0x10);
        *(undefined8 *)(puVar8 + -8) = 0x180035b74;
        (*pcVar2)(param_2,1);
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x180035b4e;
        iVar4 = (*DAT_1803fb088)();
        iVar3 = 0;
        if (-1 < iVar4 + -1) {
          iVar3 = iVar4 + -1;
        }
        lVar11 = param_2[1];
        *(undefined8 *)(puVar8 + -8) = 0x180035b64;
        (*DAT_1803faf10)(lVar11,iVar3);
      }
    } while( true );
  }
LAB_180035b79:
  *(undefined8 *)(puVar9 + -8) = 0x180035b85;
  return;
}


