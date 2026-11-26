// 0x18022f440  FUN_18022f440
// size=748 thunk=false
// signature: undefined FUN_18022f440()
// status: ok


ulonglong * FUN_18022f440(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = param_3 + 0x40;
  if (param_2 < param_3) {
    while( true ) {
      iVar2 = *(int *)(param_3 + 0x20);
      iVar3 = *(int *)(param_3 - 0x20);
      if (iVar3 == iVar2) {
        bVar4 = (ulonglong)(*(longlong *)(param_3 + 0x30) - *(longlong *)(param_3 + 0x28) >> 5) <
                (ulonglong)(*(longlong *)(param_3 - 0x10) - *(longlong *)(param_3 - 0x18) >> 5);
      }
      else {
        bVar4 = iVar2 <= iVar3;
      }
      if (bVar4) break;
      if (iVar2 == iVar3) {
        bVar4 = (ulonglong)(*(longlong *)(param_3 - 0x10) - *(longlong *)(param_3 - 0x18) >> 5) <
                (ulonglong)(*(longlong *)(param_3 + 0x30) - *(longlong *)(param_3 + 0x28) >> 5);
      }
      else {
        bVar4 = iVar3 <= iVar2;
      }
      if ((bVar4) || (param_3 = param_3 - 0x40, param_3 <= param_2)) break;
    }
  }
  uVar5 = uVar7;
  uVar6 = param_3;
  if (uVar7 < param_4) {
    iVar2 = *(int *)(param_3 + 0x20);
    while( true ) {
      iVar3 = *(int *)(uVar7 + 0x20);
      if (iVar3 == iVar2) {
        bVar4 = (ulonglong)(*(longlong *)(param_3 + 0x30) - *(longlong *)(param_3 + 0x28) >> 5) <
                (ulonglong)(*(longlong *)(uVar7 + 0x30) - *(longlong *)(uVar7 + 0x28) >> 5);
      }
      else {
        bVar4 = iVar2 <= iVar3;
      }
      uVar5 = uVar7;
      if (bVar4) break;
      if (iVar2 == iVar3) {
        bVar4 = (ulonglong)(*(longlong *)(uVar7 + 0x30) - *(longlong *)(uVar7 + 0x28) >> 5) <
                (ulonglong)(*(longlong *)(param_3 + 0x30) - *(longlong *)(param_3 + 0x28) >> 5);
      }
      else {
        bVar4 = iVar3 <= iVar2;
      }
      if ((bVar4) || (uVar7 = uVar7 + 0x40, uVar5 = uVar7, param_4 <= uVar7)) break;
    }
  }
joined_r0x00018022f553:
  do {
    uVar1 = param_3;
    if (param_4 <= uVar5) {
joined_r0x00018022f5df:
      while (param_3 = uVar1, param_2 < param_3) {
        iVar2 = *(int *)(param_3 - 0x20);
        uVar1 = param_3 - 0x40;
        iVar3 = *(int *)(uVar6 + 0x20);
        if (iVar2 == iVar3) {
          bVar4 = (ulonglong)(*(longlong *)(uVar6 + 0x30) - *(longlong *)(uVar6 + 0x28) >> 5) <
                  (ulonglong)(*(longlong *)(param_3 - 0x10) - *(longlong *)(param_3 - 0x18) >> 5);
        }
        else {
          bVar4 = iVar3 <= iVar2;
        }
        if (!bVar4) {
          if (iVar3 == iVar2) {
            bVar4 = (ulonglong)(*(longlong *)(param_3 - 0x10) - *(longlong *)(param_3 - 0x18) >> 5)
                    < (ulonglong)(*(longlong *)(uVar6 + 0x30) - *(longlong *)(uVar6 + 0x28) >> 5);
          }
          else {
            bVar4 = iVar2 <= iVar3;
          }
          if (bVar4) break;
          uVar6 = uVar6 - 0x40;
          if (uVar6 != uVar1) {
            FUN_18023a5c0(uVar6,uVar1);
          }
        }
      }
      if ((param_3 == param_2) && (uVar5 == param_4)) {
        *param_1 = uVar6;
        param_1[1] = uVar7;
        return param_1;
      }
      if (param_3 == param_2) {
        if (uVar7 != uVar5) {
          FUN_18023a5c0(uVar6,uVar7);
        }
        uVar7 = uVar7 + 0x40;
        FUN_18023a5c0(uVar6,uVar5);
        uVar5 = uVar5 + 0x40;
        uVar6 = uVar6 + 0x40;
      }
      else {
        param_3 = param_3 - 0x40;
        if (uVar5 == param_4) {
          uVar6 = uVar6 - 0x40;
          if (param_3 != uVar6) {
            FUN_18023a5c0(param_3,uVar6);
          }
          uVar7 = uVar7 - 0x40;
          FUN_18023a5c0(uVar6,uVar7);
        }
        else {
          FUN_18023a5c0(uVar5,param_3);
          uVar5 = uVar5 + 0x40;
        }
      }
      goto joined_r0x00018022f553;
    }
    iVar2 = *(int *)(uVar5 + 0x20);
    iVar3 = *(int *)(uVar6 + 0x20);
    if (iVar3 == iVar2) {
      bVar4 = (ulonglong)(*(longlong *)(uVar5 + 0x30) - *(longlong *)(uVar5 + 0x28) >> 5) <
              (ulonglong)(*(longlong *)(uVar6 + 0x30) - *(longlong *)(uVar6 + 0x28) >> 5);
    }
    else {
      bVar4 = iVar2 <= iVar3;
    }
    if (!bVar4) {
      if (iVar2 == iVar3) {
        bVar4 = (ulonglong)(*(longlong *)(uVar6 + 0x30) - *(longlong *)(uVar6 + 0x28) >> 5) <
                (ulonglong)(*(longlong *)(uVar5 + 0x30) - *(longlong *)(uVar5 + 0x28) >> 5);
      }
      else {
        bVar4 = iVar3 <= iVar2;
      }
      if (bVar4) goto joined_r0x00018022f5df;
      if (uVar7 != uVar5) {
        FUN_18023a5c0(uVar7,uVar5);
      }
      uVar7 = uVar7 + 0x40;
    }
    uVar5 = uVar5 + 0x40;
  } while( true );
}


