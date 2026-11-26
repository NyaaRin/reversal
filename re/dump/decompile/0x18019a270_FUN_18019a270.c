// 0x18019a270  FUN_18019a270
// size=491 thunk=false
// signature: undefined FUN_18019a270()
// status: ok


longlong *
FUN_18019a270(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if ((ulonglong)param_1[3] < (ulonglong)param_2[2]) {
    lVar1 = param_1[2];
    FUN_18021aa80(0,param_2[2] - lVar1,param_3,param_4,1,param_1);
    param_1[2] = lVar1;
  }
  uVar4 = param_2[2];
  if (uVar4 != 0) {
    do {
      puVar3 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar3 = (undefined8 *)*param_2;
      }
      bVar5 = *(byte *)((longlong)puVar3 + uVar7);
      if (bVar5 < 0x80) {
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 + 0x20;
        }
LAB_18019a303:
        uVar4 = param_1[2];
        uVar2 = param_1[3];
        if (uVar4 < uVar2) {
          param_1[2] = uVar4 + 1;
          if (uVar2 < 0x10) {
            *(byte *)(uVar4 + (longlong)param_1) = bVar5;
            *(undefined1 *)(uVar4 + 1 + (longlong)param_1) = 0;
          }
          else {
            lVar1 = *param_1;
            *(byte *)(uVar4 + lVar1) = bVar5;
            *(undefined1 *)(uVar4 + 1 + lVar1) = 0;
          }
        }
        else {
          FUN_18021abd0(param_1,uVar2,param_3,bVar5);
        }
        uVar7 = uVar7 + 1;
      }
      else {
        if ((1 < (byte)(bVar5 + 0x30)) || (uVar4 <= uVar7 + 1)) goto LAB_18019a303;
        puVar3 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar3 = (undefined8 *)*param_2;
        }
        uVar6 = (bVar5 & 0x1f) << 6 | *(byte *)((longlong)puVar3 + uVar7 + 1) & 0x3f;
        if (uVar6 - 0x410 < 0x20) {
          uVar6 = uVar6 + 0x20;
        }
        else if (uVar6 == 0x401) {
          uVar6 = 0x451;
        }
        bVar5 = (byte)(uVar6 >> 6) | 0xc0;
        uVar4 = param_1[2];
        if (uVar4 < (ulonglong)param_1[3]) {
          param_1[2] = uVar4 + 1;
          if ((ulonglong)param_1[3] < 0x10) {
            *(byte *)(uVar4 + (longlong)param_1) = bVar5;
            *(undefined1 *)(uVar4 + 1 + (longlong)param_1) = 0;
          }
          else {
            lVar1 = *param_1;
            *(byte *)(uVar4 + lVar1) = bVar5;
            *(undefined1 *)(uVar4 + 1 + lVar1) = 0;
          }
        }
        else {
          FUN_18021abd0(param_1);
        }
        bVar5 = (byte)uVar6 & 0x3f | 0x80;
        uVar4 = param_1[2];
        uVar2 = param_1[3];
        if (uVar4 < uVar2) {
          param_1[2] = uVar4 + 1;
          if (uVar2 < 0x10) {
            *(byte *)(uVar4 + (longlong)param_1) = bVar5;
            *(undefined1 *)(uVar4 + 1 + (longlong)param_1) = 0;
            uVar7 = uVar7 + 2;
          }
          else {
            lVar1 = *param_1;
            *(byte *)(uVar4 + lVar1) = bVar5;
            *(undefined1 *)(uVar4 + 1 + lVar1) = 0;
            uVar7 = uVar7 + 2;
          }
        }
        else {
          FUN_18021abd0(param_1,uVar2,param_3,bVar5);
          uVar7 = uVar7 + 2;
        }
      }
      uVar4 = param_2[2];
    } while (uVar7 < uVar4);
  }
  return param_1;
}


