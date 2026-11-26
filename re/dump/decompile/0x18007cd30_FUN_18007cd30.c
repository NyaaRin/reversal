// 0x18007cd30  FUN_18007cd30
// size=271 thunk=false
// signature: undefined FUN_18007cd30()
// status: ok


ulonglong FUN_18007cd30(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar1 = param_1[3];
  lVar5 = param_1[2];
  plVar4 = param_1;
  if (0xf < uVar1) {
    plVar4 = (longlong *)*param_1;
  }
  if (lVar5 == 0xd) {
    uVar2 = 0x6e75675f73626f62;
    lVar3 = *plVar4 + -0x6e75675f73626f62;
    if (lVar3 == 0) {
      uVar2 = 0x7361625f;
      lVar3 = (ulonglong)*(uint *)(plVar4 + 1) - 0x7361625f;
      if (lVar3 == 0) {
        uVar2 = 0;
        lVar3 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x65;
      }
    }
    in_RAX = uVar2;
    if (lVar3 == 0) goto LAB_18007ce39;
  }
  plVar4 = param_1;
  if (0xf < uVar1) {
    plVar4 = (longlong *)*param_1;
  }
  if (lVar5 == 0x10) {
    in_RAX = *plVar4 + 0x909c8ca08c9d909e;
    if (in_RAX == 0) {
      in_RAX = plVar4[1] + 0x9a8c9e9da09b9a90;
    }
    uVar2 = 0;
    if (in_RAX == 0) goto LAB_18007ce39;
  }
  plVar4 = param_1;
  if (0xf < uVar1) {
    plVar4 = (longlong *)*param_1;
  }
  if (lVar5 == 0x10) {
    in_RAX = *plVar4 + 0x90978ca08c9d909e;
    if (in_RAX == 0) {
      in_RAX = plVar4[1] + 0x9a8c9e9da0868b8c;
    }
    uVar2 = 0;
    if (in_RAX == 0) goto LAB_18007ce39;
  }
  uVar2 = in_RAX;
  if (0xf < uVar1) {
    param_1 = (longlong *)*param_1;
  }
  if (lVar5 == 0xe) {
    uVar2 = 0x64616e5f73626f62;
    lVar5 = *param_1 + -0x64616e5f73626f62;
    if (lVar5 == 0) {
      uVar2 = 0x61625f65;
      lVar5 = (ulonglong)*(uint *)(param_1 + 1) - 0x61625f65;
      if (lVar5 == 0) {
        uVar2 = 0x6573;
        lVar5 = (ulonglong)*(ushort *)((longlong)param_1 + 0xc) - 0x6573;
      }
    }
    if (lVar5 == 0) {
LAB_18007ce39:
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


