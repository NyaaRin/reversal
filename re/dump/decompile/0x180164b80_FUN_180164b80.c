// 0x180164b80  FUN_180164b80
// size=796 thunk=false
// signature: undefined FUN_180164b80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180164b80(longlong param_1,float *param_2,float *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 uVar8;
  longlong *plVar9;
  char *pcVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  undefined1 auStack_d8 [32];
  float local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  float local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [2];
  ulonglong local_58;
  
  if ((param_1 != 0) &&
     (local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_d8, DAT_1803ea278 != DAT_1803ea280)) {
    local_88[0] = 3.0168525e+19;
    local_88[1] = 1.0194774e+21;
    local_80 = 0x93fd561a96ab0c67;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_78,&local_80);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_68,local_88);
    pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
    if (*pcVar10 != '\0') {
      local_88[0] = -7.399039e-17;
      local_88[1] = -2.6050214e+11;
      local_80 = 0x93fd561a96ab0c67;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_78,&local_80);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_68,local_88);
      puVar11 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
      local_80 = 0x93fd561a96ab0c67;
      uVar8 = *puVar11;
      local_88[0] = -7.4004786e-17;
      local_88[1] = -2.6052311e+11;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_78,&local_80);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_68,local_88);
      puVar11 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
      local_80 = 0x93fd561a96ab0c67;
      uVar1 = *puVar11;
      local_88[0] = -7.403645e-17;
      local_88[1] = -2.6056925e+11;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_78,&local_80);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_68,local_88);
      puVar11 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
      local_78 = CONCAT44(uVar1,*puVar11);
      local_70 = uVar8;
      local_6c = param_4;
      uVar8 = FUN_180268ed0(&local_78);
      fVar2 = DAT_180380ac0;
      local_80 = CONCAT44(local_80._4_4_,0x40c00000);
      local_88[0] = 0.5;
      local_78 = 0x54682040994c2754;
      local_68[0] = 0x93fd561a96ab0c67;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a8,local_68);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_98,&local_78);
      pfVar12 = (float *)FUN_180202dc0(*plVar9 + 0x28);
      pfVar7 = DAT_1803ea280;
      pfVar14 = local_88;
      if (fVar2 <= *pfVar12) {
        pfVar14 = pfVar12;
      }
      fVar2 = *param_3;
      fVar3 = param_3[1];
      pfVar13 = (float *)&local_80;
      if (*pfVar12 <= DAT_180380f40) {
        pfVar13 = pfVar14;
      }
      fVar4 = *param_2;
      fVar5 = param_2[1];
      fVar6 = *pfVar13;
      for (pfVar14 = DAT_1803ea278; pfVar14 != pfVar7; pfVar14 = pfVar14 + 4) {
        local_80 = CONCAT44((fVar3 - fVar5) * pfVar14[3] + param_2[1],
                            (fVar2 - fVar4) * pfVar14[2] + *param_2);
        local_88[1] = (fVar3 - fVar5) * pfVar14[1] + param_2[1];
        local_88[0] = (fVar2 - fVar4) * *pfVar14 + *param_2;
        local_b8 = fVar6;
        FUN_180294c90(param_1,local_88,&local_80,uVar8);
      }
    }
  }
  return;
}


