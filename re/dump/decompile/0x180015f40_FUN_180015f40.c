// 0x180015f40  FUN_180015f40
// size=406 thunk=false
// signature: undefined FUN_180015f40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HMODULE FUN_180015f40(LPCSTR param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  HMODULE pHVar6;
  uint uVar7;
  LPCSTR lpModuleName;
  byte *pbVar8;
  HMODULE pHVar9;
  HMODULE pHVar10;
  undefined1 auStack_68 [32];
  LPCSTR local_48;
  byte *local_40;
  undefined1 local_38 [8];
  uint local_30;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  pbVar8 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar8 = *(byte **)param_2;
  }
  lpModuleName = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    lpModuleName = *(LPCSTR *)param_1;
  }
  local_48 = param_1;
  local_40 = param_2;
  pHVar4 = GetModuleHandleA(lpModuleName);
  pvVar5 = GetCurrentProcess();
  K32GetModuleInformation(pvVar5,pHVar4,local_38,0x18);
  pHVar10 = (HMODULE)((longlong)&pHVar4->unused + (ulonglong)local_30);
  if (pHVar4 < pHVar10) {
    pHVar9 = (HMODULE)0x0;
    do {
      bVar1 = *pbVar8;
      pHVar6 = pHVar9;
      if (bVar1 == 0) goto LAB_1800160c0;
      if (bVar1 == 0x3f) {
LAB_180016057:
        pHVar6 = pHVar4;
        if (pHVar9 != (HMODULE)0x0) {
          pHVar6 = pHVar9;
        }
        if (pbVar8[2] == 0) {
LAB_1800160c0:
          FUN_18020e450(param_1);
          FUN_18020e450(param_2);
          return pHVar6;
        }
        if ((*(short *)pbVar8 == 0x3f3f) || (bVar1 != 0x3f)) {
          pbVar8 = pbVar8 + 3;
        }
        else {
          pbVar8 = pbVar8 + 2;
        }
      }
      else {
        if ((byte)((bVar1 & 0xdf) + 0xbf) < 6) {
          iVar3 = ((int)(char)bVar1 & 0xffffffdfU) - 0x37;
        }
        else if ((byte)(bVar1 - 0x30) < 10) {
          iVar3 = (int)(char)bVar1 - 0x30;
        }
        else {
          iVar3 = 0;
        }
        bVar2 = pbVar8[1];
        if ((byte)((bVar2 & 0xdf) + 0xbf) < 6) {
          uVar7 = ((int)(char)bVar2 & 0xffffffdfU) - 0x37;
        }
        else if ((byte)(bVar2 - 0x30) < 10) {
          uVar7 = (int)(char)bVar2 - 0x30;
        }
        else {
          uVar7 = 0;
        }
        if ((uint)(byte)pHVar4->unused == (iVar3 << 4 | uVar7)) goto LAB_180016057;
        if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
          pHVar6 = (HMODULE)0x0;
          pbVar8 = param_2;
        }
        else {
          pHVar6 = (HMODULE)0x0;
          pbVar8 = *(byte **)param_2;
        }
      }
      pHVar4 = (HMODULE)((longlong)&pHVar4->unused + 1);
      pHVar9 = pHVar6;
    } while (pHVar4 < pHVar10);
  }
  FUN_18020e450(param_1);
  FUN_18020e450(param_2);
  return (HMODULE)0x0;
}


