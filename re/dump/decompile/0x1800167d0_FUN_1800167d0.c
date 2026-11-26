// 0x1800167d0  FUN_1800167d0
// size=353 thunk=false
// signature: undefined FUN_1800167d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800167d0(ulonglong *param_1,undefined8 param_2,char *param_3)

{
  undefined1 *_Size;
  BOOL BVar1;
  int iVar2;
  ulonglong uVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  HMODULE pHVar6;
  undefined4 extraout_var_01;
  HMODULE pHVar7;
  HMODULE pHVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  uVar3 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if ((ulonglong *)0xffff < param_1) {
    local_10 = uVar3;
    pHVar4 = GetModuleHandleA("client.dll");
    uVar3 = 0;
    if (pHVar4 != (HMODULE)0x0) {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      pvVar5 = GetCurrentProcess();
      uVar3 = K32GetModuleInformation(pvVar5,pHVar4,&local_28,0x18);
      if ((int)uVar3 != 0) {
        BVar1 = IsBadReadPtr(param_1,8);
        uVar3 = CONCAT44(extraout_var,BVar1);
        if (BVar1 == 0) {
          pHVar7 = (HMODULE)*param_1;
          pHVar6 = pHVar4 + 2;
          if ((pHVar6 <= pHVar7) &&
             (pHVar8 = (HMODULE)((longlong)&pHVar4->unused + (uStack_20 & 0xffffffff)),
             pHVar7 < pHVar8)) {
            BVar1 = IsBadReadPtr(pHVar7 + -2,8);
            pHVar6 = (HMODULE)CONCAT44(extraout_var_00,BVar1);
            if (((BVar1 == 0) &&
                ((((pHVar7 = *(HMODULE *)(pHVar7 + -2), pHVar4 <= pHVar7 &&
                   (pHVar6 = pHVar7 + 6, pHVar6 <= pHVar8)) && (pHVar7->unused == 1)) &&
                 ((pHVar7[1].unused == 0 && (0 < pHVar7[3].unused)))))) &&
               (pHVar6 = (HMODULE)((longlong)&pHVar4->unused + (ulonglong)(uint)pHVar7[5].unused),
               pHVar6 == pHVar7)) {
              pHVar7 = (HMODULE)((longlong)&pHVar4[4].unused + (ulonglong)(uint)pHVar7[3].unused);
              pHVar6 = (HMODULE)strlen(param_3);
              if (((pHVar4 <= pHVar7) && (pHVar7 < pHVar8)) &&
                 (_Size = (undefined1 *)((longlong)&pHVar6->unused + 1),
                 _Size <= (undefined1 *)((longlong)pHVar8 - (longlong)pHVar7))) {
                iVar2 = memcmp(pHVar7,param_3,(size_t)_Size);
                return CONCAT71((int7)(CONCAT44(extraout_var_01,iVar2) >> 8),iVar2 == 0);
              }
            }
          }
          return (ulonglong)pHVar6 & 0xffffffffffffff00;
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


