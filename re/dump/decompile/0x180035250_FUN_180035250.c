// 0x180035250  FUN_180035250
// size=1021 thunk=false
// signature: undefined FUN_180035250()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_180035250(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_70;
  char local_68;
  int local_64;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  param_5[2] = 0;
  puVar7 = param_5;
  if (0xf < (ulonglong)param_5[3]) {
    puVar7 = (undefined8 *)*param_5;
  }
  *(undefined1 *)puVar7 = 0;
  if (*(int *)(param_3 + 0x88) == 0) {
    cVar10 = *(int *)(param_3 + 0x7c) != -1;
  }
  else {
    cVar10 = *(char *)(param_3 + 0x8c);
  }
  if ((((cVar10 != '\0') && (DAT_1803faef0 != (code *)0x0)) && (DAT_1803fafa0 != (code *)0x0)) &&
     (((DAT_1803faed8 != 0 && (DAT_1803faff8 != (code *)0x0)) &&
      ((DAT_1803fb008 != (code *)0x0 &&
       ((DAT_1803fb038 == (code *)0x0 || (iVar3 = (*DAT_1803fb038)(param_1,6), iVar3 != 0)))))))) {
    if ((*(int *)(param_3 + 0x88) != 1) ||
       ((DAT_1803faf30 == (code *)0x0 ||
        ((*(char *)(param_3 + 0x78) != '\0' && (*(char *)(param_3 + 0x50) != '\0')))))) {
      if (param_2 == (longlong *)0x0) {
        local_64 = 0;
      }
      else if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
        local_64 = (**(code **)*param_2)(param_2);
      }
      else {
        local_64 = (*DAT_1803fb088)();
      }
      cVar10 = '\0';
      cVar2 = FUN_180033aa0(param_1,param_2,param_3,param_4);
      iVar3 = local_64;
      if (cVar2 != '\0') {
        if (param_2 == (longlong *)0x0) {
          uVar4 = 0;
        }
        else if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
          uVar4 = (**(code **)*param_2)(param_2);
        }
        else {
          uVar4 = (*DAT_1803fb088)();
        }
        if ((*(char *)(param_3 + 0x78) == '\0') || (*(char *)(param_3 + 0x50) == '\0')) {
          local_68 = '\0';
        }
        else {
          local_68 = '\x01';
          if (*(char *)(param_3 + 0x79) != '\0') {
            local_70 = param_6;
            local_78 = param_5;
            cVar10 = FUN_180035030(param_1,param_2,param_3 + 0x38,uVar4);
            iVar3 = local_64;
            if (cVar10 != '\0') goto LAB_1800355c0;
          }
        }
        puVar1 = *(undefined8 **)(param_3 + 0x28);
        for (puVar7 = *(undefined8 **)(param_3 + 0x20); puVar7 != puVar1; puVar7 = puVar7 + 4) {
          puVar9 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            puVar9 = (undefined8 *)*puVar7;
          }
          (*DAT_1803fafa0)(param_1,puVar9);
          (*DAT_1803faef0)(param_1,uVar4);
          iVar3 = (*DAT_1803faff8)(param_1,0xffffffff);
          if (iVar3 == 4) {
            local_60 = 0;
            lVar8 = (*DAT_1803fb008)(param_1,0xffffffff,&local_60);
            if ((lVar8 != 0) && (local_60 != 0)) {
              FUN_180212700(param_5,lVar8);
              cVar10 = '\x01';
            }
          }
          if (param_2 != (longlong *)0x0) {
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
               (param_2[1] == 0)) {
              (**(code **)(*param_2 + 0x10))(param_2,1);
            }
            else {
              iVar5 = (*DAT_1803fb088)();
              iVar3 = 0;
              if (-1 < iVar5 + -1) {
                iVar3 = iVar5 + -1;
              }
              (*DAT_1803faf10)(param_2[1],iVar3);
            }
          }
          iVar3 = local_64;
          if (cVar10 != '\0') goto LAB_1800355c0;
        }
        iVar3 = local_64;
        if ((local_68 != '\0') && (*(char *)(param_3 + 0x79) == '\0')) {
          local_70 = param_6;
          local_78 = param_5;
          cVar10 = FUN_180035030(param_1,param_2,param_3 + 0x38,uVar4);
          iVar3 = local_64;
        }
      }
LAB_1800355c0:
      do {
        if (param_2 != (longlong *)0x0) {
          if ((DAT_1803fb088 != (code *)0x0) && (param_2[1] != 0)) {
            iVar5 = (*DAT_1803fb088)();
            goto LAB_1800355ea;
          }
          iVar5 = (**(code **)*param_2)(param_2);
          goto LAB_1800355ea;
        }
        do {
          iVar5 = 0;
LAB_1800355ea:
          if (iVar5 <= iVar3) {
            return cVar10;
          }
        } while (param_2 == (longlong *)0x0);
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0))
        {
          (**(code **)(*param_2 + 0x10))(param_2,1);
        }
        else {
          iVar6 = (*DAT_1803fb088)();
          iVar5 = 0;
          if (-1 < iVar6 + -1) {
            iVar5 = iVar6 + -1;
          }
          (*DAT_1803faf10)(param_2[1],iVar5);
        }
      } while( true );
    }
    puVar1 = *(undefined8 **)(param_3 + 0x28);
    for (puVar7 = *(undefined8 **)(param_3 + 0x20); puVar7 != puVar1; puVar7 = puVar7 + 4) {
      puVar9 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar9 = (undefined8 *)*puVar7;
      }
      cVar10 = (*DAT_1803faf30)(param_4,puVar9,param_5);
      if ((cVar10 != '\0') && (param_5[2] != 0)) {
        return '\x01';
      }
    }
    param_5[2] = 0;
    if (0xf < (ulonglong)param_5[3]) {
      param_5 = (undefined8 *)*param_5;
    }
    *(undefined1 *)param_5 = 0;
  }
  return '\0';
}


