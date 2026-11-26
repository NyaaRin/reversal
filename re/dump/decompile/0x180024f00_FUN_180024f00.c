// 0x180024f00  FUN_180024f00
// size=1094 thunk=false
// signature: undefined FUN_180024f00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180024f00(undefined8 param_1,int *param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  HMODULE hModule;
  int *piVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined8 *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  int *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_88 = param_2;
  if (DAT_1803de065 != '\0') {
    FUN_180025360();
  }
  _DAT_1803de066 = 0;
  _DAT_1803de050 = param_2;
  if ((param_2 != (int *)0x0) && (DAT_1803fa608 != 0)) {
    DAT_1803ddea0 = *(undefined8 *)(DAT_1803fa608 + 0x10);
    DAT_1803ddea8 = *(undefined4 *)(DAT_1803fa608 + 0x18);
    DAT_1803de065 = '\x01';
    pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar10 = (*pcVar4)(DAT_1803fa360,uVar8);
    if (lVar10 != 0) {
      puVar15 = (undefined4 *)0x0;
      local_90 = lVar10;
      if (DAT_1804253fc == '\0') {
        DAT_1804253fc = '\x01';
        local_80 = &local_70;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        local_58 = 0;
        FUN_18001d080(&local_70,"48 85 C9 75 0B C7 05 ?? ?? ?? ?? FF FF FF FF C3",0x2f);
        local_a0 = &local_50;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        local_38 = 0;
        FUN_18001d080(&local_50,"client.dll",10);
        lVar11 = FUN_180015f40(&local_50,&local_70);
        if (lVar11 == 0) {
          DAT_1803de058 = (uint *)0x0;
          FUN_180014410("[PRED-WARN] x64 m_pPredictionRandomSeed pattern NOT FOUND\n");
        }
        else {
          DAT_1803de058 = (uint *)(lVar11 + 0xf + (longlong)*(int *)(lVar11 + 7));
          FUN_180014410("[PRED] x64 m_pPredictionRandomSeed = %p (disp=0x%X)\n");
        }
      }
      uVar9 = FUN_180015e50(*param_2);
      if (DAT_1803de058 != (uint *)0x0) {
        DAT_1803de060 = *DAT_1803de058;
        DAT_1803de064 = 1;
        *DAT_1803de058 = uVar9 & 0x7fffffff;
      }
      if ((DAT_1805c7ba4 & 1) == 0) {
        DAT_1805c7ba4 = DAT_1805c7ba4 | 1;
        hModule = GetModuleHandleA("vstdlib.dll");
        DAT_1805c7af8 = GetProcAddress(hModule,"RandomSeed");
      }
      if (DAT_1805c7af8 != (FARPROC)0x0) {
        (*DAT_1805c7af8)((ulonglong)(uVar9 & 0x7fffffff));
      }
      piVar12 = (int *)FUN_18001dfb0(lVar10);
      lVar11 = DAT_1803fa608;
      iVar2 = *piVar12;
      iVar3 = *param_2;
      DAT_1803de068 = iVar2;
      iVar6 = iVar2;
      iVar7 = iVar3;
      if (((iVar2 == DAT_1803de06c) && (DAT_1803de070 < iVar3)) &&
         (DAT_1803de068 = (iVar3 - DAT_1803de070) + iVar2, iVar6 = DAT_1803de06c,
         iVar7 = DAT_1803de070, 0x3e < (iVar3 - DAT_1803de070) - 1U)) {
        DAT_1803de068 = iVar2;
      }
      DAT_1803de070 = iVar7;
      DAT_1803de06c = iVar6;
      pdVar1 = (double *)(DAT_1803fa608 + 0x28);
      *(double *)(DAT_1803fa608 + 0x10) = (double)DAT_1803de068 * *pdVar1;
      *(float *)(lVar11 + 0x18) = (float)*pdVar1;
      uVar13 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800);
      uVar13 = FUN_180241610(uVar13,0x402819404e703058);
      pcVar14 = (char *)FUN_1801fcfc0(uVar13);
      if (*pcVar14 == '\0') {
        uVar13 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
        uVar13 = FUN_180241610(uVar13,0xfc192b983f5bff62);
        pcVar14 = (char *)FUN_1801fcfc0(uVar13);
        if (*pcVar14 != '\0') {
          local_a0 = (undefined8 *)0x0;
          uStack_98 = 0;
          FUN_180024b50(&local_a0);
          if ((((char)uStack_98 != '\0') && (DAT_1803fa658 != (longlong *)0x0)) &&
             ((DAT_1803f9290 != (longlong *)0x0 && (DAT_1803fa5a0 != 0)))) {
            local_80 = (undefined8 *)0x0;
            uVar8 = 0;
            local_78 = 0;
            FUN_180024cd0();
            if (-1 < DAT_1803e6ed0) {
              puVar15 = (undefined4 *)(lVar10 + DAT_1803e6ed0);
              uVar8 = *puVar15;
              *puVar15 = 0x4e6e6b28;
              local_80 = (undefined8 *)puVar15;
              local_78 = uVar8;
            }
            uVar5 = DAT_1803fe4ac;
            DAT_1803fe4ac = 1;
            (**(code **)(*DAT_1803fa658 + 0x10))();
            _DAT_1803de066 = CONCAT11(DAT_1803de067,1);
            memset(&DAT_1803ddeac,0,0x1a4);
            (**(code **)(*DAT_1803f9290 + 0x90))
                      (DAT_1803f9290,lVar10,param_2,DAT_1803fa5a0,&DAT_1803ddeac);
            (**(code **)(*DAT_1803fa658 + 8))(DAT_1803fa658,lVar10,&DAT_1803ddeac);
            (**(code **)(*DAT_1803f9290 + 0x98))(DAT_1803f9290,lVar10,param_2,&DAT_1803ddeac);
            _DAT_1803de066 = CONCAT11(1,DAT_1803de066);
            DAT_1803fe4ac = uVar5;
            if (puVar15 != (undefined4 *)0x0) {
              *puVar15 = uVar8;
            }
          }
          if (((char)uStack_98 != '\0') && ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe)) {
            *DAT_1803fa368 = local_a0;
          }
        }
      }
    }
  }
  return;
}


