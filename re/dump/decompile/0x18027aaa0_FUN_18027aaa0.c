// 0x18027aaa0  FUN_18027aaa0
// size=142 thunk=false
// signature: undefined FUN_18027aaa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18027aaa0(longlong *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  int local_18;
  byte local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  pbVar2 = (byte *)&local_18;
  local_18 = param_2;
  uVar3 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_180331380 + ((ulonglong)(uVar3 & 0xff) ^ (ulonglong)bVar1) * 4);
  } while (pbVar2 < local_14);
  uVar3 = ~uVar3;
  if (*(uint *)(*param_1 + 0x1578) == uVar3) {
    FUN_1802899e0(uVar3,4,(longlong)param_2);
  }
  return uVar3;
}


