// 0x1800397e0  FUN_1800397e0
// size=609 thunk=false
// signature: undefined FUN_1800397e0()
// status: ok


void FUN_1800397e0(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 ****ppppuVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 ***local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_88 = (undefined8 ****)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_18001d080(&local_88,"Hook_Call",9);
  uVar12 = local_70;
  uVar4 = local_78;
  pppuVar3 = local_88;
  plVar2 = DAT_1805c7c10;
  plVar9 = (longlong *)DAT_1805c7c10[1];
  cVar7 = *(char *)((longlong)plVar9 + 0x19);
  plVar10 = DAT_1805c7c10;
  while (cVar7 == '\0') {
    plVar6 = plVar9 + 4;
    ppppuVar8 = &local_88;
    if (0xf < uVar12) {
      ppppuVar8 = (undefined8 ****)pppuVar3;
    }
    uVar1 = plVar9[6];
    if (0xf < (ulonglong)plVar9[7]) {
      plVar6 = (longlong *)*plVar6;
    }
    uVar11 = uVar1;
    if (uVar4 < uVar1) {
      uVar11 = uVar4;
    }
    iVar5 = memcmp(plVar6,ppppuVar8,uVar11);
    if (iVar5 == 0) {
      if (uVar1 < uVar4) {
        cVar7 = -1;
      }
      else {
        if (uVar4 < uVar1) goto LAB_180039884;
        cVar7 = '\0';
        plVar10 = plVar9;
      }
    }
    else if (iVar5 < 0) {
      cVar7 = -1;
    }
    else {
LAB_180039884:
      cVar7 = '\x01';
      plVar10 = plVar9;
    }
    plVar6 = plVar9 + 2;
    if (-1 < cVar7) {
      plVar6 = plVar9;
    }
    plVar9 = (longlong *)*plVar6;
    cVar7 = *(char *)((longlong)plVar9 + 0x19);
  }
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    plVar9 = plVar10 + 4;
    uVar1 = plVar10[6];
    if (0xf < (ulonglong)plVar10[7]) {
      plVar9 = (longlong *)*plVar9;
    }
    ppppuVar8 = &local_88;
    if (0xf < uVar12) {
      ppppuVar8 = (undefined8 ****)pppuVar3;
    }
    uVar12 = uVar4;
    if (uVar1 < uVar4) {
      uVar12 = uVar1;
    }
    iVar5 = memcmp(ppppuVar8,plVar9,uVar12);
    if (iVar5 == 0) {
      if (uVar4 < uVar1) goto LAB_1800398e1;
    }
    else if (iVar5 < 0) goto LAB_1800398e1;
  }
  else {
LAB_1800398e1:
    plVar10 = plVar2;
  }
  FUN_18020e450(&local_88);
  if ((plVar10 == DAT_1805c7c10) || (plVar10[8] == plVar10[9])) {
    DAT_1803ff954 = 0;
  }
  else {
    DAT_1803ff954 = 1;
  }
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_18001d080(&local_68,"Net_Receive",0xb);
  uVar12 = local_50;
  uVar4 = local_58;
  pppuVar3 = local_68;
  plVar2 = DAT_1805c7c10;
  plVar9 = (longlong *)DAT_1805c7c10[1];
  cVar7 = *(char *)((longlong)plVar9 + 0x19);
  plVar10 = DAT_1805c7c10;
  while (cVar7 == '\0') {
    plVar6 = plVar9 + 4;
    ppppuVar8 = &local_68;
    if (0xf < uVar12) {
      ppppuVar8 = (undefined8 ****)pppuVar3;
    }
    uVar1 = plVar9[6];
    if (0xf < (ulonglong)plVar9[7]) {
      plVar6 = (longlong *)*plVar6;
    }
    uVar11 = uVar1;
    if (uVar4 < uVar1) {
      uVar11 = uVar4;
    }
    iVar5 = memcmp(plVar6,ppppuVar8,uVar11);
    if (iVar5 == 0) {
      if (uVar1 < uVar4) {
        cVar7 = -1;
      }
      else {
        if (uVar4 < uVar1) goto LAB_1800399a3;
        cVar7 = '\0';
        plVar10 = plVar9;
      }
    }
    else if (iVar5 < 0) {
      cVar7 = -1;
    }
    else {
LAB_1800399a3:
      cVar7 = '\x01';
      plVar10 = plVar9;
    }
    plVar6 = plVar9 + 2;
    if (-1 < cVar7) {
      plVar6 = plVar9;
    }
    plVar9 = (longlong *)*plVar6;
    cVar7 = *(char *)((longlong)plVar9 + 0x19);
  }
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    plVar9 = plVar10 + 4;
    uVar1 = plVar10[6];
    if (0xf < (ulonglong)plVar10[7]) {
      plVar9 = (longlong *)*plVar9;
    }
    ppppuVar8 = &local_68;
    if (0xf < uVar12) {
      ppppuVar8 = (undefined8 ****)pppuVar3;
    }
    uVar12 = uVar4;
    if (uVar1 < uVar4) {
      uVar12 = uVar1;
    }
    iVar5 = memcmp(ppppuVar8,plVar9,uVar12);
    if (iVar5 == 0) {
      if (uVar1 <= uVar4) goto LAB_180039a03;
    }
    else if (-1 < iVar5) goto LAB_180039a03;
  }
  plVar10 = plVar2;
LAB_180039a03:
  FUN_18020e450(&local_68);
  if ((plVar10 == DAT_1805c7c10) || (plVar10[8] == plVar10[9])) {
    DAT_1803ffb90 = 0;
  }
  else {
    DAT_1803ffb90 = 1;
  }
  return;
}


