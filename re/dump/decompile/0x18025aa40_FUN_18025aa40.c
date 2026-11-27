// 0x18025aa40  FUN_18025aa40
// size=767 thunk=false
// signature: undefined FUN_18025aa40()
// status: ok


undefined8 FUN_18025aa40(longlong *param_1,ulonglong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  char local_88;
  char local_87;
  char local_86;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 *local_58;
  
  local_87 = (char)param_1[3];
  local_86 = *(char *)((longlong)param_2 + 0x17);
  local_60 = param_4 + 6;
  if (local_87 == local_86) {
    if ((char)*local_60 == '\0') {
      return 0;
    }
  }
  else {
    *(char *)(param_1 + 3) = local_86;
  }
  local_80 = param_4[7];
  lVar5 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar5) {
    do {
      local_78 = lVar6;
      FUN_18020abf0(lVar6);
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != lVar5);
    param_1[1] = *param_1;
  }
  local_78 = 0;
  uVar12 = local_80;
  if (local_80 != 0) {
    do {
      uVar7 = 0;
      plVar1 = (longlong *)(*param_4 + local_78 * 0x18);
      plVar14 = (longlong *)(*plVar1 * 0x60 + *param_3);
      if (*(char *)((longlong)plVar14 + 0x22) != '\x03') {
        if (((char)param_2[2] == '\0') ||
           (plVar2 = (longlong *)plVar14[8], plVar2 == (longlong *)0x0)) {
          uVar13 = plVar14[7];
          uVar8 = uVar7;
        }
        else {
          uVar7 = plVar1[1];
          lVar5 = *plVar2;
          if ((ulonglong)(plVar2[1] - lVar5 >> 5) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_180262180();
          }
          lVar6 = uVar7 * 0x20;
          uVar7 = *(ulonglong *)(lVar6 + 0x18 + lVar5);
          uVar13 = *(ulonglong *)(lVar6 + 0x10 + lVar5);
          uVar8 = *(ulonglong *)(lVar6 + lVar5);
        }
        puVar3 = (undefined8 *)param_1[1];
        local_70 = uVar7;
        if (puVar3 == (undefined8 *)param_1[2]) {
          lVar5 = FUN_180263b10(param_1);
          uVar12 = local_80;
        }
        else {
          puVar3[3] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          *(undefined4 *)(puVar3 + 3) = 0;
          lVar5 = param_1[1];
          param_1[1] = lVar5 + 0x20;
          local_58 = puVar3;
        }
        cVar10 = '\n';
        local_88 = '\n';
        uVar15 = uVar7;
        local_68 = uVar7;
        if (uVar7 < uVar13) {
          do {
            psVar9 = (short *)(uVar8 * 0x10 + *plVar14);
            uVar8 = uVar8 + 1;
            uVar11 = uVar7;
            if ((char)psVar9[1] != cVar10) {
              uVar12 = local_68;
              if ((uVar15 != uVar7) && (uVar11 = uVar15, uVar12 = uVar15, cVar10 != '\r')) {
                puVar4 = *(ulonglong **)(lVar5 + 8);
                if (puVar4 == *(ulonglong **)(lVar5 + 0x10)) {
                  FUN_180263d20(lVar5,puVar4,&local_68,&local_70,&local_88);
                }
                else {
                  *puVar4 = uVar7;
                  puVar4[1] = uVar15;
                  *(char *)(puVar4 + 2) = cVar10;
                  *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x18;
                }
              }
              local_68 = uVar12;
              cVar10 = (char)psVar9[1];
              local_88 = cVar10;
            }
            if (*psVar9 == 9) {
              lVar6 = *param_2 - uVar15 % *param_2;
            }
            else {
              lVar6 = 1;
            }
            local_70 = lVar6 + uVar15;
            uVar7 = uVar11;
            uVar15 = local_70;
          } while (local_70 < uVar13);
          uVar12 = local_80;
          if ((local_70 != uVar11) && (cVar10 != '\r')) {
            puVar4 = *(ulonglong **)(lVar5 + 8);
            if (puVar4 == *(ulonglong **)(lVar5 + 0x10)) {
              FUN_180263d20(lVar5,puVar4,&local_68,&local_70,&local_88);
              uVar12 = local_80;
            }
            else {
              *puVar4 = uVar11;
              puVar4[1] = local_70;
              *(char *)(puVar4 + 2) = cVar10;
              *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x18;
            }
          }
        }
      }
      local_78 = local_78 + 1;
    } while (local_78 < uVar12);
  }
  if ((local_87 == local_86) && ((char)*local_60 == '\0')) {
    return 0;
  }
  return 1;
}


