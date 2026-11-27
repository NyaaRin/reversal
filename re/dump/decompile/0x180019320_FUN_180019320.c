// 0x180019320  FUN_180019320
// size=789 thunk=false
// signature: undefined FUN_180019320()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019320(void)

{
  longlong *plVar1;
  char *_Str1;
  longlong *plVar2;
  FILE *pFVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined1 *local_1d8;
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [40];
  FILE *local_178 [2];
  CHAR local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  lVar6 = FUN_180018dd0(local_1d0);
  FUN_1800191d0(&DAT_1803fac80,lVar6);
  if ((undefined4 *)(lVar6 + 0x18) != (undefined4 *)&DAT_1803fac98) {
    FUN_18022e830();
    _DAT_1803fac98 = *(undefined4 *)(lVar6 + 0x18);
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(lVar6 + 0x20) = DAT_1803faca0;
    DAT_1803faca0 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = DAT_1803faca8;
    DAT_1803faca8 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar6 + 0x30) = DAT_1803facb0;
    DAT_1803facb0 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x38);
    *(undefined8 *)(lVar6 + 0x38) = DAT_1803facb8;
    DAT_1803facb8 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(lVar6 + 0x40) = DAT_1803facc0;
    DAT_1803facc0 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x48);
    *(undefined8 *)(lVar6 + 0x48) = DAT_1803facc8;
    DAT_1803facc8 = uVar4;
    uVar4 = *(undefined8 *)(lVar6 + 0x50);
    *(undefined8 *)(lVar6 + 0x50) = DAT_1803facd0;
    DAT_1803facd0 = uVar4;
  }
  local_178[0] = (FILE *)local_1b8;
  FUN_180209700(local_1a0);
  FUN_18022a370();
  free((void *)local_1b8._8_8_);
  local_1d8 = local_1d0;
  FUN_180209700(local_1d0);
  GetTempPathA(0x104,local_168);
  strcat_s(local_168,0x104,"mayrrx64_netvars.txt");
  local_178[0] = (FILE *)0x0;
  fopen_s(local_178,local_168,"w");
  if (local_178[0] != (FILE *)0x0) {
    FUN_1800129b0(local_178[0],"=== mayrrX64 Netvar Dump ===\n\n");
    plVar2 = DAT_1803fac88;
    for (plVar9 = DAT_1803fac80; plVar9 != plVar2; plVar9 = plVar9 + 1) {
      plVar1 = (longlong *)*plVar9;
      if (plVar1 != (longlong *)0x0) {
        FUN_1800129b0(local_178[0],"--- %s (%d props) ---\n",plVar1[3],(int)plVar1[1]);
        pFVar3 = local_178[0];
        iVar8 = 0;
        if (0 < (int)plVar1[1]) {
          do {
            puVar7 = (undefined8 *)((longlong)iVar8 * 0x60 + *plVar1);
            if (((puVar7 != (undefined8 *)0x0) && (_Str1 = (char *)*puVar7, _Str1 != (char *)0x0))
               && (iVar5 = strcmp(_Str1,"baseclass"), iVar5 != 0)) {
              FUN_1800129b0(pFVar3,"  [0x%04X] %s",*(undefined4 *)(puVar7 + 9),_Str1);
              lVar6 = puVar7[8];
              if ((lVar6 == 0) || (*(int *)(lVar6 + 8) < 1)) {
                FUN_1800129b0(pFVar3,&DAT_18033e92c);
              }
              else {
                FUN_1800129b0(pFVar3," -> %s\n",*(undefined8 *)(lVar6 + 0x18));
                local_1e8 = 1;
                FUN_180018ad0();
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)plVar1[1]);
        }
        FUN_1800129b0(local_178[0],&DAT_18033e92c);
      }
    }
    fclose(local_178[0]);
  }
  FUN_180014410("[NVMGR] Netvar dump written to %s\n",local_168);
  return;
}


