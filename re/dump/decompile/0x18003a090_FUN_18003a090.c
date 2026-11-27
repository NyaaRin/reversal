// 0x18003a090  FUN_18003a090
// size=633 thunk=false
// signature: undefined FUN_18003a090()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18003a090(char *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 ******ppppppuVar6;
  ulonglong uVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  ulonglong in_RAX;
  size_t sVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong _Size;
  ulonglong uVar17;
  undefined8 ******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  DVar4 = DAT_1803ff984;
  if ((param_1 == (char *)0x0) || (DAT_1805c7c18 == 0)) goto LAB_18003a1bf;
  if ((DAT_1803ff984 != 0) && (DVar9 = GetCurrentThreadId(), DVar4 != DVar9)) {
    if ((DAT_1805c51e0 & 1) == 0) {
      DAT_1805c51e0 = DAT_1805c51e0 | 1;
      _DAT_180429098 = 0;
      _DAT_1804290a0 = 0;
      _DAT_180429098 = FUN_1802d8350(0x48);
      *(longlong *)_DAT_180429098 = _DAT_180429098;
      *(longlong *)(_DAT_180429098 + 8) = _DAT_180429098;
      *(longlong *)(_DAT_180429098 + 0x10) = _DAT_180429098;
      *(undefined2 *)(_DAT_180429098 + 0x18) = 0x101;
      atexit(FUN_180309080);
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    sVar11 = strlen(param_1);
    FUN_18001d080(&local_58,param_1,sVar11);
    plVar12 = (longlong *)FUN_1802184d0(&DAT_180429098,local_38,&local_58);
    lVar2 = *plVar12;
    FUN_18020e450(&local_58);
    piVar1 = (int *)(lVar2 + 0x40);
    *piVar1 = *piVar1 + 1;
    iVar10 = *(int *)(lVar2 + 0x40);
    if ((iVar10 < 4) ||
       (in_RAX = (ulonglong)(uint)-(iVar10 >> 0x1f), iVar10 == (iVar10 / 500) * 500)) {
      in_RAX = FUN_180014410("[LUAAPI] \'%s\' fired off the game thread (#%d) -- skipped. Its call site needs to move to the game thread.\n"
                             ,param_1);
    }
    goto LAB_18003a1bf;
  }
  local_78 = (undefined8 *******)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  sVar11 = strlen(param_1);
  FUN_18001d080(&local_78,param_1,sVar11);
  uVar17 = local_60;
  uVar7 = local_68;
  ppppppuVar6 = local_78;
  puVar5 = DAT_1805c7c10;
  cVar8 = *(char *)((longlong)DAT_1805c7c10[1] + 0x19);
  puVar13 = (undefined8 *)DAT_1805c7c10[1];
  puVar16 = DAT_1805c7c10;
  while (puVar15 = puVar13, cVar8 == '\0') {
    puVar13 = puVar15 + 4;
    pppppppuVar14 = &local_78;
    if (0xf < uVar17) {
      pppppppuVar14 = (undefined8 *******)ppppppuVar6;
    }
    uVar3 = puVar15[6];
    if (0xf < (ulonglong)puVar15[7]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    _Size = uVar3;
    if (uVar7 < uVar3) {
      _Size = uVar7;
    }
    iVar10 = memcmp(puVar13,pppppppuVar14,_Size);
    if (iVar10 == 0) {
      if (uVar3 < uVar7) {
        cVar8 = -1;
        goto LAB_18003a275;
      }
      if (uVar7 < uVar3) goto LAB_18003a273;
LAB_18003a27f:
      puVar13 = (undefined8 *)*puVar15;
    }
    else {
      if (iVar10 < 0) {
        cVar8 = -1;
      }
      else {
LAB_18003a273:
        cVar8 = '\x01';
      }
LAB_18003a275:
      if (-1 < cVar8) goto LAB_18003a27f;
      puVar13 = (undefined8 *)puVar15[2];
      puVar15 = puVar16;
    }
    cVar8 = *(char *)((longlong)puVar13 + 0x19);
    puVar16 = puVar15;
  }
  if (*(char *)((longlong)puVar16 + 0x19) == '\0') {
    puVar13 = puVar16 + 4;
    uVar3 = puVar16[6];
    if (0xf < (ulonglong)puVar16[7]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    pppppppuVar14 = &local_78;
    if (0xf < uVar17) {
      pppppppuVar14 = (undefined8 *******)ppppppuVar6;
    }
    uVar17 = uVar7;
    if (uVar3 < uVar7) {
      uVar17 = uVar3;
    }
    iVar10 = memcmp(pppppppuVar14,puVar13,uVar17);
    if (iVar10 == 0) {
      if (uVar7 < uVar3) {
        cVar8 = -1;
        goto LAB_18003a2d6;
      }
      if (uVar3 < uVar7) goto LAB_18003a2d4;
    }
    else {
      if (iVar10 < 0) {
        cVar8 = -1;
      }
      else {
LAB_18003a2d4:
        cVar8 = '\x01';
      }
LAB_18003a2d6:
      if (cVar8 < '\0') goto LAB_18003a2da;
    }
  }
  else {
LAB_18003a2da:
    puVar16 = puVar5;
  }
  in_RAX = FUN_18020e450(&local_78);
  if ((puVar16 != DAT_1805c7c10) && (in_RAX = puVar16[9], puVar16[8] != in_RAX)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_18003a1bf:
  return in_RAX & 0xffffffffffffff00;
}


