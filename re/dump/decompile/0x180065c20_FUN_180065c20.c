// 0x180065c20  FUN_180065c20
// size=173 thunk=false
// signature: undefined FUN_180065c20()
// status: ok


undefined8 *
FUN_180065c20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar3 + param_1[2] * 2);
  puVar6 = param_2;
  for (psVar1 = (short *)FUN_180065240(puVar3);
      (psVar1 != psVar2 && ((*psVar1 == 0x5c || (*psVar1 == 0x2f)))); psVar1 = psVar1 + 1) {
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = uVar4;
  param_2[3] = uVar4;
  FUN_180211510(param_2,psVar1,(longlong)psVar2 - (longlong)psVar1 >> 1,param_4,uVar5,puVar6,param_2
               );
  return param_2;
}


