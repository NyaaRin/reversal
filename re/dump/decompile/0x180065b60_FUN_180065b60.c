// 0x180065b60  FUN_180065b60
// size=181 thunk=false
// signature: undefined FUN_180065b60()
// status: ok


undefined8 *
FUN_180065b60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  uVar4 = 0;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar3 + param_1[2] * 2);
  puVar5 = param_2;
  for (psVar1 = (short *)FUN_180065240(puVar3);
      (psVar1 != psVar2 && ((*psVar1 == 0x5c || (*psVar1 == 0x2f)))); psVar1 = psVar1 + 1) {
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180211510(param_2,puVar3,(longlong)psVar1 - (longlong)puVar3 >> 1,param_4,uVar4,puVar5,param_2
               );
  return param_2;
}


