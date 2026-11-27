// 0x1800a19b0  Features_Weapons_Backends_ORPWeaponBackend_vfunc28
// size=514 thunk=false
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc28()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Weapons_Backends_ORPWeaponBackend_vfunc28
               (longlong param_1,longlong param_2,int *param_3)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  double dVar7;
  float local_38;
  float local_34;
  float local_30;
  
  cVar4 = FUN_1800a0ce0();
  pfVar3 = DAT_1803fa608;
  if ((((cVar4 != '\0') && (param_3 != (int *)0x0)) && (*param_3 != *(int *)(param_1 + 0x58))) &&
     ((param_2 == *(longlong *)(param_1 + 8) && (DAT_1803fa608 != (float *)0x0)))) {
    *(int *)(param_1 + 0x58) = *param_3;
    fVar1 = *pfVar3;
    dVar7 = *(double *)(param_1 + 0x20);
    DAT_180423986 = 0;
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar6 = (*pcVar2)(DAT_1803fa360,uVar5);
    if (((lVar6 != 0) &&
        ((*(char *)(param_1 + 0x13) != '\0' && (dVar7 = (double)fVar1 - dVar7, 0.0 <= dVar7)))) &&
       (dVar7 <= DAT_180380c48)) {
      FUN_18001c430(lVar6,&local_38);
      DAT_1803e9218 = 0xbf800000;
      DAT_180430160 = (local_38 - *(float *)(param_1 + 0x34)) + *(float *)(param_1 + 0x28);
      DAT_180430164 = (local_34 - *(float *)(param_1 + 0x38)) + *(float *)(param_1 + 0x2c);
      DAT_180430168 = (local_30 - *(float *)(param_1 + 0x3c)) + *(float *)(param_1 + 0x30);
      DAT_180430190 = local_38;
      DAT_180430194 = local_34;
      DAT_180430198 = local_30;
      _DAT_180430170 = *(undefined8 *)(param_1 + 0x40);
      DAT_180430178 = *(undefined4 *)(param_1 + 0x48);
      _DAT_1803e9ac8 = *(undefined8 *)(param_1 + 0x4c);
      DAT_1803e9ad0 = *(undefined4 *)(param_1 + 0x54);
      DAT_180423980 = 0;
      DAT_1803e91f8 = (double)*DAT_1803fa608;
      if (((((uint)local_38 & 0x7f800000) == 0x7f800000) ||
          (((uint)local_34 & 0x7f800000) == 0x7f800000)) ||
         (((uint)local_30 & 0x7f800000) == 0x7f800000)) {
        DAT_180423986 = 0;
      }
      else {
        DAT_180423986 = 1;
      }
      DAT_18042398b = 1;
      DAT_180423974 = 0;
      DAT_180423968 = param_2;
    }
  }
  return;
}


