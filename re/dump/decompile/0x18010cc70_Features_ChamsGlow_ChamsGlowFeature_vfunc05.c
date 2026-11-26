// 0x18010cc70  Features_ChamsGlow_ChamsGlowFeature_vfunc05
// size=561 thunk=false
// signature: undefined Features_ChamsGlow_ChamsGlowFeature_vfunc05()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_ChamsGlow_ChamsGlowFeature_vfunc05(void)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  float *pfVar8;
  char *pcVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined1 auStack_88 [32];
  double local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  cVar4 = FUN_1801093d0();
  if (cVar4 != DAT_180409654) {
    local_30 = 0x28549c2b3ea27228;
    local_38 = 0x93fd561a96ab0c67;
    DAT_180409654 = cVar4;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_58,&local_38);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_48,&local_30);
    puVar7 = (undefined4 *)FUN_1802029c0(*plVar6 + 0x28);
    local_30 = 0x93fd561a96ab0c67;
    uVar2 = *puVar7;
    local_38 = 0x928aca364203258f;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_30);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_58,&local_38);
    pfVar8 = (float *)FUN_180202dc0(*plVar6 + 0x28);
    local_30 = 0x93fd561a96ab0c67;
    fVar1 = *pfVar8;
    local_38 = 0x3db4763925009906;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_30);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_58,&local_38);
    pcVar9 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
    pcVar11 = "blur";
    if (*pcVar9 != '\0') {
      pcVar11 = "sharp";
    }
    uVar5 = FUN_1801095c0();
    puVar10 = &DAT_1803449c4;
    if (cVar4 != '\0') {
      puVar10 = &DAT_18034b584;
    }
    local_68 = (double)fVar1;
    local_60 = uVar2;
    FUN_180014410("[GLOW] toggle -> %s (through walls=%d, style=%s, blur=%.1f, sharp=%dpx)\n",
                  puVar10,uVar5,pcVar11);
  }
  if (cVar4 != '\0') {
    cVar4 = FUN_1801095c0();
    if (cVar4 != '\0') {
      local_30 = 0x93fd561a96ab0c67;
      local_38 = 0x44e346faced5d1ce;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_30);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_58,&local_38);
      pcVar9 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
      if (*pcVar9 != '\0') {
        uVar5 = 1;
        bVar3 = true;
        goto LAB_18010ce64;
      }
    }
  }
  uVar5 = 0;
  bVar3 = false;
LAB_18010ce64:
  if ((DAT_180409670 != '\0') && (!bVar3)) {
    FUN_180109680();
  }
  DAT_180409670 = uVar5;
  return;
}


