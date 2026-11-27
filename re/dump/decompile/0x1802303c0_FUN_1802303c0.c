// 0x1802303c0  FUN_1802303c0
// size=679 thunk=false
// signature: undefined FUN_1802303c0()
// status: ok


void FUN_1802303c0(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = param_3 + 0x30;
  if (param_2 < param_3) {
    while( true ) {
      iVar2 = *(int *)(param_3 + 0x28);
      iVar3 = *(int *)(param_3 - 8);
      if (iVar3 == iVar2) {
        bVar5 = FUN_180201cf0(param_3 - 0x28,param_3 + 8);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar2 <= iVar3;
      }
      if (bVar6 != false) break;
      if (iVar2 == iVar3) {
        bVar5 = FUN_180201cf0(param_3 + 8,param_3 - 0x28);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar3 <= iVar2;
      }
      if ((bVar6 != false) || (param_3 = param_3 - 0x30, param_3 <= param_2)) break;
    }
  }
  uVar4 = uVar8;
  uVar7 = param_3;
  if (uVar8 < param_4) {
    iVar2 = *(int *)(param_3 + 0x28);
    while( true ) {
      iVar3 = *(int *)(uVar8 + 0x28);
      if (iVar3 == iVar2) {
        bVar5 = FUN_180201cf0(uVar8 + 8,param_3 + 8);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar2 <= iVar3;
      }
      uVar4 = uVar8;
      if (bVar6 != false) break;
      if (iVar2 == iVar3) {
        bVar5 = FUN_180201cf0(param_3 + 8,uVar8 + 8);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar3 <= iVar2;
      }
      if ((bVar6 != false) || (uVar8 = uVar8 + 0x30, uVar4 = uVar8, param_4 <= uVar8)) break;
    }
  }
joined_r0x0001802304b4:
  do {
    uVar1 = param_3;
    if (param_4 <= uVar4) {
joined_r0x00018023052e:
      while (param_3 = uVar1, param_2 < param_3) {
        iVar2 = *(int *)(param_3 - 8);
        uVar1 = param_3 - 0x30;
        iVar3 = *(int *)(uVar7 + 0x28);
        if (iVar2 == iVar3) {
          bVar5 = FUN_180201cf0(param_3 - 0x28,uVar7 + 8);
          bVar6 = (bool)(bVar5 >> 7);
        }
        else {
          bVar6 = iVar3 <= iVar2;
        }
        if (bVar6 == false) {
          if (iVar3 == iVar2) {
            bVar5 = FUN_180201cf0(uVar7 + 8,param_3 - 0x28);
            bVar6 = (bool)(bVar5 >> 7);
          }
          else {
            bVar6 = iVar2 <= iVar3;
          }
          if (bVar6 != false) break;
          uVar7 = uVar7 - 0x30;
          if (uVar7 != uVar1) {
            FUN_18023aae0(uVar7,uVar1);
          }
        }
      }
      if ((param_3 == param_2) && (uVar4 == param_4)) {
        *param_1 = uVar7;
        param_1[1] = uVar8;
        return;
      }
      if (param_3 == param_2) {
        if (uVar8 != uVar4) {
          FUN_18023aae0(uVar7,uVar8);
        }
        uVar8 = uVar8 + 0x30;
        FUN_18023aae0(uVar7,uVar4);
        uVar4 = uVar4 + 0x30;
        uVar7 = uVar7 + 0x30;
      }
      else {
        param_3 = param_3 - 0x30;
        if (uVar4 == param_4) {
          uVar7 = uVar7 - 0x30;
          if (param_3 != uVar7) {
            FUN_18023aae0(param_3,uVar7);
          }
          uVar8 = uVar8 - 0x30;
          FUN_18023aae0(uVar7,uVar8);
        }
        else {
          FUN_18023aae0(uVar4,param_3);
          uVar4 = uVar4 + 0x30;
        }
      }
      goto joined_r0x0001802304b4;
    }
    iVar2 = *(int *)(uVar4 + 0x28);
    iVar3 = *(int *)(uVar7 + 0x28);
    if (iVar3 == iVar2) {
      bVar5 = FUN_180201cf0(uVar7 + 8,uVar4 + 8);
      bVar6 = (bool)(bVar5 >> 7);
    }
    else {
      bVar6 = iVar2 <= iVar3;
    }
    if (bVar6 == false) {
      if (iVar2 == iVar3) {
        bVar5 = FUN_180201cf0(uVar4 + 8,uVar7 + 8);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar3 <= iVar2;
      }
      if (bVar6 != false) goto joined_r0x00018023052e;
      if (uVar8 != uVar4) {
        FUN_18023aae0(uVar8,uVar4);
      }
      uVar8 = uVar8 + 0x30;
    }
    uVar4 = uVar4 + 0x30;
  } while( true );
}


