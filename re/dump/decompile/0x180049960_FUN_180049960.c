// 0x180049960  FUN_180049960
// size=638 thunk=false
// signature: undefined FUN_180049960()
// status: ok


void FUN_180049960(char *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  size_t sVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 ***local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40 [3];
  
  if ((DAT_18042cd68 & 1) == 0) {
    DAT_18042cd68 = DAT_18042cd68 | 1;
    DAT_180427620 = (undefined8 *)0x0;
    DAT_180427628 = 0;
    DAT_180427620 = (undefined8 *)FUN_1802d8350(0x48);
    *DAT_180427620 = DAT_180427620;
    DAT_180427620[1] = DAT_180427620;
    DAT_180427620[2] = DAT_180427620;
    *(undefined2 *)(DAT_180427620 + 3) = 0x101;
    atexit(FUN_1803091b0);
  }
  local_b0 = (undefined8 ****)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  sVar5 = strlen(param_1);
  FUN_18001d080(&local_b0,param_1,sVar5);
  uVar3 = local_a0;
  local_90 = (undefined8 *)DAT_180427620[1];
  local_88 = 0;
  local_80 = DAT_180427620;
  bVar2 = true;
  puVar7 = local_90;
  puVar12 = DAT_180427620;
LAB_180049a2f:
  do {
    puVar9 = puVar7;
    if (*(char *)((longlong)puVar9 + 0x19) != '\0') break;
    puVar7 = puVar9 + 4;
    ppppuVar8 = &local_b0;
    if (0xf < local_98) {
      ppppuVar8 = (undefined8 ****)local_b0;
    }
    uVar1 = puVar9[6];
    if (0xf < (ulonglong)puVar9[7]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    local_58 = uVar3;
    uVar10 = uVar1;
    if (uVar3 < uVar1) {
      uVar10 = uVar3;
    }
    local_90 = puVar9;
    local_50 = uVar1;
    iVar4 = memcmp(puVar7,ppppuVar8,uVar10);
    if (iVar4 == 0) {
      if (uVar1 < uVar3) {
        cVar11 = -1;
        goto LAB_180049aae;
      }
      if (uVar3 < uVar1) goto LAB_180049aa5;
    }
    else {
      if (iVar4 < 0) {
        cVar11 = -1;
      }
      else {
LAB_180049aa5:
        cVar11 = '\x01';
      }
LAB_180049aae:
      if (cVar11 < '\0') {
        local_88 = 0;
        puVar7 = (undefined8 *)puVar9[2];
        goto LAB_180049a2f;
      }
    }
    local_88 = 1;
    puVar7 = (undefined8 *)*puVar9;
    puVar12 = puVar9;
    local_80 = puVar9;
  } while( true );
  if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
    puVar7 = puVar12 + 4;
    uVar1 = puVar12[6];
    if (0xf < (ulonglong)puVar12[7]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    ppppuVar8 = &local_b0;
    if (0xf < local_98) {
      ppppuVar8 = (undefined8 ****)local_b0;
    }
    local_40[0] = uVar3;
    uVar10 = uVar3;
    if (uVar1 < uVar3) {
      uVar10 = uVar1;
    }
    local_48 = uVar1;
    iVar4 = memcmp(ppppuVar8,puVar7,uVar10);
    if (iVar4 == 0) {
      if (uVar1 <= uVar3) {
        if (uVar3 <= uVar1) goto LAB_180049b4b;
        goto LAB_180049b3b;
      }
      cVar11 = -1;
    }
    else if (iVar4 < 0) {
      cVar11 = -1;
    }
    else {
LAB_180049b3b:
      cVar11 = '\x01';
    }
    if (-1 < cVar11) goto LAB_180049b4b;
  }
  bVar2 = false;
LAB_180049b4b:
  FUN_18020e450(&local_b0);
  if (!bVar2) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    sVar5 = strlen(param_1);
    uVar13 = FUN_18001d080(&local_78,param_1,sVar5);
    plVar6 = (longlong *)FUN_1802180a0(uVar13,local_40,&local_78);
    *(undefined1 *)(*plVar6 + 0x40) = 1;
    FUN_18020e450(&local_78);
    FUN_180014410("[LUAIMGUI] %s\n",param_1);
  }
  return;
}


