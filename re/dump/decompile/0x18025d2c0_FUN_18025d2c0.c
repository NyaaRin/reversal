// 0x18025d2c0  FUN_18025d2c0
// size=823 thunk=false
// signature: undefined FUN_18025d2c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_18025d2c0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0 [24];
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 0x1a) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
    *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  }
  cVar7 = (char)param_1[3];
  cVar1 = *(char *)(param_2 + 0x23);
  if (cVar7 != cVar1) {
    *(char *)(param_1 + 3) = cVar1;
    cVar7 = cVar1;
    if (cVar1 == '\0') {
      if (*param_1 != param_1[1]) {
        param_1[1] = *param_1;
      }
      lVar8 = *param_3;
      lVar2 = param_3[1];
      if (lVar8 != lVar2) {
        do {
          *(undefined1 *)(lVar8 + 0x22) = 2;
          lVar8 = lVar8 + 0x60;
        } while (lVar8 != lVar2);
        cVar7 = (char)param_1[3];
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  }
  pcVar11 = (char *)((longlong)param_1 + 0x19);
  if ((char)param_4[5] != '\0') {
    *pcVar11 = '\x01';
  }
  if ((cVar7 != '\0') && (*pcVar11 != '\0')) {
    lStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_a8 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    lStack_80 = FUN_1802d8350(0x18);
    *(longlong *)lStack_80 = lStack_80;
    *(longlong *)(lStack_80 + 8) = lStack_80;
    lStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 7;
    uStack_50 = 8;
    local_88 = CONCAT44(local_88._4_4_,0x3f800000);
    FUN_18022be40(&lStack_70,0x10,lStack_80);
    if (*param_1 != param_1[1]) {
      param_1[1] = *param_1;
    }
    lVar2 = param_4[1];
    for (lVar8 = *param_4; lVar8 != lVar2; lVar8 = lVar8 + 0x40) {
      if (*(longlong *)(lVar8 + 0x20) != *(longlong *)(lVar8 + 8)) {
        if (*(char *)(*(longlong *)(lVar8 + 8) * 0x60 + 0x22 + *param_3) == '\x01') {
          FUN_180214d90(&local_88,local_a0,lVar8 + 8);
        }
        puVar3 = (undefined8 *)param_1[1];
        if (puVar3 == (undefined8 *)param_1[2]) {
          FUN_18021fbd0(param_1,puVar3,lVar8 + 8,lVar8 + 0x20);
        }
        else {
          uVar4 = *(undefined8 *)(lVar8 + 0x20);
          *puVar3 = *(undefined8 *)(lVar8 + 8);
          puVar3[1] = uVar4;
          param_1[1] = param_1[1] + 0x10;
        }
      }
    }
    lVar2 = param_3[1];
    for (lVar8 = *param_3; lVar8 != lVar2; lVar8 = lVar8 + 0x60) {
      *(undefined1 *)(lVar8 + 0x22) = 2;
    }
    pbVar5 = (byte *)param_1[1];
    for (pbVar9 = (byte *)*param_1; pbVar9 != pbVar5; pbVar9 = pbVar9 + 0x10) {
      uVar10 = (((((((((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)pbVar9[1]) * 0x100000001b3 ^ (ulonglong)pbVar9[2]) * 0x100000001b3 ^
                   (ulonglong)pbVar9[3]) * 0x100000001b3 ^ (ulonglong)pbVar9[4]) * 0x100000001b3 ^
                 (ulonglong)pbVar9[5]) * 0x100000001b3 ^ (ulonglong)pbVar9[6]) * 0x100000001b3 ^
               (ulonglong)pbVar9[7]) * 0x100000001b3 & local_58;
      lVar8 = *(longlong *)(lStack_70 + 8 + uVar10 * 0x10);
      if (lVar8 == lStack_80) {
LAB_18025d543:
        lVar8 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar8 + 0x10);
        while (*(longlong *)pbVar9 != lVar2) {
          if (lVar8 == *(longlong *)(lStack_70 + uVar10 * 0x10)) goto LAB_18025d543;
          lVar8 = *(longlong *)(lVar8 + 8);
          lVar2 = *(longlong *)(lVar8 + 0x10);
        }
      }
      lVar2 = *(longlong *)pbVar9;
      lVar6 = *param_3;
      if ((lVar8 == 0) || (lVar8 == lStack_80)) {
        if (*(char *)(lVar2 * 0x60 + 0x22 + lVar6) != '\x03') {
          *(undefined1 *)(lVar2 * 0x60 + 0x22 + lVar6) = 0;
        }
      }
      else {
        *(undefined1 *)(lVar2 * 0x60 + 0x22 + lVar6) = 1;
        uVar10 = *(longlong *)pbVar9 + 1;
        if (uVar10 <= *(ulonglong *)(pbVar9 + 8)) {
          do {
            *(undefined1 *)(uVar10 * 0x60 + 0x22 + *param_3) = 3;
            uVar10 = uVar10 + 1;
          } while (uVar10 <= *(ulonglong *)(pbVar9 + 8));
        }
      }
    }
    FUN_180209700(&lStack_70);
    FUN_180209770(&lStack_80);
  }
  return *pcVar11;
}


