// 0x1800b9e90  FUN_1800b9e90
// size=329 thunk=false
// signature: undefined FUN_1800b9e90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800b9e90(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float local_res8 [2];
  undefined4 local_res18 [2];
  
  lVar4 = (longlong)param_1;
  if (param_1 - 1U < 0x80) {
    lVar5 = lVar4 * 0x168;
    if (DAT_1803fa608 == 0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)*(double *)(DAT_1803fa608 + 0x10);
    }
    iVar3 = FUN_1800b82e0();
    fVar1 = DAT_180380fcc;
    if (iVar3 == 1) {
      return (ulonglong)DAT_180381188;
    }
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        if (((&DAT_18056119c)[lVar5] != '\0') &&
           (uVar6 = FUN_1802d3e00((float)(&DAT_180561198)[lVar4 * 0x5a] - param_2),
           fVar1 <= (float)((uint)uVar6 & _DAT_1803817c0))) {
          return uVar6;
        }
        if (((&DAT_1805611ac)[lVar5] != '\0') &&
           (uVar6 = FUN_1802d3e00((float)(&DAT_1805611a8)[lVar4 * 0x5a] - param_2),
           fVar1 <= (float)((uint)uVar6 & _DAT_1803817c0))) {
          return uVar6;
        }
      }
      else if ((*(char *)((longlong)&DAT_180561188 + lVar5 + 1) != '\0') ||
              (fVar7 < *(float *)(&DAT_18056118c + lVar4 * 0x2d))) {
        local_res8[0] = 0.0;
        local_res18[0] = 0xffffffff;
        cVar2 = FUN_1800b9cf0(param_1,param_2,local_res8,local_res18);
        if (cVar2 != '\0') {
          uVar6 = FUN_1802d3e00(local_res8[0] - param_2);
          return uVar6;
        }
      }
    }
  }
  return 0;
}


