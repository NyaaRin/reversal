// 0x18018f7b0  FUN_18018f7b0
// size=412 thunk=false
// signature: undefined FUN_18018f7b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18018f7b0(longlong param_1,int param_2,undefined *param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  lVar5 = (longlong)param_2;
  if (*(char *)(lVar5 + param_5) == '\x02') {
    return 1;
  }
  if (*(char *)(lVar5 + param_5) != '\x01') {
    *(undefined1 *)(lVar5 + param_5) = 1;
    lVar4 = lVar5 * 0xd8 + *(int *)(param_1 + 0xa0) + param_1;
    if (((((lVar4 != 0) && (sVar3 = _fdclass(*(undefined4 *)(lVar4 + 0x20)), sVar3 < 1)) &&
         (sVar3 = _fdclass(*(undefined4 *)(lVar4 + 0x24)), sVar3 < 1)) &&
        ((sVar3 = _fdclass(*(undefined4 *)(lVar4 + 0x28)), sVar3 < 1 &&
         (sVar3 = _fdclass(*(undefined4 *)(lVar4 + 0x2c)), sVar3 < 1)))) &&
       ((sVar3 = _fdclass(*(undefined4 *)(lVar4 + 0x30)), sVar3 < 1 &&
        ((sVar3 = _fdclass(*(undefined4 *)(lVar4 + 0x34)), sVar3 < 1 &&
         (sVar3 = _fdclass(*(undefined4 *)(lVar4 + 0x38)), sVar3 < 1)))))) {
      FUN_1802d44f0(lVar4 + 0x2c,lVar4 + 0x20,local_78);
      iVar1 = *(int *)(lVar4 + 4);
      if (iVar1 == -1) {
LAB_18018f8fc:
        FUN_1802d4110(param_3,local_78,&DAT_18056e780 + lVar5 * 0x30);
        *(undefined1 *)(lVar5 + param_5) = 2;
        return 1;
      }
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x9c))) {
        local_88 = param_5;
        cVar2 = FUN_18018f7b0(param_1,iVar1,param_3,&DAT_18056e780);
        if (cVar2 != '\0') {
          param_3 = &DAT_18056e780 + (longlong)*(int *)(lVar4 + 4) * 0x30;
          goto LAB_18018f8fc;
        }
      }
    }
  }
  return 0;
}


