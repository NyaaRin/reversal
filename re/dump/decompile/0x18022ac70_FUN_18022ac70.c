// 0x18022ac70  FUN_18022ac70
// size=536 thunk=false
// signature: undefined FUN_18022ac70()
// status: ok


longlong FUN_18022ac70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  puVar4 = (undefined8 *)FUN_1802d8350();
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *puVar4 = vftable_std__Node_base;
  puVar4[1] = 0xd;
  lVar9 = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = vftable_std__Node_capture;
  *(undefined4 *)(puVar4 + 4) = 0;
  uVar5 = FUN_18023c1f0(plVar1,puVar4);
  FUN_180235010(param_1);
  FUN_180235430(plVar1,uVar5);
  puVar4 = (undefined8 *)FUN_1802d8350(0x20);
  *puVar4 = vftable_std__Node_base;
  puVar4[1] = 0x15;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_18023c1f0(plVar1,puVar4);
  lVar2 = *plVar1;
  *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_1 + 0x68);
  *(int *)(lVar2 + 0x28) = *(int *)(param_1 + 0x10) + 1;
  lVar8 = lVar2;
  lVar3 = lVar9;
  do {
    if (lVar8 == 0) {
      return lVar2;
    }
    lVar6 = lVar3;
    switch(*(undefined4 *)(lVar8 + 8)) {
    case 7:
      if (lVar3 != 0) {
        if (((*(longlong *)(lVar8 + 0x20) == 0) ||
            ((((*(longlong *)(lVar8 + 0x28) == 0 && (*(longlong *)(lVar8 + 0x30) == 0)) &&
              (*(longlong *)(lVar8 + 0x38) == 0)) &&
             ((*(short *)(lVar8 + 0x40) == 0 &&
              (*(longlong *)(*(longlong *)(lVar8 + 0x20) + 0x18) == 0)))))) &&
           (*(longlong *)(lVar8 + 0x48) == 0)) {
          if ((*(uint *)(param_1 + 0x68) & 0x800) == 0) break;
          if (*(longlong *)(lVar8 + 0x38) == 0) {
            bVar10 = (*(byte *)(lVar8 + 0xc) & 1) == 0;
            goto LAB_18022ae5a;
          }
        }
LAB_18022ae5c:
        *(undefined4 *)(lVar3 + 0x34) = 0;
      }
      break;
    case 8:
    case 0xd:
      bVar10 = lVar3 == 0;
LAB_18022ae5a:
      if (!bVar10) goto LAB_18022ae5c;
      break;
    case 10:
    case 0xb:
      FUN_180235270(param_1,*(undefined8 *)(lVar8 + 0x20),0,0);
      break;
    case 0x10:
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x34) = 0;
      }
      for (lVar7 = *(longlong *)(lVar8 + 0x28); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x28)) {
        FUN_180235270(param_1,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x20),lVar3);
      }
      break;
    case 0x12:
      lVar6 = lVar8;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x34) = 0;
        if (*(uint *)(lVar3 + 0x24) < 2) {
          FUN_180235270(param_1,*(undefined8 *)(lVar8 + 0x10),
                        *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + 0x10),lVar8);
          lVar8 = *(longlong *)(lVar8 + 0x28);
          lVar6 = lVar3;
        }
        else {
          *(undefined4 *)(lVar8 + 0x34) = 0;
          lVar6 = lVar3;
        }
      }
      break;
    case 0x13:
      if ((lVar3 == *(longlong *)(lVar8 + 0x20)) && (lVar6 = lVar9, *(int *)(lVar3 + 0x34) == -1)) {
        *(undefined4 *)(lVar3 + 0x34) = 1;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x10);
    lVar3 = lVar6;
  } while( true );
}


