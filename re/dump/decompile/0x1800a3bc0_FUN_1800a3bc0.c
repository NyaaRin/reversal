// 0x1800a3bc0  FUN_1800a3bc0
// size=364 thunk=false
// signature: undefined FUN_1800a3bc0()
// status: ok


ulonglong FUN_1800a3bc0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_40 [40];
  
  uVar7 = 0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (param_1 != 0) {
    lVar5 = FUN_1800a3520(param_1,1);
    uVar7 = 0;
    if (lVar5 != 0) {
      if (DAT_1803de065 == '\0') {
        if (DAT_1803fa608 == 0) {
          uVar8 = 0;
          uVar9 = 0;
        }
        else {
          uVar8 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
          uVar9 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
        }
      }
      else {
        uVar8 = (undefined4)DAT_1803ddea0;
        uVar9 = (undefined4)((ulonglong)DAT_1803ddea0 >> 0x20);
      }
      uVar6 = FUN_18001daf0(param_1,local_40);
      uVar7 = FUN_1800a25b0(lVar5 + 0x20,param_1,uVar8,uVar6);
      *(ulonglong *)(lVar5 + 0x18) = CONCAT44(uVar9,uVar8);
      if ((((param_1 == *(longlong *)(lVar5 + 0x20)) && (*(char *)(lVar5 + 0x48) != '\0')) &&
          (*(double *)(lVar5 + 0x28) <= (double)CONCAT44(uVar9,uVar8))) &&
         ((((double)CONCAT44(uVar9,uVar8) - *(double *)(lVar5 + 0x28) <= DAT_180380c48 &&
           (uVar4 = *(uint *)(lVar5 + 0x3c) & 0x7f800000, uVar7 = (ulonglong)uVar4,
           uVar4 != 0x7f800000)) &&
          (uVar4 = *(uint *)(lVar5 + 0x40) & 0x7f800000, uVar7 = (ulonglong)uVar4,
          uVar4 != 0x7f800000)))) {
        uVar4 = *(uint *)(lVar5 + 0x44) & 0x7f800000;
        uVar7 = (ulonglong)uVar4;
        if (uVar4 != 0x7f800000) {
          fVar1 = *(float *)(lVar5 + 0x3c);
          *param_2 = fVar1;
          fVar2 = *(float *)(lVar5 + 0x40);
          param_2[1] = fVar2;
          fVar3 = *(float *)(lVar5 + 0x44);
          param_2[2] = fVar3;
          return (ulonglong)
                 CONCAT31((int3)(uVar4 >> 8),0.0 < fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
        }
      }
      uVar7 = uVar7 & 0xffffffffffffff00;
    }
  }
  return uVar7;
}


