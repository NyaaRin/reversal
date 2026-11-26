// 0x18027ab30  FUN_18027ab30
// size=180 thunk=false
// signature: undefined FUN_18027ab30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18027ab30(longlong param_1,float *param_2)

{
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  byte local_18 [24];
  
  pfVar3 = &local_28;
  local_28 = *param_2 - *(float *)(param_1 + 0x128);
  local_24 = param_2[1] - *(float *)(param_1 + 300);
  uVar2 = ~*(uint *)(*(longlong *)(param_1 + 0x110) + -4 + (longlong)*(int *)(param_1 + 0x108) * 4);
  local_20 = param_2[2] - *(float *)(param_1 + 0x128);
  local_1c = param_2[3] - *(float *)(param_1 + 300);
  do {
    bVar1 = *(byte *)pfVar3;
    pfVar3 = (float *)((longlong)pfVar3 + 1);
    uVar2 = uVar2 >> 8 ^
            *(uint *)(&DAT_180331380 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)bVar1) * 4);
  } while (pfVar3 < local_18);
  return ~uVar2;
}


