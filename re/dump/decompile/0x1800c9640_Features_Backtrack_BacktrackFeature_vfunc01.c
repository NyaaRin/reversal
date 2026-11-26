// 0x1800c9640  Features_Backtrack_BacktrackFeature_vfunc01
// size=711 thunk=false
// signature: undefined Features_Backtrack_BacktrackFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Backtrack_BacktrackFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  DAT_1803fb0d0 = param_3;
  FUN_1800c93d0();
  local_30 = 0x13806d9e35de0023;
  local_28 = 0x402819404e703058;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_78,&local_30);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,&local_60,&local_28);
  pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
  if ((*pcVar6 != '\0') || (cVar4 = FUN_1800b8200(), cVar4 != '\0')) {
    uVar1 = DAT_1803fac58 + DAT_1803fac60;
    plVar5 = DAT_1803fac40;
    for (uVar11 = DAT_1803fac58; DAT_1803fac40 = plVar5, uVar11 != uVar1; uVar11 = uVar11 + 1) {
      plVar5 = *(longlong **)(DAT_1803fac48 + (DAT_1803fac50 - 1U & uVar11) * 8);
      lVar10 = plVar5[1];
      lVar8 = *plVar5;
      if (lVar8 != lVar10) {
        do {
          cVar4 = FUN_1800c5f70(lVar8);
          if (cVar4 == '\0') break;
          lVar8 = lVar8 + 0x1868;
        } while (lVar8 != lVar10);
        if (lVar8 != lVar10) {
          lVar9 = lVar8 + 0x1868;
          if (lVar9 != lVar10) {
            do {
              cVar4 = FUN_1800c5f70(lVar9);
              if (cVar4 != '\0') {
                FUN_1800c7dd0(lVar8,lVar9);
                lVar8 = lVar8 + 0x1868;
              }
              lVar9 = lVar9 + 0x1868;
            } while (lVar9 != lVar10);
            if (lVar8 == lVar10) goto LAB_1800c97d2;
          }
          lVar9 = plVar5[1];
          if (lVar10 != lVar9) {
            do {
              FUN_1800c7dd0(lVar8,lVar10);
              lVar8 = lVar8 + 0x1868;
              lVar10 = lVar10 + 0x1868;
            } while (lVar10 != lVar9);
          }
          plVar5[1] = lVar8;
        }
      }
LAB_1800c97d2:
      plVar5 = DAT_1803fac40;
    }
    uVar1 = DAT_1803fac58 + DAT_1803fac60;
    lVar10 = 0;
    if (plVar5 != (longlong *)0x0) {
      lVar10 = *plVar5;
    }
    uVar11 = DAT_1803fac58;
    if (DAT_1803fac58 != uVar1) {
      do {
        plVar2 = *(longlong **)
                  (*(longlong *)(lVar10 + 8) + (*(longlong *)(lVar10 + 0x10) - 1U & uVar11) * 8);
        if (plVar2[1] == *plVar2) break;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar1);
      uVar3 = uVar11;
      if (uVar11 != uVar1) {
        while (uVar3 = uVar3 + 1, uVar3 != uVar1) {
          lVar8 = *(longlong *)(lVar10 + 8);
          plVar2 = *(longlong **)(lVar8 + (*(longlong *)(lVar10 + 0x10) - 1U & uVar3) * 8);
          if (plVar2[1] != *plVar2) {
            uVar7 = *(longlong *)(lVar10 + 0x10) - 1;
            FUN_180220390(*(undefined8 *)(lVar8 + (uVar7 & uVar11) * 8),
                          *(undefined8 *)(lVar8 + (uVar7 & uVar3) * 8));
            uVar11 = uVar11 + 1;
          }
        }
      }
    }
    local_58 = 0;
    local_70 = 0;
    local_78 = plVar5;
    local_68 = uVar11;
    local_60 = plVar5;
    local_50 = uVar1;
    FUN_18022cfe0();
  }
  return;
}


