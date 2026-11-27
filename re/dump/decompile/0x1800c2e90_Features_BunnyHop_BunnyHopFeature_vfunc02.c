// 0x1800c2e90  Features_BunnyHop_BunnyHopFeature_vfunc02
// size=204 thunk=false
// signature: undefined Features_BunnyHop_BunnyHopFeature_vfunc02()
// status: ok


void Features_BunnyHop_BunnyHopFeature_vfunc02
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 local_res18 [16];
  
  if ((param_3 != 0) && (DAT_18040986c != '\0')) {
    DAT_18040986c = '\0';
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar3 != 0) {
      if (DAT_1803de067 == '\0') {
        DAT_180409875 = 1;
        DAT_180409874 = 1;
        DAT_180409858 = 0;
        return;
      }
      pbVar4 = (byte *)FUN_18001d710(lVar3,local_res18);
      if (((*pbVar4 & 1) == 0) && (lVar3 = FUN_18001d530(lVar3), 0.0 < *(float *)(lVar3 + 8))) {
        DAT_18040985c = 1;
        return;
      }
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffffffd;
    }
  }
  return;
}


