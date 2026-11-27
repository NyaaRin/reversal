// 0x180171430  FUN_180171430
// size=901 thunk=false
// signature: undefined FUN_180171430()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_180171430(int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  float *pfVar14;
  void *pvVar15;
  undefined8 ****ppppuVar16;
  longlong lVar17;
  char cVar18;
  ulonglong uVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 ***local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_128;
  float local_118 [2];
  undefined1 local_110 [8];
  undefined8 ***local_108 [3];
  ulonglong local_f0;
  ulonglong local_e8;
  
  plVar10 = DAT_1803fb108;
  uVar9 = DAT_180381384;
  uVar8 = DAT_180381308;
  fVar7 = DAT_180380d30;
  fVar6 = DAT_180380bb0;
  fVar5 = DAT_180380ba8;
  fVar4 = DAT_180380b6c;
  fVar3 = DAT_1803809e4;
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  if ((param_1 - 2U < 2) || (param_1 - 9U < 4)) {
    fVar21 = 0.0;
    if ((param_1 == 2) || (param_1 - 9U < 2)) {
      cVar18 = '\x01';
    }
    else {
      cVar18 = '\0';
    }
    if (DAT_1803fb100 != DAT_1803fb108) {
      uVar19 = (ulonglong)_tls_index;
      pvVar15 = ThreadLocalStoragePointer;
      plVar20 = DAT_1803fb100;
      do {
        plVar1 = (longlong *)*plVar20;
        if (((*(char *)((longlong)plVar1 + 0x14) != '\0') &&
            (((DAT_1803fcb80 != '\0' ||
              (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar1 + 0x16) != '\0')) &&
               ((*(char *)((longlong)plVar1 + 0x15) == '\0' ||
                (DAT_1803fcb68 <= *(float *)(plVar1 + 3))))))) &&
             (cVar11 = (**(code **)(*plVar1 + 0x38))(plVar1), cVar11 != '\0')))) &&
           (((iVar12 = (**(code **)(*plVar1 + 8))(plVar1), iVar12 == 4 || (iVar12 == 7)) &&
            ((iVar12 = (**(code **)(*plVar1 + 8))(plVar1), iVar12 != 7 || (plVar1[0x16] == 0)))))) {
          iVar12 = (int)plVar1[1];
          if ((iVar12 == 2) || (iVar12 - 9U < 2)) {
            cVar11 = '\x01';
          }
          else {
            if (((iVar12 - 3U & 0xfffffff6) != 0) || (iVar12 == 4)) goto LAB_180171749;
            cVar11 = '\0';
          }
          if (cVar18 == cVar11) {
            lVar17 = *plVar1;
            pcVar2 = *(code **)(lVar17 + 0x10);
            switch(iVar12) {
            default:
switchD_180171604_caseD_2:
              if ((*(char *)((longlong)plVar1 + 0x71) == '\0') ||
                 (iVar12 = FUN_18016aed0(plVar1), iVar12 == 0)) goto switchD_180171604_caseD_0;
              uVar13 = (**(code **)(lVar17 + 0x60))(plVar1);
              FUN_180013ba0(local_108,uVar13);
              ppppuVar16 = local_108;
              if (0xf < local_f0) {
                ppppuVar16 = (undefined8 ****)local_108[0];
              }
              lVar17 = *(longlong *)((longlong)pvVar15 + uVar19 * 8);
              if (*(char *)(lVar17 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              if (ppppuVar16 == (undefined8 ****)0x0) {
                fVar24 = 0.0;
              }
              else {
                lVar17 = *(longlong *)(lVar17 + 0xec0);
                local_128 = 0;
                local_138 = 0;
                local_140 = 0;
                local_148 = 0;
                local_158 = uVar9;
                local_150 = ppppuVar16;
                FUN_18029e350(local_118,*(undefined8 *)(lVar17 + 0x1228),
                              *(undefined4 *)(lVar17 + 0x1238),uVar8);
                fVar24 = (float)(int)(local_118[0] + fVar5);
                local_118[0] = fVar24;
              }
              fVar23 = fVar6;
              if (((DAT_1803fcb80 == '\0') &&
                  (fVar22 = DAT_1803fcb6c * fVar3 + fVar4, fVar23 = fVar4, fVar4 <= fVar22)) &&
                 (fVar23 = fVar6, fVar22 <= fVar6)) {
                fVar23 = fVar22;
              }
              fVar24 = fVar24 * fVar23 + fVar7;
              FUN_18020e450(local_108);
              pvVar15 = ThreadLocalStoragePointer;
              break;
            case 8:
              if ((char)plVar1[0xe] != '\0') goto switchD_180171604_caseD_2;
            case 0:
            case 1:
            case 4:
            case 5:
            case 6:
            case 7:
switchD_180171604_caseD_0:
              fVar24 = 0.0;
            }
            pfVar14 = (float *)(*pcVar2)(plVar1,local_110);
            fVar21 = fVar21 + *pfVar14 + fVar6 + fVar24;
          }
        }
LAB_180171749:
        plVar20 = plVar20 + 1;
      } while (plVar20 != plVar10);
    }
  }
  else {
    fVar21 = 0.0;
  }
  return fVar21;
}


