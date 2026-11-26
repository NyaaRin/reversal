// 0x180108840  Features_LookBeam_LookBeamFeature_vfunc16
// size=212 thunk=false
// signature: undefined Features_LookBeam_LookBeamFeature_vfunc16()
// status: ok


void Features_LookBeam_LookBeamFeature_vfunc16(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar5 = 0;
  lVar3 = lVar5;
  lVar4 = lVar5;
  do {
    lVar1 = lVar5 + 0x70;
    *(undefined4 *)(lVar3 + 0xc38 + param_1) = local_28;
    lVar5 = lVar5 + 1;
    *(undefined4 *)(lVar3 + 0xc3c + param_1) = local_24;
    lVar2 = lVar3 + 0x1c;
    *(undefined4 *)(lVar1 * 0x1c + param_1) = local_20;
    *(undefined4 *)(param_1 + 0xc28 + lVar2) = local_1c;
    *(undefined4 *)(param_1 + 0xc30 + lVar2) = local_14;
    *(undefined4 *)(param_1 + 0xc2c + lVar2) = local_18;
    *(undefined1 *)(lVar3 + 0xc50 + param_1) = 0;
    *(undefined8 *)(lVar4 + 8 + param_1) = 0;
    *(undefined4 *)(lVar4 + 0x10 + param_1) = 0xbf800000;
    *(undefined8 *)(lVar4 + 0x14 + param_1) = 0;
    *(undefined4 *)(lVar4 + 0x1c + param_1) = 0xbf800000;
    lVar3 = lVar2;
    lVar4 = lVar4 + 0x18;
  } while (lVar5 != 0x82);
  *(undefined4 *)(param_1 + 0x1a70) = 0xffffffff;
  DAT_1804099a8 = 0;
  return;
}


