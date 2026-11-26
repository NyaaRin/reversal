// 0x180035030  FUN_180035030
// size=538 thunk=false
// signature: undefined FUN_180035030()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180035030(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  param_5[2] = 0;
  puVar5 = param_5;
  if (0xf < (ulonglong)param_5[3]) {
    puVar5 = (undefined8 *)*param_5;
  }
  *(undefined1 *)puVar5 = 0;
  if ((((((*(char *)(param_3 + 3) == '\0') || (DAT_1803faef0 == 0)) || (DAT_1803fafa0 == 0)) ||
       ((DAT_1803faed8 == 0 || (DAT_1803faff8 == 0)))) ||
      ((DAT_1803fb008 == 0 || (DAT_1803fafc0 == 0)))) ||
     ((DAT_1803fb038 != (code *)0x0 && (iVar4 = (*DAT_1803fb038)(param_1,10), iVar4 == 0)))) {
LAB_180035219:
    bVar7 = false;
  }
  else {
    uVar2 = _UNK_1803814b8;
    uVar1 = _DAT_1803814b0;
    puVar5 = (undefined8 *)param_3[1];
    for (param_3 = (undefined8 *)*param_3; param_3 != puVar5; param_3 = param_3 + 0x12) {
      if (0x100 < (ulonglong)(param_5[2] + param_3[2])) goto LAB_180035219;
      puVar6 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        puVar6 = (undefined8 *)*param_3;
      }
      FUN_18021aef0(param_5,puVar6);
      if (param_3[6] != 0) {
        uStack_80 = 0;
        local_78 = uVar1;
        uStack_70 = uVar2;
        local_88 = 0;
        local_90 = 0;
        local_98[0] = 0;
        local_a0 = local_98;
        local_a8 = &local_90;
        local_b0 = &local_88;
        local_b8 = (undefined8 *)CONCAT71(local_b8._1_7_,param_6);
        cVar3 = FUN_180034ac0(param_1,param_2,param_3,param_4);
        if (cVar3 != '\0') {
          local_b8 = param_5;
          cVar3 = FUN_180028f70(param_3,&local_88,local_90,local_98[0]);
          if (cVar3 != '\0') {
            FUN_18020e450(&local_88);
            goto LAB_1800351f5;
          }
        }
        FUN_18020e450(&local_88);
        goto LAB_180035219;
      }
LAB_1800351f5:
    }
    bVar7 = param_5[2] != 0;
  }
  return bVar7;
}


