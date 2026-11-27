// 0x18016aed0  FUN_18016aed0
// size=151 thunk=false
// signature: undefined FUN_18016aed0()
// status: ok


int FUN_18016aed0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  switch(uVar1) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
    bVar5 = true;
    if (((uVar1 & 0xfffffffa) != 0) || (bVar3 = bVar5, uVar1 == 1)) goto LAB_18016af34;
    break;
  default:
    bVar5 = false;
    bVar3 = false;
    if ((uVar1 != 2) && (1 < uVar1 - 9)) {
      iVar4 = 1;
      goto LAB_18016af02;
    }
    break;
  case 8:
    bVar5 = *(char *)(param_1 + 0x70) == '\0';
LAB_18016af34:
    iVar4 = 1;
    goto LAB_18016af02;
  }
  bVar5 = bVar3;
  iVar4 = 0;
LAB_18016af02:
  iVar2 = *(int *)(param_1 + 0x84);
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 2) {
    return iVar4 + 1;
  }
  if (iVar2 == 3) {
    return 1;
  }
  if (iVar2 != 4) {
    iVar4 = iVar4 + 1;
    if (!bVar5) {
      iVar4 = 0;
    }
    return iVar4;
  }
  return 2;
}


