// 0x18027aa10  FUN_18027aa10
// size=139 thunk=false
// signature: undefined FUN_18027aa10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18027aa10(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  puVar2 = &local_18;
  uVar3 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
  do {
    uVar1 = *puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_180331380 + ((ulonglong)(uVar3 & 0xff) ^ (ulonglong)(byte)uVar1) * 4);
  } while (puVar2 < &local_10);
  uVar3 = ~uVar3;
  if (*(uint *)(*param_1 + 0x1578) == uVar3) {
    FUN_1802899e0(uVar3,0xc,param_2);
  }
  return uVar3;
}


