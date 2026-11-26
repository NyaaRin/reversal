// 0x1801f3e40  FUN_1801f3e40
// size=509 thunk=false
// signature: undefined FUN_1801f3e40()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f3e40(longlong param_1,longlong param_2,int param_3,float *param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (float)FUN_1802d3e00(DAT_1803eb85c - _DAT_1803eb87c);
  fVar3 = fVar3 * DAT_180380994;
  fVar4 = cosf(fVar3);
  fVar3 = sinf(fVar3);
  iVar2 = 0;
  if (0 < param_3) {
    lVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(float *)(param_2 + lVar1 * 0x30) =
           fVar4 * *(float *)(param_1 + lVar1 * 0x30) -
           fVar3 * *(float *)(param_1 + 0x10 + lVar1 * 0x30);
      *(float *)(param_2 + 0x10 + lVar1 * 0x30) =
           fVar3 * *(float *)(param_1 + lVar1 * 0x30) +
           fVar4 * *(float *)(param_1 + 0x10 + lVar1 * 0x30);
      *(undefined4 *)(param_2 + 0x20 + lVar1 * 0x30) =
           *(undefined4 *)(param_1 + 0x20 + lVar1 * 0x30);
      *(float *)(param_2 + 4 + lVar1 * 0x30) =
           fVar4 * *(float *)(param_1 + 4 + lVar1 * 0x30) -
           fVar3 * *(float *)(param_1 + 0x14 + lVar1 * 0x30);
      *(float *)(param_2 + 0x14 + lVar1 * 0x30) =
           fVar4 * *(float *)(param_1 + 0x14 + lVar1 * 0x30) +
           fVar3 * *(float *)(param_1 + 4 + lVar1 * 0x30);
      *(undefined4 *)(param_2 + 0x24 + lVar1 * 0x30) =
           *(undefined4 *)(param_1 + 0x24 + lVar1 * 0x30);
      *(float *)(param_2 + 8 + lVar1 * 0x30) =
           fVar4 * *(float *)(param_1 + 8 + lVar1 * 0x30) -
           fVar3 * *(float *)(param_1 + 0x18 + lVar1 * 0x30);
      *(float *)(param_2 + 0x18 + lVar1 * 0x30) =
           fVar4 * *(float *)(param_1 + 0x18 + lVar1 * 0x30) +
           fVar3 * *(float *)(param_1 + 8 + lVar1 * 0x30);
      *(undefined4 *)(param_2 + 0x28 + lVar1 * 0x30) =
           *(undefined4 *)(param_1 + 0x28 + lVar1 * 0x30);
      fVar7 = *(float *)(param_1 + 0xc + lVar1 * 0x30) - *param_4;
      fVar6 = *(float *)(param_1 + 0x1c + lVar1 * 0x30) - param_4[1];
      *(float *)(param_2 + 0xc + lVar1 * 0x30) = (fVar7 * fVar4 + *param_4) - fVar6 * fVar3;
      *(float *)(param_2 + 0x1c + lVar1 * 0x30) = fVar7 * fVar3 + param_4[1] + fVar6 * fVar4;
      *(undefined4 *)(param_2 + 0x2c + lVar1 * 0x30) =
           *(undefined4 *)(param_1 + 0x2c + lVar1 * 0x30);
      lVar1 = lVar1 + 1;
    } while (iVar2 < param_3);
  }
  uVar5 = FUN_1802d3e00(DAT_1803eb858 - _DAT_1803eb878);
  if (((DAT_180380980 <= (float)(uVar5 & _DAT_1803817c0)) && (param_5 != 0)) && (0 < param_3)) {
    FUN_1801f39d0(param_2,param_3,param_5,DAT_1803eb85c,uVar5);
  }
  return;
}


