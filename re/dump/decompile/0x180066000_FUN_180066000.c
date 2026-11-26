// 0x180066000  FUN_180066000
// size=305 thunk=false
// signature: undefined FUN_180066000()
// status: ok


undefined8 *
FUN_180066000(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  uVar6 = 0;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar4 = (short *)((longlong)puVar5 + param_1[2] * 2);
  psVar3 = psVar4;
  puVar7 = param_2;
  psVar2 = (short *)FUN_180065240(puVar5);
  if (psVar2 != psVar3) {
    do {
      psVar1 = psVar4;
      if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
      psVar2 = psVar2 + 1;
    } while (psVar2 != psVar3);
    do {
      psVar4 = psVar1;
      if (psVar2 == psVar3) break;
      psVar3 = psVar4 + -1;
      if ((*psVar3 == 0x5c) || (psVar1 = psVar3, *psVar3 == 0x2f)) break;
    } while( true );
  }
  psVar3 = (short *)thunk_FUN_1802d5d20(psVar4);
  if ((psVar4 != psVar3) && (psVar2 = psVar3 + -1, psVar4 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar4 != psVar3 + -2) || (psVar3[-2] != 0x2e)) goto LAB_1800660d2;
    }
    else {
      for (psVar2 = psVar3 + -2; psVar4 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_1800660d2;
      }
    }
  }
  psVar2 = psVar3;
LAB_1800660d2:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180211510(param_2,psVar2,(longlong)psVar3 - (longlong)psVar2 >> 1,param_4,uVar6,puVar7,param_2
               );
  return param_2;
}


