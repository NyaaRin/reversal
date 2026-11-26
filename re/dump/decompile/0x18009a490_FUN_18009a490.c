// 0x18009a490  FUN_18009a490
// size=384 thunk=false
// signature: undefined FUN_18009a490()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18009a490(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  size_t _Size;
  int iVar2;
  undefined8 uVar3;
  undefined8 *_Buf1;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [40];
  undefined8 **local_60 [2];
  size_t local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (DAT_1803fa608 == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  FUN_1800952f0(local_60);
  if (*(longlong *)(param_1 + 200) == param_3) {
    _Buf1 = (undefined8 *)(param_1 + 0xd0);
    pppuVar4 = local_60;
    if (0xf < local_48) {
      pppuVar4 = (undefined8 ***)local_60[0];
    }
    _Size = *(size_t *)(param_1 + 0xe0);
    if (0xf < *(ulonglong *)(param_1 + 0xe8)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if (_Size == local_50) {
      if (_Size != 0) {
        iVar2 = memcmp(_Buf1,pppuVar4,_Size);
        if (iVar2 != 0) goto LAB_18009a551;
      }
      dVar1 = *(double *)(param_1 + 0xf0);
      if (((0.0 <= dVar1) &&
          (dVar1 < (double)CONCAT44(uVar6,uVar5) || dVar1 == (double)CONCAT44(uVar6,uVar5))) &&
         ((double)CONCAT44(uVar6,uVar5) - dVar1 <= DAT_180380d38)) goto LAB_18009a5dd;
    }
  }
LAB_18009a551:
  pppuVar4 = local_60;
  if (0xf < local_48) {
    pppuVar4 = (undefined8 ***)local_60[0];
  }
  uVar3 = FUN_180097ec0(param_2,pppuVar4,"Shoot");
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  pppuVar4 = local_60;
  if (0xf < local_48) {
    pppuVar4 = (undefined8 ***)local_60[0];
  }
  uVar3 = FUN_180097ec0(param_2,pppuVar4,"FireBullet");
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(longlong *)(param_1 + 200) = param_3;
  if ((undefined8 ***)(param_1 + 0xd0) != local_60) {
    pppuVar4 = local_60;
    if (0xf < local_48) {
      pppuVar4 = (undefined8 ***)local_60[0];
    }
    FUN_180212700((undefined8 ***)(param_1 + 0xd0),pppuVar4,local_50);
  }
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uVar6,uVar5);
LAB_18009a5dd:
  FUN_18020e450(local_60);
  return;
}


