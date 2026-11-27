// 0x18021f0c0  FUN_18021f0c0
// size=482 thunk=false
// signature: undefined FUN_18021f0c0()
// status: ok


void FUN_18021f0c0(longlong *param_1,void *param_2,longlong param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar14 = param_3 - (longlong)param_2 >> 2;
  if (uVar14 != 0) {
    uVar13 = param_1[1] - *param_1 >> 2;
    if (uVar14 < 0x26f) {
      if (uVar14 < 0x44) {
        if (uVar14 < 0x27) {
          if (uVar14 < 7) {
            uVar6 = uVar14 - 1 >> 1;
          }
          else {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 5;
        }
      }
      else {
        uVar6 = 7;
      }
    }
    else {
      uVar6 = 0xb;
    }
    uVar17 = uVar14 - uVar6 >> 1;
    uVar18 = uVar13 + 1;
    if (uVar13 < uVar14) {
      uVar18 = uVar14;
    }
    memset(param_2,-0x74747475,uVar14 << 2);
    uVar8 = 0;
    if (uVar18 != 0) {
      do {
        uVar10 = (uVar8 + uVar17) % uVar14;
        uVar3 = *(uint *)((longlong)param_2 + uVar10 * 4);
        uVar11 = uVar8 % uVar14;
        puVar1 = (uint *)((longlong)param_2 + uVar11 * 4);
        uVar15 = uVar3 ^ *(uint *)((longlong)param_2 + ((uVar8 - 1) % uVar14) * 4) ^ *puVar1;
        iVar9 = (uVar15 >> 0x1b ^ uVar15) * 0x19660d;
        uVar7 = uVar13;
        if ((uVar8 != 0) && (uVar7 = uVar11, uVar8 <= uVar13)) {
          uVar7 = *(uint *)(*param_1 + -4 + uVar8 * 4) + uVar11;
        }
        uVar15 = (int)uVar7 + iVar9;
        *(uint *)((longlong)param_2 + uVar10 * 4) = uVar3 + iVar9;
        uVar7 = uVar8 + uVar17 + uVar6;
        uVar8 = uVar8 + 1;
        piVar2 = (int *)((longlong)param_2 + (uVar7 % uVar14) * 4);
        *piVar2 = *piVar2 + uVar15;
        *puVar1 = uVar15;
      } while (uVar8 < uVar18);
    }
    for (; uVar8 < uVar18 + uVar14; uVar8 = uVar8 + 1) {
      uVar13 = (uVar8 + uVar17) % uVar14;
      uVar3 = *(uint *)((longlong)param_2 + uVar13 * 4);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar14;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar8;
      lVar12 = SUB168(auVar5 % auVar4,0);
      uVar15 = *(int *)((longlong)param_2 + ((uVar8 - 1) % uVar14) * 4) + uVar3 +
               *(int *)((longlong)param_2 + lVar12 * 4);
      uVar15 = (uVar15 >> 0x1b ^ uVar15) * 0x5d588b65;
      uVar16 = uVar15 - SUB164(auVar5 % auVar4,0);
      *(uint *)((longlong)param_2 + uVar13 * 4) = uVar3 ^ uVar15;
      puVar1 = (uint *)((longlong)param_2 + ((uVar8 + uVar17 + uVar6) % uVar14) * 4);
      *puVar1 = *puVar1 ^ uVar16;
      *(uint *)((longlong)param_2 + lVar12 * 4) = uVar16;
    }
  }
  return;
}


