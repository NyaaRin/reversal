// 0x1800a6e40  FUN_1800a6e40
// size=605 thunk=false
// signature: undefined FUN_1800a6e40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800a6e40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  code *pcVar3;
  float *pfVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined8 local_88;
  uint local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  local_80 = 0;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar7 = (*pcVar3)(DAT_1803fa360,uVar6);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)FUN_18001c430(lVar7,&local_78);
    uVar1 = *puVar8;
    uVar2 = *(uint *)(puVar8 + 1);
    if (((((uint)uVar1 & 0x7f800000) != 0x7f800000) &&
        (local_88._4_4_ = (uint)((ulonglong)uVar1 >> 0x20),
        (local_88._4_4_ & 0x7f800000) != 0x7f800000)) && ((uVar2 & 0x7f800000) != 0x7f800000)) {
      local_98 = &local_68;
      local_a0 = &local_78;
      local_a8 = &local_88;
      local_88 = uVar1;
      local_80 = uVar2;
      cVar5 = FUN_1800a67a0(param_1,param_2,param_3,param_4);
      pfVar4 = DAT_1803fa608;
      dVar10 = DAT_1803813b0;
      if (cVar5 != '\0') {
        DAT_180423968 = *(undefined8 *)(param_1 + 8);
        DAT_180430160 = local_78;
        DAT_180430164 = local_74;
        DAT_180430168 = local_70;
        DAT_180430170 = local_68;
        DAT_180430174 = local_64;
        DAT_180430178 = local_60;
        DAT_1803e9ac8 = *param_4;
        DAT_1803e9acc = param_4[1];
        DAT_1803e9ad0 = param_4[2];
        DAT_180423980 = 0.0;
        if (((*(char *)(param_1 + 0xd4) != '\0') &&
            (fVar9 = (float)(*(uint *)(param_1 + 0xd0) ^ DAT_1803817f0), 0.0 <= fVar9)) &&
           (DAT_180423980 = DAT_180380b68, fVar9 <= DAT_180380b68)) {
          DAT_180423980 = fVar9;
        }
        DAT_1803e91f8 = DAT_1803813b0;
        if (DAT_1803fa608 != (float *)0x0) {
          DAT_1803e91f8 = (double)*DAT_1803fa608;
        }
        DAT_180423986 = 1;
        DAT_180423989 = 0;
        DAT_18042398b = 1;
        DAT_180423974 = 0;
        _DAT_180430190 = uVar1;
        DAT_180430198 = uVar2;
        *(undefined4 *)(param_1 + 0x5c) = *param_4;
        *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_1 + 0x58);
        *(undefined1 *)(param_1 + 0x5b) = 1;
        if (pfVar4 != (float *)0x0) {
          dVar10 = (double)*pfVar4;
        }
        *(double *)(param_1 + 0x68) = dVar10;
      }
    }
  }
  return;
}


