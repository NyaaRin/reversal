// 0x180235010  FUN_180235010
// size=602 thunk=false
// signature: undefined FUN_180235010()
// status: ok


void FUN_180235010(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  lVar1 = param_1[8];
  cVar5 = FUN_18023bba0();
  if (cVar5 == '\0') {
    if ((int)param_1[0xe] != 0x7c) {
      return;
    }
    puVar6 = (undefined8 *)FUN_1802d8350(0x20);
    *puVar6 = vftable_std__Node_base;
    puVar6[1] = 8;
    puVar6[2] = 0;
    puVar6[3] = 0;
    uVar7 = FUN_18023c1f0(param_1 + 7,puVar6);
    FUN_180235430(extraout_XMM0_Da,uVar7);
  }
  if ((int)param_1[0xe] == 0x7c) {
    puVar6 = (undefined8 *)FUN_1802d8350(0x20);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = vftable_std__Node_base;
    puVar6[1] = 0x11;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = vftable_std__Node_endif;
    FUN_18023c1f0(param_1 + 7,puVar6);
    puVar8 = (undefined8 *)FUN_1802d8350(0x30);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    *puVar8 = vftable_std__Node_base;
    puVar8[1] = 0x10;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = vftable_std__Node_if;
    puVar8[4] = puVar6;
    puVar8[5] = 0;
    lVar2 = *(longlong *)(lVar1 + 0x10);
    *(undefined8 **)(*(longlong *)(lVar2 + 0x18) + 0x10) = puVar8;
    puVar8[3] = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 **)(lVar2 + 0x18) = puVar8;
    puVar8[2] = lVar2;
    do {
      pcVar9 = (char *)*param_1;
      if (pcVar9 != (char *)param_1[1]) {
        if ((((*pcVar9 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar9 = pcVar9 + 1, pcVar9 != (char *)param_1[1])) &&
           ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar9 - 0x28U) < 2)) ||
            (((param_1[0xc] & 0x10U) == 0 && ((*pcVar9 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = (longlong)pcVar9;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      cVar5 = FUN_18023bba0(param_1);
      if (cVar5 == '\0') {
        puVar8 = (undefined8 *)FUN_1802d8350(0x20);
        *puVar8 = vftable_std__Node_base;
        puVar8[1] = 8;
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar7 = FUN_18023c1f0(param_1 + 7,puVar8);
        FUN_180235430(extraout_XMM0_Da_00,uVar7);
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      lVar3 = puVar6[2];
      puVar6[2] = 0;
      lVar4 = param_1[8];
      param_1[8] = (longlong)puVar6;
      puVar6[2] = 0;
      *(undefined8 **)(lVar4 + 0x10) = puVar6;
      lVar4 = *(longlong *)(lVar2 + 0x28);
      while (lVar4 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x28);
        lVar4 = *(longlong *)(lVar2 + 0x28);
      }
      puVar8 = (undefined8 *)FUN_1802d8350(0x30);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *puVar8 = vftable_std__Node_base;
      puVar8[1] = 0x10;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = vftable_std__Node_if;
      puVar8[4] = puVar6;
      puVar8[5] = 0;
      *(undefined8 **)(lVar2 + 0x28) = puVar8;
      puVar8[2] = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
    } while ((int)param_1[0xe] == 0x7c);
  }
  return;
}


