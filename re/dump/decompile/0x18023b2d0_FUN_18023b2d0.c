// 0x18023b2d0  FUN_18023b2d0
// size=437 thunk=false
// signature: undefined FUN_18023b2d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_18023b2d0(longlong *param_1,byte param_2,char *param_3,char *param_4,uint *param_5,
             longlong param_6,uint param_7)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  void *_Buf2;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_80 = param_6;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 ****)0x0;
  local_88 = param_1;
  if (param_5 != (uint *)0x0) {
    local_68 = 1;
    local_78 = (undefined8 ***)(ulonglong)param_2;
    uVar8 = 1;
    uVar1 = *param_5;
    uVar9 = 1;
    pcVar7 = param_3;
    if (1 < (ulonglong)uVar1) {
      do {
        uVar9 = local_68;
        pcVar7 = pcVar7 + 1;
        if (pcVar7 == param_4) break;
        cVar3 = *pcVar7;
        if ((param_7 >> 8 & 1) != 0) {
          cVar3 = std::ctype<char>::tolower(*(ctype<char> **)(local_80 + 8),cVar3);
        }
        if (uVar9 < local_60) {
          local_68 = uVar9 + 1;
          ppppuVar5 = &local_78;
          if (0xf < local_60) {
            ppppuVar5 = (undefined8 ****)local_78;
          }
          *(char *)((longlong)ppppuVar5 + uVar9) = cVar3;
          *(undefined1 *)((longlong)ppppuVar5 + uVar9 + 1) = 0;
        }
        else {
          FUN_18021abd0(&local_78);
        }
        uVar8 = uVar8 + 1;
        uVar9 = local_68;
      } while (uVar8 < uVar1);
    }
    do {
      uVar1 = *param_5;
      uVar8 = (ulonglong)uVar1;
      if (uVar8 <= uVar9) {
        ppppuVar5 = &local_78;
        if (0xf < local_60) {
          ppppuVar5 = (undefined8 ****)local_78;
        }
        _Buf2 = *(void **)(param_5 + 4);
        for (uVar6 = param_5[3]; uVar1 <= uVar6; uVar6 = uVar6 - uVar1) {
          iVar4 = memcmp(ppppuVar5,_Buf2,uVar8);
          if (iVar4 == 0) {
            *local_88 = (longlong)(param_3 + uVar8);
            goto LAB_18023b461;
          }
          _Buf2 = (void *)((longlong)_Buf2 + uVar8);
        }
      }
      param_5 = *(uint **)(param_5 + 6);
    } while (param_5 != (uint *)0x0);
  }
  *local_88 = (longlong)param_3;
LAB_18023b461:
  plVar2 = local_88;
  FUN_18020e450(&local_78);
  return plVar2;
}


