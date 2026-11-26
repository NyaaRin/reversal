// 0x180140920  Features_Speedhack_SpeedhackFeature_vfunc02
// size=583 thunk=false
// signature: undefined Features_Speedhack_SpeedhackFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Speedhack_SpeedhackFeature_vfunc02(void)

{
  char cVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  int *piVar7;
  float *pfVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  float local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_18 = 0x2cad3795fc8b129f;
  local_20 = 0x93fd561a96ab0c67;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_20);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_30,&local_18);
  pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
  local_18 = 0x93fd561a96ab0c67;
  cVar1 = *pcVar6;
  local_20 = 0x647450219ebf53aa;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_40,&local_20);
  piVar7 = (int *)FUN_1802029c0(*plVar5 + 0x28);
  iVar2 = *piVar7;
  if ((iVar2 == 0) ||
     ((((iVar2 - 1U < 0xfe && (cVar4 = FUN_180024540(), cVar4 != '\0')) && (DAT_1803fa545 == '\0'))
      && (cVar4 = FUN_1800245f0(iVar2), cVar4 != '\0')))) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  local_18 = 0x93fd561a96ab0c67;
  local_20 = 0x6682ac5b6cd814e3;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_40,&local_20);
  pfVar8 = (float *)FUN_180202dc0(*plVar5 + 0x28);
  local_48[0] = *pfVar8;
  pfVar8 = local_48;
  if (local_48[0] < DAT_1803809c4) {
    pfVar8 = (float *)&DAT_1803310e4;
  }
  if (DAT_180380e28 < local_48[0]) {
    pfVar8 = (float *)&DAT_1803310e0;
  }
  DAT_1803e90b8 = *pfVar8;
  if ((cVar1 == '\0') || (bVar10 == 0)) {
    DAT_180423573 = 0;
  }
  else {
    DAT_180423573 = 1;
  }
  uVar9 = -(uint)(cVar1 != '\0') & 2 | (uint)bVar10;
  if ((uVar9 != DAT_1803e6f58) || ((int)(DAT_1803e90b8 * DAT_180381120) != DAT_1803e71a0)) {
    fVar3 = DAT_180381384;
    if (DAT_1803fa608 != 0) {
      fVar3 = *(float *)(DAT_1803fa608 + 0x18);
    }
    local_50 = (double)fVar3;
    local_58 = (double)DAT_1803e90b8;
    DAT_1803e6f58 = uVar9;
    DAT_1803e71a0 = (int)(DAT_1803e90b8 * DAT_180381120);
    FUN_180014410("[SPEED] on=%d held=%d hooks=%d factor=%.2f frametime=%.5f\n",cVar1 != '\0',bVar10
                  ,DAT_180423572 != '\0');
  }
  return;
}


