// 0x1800d8040  Features_PTPCompat_PTPCompatFeature_vfunc02
// size=348 thunk=false
// signature: undefined Features_PTPCompat_PTPCompatFeature_vfunc02()
// status: ok


void Features_PTPCompat_PTPCompatFeature_vfunc02
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  
  if ((param_3 != 0) && (DAT_1803fa545 == '\0')) {
    uVar5 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800);
    uVar5 = FUN_180241610(uVar5,0x402819404e703058);
    pcVar6 = (char *)FUN_1801fcfc0(uVar5);
    if (*pcVar6 == '\0') {
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar7 = (*pcVar1)(DAT_1803fa360,uVar3);
      if (((lVar7 != 0) && (cVar2 = FUN_18001c330(lVar7), cVar2 != '\0')) &&
         (lVar7 = FUN_18001dbf0(lVar7), lVar7 != 0)) {
        lVar9 = lVar7;
        pcVar6 = (char *)FUN_18001e410(lVar7);
        if (pcVar6 < (char *)0x10001) {
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        }
        else {
          pcVar8 = pcVar6;
          iVar4 = strncmp(pcVar6,"ptp_",4);
          if (iVar4 == 0) {
            FUN_1800d81c0(param_1,param_3,lVar7,pcVar6,pcVar8,lVar9);
          }
          else {
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
            *(undefined1 *)(param_1 + 0x18) = 0;
            *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
          }
        }
      }
    }
  }
  return;
}


