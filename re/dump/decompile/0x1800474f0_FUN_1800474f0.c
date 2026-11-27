// 0x1800474f0  FUN_1800474f0
// size=512 thunk=false
// signature: undefined FUN_1800474f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800474f0(char *param_1)

{
  longlong *plVar1;
  undefined8 ******ppppppuVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  size_t sVar6;
  longlong *plVar7;
  undefined8 *******pppppppuVar8;
  char cVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_88 [32];
  undefined8 ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == '\0') {
    return;
  }
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  sVar6 = strlen(param_1);
  FUN_18001d080(&local_68,param_1,sVar6);
  uVar4 = local_50;
  uVar3 = local_58;
  ppppppuVar2 = local_68;
  plVar1 = DAT_1805b88a8;
  plVar11 = (longlong *)DAT_1805b88a8[1];
  cVar9 = *(char *)((longlong)plVar11 + 0x19);
  plVar13 = DAT_1805b88a8;
  while (cVar9 == '\0') {
    plVar7 = plVar11 + 4;
    pppppppuVar8 = &local_68;
    if (0xf < uVar4) {
      pppppppuVar8 = (undefined8 *******)ppppppuVar2;
    }
    uVar10 = plVar11[6];
    if (0xf < (ulonglong)plVar11[7]) {
      plVar7 = (longlong *)*plVar7;
    }
    uVar12 = uVar10;
    if (uVar3 < uVar10) {
      uVar12 = uVar3;
    }
    iVar5 = memcmp(plVar7,pppppppuVar8,uVar12);
    if (iVar5 == 0) {
      if (uVar10 < uVar3) {
        cVar9 = -1;
      }
      else {
        if (uVar3 < uVar10) goto LAB_1800475c3;
        cVar9 = '\0';
        plVar13 = plVar11;
      }
    }
    else if (iVar5 < 0) {
      cVar9 = -1;
    }
    else {
LAB_1800475c3:
      cVar9 = '\x01';
      plVar13 = plVar11;
    }
    plVar7 = plVar11 + 2;
    if (-1 < cVar9) {
      plVar7 = plVar11;
    }
    plVar11 = (longlong *)*plVar7;
    cVar9 = *(char *)((longlong)plVar11 + 0x19);
  }
  if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
    plVar11 = plVar13 + 4;
    uVar10 = plVar13[6];
    if (0xf < (ulonglong)plVar13[7]) {
      plVar11 = (longlong *)*plVar11;
    }
    pppppppuVar8 = &local_68;
    if (0xf < uVar4) {
      pppppppuVar8 = (undefined8 *******)ppppppuVar2;
    }
    uVar12 = uVar3;
    if (uVar10 < uVar3) {
      uVar12 = uVar10;
    }
    iVar5 = memcmp(pppppppuVar8,plVar11,uVar12);
    if (iVar5 == 0) {
      if (uVar10 <= uVar3) goto LAB_180047624;
    }
    else if (-1 < iVar5) goto LAB_180047624;
  }
  plVar13 = plVar1;
LAB_180047624:
  if ((plVar13 == plVar1) && (fVar14 = (float)FUN_180047090(&local_68), fVar14 == 0.0)) {
    uVar10 = uVar3;
    if (uVar3 != 0) {
      while( true ) {
        pppppppuVar8 = &local_68;
        if (0xf < uVar4) {
          pppppppuVar8 = (undefined8 *******)ppppppuVar2;
        }
        if (*(char *)((longlong)pppppppuVar8 + (uVar10 - 1)) < '0') break;
        pppppppuVar8 = &local_68;
        if (0xf < uVar4) {
          pppppppuVar8 = (undefined8 *******)ppppppuVar2;
        }
        if (('9' < *(char *)((longlong)pppppppuVar8 + (uVar10 - 1))) ||
           (uVar10 = uVar10 - 1, uVar10 == 0)) break;
      }
    }
    if ((uVar10 < uVar3) && (uVar10 != 0)) {
      pppppppuVar8 = &local_68;
      if (0xf < uVar4) {
        pppppppuVar8 = (undefined8 *******)ppppppuVar2;
      }
      atoi((char *)(uVar10 + (longlong)pppppppuVar8));
    }
  }
  FUN_18020e450(&local_68);
  return;
}


