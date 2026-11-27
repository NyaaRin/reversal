// 0x1800e2040  Features_MoveFix_MoveFixFeature_vfunc02
// size=426 thunk=false
// signature: undefined Features_MoveFix_MoveFixFeature_vfunc02()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_MoveFix_MoveFixFeature_vfunc02
               (undefined8 param_1,undefined8 param_2,int *param_3,longlong param_4)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float _X;
  float _X_00;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar5 = (*pcVar1)(DAT_1803fa360,uVar4);
  if (lVar5 != 0) {
    cVar2 = FUN_18001e0a0(lVar5);
    if ((cVar2 == '\t') || (cVar3 = FUN_18001fcf0(lVar5), '\x01' < cVar3)) {
      FUN_1800e1d50(param_3,param_4);
      return;
    }
    if (cVar2 == '\x02') {
      uVar4 = DAT_18042356c;
      if (DAT_1803e90a4 != *param_3) {
        uVar4 = *(undefined4 *)(param_4 + 0xc);
      }
      fVar6 = (float)FUN_1802d3e40(uVar4);
      fVar7 = (float)FUN_1802d3e40(param_3[3]);
      uVar8 = FUN_180022110(fVar6,fVar7);
      if (DAT_180380980 <= (float)(uVar8 & _DAT_1803817c0)) {
        if (fVar6 <= fVar7) {
          fVar6 = (float)((uint)(fVar6 - fVar7) & _DAT_1803817c0);
        }
        else {
          fVar6 = DAT_18038120c - (float)((uint)(fVar7 - fVar6) & _DAT_1803817c0);
        }
        fVar7 = (float)param_3[5];
        _X = fVar6 * DAT_180380994;
        _X_00 = (fVar6 + DAT_18038110c) * DAT_180380994;
        fVar9 = cosf(_X_00);
        fVar6 = (float)param_3[6];
        fVar10 = cosf(_X);
        param_3[5] = (int)(fVar9 * fVar6 + fVar10 * fVar7);
        fVar9 = sinf(_X_00);
        fVar6 = (float)param_3[6];
        fVar10 = sinf(_X);
        param_3[6] = (int)(fVar9 * fVar6 + fVar10 * fVar7);
      }
    }
  }
  return;
}


