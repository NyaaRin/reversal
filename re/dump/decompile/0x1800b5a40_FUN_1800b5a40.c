// 0x1800b5a40  FUN_1800b5a40
// size=414 thunk=false
// signature: undefined FUN_1800b5a40()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800b5a40(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  longlong lVar6;
  uint extraout_XMM0_Da;
  undefined4 uVar7;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  uint extraout_XMM0_Da_02;
  
  if (param_2 - 0x10U < 0x131) {
    lVar6 = (longlong)param_2;
    fVar1 = *(float *)(lVar6 + param_1);
    sVar5 = _fdclass(fVar1);
    fVar4 = DAT_180381428;
    fVar3 = DAT_180381210;
    if (((sVar5 < 1) && (DAT_180381428 <= fVar1)) && (fVar1 <= DAT_180381210)) {
      fVar2 = *(float *)(lVar6 + 8 + param_1);
      sVar5 = _fdclass(fVar2);
      if (((sVar5 < 1) && (fVar4 <= fVar2)) && (fVar2 <= fVar3)) {
        fVar2 = *(float *)(lVar6 + 0xc + param_1);
        sVar5 = _fdclass(fVar2);
        if (((sVar5 < 1) && (fVar4 <= fVar2)) && (fVar2 <= fVar3)) {
          uVar7 = *(undefined4 *)(lVar6 + 4 + param_1);
          sVar5 = _fdclass(uVar7);
          if ((sVar5 < 1) &&
             (FUN_180022110(fVar1,param_3), fVar1 = DAT_180380d30,
             (float)(extraout_XMM0_Da & _DAT_1803817c0) <= DAT_180380d30)) {
            uVar7 = FUN_1802d3e00(uVar7);
            FUN_180022110(uVar7,param_4);
            if (((float)(extraout_XMM0_Da_00 & _DAT_1803817c0) <= fVar1) &&
               ((FUN_180022110(param_3,*(undefined4 *)(lVar6 + 8 + param_1)), fVar1 = DAT_180381098,
                (float)(extraout_XMM0_Da_01 & _DAT_1803817c0) <= DAT_180381098 &&
                (FUN_180022110(param_3,*(undefined4 *)(lVar6 + 0xc + param_1)),
                (float)(extraout_XMM0_Da_02 & _DAT_1803817c0) <= fVar1)))) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


