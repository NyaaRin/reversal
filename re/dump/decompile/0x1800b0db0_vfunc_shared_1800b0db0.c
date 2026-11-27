// 0x1800b0db0  vfunc_shared_1800b0db0
// size=658 thunk=false
// signature: undefined vfunc_shared_1800b0db0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * vfunc_shared_1800b0db0(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float local_68;
  float local_64;
  float local_60;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  cVar3 = (**(code **)(*param_1 + 0x20))();
  if ((((cVar3 != '\0') && (iVar4 = FUN_1800aa2b0(param_3), iVar4 != 0x53)) &&
      (fVar5 = *(float *)(param_3 + 0x18), ((uint)fVar5 & 0x7f800000) != 0x7f800000)) &&
     (((fVar1 = *(float *)(param_3 + 0x1c), ((uint)fVar1 & 0x7f800000) != 0x7f800000 &&
       (fVar2 = *(float *)(param_3 + 0x20), ((uint)fVar2 & 0x7f800000) != 0x7f800000)) &&
      (DAT_180380938 < fVar1 * fVar1 + fVar5 * fVar5 + fVar2 * fVar2)))) {
    if (_DAT_180380a5c <
        (float)((uint)(*(float *)(param_3 + 0x6c) * fVar1 + *(float *)(param_3 + 0x68) * fVar5 +
                      *(float *)(param_3 + 0x70) * fVar2) ^ DAT_1803817f0)) {
      fVar5 = DAT_180380b3c;
      if (((iVar4 != 0x44) && (fVar5 = DAT_180380bc4, iVar4 != 0x4d)) &&
         ((fVar5 = DAT_180380ac0, iVar4 != 0x4e &&
          ((fVar5 = DAT_180380b68, iVar4 != 0x54 && (fVar5 = DAT_180380bf0, iVar4 != 0x57)))))) {
        fVar5 = DAT_180380bb0;
      }
      fVar5 = fVar5 * *(float *)(param_1 + 1) * *(float *)((longlong)param_1 + 0xc);
      if (0.0 < fVar5) {
        local_68 = *(float *)(param_3 + 0x68) * fVar5 + *(float *)(param_3 + 0xc);
        local_64 = *(float *)(param_3 + 0x6c) * fVar5 + *(float *)(param_3 + 0x10);
        local_60 = *(float *)(param_3 + 0x70) * fVar5 + *(float *)(param_3 + 0x14);
        if ((((((uint)local_68 & 0x7f800000) == 0x7f800000) ||
             (((uint)local_64 & 0x7f800000) == 0x7f800000)) ||
            (((uint)local_60 & 0x7f800000) == 0x7f800000)) ||
           (cVar3 = FUN_1800abd90(&local_68,*(undefined8 *)(param_3 + 0x88),0x46004003),
           cVar3 != '\0')) {
          DAT_1804236d8 = 0.0;
          DAT_1804236c0 = 0;
          DAT_1804236b4 = fVar5;
        }
        else {
          *(float *)(param_2 + 4) = local_68;
          *(float *)(param_2 + 0xc) = local_60;
          *(float *)(param_2 + 8) = local_64;
          *param_2 = 1;
          *(int *)(param_2 + 0x14) = (int)param_1[1];
          DAT_1804236c0 = 1;
          DAT_1804236d8 = fVar5;
          *(float *)(param_2 + 0x10) = *(float *)(param_3 + 0x74) * DAT_180380ac0;
          DAT_1804236b4 = fVar5;
        }
      }
    }
  }
  return param_2;
}


