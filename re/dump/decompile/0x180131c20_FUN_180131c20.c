// 0x180131c20  FUN_180131c20
// size=233 thunk=false
// signature: undefined FUN_180131c20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180131c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_180131880();
  if ((lVar3 != 0) && (lVar4 = FUN_180131880(param_1), lVar4 != 0)) {
    uVar6 = 0;
    do {
      cVar1 = FUN_1801311e0(*(undefined8 *)(lVar4 + uVar6 * 8));
      if (cVar1 == '\0') break;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < 0x200);
    iVar7 = 0;
    iVar8 = 0;
    if ((int)uVar6 != 0) {
      do {
        local_b8 = FUN_180131770(lVar3,uVar6,iVar8);
        cVar1 = FUN_180131550(*(undefined8 *)(lVar3 + (longlong)iVar8 * 8));
        if ((cVar1 != '\0') && (iVar2 = strcmp(local_a8,"GetAccountName"), iVar2 == 0)) {
          if (iVar7 == param_4) {
            return iVar8;
          }
          iVar7 = iVar7 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar6);
    }
  }
  return -1;
}


