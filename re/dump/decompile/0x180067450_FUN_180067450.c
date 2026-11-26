// 0x180067450  FUN_180067450
// size=364 thunk=false
// signature: undefined FUN_180067450()
// status: ok


void FUN_180067450(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short *psVar5;
  size_t sVar6;
  short *psVar7;
  undefined8 *puVar8;
  short *psVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *local_10;
  
  uVar11 = 0;
  *(uint *)(param_1 + 2) = *param_2;
  *(uint *)((longlong)param_1 + 0x14) = param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
  if ((*param_2 & 0x400) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(undefined8 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  puVar1 = param_1 + 4;
  sVar6 = wcslen((wchar_t *)(param_2 + 0xb));
  local_10 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_180211510(&local_30,param_2 + 0xb,sVar6,param_4,uVar11);
  uVar3 = param_1[7];
  puVar8 = puVar1;
  if (7 < uVar3) {
    puVar8 = (undefined8 *)*puVar1;
  }
  uVar4 = param_1[6];
  psVar9 = (short *)((longlong)puVar8 + uVar4 * 2);
  psVar7 = (short *)FUN_180065240(puVar8);
  if (psVar7 == psVar9) {
LAB_18006756c:
    uVar10 = (longlong)psVar9 - (longlong)puVar8 >> 1;
    if (uVar10 <= uVar4) {
      param_1[6] = uVar10;
      puVar8 = puVar1;
      if (7 < uVar3) {
        puVar8 = (undefined8 *)*puVar1;
      }
      *(undefined2 *)((longlong)puVar8 + uVar10 * 2) = 0;
      FUN_1800654d0(puVar1,&local_30);
      FUN_18021e290(&local_30);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_18022ec00();
  }
  do {
    psVar5 = psVar9;
    if ((*psVar7 != 0x5c) && (*psVar7 != 0x2f)) break;
    psVar7 = psVar7 + 1;
  } while (psVar7 != psVar9);
  do {
    psVar9 = psVar5;
    if (psVar7 == psVar9) goto LAB_18006756c;
    sVar2 = psVar9[-1];
    if ((sVar2 == 0x5c) || (psVar5 = psVar9 + -1, sVar2 == 0x2f)) goto LAB_18006756c;
  } while( true );
}


