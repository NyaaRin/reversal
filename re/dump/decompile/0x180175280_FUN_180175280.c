// 0x180175280  FUN_180175280
// size=536 thunk=false
// signature: undefined FUN_180175280()
// status: ok


void FUN_180175280(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_60 [56];
  
  uVar1 = *param_3;
  lVar2 = param_2[2];
  if (0x7fffffffffffffffU - lVar2 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  FUN_18020e930(local_60,lVar2,param_3,puVar3,lVar2,&DAT_180361cbc,2);
  FUN_180174f30(param_1,local_60,uVar1);
  FUN_18020e450(local_60);
  uVar1 = param_3[1];
  if (0x7fffffffffffffff - param_2[2] < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  FUN_18020e930(local_60);
  FUN_180174f30(param_1,local_60,uVar1);
  FUN_18020e450(local_60);
  uVar1 = param_3[2];
  if (0x7fffffffffffffff - param_2[2] < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  FUN_18020e930(local_60);
  FUN_180174f30(param_1,local_60,uVar1);
  FUN_18020e450(local_60);
  uVar1 = param_3[3];
  if (1 < 0x7fffffffffffffff - param_2[2]) {
    FUN_18020e930(local_60);
    FUN_180174f30(param_1,local_60,uVar1);
    FUN_18020e450(local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800130a0();
}


