// 0x1800c4400  FUN_1800c4400
// size=770 thunk=false
// signature: undefined FUN_1800c4400()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800c4400(longlong param_1)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  if (param_1 != 0) {
    if ((DAT_180425918 == 0) && (DAT_1803fa340 != 0)) {
      DAT_180425918 = FUN_180016fb0("cl_forwardspeed");
    }
    if ((DAT_1803feb20 == 0) && (DAT_1803fa340 != 0)) {
      DAT_1803feb20 = FUN_180016fb0("cl_sidespeed");
    }
    if (DAT_180425918 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1800197a0(DAT_180425918);
    }
    if (DAT_1803feb20 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_1800197a0();
    }
    if ((0 < iVar4) && (0 < iVar5)) {
      fVar7 = *(float *)(param_1 + 0x14);
      fVar1 = *(float *)(param_1 + 0x18);
      cVar3 = FUN_1800c4380(fVar7,iVar4);
      if ((cVar3 == '\0') || (cVar3 = FUN_1800c4380(fVar1,iVar5), cVar3 == '\0')) {
        fVar6 = fVar1 * fVar1 + fVar7 * fVar7;
        if (fVar6 < 0.0) {
          fVar6 = sqrtf(fVar6);
        }
        else {
          fVar6 = SQRT(fVar6);
        }
        if (DAT_180380bb0 <= fVar6) {
          fVar9 = fVar7 / fVar6;
          local_res8[0] = 0;
          local_res10[0] = 0;
          fVar8 = fVar1 / fVar6;
          cVar3 = FUN_1800c3e10(fVar9,fVar8,iVar4,iVar5,fVar6 * DAT_180380b74,local_res8,local_res10
                               );
          if (((cVar3 == '\0') &&
              (cVar3 = FUN_1800c3e10(fVar9,fVar8,iVar4,iVar5,fVar6 * DAT_180380ac0,local_res8,
                                     local_res10), cVar3 == '\0')) &&
             (cVar3 = FUN_1800c3e10(fVar9,fVar8,iVar4,iVar5,0,local_res8,local_res10),
             uVar2 = DAT_1803817f0, cVar3 == '\0')) {
            fVar6 = (float)iVar4;
            if (fVar6 * DAT_180380ac0 <= (float)((uint)fVar7 & _DAT_1803817c0)) {
              if (fVar7 <= 0.0) {
                fVar6 = (float)((uint)fVar6 ^ DAT_1803817f0);
              }
            }
            else {
              fVar6 = 0.0;
            }
            fVar9 = (float)iVar5;
            fVar8 = (float)((uint)fVar1 & _DAT_1803817c0);
            *(float *)(param_1 + 0x14) = fVar6;
            fVar7 = 0.0;
            if ((fVar9 * DAT_180380ac0 <= fVar8) && (fVar7 = fVar9, fVar1 <= 0.0)) {
              fVar7 = (float)((uint)fVar9 ^ uVar2);
            }
            *(float *)(param_1 + 0x18) = fVar7;
          }
          else {
            *(undefined4 *)(param_1 + 0x14) = local_res8[0];
            *(undefined4 *)(param_1 + 0x18) = local_res10[0];
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


