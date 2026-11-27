// 0x180294060  FUN_180294060
// size=372 thunk=false
// signature: undefined FUN_180294060()
// status: ok


void FUN_180294060(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
                  int param_6)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  float fVar3;
  float _X;
  float local_68;
  float local_64;
  
  piVar1 = (int *)(param_1 + 0x50);
  if (DAT_180380ac0 <= param_3) {
    iVar2 = *piVar1 + 1 + param_6;
    if (*(int *)(param_1 + 0x54) < iVar2) {
      _Dst = (void *)FUN_18026f580((longlong)iVar2 << 3);
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 0x58),(longlong)*piVar1 << 3);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x58));
      }
      *(void **)(param_1 + 0x58) = _Dst;
      *(int *)(param_1 + 0x54) = iVar2;
    }
    iVar2 = 0;
    if (-1 < param_6) {
      do {
        _X = ((float)iVar2 / (float)param_6) * (param_5 - param_4) + param_4;
        fVar3 = cosf(_X);
        local_68 = fVar3 * param_3 + *param_2;
        fVar3 = sinf(_X);
        local_64 = fVar3 * param_3 + param_2[1];
        FUN_18020dc30(piVar1,&local_68);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= param_6);
    }
  }
  else {
    FUN_18020dc30(piVar1);
  }
  return;
}


