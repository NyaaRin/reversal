// 0x180142220  FUN_180142220
// size=713 thunk=false
// signature: undefined FUN_180142220()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180142220(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 ***local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  uVar8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_98 = 1;
  local_90 = param_3;
  local_68 = param_1;
  if ((ulonglong)param_1[3] < param_2[2] + 0x20) {
    lVar4 = param_1[2];
    FUN_18021aa80(0,(param_2[2] + 0x20) - lVar4);
    param_1[2] = lVar4;
  }
  uVar10 = param_2[2];
  if (uVar10 != 0) {
    do {
      uVar9 = param_2[3];
      puVar5 = param_2;
      if (0xf < uVar9) {
        puVar5 = (undefined8 *)*param_2;
      }
      if (*(char *)((longlong)puVar5 + uVar8) == '{') {
        uVar1 = uVar8 + 1;
        puVar5 = param_2;
        if (0xf < uVar9) {
          puVar5 = (undefined8 *)*param_2;
        }
        if ((((uVar10 <= uVar1) ||
             (lVar4 = thunk_FUN_1802d5c20(uVar1 + (longlong)puVar5,(longlong)puVar5 + uVar10,0x7d),
             lVar4 == (longlong)puVar5 + uVar10)) ||
            (uVar10 = lVar4 - (longlong)puVar5, uVar10 == 0xffffffffffffffff)) ||
           (0x18 < uVar10 - uVar8)) {
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
          uVar2 = *(undefined1 *)((longlong)puVar5 + uVar8);
          goto LAB_18014246a;
        }
        uStack_58 = 0;
        local_50 = 0;
        local_48 = 0xf;
        local_60 = (undefined8 ****)0x0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        if ((ulonglong)param_2[2] < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_18022ec00();
        }
        uVar9 = (uVar10 - uVar8) - 1;
        uVar6 = param_2[2] - uVar1;
        if (uVar6 < uVar9) {
          uVar9 = uVar6;
        }
        puVar5 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar5 = (undefined8 *)*param_2;
        }
        FUN_18001d080(&local_88,uVar1 + (longlong)puVar5,uVar9);
        local_98 = 3;
        cVar3 = FUN_180141c00(&local_88,local_90,&local_60);
        local_98 = 1;
        FUN_18020e450(&local_88);
        if (cVar3 == '\0') {
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
          uVar2 = *(undefined1 *)((longlong)puVar5 + uVar8);
          uVar10 = param_1[2];
          if (uVar10 < (ulonglong)param_1[3]) {
            param_1[2] = uVar10 + 1;
            if ((ulonglong)param_1[3] < 0x10) {
              *(undefined1 *)(uVar10 + (longlong)param_1) = uVar2;
              *(undefined1 *)(uVar10 + 1 + (longlong)param_1) = 0;
            }
            else {
              lVar4 = *param_1;
              *(undefined1 *)(uVar10 + lVar4) = uVar2;
              *(undefined1 *)(uVar10 + 1 + lVar4) = 0;
            }
          }
          else {
            FUN_18021abd0(param_1);
          }
        }
        else {
          ppppuVar7 = &local_60;
          if (0xf < local_48) {
            ppppuVar7 = (undefined8 ****)local_60;
          }
          FUN_18021aef0(param_1,ppppuVar7,local_50);
          uVar8 = uVar10;
        }
        FUN_18020e450(&local_60);
      }
      else {
        puVar5 = param_2;
        if (0xf < uVar9) {
          puVar5 = (undefined8 *)*param_2;
        }
        uVar2 = *(undefined1 *)((longlong)puVar5 + uVar8);
LAB_18014246a:
        uVar10 = param_1[2];
        if (uVar10 < (ulonglong)param_1[3]) {
          param_1[2] = uVar10 + 1;
          if ((ulonglong)param_1[3] < 0x10) {
            *(undefined1 *)(uVar10 + 1 + (longlong)param_1) = 0;
            *(undefined1 *)(uVar10 + (longlong)param_1) = uVar2;
          }
          else {
            lVar4 = *param_1;
            *(undefined1 *)(uVar10 + 1 + lVar4) = 0;
            *(undefined1 *)(uVar10 + lVar4) = uVar2;
          }
        }
        else {
          FUN_18021abd0(param_1);
        }
      }
      uVar8 = uVar8 + 1;
      uVar10 = param_2[2];
    } while (uVar8 < uVar10);
  }
  return param_1;
}


