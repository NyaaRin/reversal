// 0x1800c3bc0  Features_EdgeJump_EdgeJumpFeature_vfunc02
// size=308 thunk=false
// signature: undefined Features_EdgeJump_EdgeJumpFeature_vfunc02()
// status: ok


void Features_EdgeJump_EdgeJumpFeature_vfunc02
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 local_28 [8];
  float local_20;
  float local_1c;
  float local_18;
  
  if ((DAT_18040a64c != '\0') && (param_3 != 0)) {
    DAT_18040a64c = '\0';
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar5 = (*pcVar1)(DAT_1803fa360,uVar4);
    cVar2 = DAT_1803de067;
    if (lVar5 != 0) {
      if (DAT_1803de067 == '\0') {
        uVar7 = FUN_18001d530(lVar5);
        bVar3 = FUN_1800c3270(lVar5,uVar7);
      }
      else {
        pbVar6 = (byte *)FUN_18001d710(lVar5,local_28);
        bVar3 = ~*pbVar6 & 1;
      }
      if (bVar3 != 0) {
        *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 2;
        DAT_18040a644 = DAT_18040a644 + 1;
        if (DAT_18040a644 < 0xb) {
          FUN_18001daf0(lVar5,&local_20);
          pcVar8 = "traces";
          if (cVar2 != '\0') {
            pcVar8 = "engine sim";
          }
          FUN_180014410("[EDGEJUMP] fire #%d speed=%.0f source=%s at (%.0f %.0f %.0f)\n",
                        DAT_18040a644,(double)DAT_18040a648,pcVar8,(double)local_20,(double)local_1c
                        ,(double)local_18);
        }
      }
    }
  }
  return;
}


