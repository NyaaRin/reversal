// 0x1800d9710  Features_OctoCompat_OctoCompatFeature_vfunc02
// size=519 thunk=false
// signature: undefined Features_OctoCompat_OctoCompatFeature_vfunc02()
// status: ok


void Features_OctoCompat_OctoCompatFeature_vfunc02
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  double dVar8;
  char *pcVar9;
  longlong lVar10;
  
  if ((param_3 == 0) || (DAT_1803fa545 != '\0')) {
    *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  }
  else {
    uVar5 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800);
    uVar5 = FUN_180241610(uVar5,0x402819404e703058);
    pcVar6 = (char *)FUN_1801fcfc0(uVar5);
    if (*pcVar6 == '\0') {
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar7 = (*pcVar1)(DAT_1803fa360,uVar3);
      if ((lVar7 == 0) || (cVar2 = FUN_18001c330(lVar7), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
        *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
      }
      else {
        lVar7 = FUN_18001dbf0(lVar7);
        if (lVar7 == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
          *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
        }
        else {
          lVar10 = lVar7;
          pcVar6 = (char *)FUN_18001e410(lVar7);
          if (pcVar6 < (char *)0x10001) {
            *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
            *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
          }
          else {
            pcVar9 = pcVar6;
            iVar4 = strncmp(pcVar6,"weapon_octo_",0xc);
            if (iVar4 == 0) {
              if (DAT_1803fa608 == 0) {
                dVar8 = 0.0;
              }
              else {
                dVar8 = *(double *)(DAT_1803fa608 + 0x10);
              }
              if ((*(longlong *)(param_1 + 0x58) != lVar7) ||
                 ((float)dVar8 < *(float *)(param_1 + 0x60))) {
                *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
                *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
              }
              *(longlong *)(param_1 + 0x58) = lVar7;
              *(float *)(param_1 + 0x60) = (float)dVar8;
              FUN_1800d9bf0(param_1,param_3,pcVar6,param_4,pcVar9,lVar10);
              FUN_1800d8460(param_3);
            }
            else {
              *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
              *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
            }
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
      *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
    }
  }
  return;
}


