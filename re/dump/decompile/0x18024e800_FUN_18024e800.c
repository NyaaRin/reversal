// 0x18024e800  FUN_18024e800
// size=972 thunk=false
// signature: undefined FUN_18024e800()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024e800(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  ulonglong local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  undefined8 *******local_118 [2];
  undefined8 local_108;
  ulonglong local_100;
  undefined8 *******local_f8;
  longlong lStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined8 *******local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  local_148 = 0;
  uStack_70 = 0;
  local_78 = (undefined8 *******)0x0;
  puVar2 = *(ulonglong **)(param_1 + 0xf8);
  puVar11 = *(ulonglong **)(param_1 + 0xf0);
  for (puVar5 = puVar11; local_68 = _DAT_1803814b0, uStack_60 = _UNK_1803814b8, puVar5 < puVar2;
      puVar5 = puVar5 + 6) {
    if ((*puVar5 != puVar5[2]) || (puVar5[1] != puVar5[3])) goto joined_r0x00018024e88b;
  }
  for (; puVar11 != puVar2; puVar11 = puVar11 + 6) {
    uVar10 = puVar11[2];
    uVar8 = *puVar11;
    bVar14 = uVar8 < uVar10;
    if (uVar8 == uVar10) {
      bVar14 = puVar11[1] < puVar11[3];
    }
    if (bVar14) {
      uVar10 = uVar8;
    }
    lVar3 = *(longlong *)(param_1 + 0x50);
    uVar8 = (*(longlong *)(param_1 + 0x58) - lVar3 >> 5) * -0x5555555555555555;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    local_120 = *(longlong *)(uVar10 * 0x60 + 8 + lVar3) - *(longlong *)(uVar10 * 0x60 + lVar3) >> 4
    ;
    local_130 = 0;
    local_138 = uVar10;
    local_128 = uVar10;
    FUN_180254e90(param_1 + 0x50,local_b8,&local_138,&local_128);
    local_148 = 1;
    plVar7 = (longlong *)FUN_18021aef0(local_b8,&DAT_18033e92c,1);
    local_f8 = (undefined8 *******)*plVar7;
    lStack_f0 = plVar7[1];
    local_e8 = plVar7[2];
    uStack_e0 = plVar7[3];
    *(undefined1 *)plVar7 = 0;
    plVar7[2] = 0;
    plVar7[3] = 0xf;
    local_148 = 3;
    pppppppuVar9 = &local_f8;
    if (0xf < uStack_e0) {
      pppppppuVar9 = local_f8;
    }
    FUN_18021aef0(&local_78,pppppppuVar9,local_e8);
    local_148 = 1;
    FUN_18020e450(&local_f8);
    local_148 = 0;
    FUN_18020e450(local_b8);
  }
LAB_18024ea09:
  pppppppuVar9 = &local_78;
  if (0xf < uStack_60) {
    pppppppuVar9 = local_78;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  pcVar4 = *(code **)(lVar3 + 0xc08);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(lVar3,pppppppuVar9);
  }
  FUN_18020e450(&local_78);
  return;
joined_r0x00018024e88b:
  if (puVar11 == puVar2) goto LAB_18024ea09;
  if (local_68 != 0) {
    FUN_18021aef0(&local_78,&DAT_18033e92c,1);
  }
  plVar7 = (longlong *)(param_1 + 0x50);
  puVar5 = puVar11 + 2;
  uVar10 = *puVar5;
  uVar8 = *puVar11;
  bVar13 = uVar8 < uVar10;
  bVar14 = uVar8 == uVar10;
  if (bVar14) {
    if (puVar11[1] != puVar11[3]) {
      bVar13 = uVar8 < uVar10;
      bVar14 = false;
      if (uVar8 == uVar10) {
        bVar13 = puVar11[1] < puVar11[3];
        bVar14 = puVar11[1] == puVar11[3];
      }
      goto LAB_18024e98f;
    }
    lVar3 = *plVar7;
    uVar8 = (*(longlong *)(param_1 + 0x58) - lVar3 >> 5) * -0x5555555555555555;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    local_130 = *(longlong *)(uVar10 * 0x60 + 8 + lVar3) - *(longlong *)(uVar10 * 0x60 + lVar3) >> 4
    ;
    local_120 = 0;
    local_138 = uVar10;
    local_128 = uVar10;
    FUN_180254e90(plVar7,local_118,&local_128,&local_138);
    local_148 = 4;
    pppppppuVar9 = local_118;
    if (0xf < local_100) {
      pppppppuVar9 = local_118[0];
    }
    FUN_18021aef0(&local_78,pppppppuVar9,local_108);
    local_148 = 0;
    FUN_18020e450(local_118);
  }
  else {
LAB_18024e98f:
    puVar12 = puVar5;
    if (!bVar13 && !bVar14) {
      puVar12 = puVar11;
    }
    bVar14 = uVar8 < uVar10;
    if (uVar8 == uVar10) {
      bVar14 = puVar11[1] < puVar11[3];
    }
    if (bVar14) {
      puVar5 = puVar11;
    }
    local_d8 = *puVar12;
    uStack_d0 = puVar12[1];
    local_c8 = (undefined4)*puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = (undefined4)puVar5[1];
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    puVar6 = (undefined8 *)FUN_180254e90(plVar7,local_98,&local_c8,&local_d8);
    puVar1 = puVar6 + 2;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_18021aef0(&local_78,puVar6,*puVar1);
    FUN_18020e450(local_98);
  }
  puVar11 = puVar11 + 6;
  goto joined_r0x00018024e88b;
}


