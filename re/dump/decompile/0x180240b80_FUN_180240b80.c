// 0x180240b80  FUN_180240b80
// size=582 thunk=false
// signature: undefined FUN_180240b80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180240b80(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 local_78;
  longlong *local_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_78 = 1;
  if (param_3 != param_4) {
    lVar1 = *param_1;
    local_70 = param_2;
    lVar3 = __RTtypeid(lVar1);
    iVar2 = __std_type_info_compare(lVar3 + 8,0x1803edfd0);
    if ((iVar2 == 0) || (iVar2 = __std_type_info_compare(lVar3 + 8,0x1803ede68), iVar2 == 0)) {
      local_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_18001d080(&local_68,param_3,param_4 - param_3);
      ppppuVar7 = &local_68;
      if (0xf < uStack_50) {
        ppppuVar7 = (undefined8 ****)local_68;
      }
      uVar6 = param_2[2];
      uVar5 = local_58;
      if (uVar6 < local_58) {
        lVar3 = local_58 + (longlong)ppppuVar7;
        do {
          if (uVar6 < uVar5) {
            uVar8 = uVar5 - uVar6;
            if (param_2[3] - uVar6 < uVar8) {
              local_88 = local_88 & 0xffffffffffffff00;
              FUN_18022a720(param_2,uVar8);
            }
            else {
              param_2[2] = uVar5;
              plVar4 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                plVar4 = (longlong *)*param_2;
              }
              memset((undefined1 *)(uVar6 + (longlong)plVar4),0,uVar8);
              ((undefined1 *)(uVar6 + (longlong)plVar4))[uVar8] = 0;
            }
          }
          else {
            param_2[2] = uVar5;
            if ((ulonglong)param_2[3] < 0x10) {
              *(undefined1 *)((longlong)param_2 + uVar5) = 0;
            }
            else {
              *(undefined1 *)(*param_2 + uVar5) = 0;
            }
          }
          plVar4 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            plVar4 = (longlong *)*param_2;
          }
          local_88 = lVar1 + 0x10;
          uVar5 = FUN_1802d80cc(plVar4,uVar5 + (longlong)plVar4,ppppuVar7,lVar3);
          if (uVar5 == 0xffffffffffffffff) {
            uVar5 = 0;
            break;
          }
          uVar6 = param_2[2];
        } while (uVar6 < uVar5);
      }
      uVar6 = param_2[2];
      if (uVar6 < uVar5) {
        uVar8 = uVar5 - uVar6;
        if (param_2[3] - uVar6 < uVar8) {
          local_88 = local_88 & 0xffffffffffffff00;
          FUN_18022a720(param_2,uVar8);
        }
        else {
          param_2[2] = uVar5;
          plVar4 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            plVar4 = (longlong *)*param_2;
          }
          memset((void *)(uVar6 + (longlong)plVar4),0,uVar8);
          *(undefined1 *)(uVar8 + (longlong)(uVar6 + (longlong)plVar4)) = 0;
        }
      }
      else {
        param_2[2] = uVar5;
        if ((ulonglong)param_2[3] < 0x10) {
          *(undefined1 *)((longlong)param_2 + uVar5) = 0;
        }
        else {
          *(undefined1 *)(*param_2 + uVar5) = 0;
        }
      }
      FUN_18020e450(&local_68);
    }
  }
  return param_2;
}


