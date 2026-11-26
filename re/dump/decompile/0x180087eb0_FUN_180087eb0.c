// 0x180087eb0  FUN_180087eb0
// size=509 thunk=false
// signature: undefined FUN_180087eb0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180087eb0(longlong param_1,float *param_2,undefined8 param_3,int param_4,int param_5,
                     char param_6,char param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = DAT_18038120c;
  uVar1 = DAT_180381094;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if ((*(char *)(param_1 + 0x34) != '\0') && (0.0 < *(float *)(param_1 + 0x38))) {
    iVar3 = param_5 + 0x539 + param_4;
    fVar4 = (float)FUN_180087ba0(*(float *)(param_1 + 0x38),param_3,"arc9_physbullet3",0,uVar2,iVar3
                                );
    fVar5 = (float)FUN_180087ba0(fVar4,param_3,"arc9_physbullet4",0,uVar1,iVar3);
    fVar7 = fVar5 * *(float *)(param_1 + 0x38) * _DAT_180380c38;
    fVar5 = DAT_180380bb0;
    if (param_7 != '\0') {
      fVar5 = DAT_180380d30;
    }
    fVar6 = sinf(fVar4);
    *param_2 = fVar6 * fVar7 * fVar5 + *param_2;
    fVar4 = cosf(fVar4);
    param_2[1] = fVar4 * fVar7 * fVar5 + param_2[1];
  }
  if ((param_6 != '\0') && (0.0 < *(float *)(param_1 + 8))) {
    param_4 = param_5 + 1 + param_4;
    fVar5 = (float)FUN_180087ba0(*(float *)(param_1 + 8),param_3,"arc9_physbullet",0,uVar2,param_4);
    fVar4 = (float)FUN_180087ba0(fVar5,param_3,"arc9_physbullet2",0,uVar1,param_4);
    fVar7 = fVar4 * *(float *)(param_1 + 8) * _DAT_180380c38;
    fVar4 = sinf(fVar5);
    *param_2 = fVar4 * fVar7 + *param_2;
    fVar5 = cosf(fVar5);
    param_2[1] = fVar5 * fVar7 + param_2[1];
  }
  param_2[2] = 0.0;
  return param_2;
}


