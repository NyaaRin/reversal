// 0x180089430  Features_Weapons_Backends_TacRPWeaponBackend_vfunc01
// size=204 thunk=false
// signature: undefined Features_Weapons_Backends_TacRPWeaponBackend_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
Features_Weapons_Backends_TacRPWeaponBackend_vfunc01(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  ulonglong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  bVar2 = false;
  local_58 = 0;
  FUN_18001f260(param_2,local_30);
  if (5 < local_20) {
    piVar3 = (int *)FUN_18020e670(local_30,local_50,0,6);
    bVar2 = true;
    local_58 = 1;
    plVar1 = (longlong *)(piVar3 + 4);
    if (0xf < *(ulonglong *)(piVar3 + 6)) {
      piVar3 = *(int **)piVar3;
    }
    if (*plVar1 == 6) {
      iVar4 = *piVar3 + -0x72636174;
      if (iVar4 == 0) {
        iVar4 = *(ushort *)(piVar3 + 1) - 0x5f70;
      }
      if (iVar4 == 0) {
        uVar5 = 1;
        goto LAB_1800894bc;
      }
    }
  }
  uVar5 = 0;
LAB_1800894bc:
  if (bVar2) {
    local_58 = 0;
    FUN_18020e450(local_50);
  }
  FUN_18020e450(local_30);
  return uVar5;
}


