// 0x1802941e0  FUN_1802941e0
// size=937 thunk=false
// signature: undefined FUN_1802941e0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802941e0(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
                  int param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  int iVar6;
  float fVar7;
  float fVar8;
  float _X;
  float local_84;
  float local_80;
  
  fVar7 = DAT_18038109c;
  if (param_3 < DAT_180380ac0) {
    FUN_18020dc30(param_1 + 0x50);
  }
  else if (param_6 < 1) {
    if (*(float *)(*(longlong *)(param_1 + 0x38) + 0x1f0) < param_3) {
      iVar3 = FUN_1802924c0();
      fVar7 = ceilf(((float)iVar3 * (float)((uint)(param_5 - param_4) & _DAT_1803817c0)) /
                    DAT_180380f70);
      iVar3 = 1;
      if (0 < (int)fVar7) {
        iVar3 = (int)fVar7;
      }
      FUN_180294060(param_1,param_2,param_3,param_4,param_5,iVar3);
    }
    else {
      _X = (param_5 * DAT_18038109c) / DAT_180380f70;
      fVar8 = (param_4 * DAT_18038109c) / DAT_180380f70;
      if (param_4 <= param_5) {
        fVar8 = ceilf(fVar8);
        iVar3 = (int)fVar8;
        if ((0.0 <= _X) || ((float)(int)_X == _X)) {
          iVar4 = (int)_X;
        }
        else {
          iVar4 = (int)_X + -1;
        }
        iVar6 = (int)(float)iVar4;
        iVar4 = iVar6 - iVar3;
      }
      else {
        iVar3 = (int)fVar8;
        if ((fVar8 < 0.0) && ((float)iVar3 != fVar8)) {
          iVar3 = iVar3 + -1;
        }
        iVar3 = (int)(float)iVar3;
        fVar8 = ceilf(_X);
        iVar6 = (int)fVar8;
        iVar4 = iVar3 - iVar6;
      }
      iVar5 = 0;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      bVar1 = DAT_18038093c <=
              (float)((uint)(((float)iVar3 * DAT_180380e48 + (float)iVar3 * DAT_180380e48) / fVar7 -
                            param_4) & _DAT_1803817c0);
      bVar2 = DAT_18038093c <=
              (float)((uint)(param_5 -
                            ((float)iVar6 * DAT_180380e48 + (float)iVar6 * DAT_180380e48) / fVar7) &
                     _DAT_1803817c0);
      iVar4 = bVar2 + 1 + (uint)bVar1 + *(int *)(param_1 + 0x50) + iVar5;
      if (*(int *)(param_1 + 0x54) < iVar4) {
        _Dst = (void *)FUN_18026f580((longlong)iVar4 << 3);
        if (*(void **)(param_1 + 0x58) != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
          FUN_18026f680(*(undefined8 *)(param_1 + 0x58));
        }
        *(void **)(param_1 + 0x58) = _Dst;
        *(int *)(param_1 + 0x54) = iVar4;
      }
      if (bVar1) {
        fVar7 = cosf(param_4);
        local_84 = fVar7 * param_3 + *param_2;
        fVar7 = sinf(param_4);
        local_80 = fVar7 * param_3 + param_2[1];
        FUN_18020dc30(param_1 + 0x50,&local_84);
      }
      if (0 < iVar5) {
        FUN_180293e00(param_1,param_2,param_3,iVar3,iVar6);
      }
      if (bVar2) {
        fVar7 = cosf(param_5);
        local_84 = fVar7 * param_3 + *param_2;
        fVar7 = sinf(param_5);
        local_80 = fVar7 * param_3 + param_2[1];
        FUN_18020dc30(param_1 + 0x50,&local_84);
      }
    }
  }
  else {
    FUN_180294060(param_1,param_2,in_R8,in_R9,param_5,param_6);
  }
  return;
}


