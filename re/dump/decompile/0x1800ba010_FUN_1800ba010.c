// 0x1800ba010  FUN_1800ba010
// size=212 thunk=false
// signature: undefined FUN_1800ba010()
// status: ok


ulonglong FUN_1800ba010(longlong param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar7;
  int iVar8;
  char *_Str1;
  
  iVar5 = *(int *)(param_1 + 300);
  uVar1 = iVar5 - 1;
  uVar7 = (ulonglong)uVar1;
  if (uVar1 < 0x40) {
    iVar8 = 0;
    while (iVar8 < iVar5) {
      uVar7 = param_1 + *(int *)(param_1 + 0x130);
      piVar2 = (int *)(uVar7 + (longlong)iVar8 * 0x14);
      if (piVar2 == (int *)0x0) {
        iVar8 = iVar8 + 1;
      }
      else {
        _Str1 = (char *)((longlong)*piVar2 + (longlong)piVar2);
        if (_Str1 == (char *)0x0) {
          iVar8 = iVar8 + 1;
        }
        else {
          iVar6 = _stricmp(_Str1,"aim_yaw");
          uVar7 = CONCAT44(extraout_var,iVar6);
          if (iVar6 == 0) {
LAB_1800ba09e:
            fVar3 = (float)piVar2[2];
            fVar4 = (float)piVar2[3];
            if (fVar4 == fVar3) {
              return uVar7 & 0xffffffffffffff00;
            }
            *(int *)(param_2 + 8) = iVar8;
            *(float *)(param_2 + 0xc) = fVar3;
            *(float *)(param_2 + 0x10) = fVar4;
            iVar5 = piVar2[4];
            *(int *)(param_2 + 0x14) = iVar5;
            return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
          }
          iVar6 = _stricmp(_Str1,"body_yaw");
          uVar7 = CONCAT44(extraout_var_00,iVar6);
          if (iVar6 == 0) goto LAB_1800ba09e;
          iVar8 = iVar8 + 1;
        }
      }
    }
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    uVar7 = (ulonglong)(uint3)(uVar1 >> 8) << 8;
  }
  return uVar7;
}


