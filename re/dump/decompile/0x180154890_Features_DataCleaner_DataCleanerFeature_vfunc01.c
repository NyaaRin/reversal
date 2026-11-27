// 0x180154890  Features_DataCleaner_DataCleanerFeature_vfunc01
// size=686 thunk=false
// signature: undefined Features_DataCleaner_DataCleanerFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char Features_DataCleaner_DataCleanerFeature_vfunc01(void)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  size_t sVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_198 [32];
  double local_178;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 local_128 [2];
  char local_118 [160];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_130 = 0x93fd561a96ab0c67;
  local_128[0] = 0x313d197f9969de8d;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_140,&local_130);
  FUN_180241a30(*plVar6 + 0x28,&local_160,local_128);
  pcVar7 = (char *)FUN_1801fcfc0();
  if (*pcVar7 == '\0') {
    FUN_180154460();
  }
  else {
    FUN_1801542d0();
  }
  LOCK();
  bVar13 = DAT_180400b08 == '\x01';
  if (bVar13) {
    DAT_180400b08 = '\0';
  }
  UNLOCK();
  if (bVar13) {
    FUN_180150310();
  }
  ppuVar10 = &PTR_s_cl_timeout_18033be70;
  LOCK();
  bVar13 = DAT_180400aec == '\x01';
  if (bVar13) {
    DAT_180400aec = '\0';
  }
  UNLOCK();
  if (bVar13) {
    iVar12 = 0;
    iVar5 = 0;
    ppuVar11 = &PTR_s_cl_timeout_18033be70;
    do {
      lVar8 = FUN_180016fb0(*ppuVar11);
      if ((lVar8 == 0) || (cVar4 = FUN_1801fcd40(lVar8), cVar4 == '\0')) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
      }
      ppuVar11 = ppuVar11 + 2;
    } while (ppuVar11 != &PTR_u_gameinfo_txt_18033beb0);
    local_178 = (double)CONCAT44(local_178._4_4_,iVar5);
    FUN_180012ac0(local_118,0x80,"ConVars: %d reset, %d unavailable",iVar12);
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    sVar9 = strlen(local_118);
    FUN_18001d080(&local_160,local_118,sVar9);
    FUN_18014de20(&local_160);
    FUN_18020e450();
  }
  uVar2 = _DAT_1803817c0;
  fVar1 = DAT_180380964;
  LOCK();
  bVar13 = DAT_180400b10 == '\x01';
  cVar4 = DAT_180400b10;
  if (bVar13) {
    DAT_180400b10 = '\0';
    cVar4 = '\x01';
  }
  UNLOCK();
  if (bVar13) {
    do {
      lVar8 = FUN_180016fb0(*ppuVar10);
      cVar4 = '\0';
      if (lVar8 != 0) {
        local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(ppuVar10 + 1));
        cVar4 = FUN_180150b70(lVar8,&local_130);
        if ((cVar4 != '\0') &&
           (fVar3 = (float)local_130,
           fVar1 <= (float)((uint)((float)local_130 - *(float *)(ppuVar10 + 1)) & uVar2))) {
          pcVar7 = *ppuVar10;
          iVar5 = strcmp(pcVar7,"cl_timeout");
          if (iVar5 == 0) {
            FUN_180012ac0(local_118,0xa0,
                          "cl_timeout = %g (not 30) - this is where a ban marker is stored",
                          (double)fVar3);
          }
          else {
            local_178 = (double)fVar3;
            FUN_180012ac0(local_118,0xa0,"%s = %g (not 0) - counts as \"advanced user\"",pcVar7);
          }
          local_160 = 0;
          uStack_158 = 0;
          local_150 = 0;
          uStack_148 = 0;
          sVar9 = strlen(local_118);
          FUN_18001d080(&local_160,local_118,sVar9);
          iVar5 = strcmp(*ppuVar10,"cl_timeout");
          FUN_18014df00(2 - (uint)(iVar5 != 0),&local_160);
          cVar4 = FUN_18020e450(&local_160);
        }
      }
      ppuVar10 = ppuVar10 + 2;
    } while (ppuVar10 != &PTR_u_gameinfo_txt_18033beb0);
  }
  return cVar4;
}


