// 0x180065de0  FUN_180065de0
// size=222 thunk=false
// signature: undefined FUN_180065de0()
// status: ok


undefined8 *
FUN_180065de0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  short *psVar6;
  
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar1 = (short *)((longlong)puVar5 + param_1[2] * 2);
  psVar6 = psVar1;
  psVar4 = (short *)FUN_180065240(puVar5,psVar1,puVar5,param_4,0,param_2);
  if (psVar4 == psVar1) {
LAB_180065e5c:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_180211510(param_2,psVar6,(longlong)psVar1 - (longlong)psVar6 >> 1);
    return param_2;
  }
  do {
    psVar3 = psVar6;
    psVar2 = psVar1;
    if ((*psVar4 != 0x5c) && (*psVar4 != 0x2f)) break;
    psVar4 = psVar4 + 1;
  } while (psVar4 != psVar1);
  do {
    psVar6 = psVar3;
    if (psVar4 == psVar2) goto LAB_180065e5c;
    psVar2 = psVar6 + -1;
    if ((*psVar2 == 0x5c) || (psVar3 = psVar2, *psVar2 == 0x2f)) goto LAB_180065e5c;
  } while( true );
}


