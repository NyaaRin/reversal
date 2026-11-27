// 0x180230800  FUN_180230800
// size=592 thunk=false
// signature: undefined FUN_180230800()
// status: ok


void FUN_180230800(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = param_3 + 0x28;
  if (param_2 < param_3) {
    while( true ) {
      iVar3 = *(int *)(param_3 - 8);
      uVar1 = param_3 - 0x28;
      iVar4 = *(int *)(param_3 + 0x20);
      if (iVar3 == iVar4) {
        bVar5 = FUN_180201cf0(uVar1,param_3);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar4 <= iVar3;
      }
      if (bVar6 != false) break;
      if (iVar4 == iVar3) {
        bVar5 = FUN_180201cf0(param_3,uVar1);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar3 <= iVar4;
      }
      if ((bVar6 != false) || (param_3 = uVar1, uVar1 <= param_2)) break;
    }
  }
  uVar1 = uVar8;
  uVar7 = param_3;
  if (uVar8 < param_4) {
    iVar3 = *(int *)(param_3 + 0x20);
    while( true ) {
      iVar4 = *(int *)(uVar8 + 0x20);
      if (iVar4 == iVar3) {
        bVar5 = FUN_180201cf0(uVar8,param_3);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar3 <= iVar4;
      }
      uVar1 = uVar8;
      if (bVar6 != false) break;
      if (iVar3 == iVar4) {
        bVar5 = FUN_180201cf0(param_3,uVar8);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar4 <= iVar3;
      }
      if ((bVar6 != false) || (uVar8 = uVar8 + 0x28, uVar1 = uVar8, param_4 <= uVar8)) break;
    }
  }
joined_r0x0001802308cb:
  do {
    uVar2 = param_3;
    if (param_4 <= uVar1) {
joined_r0x00018023092f:
      while (param_3 = uVar2, param_2 < param_3) {
        iVar3 = *(int *)(param_3 - 8);
        uVar2 = param_3 - 0x28;
        iVar4 = *(int *)(uVar7 + 0x20);
        if (iVar3 == iVar4) {
          bVar5 = FUN_180201cf0(uVar2,uVar7);
          bVar6 = (bool)(bVar5 >> 7);
        }
        else {
          bVar6 = iVar4 <= iVar3;
        }
        if (bVar6 == false) {
          if (iVar4 == iVar3) {
            bVar5 = FUN_180201cf0(uVar7,uVar2);
            bVar6 = (bool)(bVar5 >> 7);
          }
          else {
            bVar6 = iVar3 <= iVar4;
          }
          if (bVar6 != false) break;
          uVar7 = uVar7 - 0x28;
          if (uVar7 != uVar2) {
            FUN_18023ac60(uVar7,uVar2);
          }
        }
      }
      if ((param_3 == param_2) && (uVar1 == param_4)) {
        *param_1 = uVar7;
        param_1[1] = uVar8;
        return;
      }
      if (param_3 == param_2) {
        if (uVar8 != uVar1) {
          FUN_18023ac60(uVar7,uVar8);
        }
        uVar8 = uVar8 + 0x28;
        FUN_18023ac60(uVar7,uVar1);
        uVar1 = uVar1 + 0x28;
        uVar7 = uVar7 + 0x28;
      }
      else {
        param_3 = param_3 - 0x28;
        if (uVar1 == param_4) {
          uVar7 = uVar7 - 0x28;
          if (param_3 != uVar7) {
            FUN_18023ac60(param_3,uVar7);
          }
          uVar8 = uVar8 - 0x28;
          FUN_18023ac60(uVar7,uVar8);
        }
        else {
          FUN_18023ac60(uVar1,param_3);
          uVar1 = uVar1 + 0x28;
        }
      }
      goto joined_r0x0001802308cb;
    }
    iVar3 = *(int *)(uVar1 + 0x20);
    iVar4 = *(int *)(uVar7 + 0x20);
    if (iVar4 == iVar3) {
      bVar5 = FUN_180201cf0(uVar7,uVar1);
      bVar6 = (bool)(bVar5 >> 7);
    }
    else {
      bVar6 = iVar3 <= iVar4;
    }
    if (bVar6 == false) {
      if (iVar3 == iVar4) {
        bVar5 = FUN_180201cf0(uVar1,uVar7);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = iVar4 <= iVar3;
      }
      if (bVar6 != false) goto joined_r0x00018023092f;
      if (uVar8 != uVar1) {
        FUN_18023ac60(uVar8,uVar1);
      }
      uVar8 = uVar8 + 0x28;
    }
    uVar1 = uVar1 + 0x28;
  } while( true );
}


