// 0x18012fcf0  FUN_18012fcf0
// size=1085 thunk=false
// signature: undefined FUN_18012fcf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012fcf0(char param_1)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ULONGLONG UVar8;
  float *pfVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_60 = 0x3cfd94a417011121;
  local_68 = 0x93fd561a96ab0c67;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_68);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_78,&local_60);
  pcVar4 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
  if (((*pcVar4 != '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 != '\0')) {
    local_60 = 0x93fd561a96ab0c67;
    local_68 = 0x8911f3778b8c2d42;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
    piVar5 = (int *)FUN_1802029c0(*plVar3 + 0x28);
    if (*piVar5 == 0) {
      puVar6 = (undefined1 *)FUN_18012a9f0();
      local_60 = 0x93fd561a96ab0c67;
      local_68 = 0x4ebcf38ca2af7c6e;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      piVar5 = (int *)FUN_1802029c0(*plVar3 + 0x28);
      if (*piVar5 - 1U < 0xd) {
        puVar10 = (&PTR_s_Custom___imported_18033bf70)[*piVar5];
      }
      else if ((DAT_180400b80 == '\0') || (DAT_180401111 == '\0')) {
        puVar10 = &DAT_1804010c0;
        if (DAT_1804010c0 == '\0') {
          puVar10 = (undefined1 *)0x0;
        }
      }
      else {
        puVar10 = &DAT_180400b80;
      }
      if ((param_1 != '\0') && (puVar10 != (undefined1 *)0x0)) {
        puVar6 = puVar10;
      }
      FUN_18012ab00(puVar6);
      FUN_18012f810(puVar6);
    }
    else {
      uVar7 = FUN_18012a9f0();
      FUN_18012f810(uVar7);
      if (DAT_180400eb8 != '\0') {
        uVar11 = 0;
        if (((param_1 != '\0') && (DAT_180400b20 == '\0')) && (1 < DAT_180400c04)) {
          local_60 = 0x93fd561a96ab0c67;
          local_68 = 0xaeca5b24c521e60;
          plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
          plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
          pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
          fVar12 = *pfVar9;
          uVar11 = 0;
          if (0.0 < fVar12) {
            UVar8 = GetTickCount64();
            uVar11 = (longlong)(int)(((double)UVar8 * (double)fVar12) / DAT_180380ec0) %
                     (longlong)DAT_180400c04 & 0xffffffff;
          }
        }
        FUN_18012ad70(param_1,uVar11);
      }
    }
    fVar12 = DAT_180380bb0;
    fVar13 = DAT_180380bb0;
    fVar14 = DAT_180380bb0;
    if (param_1 != '\0') {
      local_60 = 0x93fd561a96ab0c67;
      local_68 = 0xb407de79ef79c9ba;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      local_60 = 0x93fd561a96ab0c67;
      fVar14 = *pfVar9;
      local_68 = 0x6e630b2ce2bdb225;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      local_60 = 0x93fd561a96ab0c67;
      fVar12 = *pfVar9;
      local_68 = 0x6e63162ce2bdc4d6;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      local_60 = 0x93fd561a96ab0c67;
      fVar1 = *pfVar9;
      local_68 = 0x6e631b2ce2bdcd55;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      fVar12 = fVar14 * fVar12;
      fVar13 = fVar14 * *pfVar9;
      fVar14 = fVar14 * fVar1;
    }
    FUN_18012fc70(fVar12,fVar14,fVar13);
  }
  return;
}


