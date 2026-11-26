// 0x1802499b0  FUN_1802499b0
// size=678 thunk=false
// signature: undefined FUN_1802499b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1802499b0(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  FUN_180258030(param_1 + 0x180,param_1,param_1 + 0x50);
  FUN_180258130(param_1 + 0x188,param_1,param_1 + 0x50);
  FUN_18025d2c0(param_1 + 0x1b8,param_1,param_1 + 0x50,param_1 + 0x188);
  FUN_180254360(param_1 + 0xf0,param_1 + 0x50);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar6 = modff(*(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x9c) /
                *(float *)(param_1 + 0x4dc),local_38);
  local_58 = *(undefined8 *)(param_1 + 0x510);
  local_50 = 0;
  puVar4 = (undefined8 *)FUN_180243970(param_1,local_48,&local_58);
  uVar2 = *puVar4;
  cVar3 = FUN_18025db80(param_1 + 0x1d8,param_1,param_1 + 0x50,param_1 + 0x1b8);
  if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x568) == -1)) {
    FUN_18024ef10(param_1,uVar2,0,fVar6);
  }
  FUN_18025aa40(param_1 + 800,param_1,param_1 + 0x50,param_1 + 0x1d8);
  if (((*(char *)(param_1 + 0x68) != '\0') && (*(longlong *)(param_1 + 0x860) != 0)) &&
     (*(char *)(param_1 + 0x878) == '\0')) {
    *(undefined1 *)(param_1 + 0x878) = 1;
    lVar5 = _Xtime_get_ticks();
    *(longlong *)(param_1 + 0x870) = *(longlong *)(param_1 + 0x868) * 10000 + lVar5;
  }
  if (*(char *)(param_1 + 0x825) != '\0') {
    if (*(longlong *)(param_1 + 0x348) != *(longlong *)(param_1 + 0x340)) {
      FUN_18024f4f0(param_1);
    }
    if (*(longlong *)(param_1 + 0x360) != *(longlong *)(param_1 + 0x358)) {
      FUN_18024f810(param_1);
    }
    *(undefined1 *)(param_1 + 0x825) = 0;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  if (*(char *)(param_1 + 0x17) == '\0') {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x530);
  }
  *(float *)(param_1 + 0x504) =
       (float)*(ulonglong *)(param_1 + 0x218) * *(float *)(param_1 + 0x4d8) +
       *(float *)(param_1 + 0x4f0) + *(float *)(param_1 + 0x4b4) + fVar6;
  *(float *)(param_1 + 0x508) = (float)*(ulonglong *)(param_1 + 0x210) * *(float *)(param_1 + 0x4dc)
  ;
  return uVar1;
}


