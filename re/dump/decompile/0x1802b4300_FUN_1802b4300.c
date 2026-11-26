// 0x1802b4300  FUN_1802b4300
// size=289 thunk=false
// signature: undefined FUN_1802b4300()
// status: ok


undefined8 FUN_1802b4300(longlong param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_res8 [2];
  int local_res18 [4];
  
  if (((*(uint *)(param_1 + 0x10) & 0x400) == 0) && (0 < param_2)) {
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    uVar9 = (longlong)param_2 + uVar2;
    do {
      uVar10 = uVar2;
      if (uVar9 <= uVar2) break;
      pbVar1 = (byte *)(uVar9 - 1);
      uVar9 = uVar9 - 1;
      uVar10 = uVar9;
    } while ((*pbVar1 & 0xc0) == 0x80);
    FUN_180268c20(local_res18,(longlong)param_2 + uVar2,(longlong)*(int *)(param_1 + 0x18) + uVar2);
    FUN_180268c20(local_res8,uVar10);
    if (((local_res8[0] == 0x20) || (local_res8[0] == 9)) || (local_res8[0] == 0x3000)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    piVar7 = &DAT_180380560;
    piVar8 = &DAT_180380560;
    do {
      if (local_res8[0] == *piVar8) {
        bVar4 = true;
        goto LAB_1802b43c3;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)&DAT_1803805d4);
    bVar4 = false;
LAB_1802b43c3:
    if (((local_res18[0] == 0x20) || (local_res18[0] == 9)) || (local_res18[0] == 0x3000)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    do {
      if (local_res18[0] == *piVar7) {
        bVar6 = true;
        goto LAB_1802b43f4;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)&DAT_1803805d4);
    bVar6 = false;
LAB_1802b43f4:
    if ((bVar3) || (bVar4)) {
      if (!bVar6) {
        if (!bVar5) {
          return 1;
        }
        return 0;
      }
    }
    else if (!bVar6) {
      return 0;
    }
    if (!bVar4) {
      return 1;
    }
  }
  return 0;
}


