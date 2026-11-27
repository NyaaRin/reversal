// 0x180065cd0  FUN_180065cd0
// size=267 thunk=false
// signature: undefined FUN_180065cd0()
// status: ok


undefined8 *
FUN_180065cd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
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
  puVar7 = param_2;
  psVar3 = (short *)FUN_180065240(puVar5);
  if (psVar3 != psVar4) {
    do {
      if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) break;
      psVar3 = psVar3 + 1;
    } while (psVar3 != psVar4);
    do {
      if (psVar3 == psVar4) goto LAB_180065d7e;
      sVar2 = psVar4[-1];
      psVar1 = psVar4;
    } while ((sVar2 != 0x5c) && (psVar4 = psVar4 + -1, sVar2 != 0x2f));
    do {
      psVar4 = psVar1;
      if (psVar3 == psVar4) break;
      psVar1 = psVar4 + -1;
    } while ((*psVar1 == 0x5c) || (*psVar1 == 0x2f));
  }
LAB_180065d7e:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180211510(param_2,puVar5,(longlong)psVar4 - (longlong)puVar5 >> 1,param_4,uVar6,puVar7,param_2
               );
  return param_2;
}


