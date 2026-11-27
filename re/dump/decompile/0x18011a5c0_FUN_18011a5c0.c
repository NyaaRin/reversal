// 0x18011a5c0  FUN_18011a5c0
// size=608 thunk=false
// signature: undefined FUN_18011a5c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18011a5c0(undefined8 *param_1,byte *param_2)

{
  char cVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 *local_150;
  char local_148 [256];
  byte *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  local_158 = 0;
  lVar7 = *(longlong *)(param_2 + 0x10);
  pbVar8 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar8 = *(byte **)param_2;
  }
  local_150 = param_1;
  local_48 = param_2;
  if (lVar7 != 0) {
    if (lVar7 + 6U < 0x10) {
      memset(local_148,0,0x100);
      pbVar6 = &DAT_18035160c;
      do {
        local_148[*pbVar6] = '\x01';
        pbVar6 = pbVar6 + 1;
        pbVar2 = pbVar8;
      } while (pbVar6 != &DAT_180351612);
      for (; pbVar2 < pbVar8 + lVar7; pbVar2 = pbVar2 + 1) {
        if (local_148[*pbVar2] == '\0') {
          uVar3 = (longlong)pbVar2 - (longlong)pbVar8;
          goto LAB_18011a714;
        }
      }
    }
    else {
      uVar3 = FUN_1802d6fd0(pbVar8,lVar7,&DAT_18035160c,6);
LAB_18011a714:
      pbVar8 = &DAT_18035160c;
      if (uVar3 != 0xffffffffffffffff) {
        pbVar6 = param_2;
        if (0xf < *(ulonglong *)(param_2 + 0x18)) {
          pbVar6 = *(byte **)param_2;
        }
        lVar7 = -1;
        if (*(longlong *)(param_2 + 0x10) != 0) {
          lVar4 = *(longlong *)(param_2 + 0x10) + -1;
          lVar10 = -1;
          if (lVar4 != -1) {
            lVar10 = lVar4;
          }
          if (lVar10 + 7U < 0x10) {
            memset(local_148,0,0x100);
            do {
              local_148[*pbVar8] = '\x01';
              pbVar8 = pbVar8 + 1;
            } while (pbVar8 != &DAT_180351612);
            pbVar8 = pbVar6 + lVar10;
            cVar1 = local_148[*pbVar8];
            while (cVar1 != '\0') {
              if (pbVar8 == pbVar6) goto LAB_18011a7bb;
              pbVar8 = pbVar8 + -1;
              cVar1 = local_148[*pbVar8];
            }
            lVar7 = (longlong)pbVar8 - (longlong)pbVar6;
          }
          else {
            lVar7 = thunk_FUN_1802d4c50(pbVar6,lVar10 + 1,&DAT_18035160c,6);
          }
        }
LAB_18011a7bb:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        if (*(ulonglong *)(param_2 + 0x10) < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18022ec00();
        }
        uVar9 = (lVar7 - uVar3) + 1;
        uVar5 = *(ulonglong *)(param_2 + 0x10) - uVar3;
        if (uVar5 < uVar9) {
          uVar9 = uVar5;
        }
        pbVar8 = param_2;
        if (0xf < *(ulonglong *)(param_2 + 0x18)) {
          pbVar8 = *(byte **)param_2;
        }
        FUN_18001d080(param_1,pbVar8 + uVar3,uVar9);
        goto LAB_18011a6db;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_18001d080(param_1,&DAT_18033e5ea,0);
LAB_18011a6db:
  local_158 = 1;
  FUN_18020e450(param_2);
  return param_1;
}


