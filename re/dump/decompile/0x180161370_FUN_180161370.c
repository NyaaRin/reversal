// 0x180161370  FUN_180161370
// size=321 thunk=false
// signature: undefined FUN_180161370()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_180161370(longlong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  ulonglong uVar6;
  char ****_Str1;
  bool bVar7;
  undefined1 auStack_68 [32];
  char ***local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_48 = (char ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_18001d080(&local_48,*param_1,param_1[1] - *param_1);
  _Str1 = &local_48;
  if (0xf < uStack_30) {
    _Str1 = (char ****)local_48;
  }
  cVar2 = *(char *)_Str1;
  while (cVar2 != '\0') {
    iVar3 = _strnicmp((char *)_Str1,"$basetexture",0xc);
    if (iVar3 == 0) {
      pbVar4 = (byte *)((longlong)_Str1 + 0xc);
      uVar6 = (ulonglong)(char)*pbVar4;
      if ((*pbVar4 < 0x23) && ((0x500000200U >> (uVar6 & 0x3f) & 1) != 0)) goto LAB_180161441;
    }
    _Str1 = (char ****)((longlong)_Str1 + 1);
    cVar2 = *(char *)_Str1;
  }
  bVar7 = false;
  goto LAB_180161417;
LAB_180161441:
  while (((byte)uVar6 < 0x23 && ((0x500000200U >> ((longlong)(char)(byte)uVar6 & 0x3fU) & 1) != 0)))
  {
    pbVar4 = pbVar4 + 1;
    uVar6 = (ulonglong)*pbVar4;
  }
  bVar5 = *pbVar4;
  uVar6 = 0;
  if (bVar5 != 0) {
    do {
      if (((bVar5 < 0x23) && ((0x400002600U >> ((ulonglong)bVar5 & 0x3f) & 1) != 0)) ||
         (uVar1 = uVar6 + 1, param_3 <= uVar1)) break;
      if (bVar5 == 0x5c) {
        bVar5 = 0x2f;
      }
      *(byte *)(param_2 + uVar6) = bVar5;
      pbVar4 = pbVar4 + 1;
      bVar5 = *pbVar4;
      uVar6 = uVar1;
    } while (bVar5 != 0);
  }
  *(undefined1 *)(param_2 + uVar6) = 0;
  bVar7 = uVar6 != 0;
LAB_180161417:
  FUN_18020e450(&local_48);
  return bVar7;
}


