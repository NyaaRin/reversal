// 0x180173b20  FUN_180173b20
// size=642 thunk=false
// signature: undefined FUN_180173b20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180173b20(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int local_res10 [2];
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar8 = DAT_1803fb100;
  if (DAT_1803fa5f8 != (undefined8 *)0x0) {
    for (; (plVar8 != DAT_1803fb108 && ((undefined8 *)*plVar8 != DAT_1803fa5f8));
        plVar8 = plVar8 + 1) {
    }
    if (plVar8 != DAT_1803fb108) {
      local_54 = (int)((longlong)DAT_1803fb108 - (longlong)DAT_1803fb100 >> 3);
      local_58 = 0;
      piVar6 = &local_58;
      if (-1 < param_2) {
        piVar6 = local_res10;
      }
      piVar5 = &local_54;
      if (param_2 <= local_54) {
        piVar5 = piVar6;
      }
      iVar4 = *piVar5;
      iVar7 = (int)((longlong)plVar8 - (longlong)DAT_1803fb100 >> 3);
      if (iVar7 < iVar4) {
        iVar4 = iVar4 + -1;
      }
      if (iVar4 != iVar7) {
        puVar10 = (undefined8 *)*plVar8;
        *plVar8 = 0;
        plVar9 = DAT_1803fb108;
        local_48 = puVar10;
        local_res10[0] = iVar4;
        plVar1 = plVar8;
        while (plVar1 = plVar1 + 1, plVar1 != plVar9) {
          lVar2 = *plVar1;
          *plVar1 = 0;
          puVar3 = (undefined8 *)*plVar8;
          *plVar8 = lVar2;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          plVar8 = plVar8 + 1;
        }
        puVar3 = (undefined8 *)DAT_1803fb108[-1];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        plVar8 = DAT_1803fb108 + -1;
        local_4c = (int)((longlong)plVar8 - (longlong)DAT_1803fb100 >> 3);
        local_50 = 0;
        piVar6 = &local_50;
        if (-1 < iVar4) {
          piVar6 = local_res10;
        }
        piVar5 = &local_4c;
        if (iVar4 <= local_4c) {
          piVar5 = piVar6;
        }
        plVar1 = DAT_1803fb100 + *piVar5;
        DAT_1803fa5f8 = puVar10;
        if (plVar8 == DAT_1803fb110) {
          DAT_1803fb108 = plVar8;
          FUN_180222800((longlong)*piVar5,plVar1,&local_48);
          puVar10 = local_48;
        }
        else {
          local_48 = (undefined8 *)0x0;
          if (plVar1 == plVar8) {
            DAT_1803fb108 = plVar8;
            *plVar8 = (longlong)puVar10;
            DAT_1803fb108 = DAT_1803fb108 + 1;
            puVar10 = local_48;
          }
          else {
            local_40 = &DAT_1803fb100;
            plVar9 = DAT_1803fb108 + -2;
            lVar2 = *plVar9;
            DAT_1803fb108 = plVar8;
            *plVar9 = 0;
            *plVar8 = lVar2;
            DAT_1803fb108 = DAT_1803fb108 + 1;
            while (plVar9 != plVar1) {
              plVar9 = plVar9 + -1;
              plVar8 = plVar8 + -1;
              lVar2 = *plVar9;
              *plVar9 = 0;
              puVar3 = (undefined8 *)*plVar8;
              *plVar8 = lVar2;
              if (puVar3 != (undefined8 *)0x0) {
                local_38 = puVar10;
                (**(code **)*puVar3)(puVar3,1);
                puVar10 = local_38;
              }
            }
            local_38 = (undefined8 *)0x0;
            puVar3 = (undefined8 *)*plVar1;
            *plVar1 = (longlong)puVar10;
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,1);
            }
            puVar10 = (undefined8 *)0x0;
            if (local_38 != (undefined8 *)0x0) {
              (**(code **)*local_38)(local_38,1);
              puVar10 = (undefined8 *)0x0;
            }
          }
        }
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
    }
  }
  return;
}


