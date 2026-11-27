// 0x180104860  Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc10
// size=380 thunk=false
// signature: undefined Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc10()
// status: ok


void Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc10
               (longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 extraout_XMM0_Da;
  
  cVar4 = FUN_1800da140();
  if (cVar4 != '\0') {
    iVar6 = FUN_180103f20();
    if (iVar6 == 1) {
      pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar8 = (*pcVar3)(DAT_1803fa360,uVar7);
      if ((lVar8 != 0) && (param_2 == lVar8)) {
        cVar4 = FUN_18001c330(lVar8);
        if (cVar4 != '\0') {
          FUN_180104260(extraout_XMM0_Da,lVar8,param_3);
          return;
        }
      }
    }
    else if (*(char *)(param_3 + 0x58) != '\0') {
      pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar8 = (*pcVar3)(DAT_1803fa360,uVar7);
      if ((lVar8 != 0) && (param_2 == lVar8)) {
        cVar4 = FUN_18001c330(lVar8);
        if (cVar4 != '\0') {
          puVar9 = (undefined4 *)FUN_18001d350(lVar8);
          *(undefined4 *)(param_1 + 0xc) = *puVar9;
          uVar1 = puVar9[1];
          *(uint *)(param_1 + 0x10) = uVar1;
          uVar2 = puVar9[2];
          *(uint *)(param_1 + 0x14) = uVar2;
          if ((((*(uint *)(param_1 + 0xc) & 0x7f800000) == 0x7f800000) ||
              ((uVar1 & 0x7f800000) == 0x7f800000)) || ((uVar2 & 0x7f800000) == 0x7f800000)) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          *(undefined1 *)(param_1 + 0x18) = uVar5;
          DAT_1803db439 = 1;
          *(undefined4 *)(param_1 + 8) = 4;
        }
      }
    }
  }
  return;
}


