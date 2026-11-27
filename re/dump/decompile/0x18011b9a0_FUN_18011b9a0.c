// 0x18011b9a0  FUN_18011b9a0
// size=273 thunk=false
// signature: undefined FUN_18011b9a0()
// status: ok


ulonglong FUN_18011b9a0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,
                       longlong param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  iVar4 = 0;
  uVar2 = param_6;
  if (0 < param_3) {
    lVar5 = 0;
    do {
      if ((*(byte *)(param_2 + 0x24 + lVar5 * 0x28) & 0x20) == 0) {
        uVar3 = 0;
        uVar6 = (ulonglong)(*(uint *)(param_2 + 8 + lVar5 * 0x28) >> 3);
        if (uVar6 != 0) {
          do {
            uVar1 = *(ulonglong *)
                     ((ulonglong)*(uint *)(param_2 + 0xc + lVar5 * 0x28) + param_1 + uVar3 * 8);
            if (((((param_4 <= uVar1) && (uVar1 < param_4 + param_5)) && (uVar1 <= param_6)) &&
                (param_6 - uVar1 < 0x1001)) && ((uVar7 == 0 || (uVar7 < uVar1)))) {
              uVar7 = uVar1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar6);
        }
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (iVar4 < param_3);
    if (uVar7 != 0) {
      return uVar7;
    }
  }
  while ((uVar7 = uVar2, param_4 < uVar7 && (param_6 - uVar7 < 0x200))) {
    uVar2 = uVar7 - 1;
    if (*(char *)(uVar7 - 1) == -0x34) {
      return uVar7;
    }
  }
  return 0;
}


