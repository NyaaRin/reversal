// 0x1801177f0  FUN_1801177f0
// size=1186 thunk=false
// signature: undefined FUN_1801177f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1801177f0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  ULONGLONG UVar3;
  longlong *plVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  void *_Memory;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  char cVar15;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  longlong local_88;
  void *local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_50;
  
  puVar10 = auStack_a8;
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if (DAT_1803fa608 == 0) {
    UVar3 = GetTickCount64();
    iVar14 = (int)(UVar3 >> 4);
  }
  else {
    iVar14 = *(int *)(DAT_1803fa608 + 4);
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_88 = lVar9;
  for (plVar4 = (longlong *)(lVar9 + 0x180); plVar4 != (longlong *)(lVar9 + 0xd80);
      plVar4 = plVar4 + 3) {
    if ((((*plVar4 == param_1) && (plVar4[1] == param_2)) && ((int)plVar4[2] == iVar14)) &&
       (param_2 != 0)) {
      cVar15 = *(char *)((longlong)plVar4 + 0x14);
      puVar10 = auStack_a8;
      goto LAB_180117c74;
    }
  }
  cVar15 = '\0';
  if ((DAT_18042a8d0 & 1) == 0) {
    DAT_18042a8d0 = DAT_18042a8d0 | 1;
    pHVar5 = GetModuleHandleA("lua_shared.dll");
    DAT_1805c5a10 = GetProcAddress(pHVar5,"lua_dump");
  }
  if ((DAT_18042a8d0 & 2) == 0) {
    DAT_18042a8d0 = DAT_18042a8d0 | 2;
    pHVar5 = GetModuleHandleA("lua_shared.dll");
    DAT_1805c7c60 = GetProcAddress(pHVar5,"lua_getupvalue");
  }
  if ((DAT_18042a8d0 & 4) == 0) {
    DAT_18042a8d0 = DAT_18042a8d0 | 4;
    pHVar5 = GetModuleHandleA("lua_shared.dll");
    DAT_18042bce0 = GetProcAddress(pHVar5,"lua_tocfunction");
  }
  puVar2 = auStack_a8;
  if (DAT_1805c5a10 != (FARPROC)0x0) {
    local_68 = (void *)0x0;
    lStack_60 = 0;
    lVar11 = 0;
    local_58 = 0;
    IVar6 = (*DAT_1805c5a10)(param_1,FUN_180117780,&local_68);
    if ((int)IVar6 == 0) {
      uVar13 = lStack_60 - (longlong)local_68;
      lVar12 = lVar11;
      if (5 < uVar13) {
        do {
          if ((*(int *)((longlong)local_68 + lVar12) == 0x646e6572) &&
             (*(short *)((longlong)local_68 + lVar12 + 4) == 0x7265)) {
            lVar12 = lVar11;
            if (6 < uVar13) goto LAB_180117a00;
            goto LAB_180117a2e;
          }
          uVar7 = lVar12 + 7;
          lVar12 = lVar12 + 1;
        } while (uVar7 <= (ulonglong)(lStack_60 - (longlong)local_68));
      }
      goto LAB_1801179a6;
    }
    goto LAB_1801179a9;
  }
  goto LAB_180117aa3;
LAB_180117a75:
  cVar15 = '\x01';
  goto LAB_1801179a9;
  while (uVar7 = lVar12 + 8, lVar12 = lVar12 + 1,
        uVar7 <= (ulonglong)(lStack_60 - (longlong)local_68)) {
LAB_180117a00:
    if (((*(int *)(lVar12 + (longlong)local_68) == 0x74706143) &&
        (*(short *)(lVar12 + 4 + (longlong)local_68) == 0x7275)) &&
       (*(char *)(lVar12 + 6 + (longlong)local_68) == 'e')) goto LAB_180117a75;
  }
LAB_180117a2e:
  if (0xc < uVar13) {
    do {
      if (((*(longlong *)(lVar11 + (longlong)local_68) == 0x5065727574706143) &&
          (*(int *)(lVar11 + 8 + (longlong)local_68) == 0x6c657869)) &&
         (*(char *)(lVar11 + 0xc + (longlong)local_68) == 's')) goto LAB_180117a75;
      uVar13 = lVar11 + 0xe;
      lVar11 = lVar11 + 1;
    } while (uVar13 <= (ulonglong)(lStack_60 - (longlong)local_68));
  }
LAB_1801179a6:
  cVar15 = '\0';
LAB_1801179a9:
  if (local_68 != (void *)0x0) {
    _Memory = local_68;
    puVar10 = auStack_a8;
    if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
       (_Memory = *(void **)((longlong)local_68 + -8), puVar10 = auStack_a8,
       0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)_Memory)))) {
      pcVar1 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar1)(5);
      puVar10 = auStack_a0;
    }
    *(undefined8 *)(puVar10 + -8) = 0x180117a8c;
    free(_Memory);
    *(undefined8 *)(puVar10 + 0x40) = 0;
    *(undefined8 *)(puVar10 + 0x48) = 0;
    *(undefined8 *)(puVar10 + 0x50) = 0;
  }
  puVar2 = puVar10;
  if (cVar15 == '\0') {
LAB_180117aa3:
    puVar10 = puVar2;
    if (((DAT_1805c7c60 != (FARPROC)0x0) && (DAT_18042bce0 != (FARPROC)0x0)) &&
       ((DAT_180423608 != 0 || (DAT_180423658 != 0)))) {
      if (DAT_1803fcfa0 == (FARPROC)0x0) {
        *(undefined8 *)(puVar10 + -8) = 0x180117af0;
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        *(undefined8 *)(puVar10 + -8) = 0x180117b00;
        DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
      }
      *(undefined8 *)(puVar10 + -8) = 0x180117b0c;
      uVar13 = (*DAT_1803fcfa0)(param_1);
      uVar8 = 1;
      do {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          *(undefined8 *)(puVar10 + -8) = 0x180117b2d;
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          *(undefined8 *)(puVar10 + -8) = 0x180117b3d;
          DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
        }
        *(undefined8 *)(puVar10 + -8) = 0x180117b49;
        uVar7 = (*DAT_1803fcfa0)(param_1);
        *(undefined8 *)(puVar10 + -8) = 0x180117b5e;
        IVar6 = (*DAT_1805c7c60)(param_1,uVar13 & 0xffffffff,(ulonglong)uVar8);
        if (IVar6 == 0) {
          if (DAT_180425540 == (FARPROC)0x0) {
            *(undefined8 *)(puVar10 + -8) = 0x180117c00;
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            *(undefined8 *)(puVar10 + -8) = 0x180117c10;
            DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
          }
          *(undefined8 *)(puVar10 + -8) = 0x180117c1e;
          (*DAT_180425540)(param_1,uVar7 & 0xffffffff);
          break;
        }
        *(undefined8 *)(puVar10 + -8) = 0x180117b79;
        IVar6 = (*DAT_18042bce0)(param_1,0xffffffff);
        if (DAT_180425540 == (FARPROC)0x0) {
          *(undefined8 *)(puVar10 + -8) = 0x180117b95;
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          *(undefined8 *)(puVar10 + -8) = 0x180117ba5;
          DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
        }
        *(undefined8 *)(puVar10 + -8) = 0x180117bb3;
        (*DAT_180425540)(param_1,uVar7 & 0xffffffff);
        if (((DAT_180423608 != 0) && (IVar6 == DAT_180423608)) ||
           ((DAT_180423658 != 0 && (IVar6 == DAT_180423658)))) {
          cVar15 = '\x01';
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x19);
      lVar9 = *(longlong *)(puVar10 + 0x20);
    }
  }
  if (param_2 != 0) {
    uVar8 = *(uint *)(lVar9 + 0xf08);
    lVar11 = lVar9 + (ulonglong)(uVar8 & 0x7f) * 0x18;
    *(longlong *)(lVar11 + 0x180) = param_1;
    *(longlong *)(lVar11 + 0x188) = param_2;
    *(int *)(lVar11 + 400) = iVar14;
    *(char *)(lVar11 + 0x194) = cVar15;
    *(undefined2 *)(lVar11 + 0x195) = *(undefined2 *)(puVar10 + 0x3d);
    *(undefined1 *)(lVar11 + 0x197) = puVar10[0x3f];
    *(uint *)(lVar9 + 0xf08) = uVar8 + 1;
  }
LAB_180117c74:
  *(undefined8 *)(puVar10 + -8) = 0x180117c81;
  return cVar15;
}


