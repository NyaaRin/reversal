// 0x180023720  FUN_180023720
// size=1852 thunk=false
// signature: undefined FUN_180023720()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180023720(longlong *param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  HMODULE pHVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  char *pcVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 **local_70;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if ((param_1 == (longlong *)0x0) || (DAT_1803fa648 == (code *)0x0)) {
    FUN_180014410("[LUA] persist init skipped: lua=%p index2adr=%p\n",param_1);
    return 0;
  }
  pcVar15 = "menu";
  if ((param_1[1] != 0) && (uVar16 = *(ulonglong *)(param_1[1] + 0x10), uVar16 != 0)) {
    cVar3 = *(char *)((longlong)DAT_1803fa7f0[1] + 0x19);
    puVar5 = (undefined8 *)DAT_1803fa7f0[1];
    puVar10 = DAT_1803fa7f0;
    while (puVar12 = puVar5, cVar3 == '\0') {
      if ((ulonglong)puVar12[4] < uVar16) {
        puVar5 = (undefined8 *)puVar12[2];
        puVar12 = puVar10;
      }
      else {
        puVar5 = (undefined8 *)*puVar12;
      }
      cVar3 = *(char *)((longlong)puVar5 + 0x19);
      puVar10 = puVar12;
    }
    if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (uVar16 < (ulonglong)puVar10[4])) {
      puVar10 = DAT_1803fa7f0;
    }
    if ((puVar10 != DAT_1803fa7f0) && (puVar1 = puVar10 + 5, puVar1 != (ulonglong *)0x0)) {
      cVar3 = FUN_1800234d0(*puVar1 & 0x7fffffffffff);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar16 = *puVar1;
      cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 600))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
          pcVar14 = "client";
          if (cVar3 == '\0') {
            pcVar14 = "unknown";
          }
        }
        else {
          pcVar14 = "server";
        }
      }
      else {
        pcVar14 = "menu";
      }
      FUN_180014410("[LUA] dropping stale persist entry for %s (tv=%llx)\n",pcVar14,uVar16);
      puVar5 = (undefined8 *)param_1[1];
      ppuVar13 = (undefined8 **)DAT_1803fac68[1];
      cVar3 = *(char *)((longlong)ppuVar13 + 0x19);
      ppuVar11 = ppuVar13;
      local_70 = (undefined8 **)DAT_1803fac68;
      local_78 = (undefined8 **)DAT_1803fac68;
      while (ppuVar9 = ppuVar11, cVar3 == '\0') {
        if (ppuVar9[4] < puVar5) {
          ppuVar11 = (undefined8 **)ppuVar9[2];
          ppuVar9 = local_78;
        }
        else {
          if ((*(char *)((longlong)local_70 + 0x19) != '\0') && (puVar5 < ppuVar9[4])) {
            local_70 = ppuVar9;
          }
          ppuVar11 = (undefined8 **)*ppuVar9;
        }
        cVar3 = *(char *)((longlong)ppuVar11 + 0x19);
        local_78 = ppuVar9;
      }
      if (*(char *)((longlong)local_70 + 0x19) == '\0') {
        ppuVar13 = (undefined8 **)*local_70;
      }
      cVar3 = *(char *)((longlong)ppuVar13 + 0x19);
      while (cVar3 == '\0') {
        if (puVar5 < ppuVar13[4]) {
          ppuVar11 = (undefined8 **)*ppuVar13;
          local_70 = ppuVar13;
        }
        else {
          ppuVar11 = (undefined8 **)ppuVar13[2];
        }
        ppuVar13 = ppuVar11;
        cVar3 = *(char *)((longlong)ppuVar11 + 0x19);
      }
      FUN_18021d7f0(ppuVar13,&local_78);
      if ((puVar5 != (undefined8 *)0x0) &&
         (puVar5 = (undefined8 *)puVar5[2], puVar5 != (undefined8 *)0x0)) {
        ppuVar13 = (undefined8 **)DAT_1803fa7f0[1];
        cVar3 = *(char *)((longlong)ppuVar13 + 0x19);
        ppuVar11 = ppuVar13;
        local_70 = (undefined8 **)DAT_1803fa7f0;
        local_78 = (undefined8 **)DAT_1803fa7f0;
        while (ppuVar9 = ppuVar11, cVar3 == '\0') {
          if (ppuVar9[4] < puVar5) {
            ppuVar11 = (undefined8 **)ppuVar9[2];
            ppuVar9 = local_78;
          }
          else {
            if ((*(char *)((longlong)local_70 + 0x19) != '\0') && (puVar5 < ppuVar9[4])) {
              local_70 = ppuVar9;
            }
            ppuVar11 = (undefined8 **)*ppuVar9;
          }
          cVar3 = *(char *)((longlong)ppuVar11 + 0x19);
          local_78 = ppuVar9;
        }
        if (*(char *)((longlong)local_70 + 0x19) == '\0') {
          ppuVar13 = (undefined8 **)*local_70;
        }
        cVar3 = *(char *)((longlong)ppuVar13 + 0x19);
        while (cVar3 == '\0') {
          if (puVar5 < ppuVar13[4]) {
            ppuVar11 = (undefined8 **)*ppuVar13;
            local_70 = ppuVar13;
          }
          else {
            ppuVar11 = (undefined8 **)ppuVar13[2];
          }
          ppuVar13 = ppuVar11;
          cVar3 = *(char *)((longlong)ppuVar11 + 0x19);
        }
        FUN_18021d9b0(ppuVar13,&local_78);
      }
    }
  }
  if (param_1[1] == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(param_1[1] + 0x10);
    if (local_58 != 0) {
      uVar4 = (**(code **)*param_1)(param_1);
      uVar16 = (ulonglong)uVar4;
      (**(code **)(*param_1 + 0x30))(param_1);
      puVar5 = (undefined8 *)(*DAT_1803fa648)(param_1[1],0xffffffff);
      if (puVar5 == (undefined8 *)0x0) {
        lVar6 = param_1[1];
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar7 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
        }
        (*DAT_180425540)(lVar6,uVar16);
        cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 600))(param_1);
          if (cVar3 != '\0') {
            FUN_180014410("[LUA] persist init failed for %s: index2adr returned null\n","server");
            return 0;
          }
          cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
          pcVar15 = "client";
          if (cVar3 == '\0') {
            pcVar15 = "unknown";
          }
        }
        FUN_180014410("[LUA] persist init failed for %s: index2adr returned null\n",pcVar15);
        return 0;
      }
      uVar2 = *puVar5;
      if ((DAT_1803fa56c != '\0') && (lVar6 = FUN_180023290(), lVar6 != 0)) {
        puVar5 = (undefined8 *)FUN_18020cfa0();
        *puVar5 = uVar2;
        lVar6 = param_1[1];
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar7 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
        }
        (*DAT_180425540)(lVar6,uVar16);
        cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 600))(param_1);
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
            pcVar15 = "client";
            if (cVar3 == '\0') {
              pcVar15 = "unknown";
            }
          }
          else {
            pcVar15 = "server";
          }
        }
        FUN_180014410("[LUA] persist cache initialized for %s (x64 gcroot tv=%llx)\n",pcVar15,uVar2)
        ;
        return 1;
      }
      if (DAT_1803fb0b0 == (FARPROC)0x0) {
        pHVar7 = GetModuleHandleA("lua_shared.dll");
        if (pHVar7 != (HMODULE)0x0) {
          DAT_1803fb0b0 = GetProcAddress(pHVar7,"luaL_ref");
          DAT_1803fb0a8 = GetProcAddress(pHVar7,"luaL_unref");
        }
        if (DAT_1803fb0b0 == (FARPROC)0x0) {
          lVar6 = param_1[1];
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar7 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
          }
          (*DAT_180425540)(lVar6,uVar16);
          FUN_180014410("[LUA] persist init failed: no gc_mark_root hook and luaL_ref not found\n");
          return 0;
        }
      }
      uVar8 = (*DAT_1803fb0b0)(param_1[1],0xffffd8f0);
      puVar5 = DAT_1803fac68;
      if ((int)uVar8 < 1) {
        lVar6 = param_1[1];
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar7 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
        }
        (*DAT_180425540)(lVar6,uVar16);
        cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 600))(param_1);
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
            pcVar15 = "client";
            if (cVar3 == '\0') {
              pcVar15 = "unknown";
            }
          }
          else {
            pcVar15 = "server";
          }
        }
        FUN_180014410("[LUA] persist init failed for %s: luaL_ref=%d\n",pcVar15,uVar8 & 0xffffffff);
        return 0;
      }
      ppuVar13 = (undefined8 **)DAT_1803fac68[1];
      uVar4 = 0;
      ppuVar11 = (undefined8 **)DAT_1803fac68;
      if (*(char *)((longlong)ppuVar13 + 0x19) == '\0') {
        ppuVar9 = ppuVar13;
        do {
          ppuVar13 = ppuVar9;
          if ((undefined8 *)param_1[1] <= ppuVar13[4]) {
            ppuVar9 = (undefined8 **)*ppuVar13;
            ppuVar11 = ppuVar13;
          }
          else {
            ppuVar9 = (undefined8 **)ppuVar13[2];
          }
          uVar4 = (uint)((undefined8 *)param_1[1] <= ppuVar13[4]);
        } while (*(char *)((longlong)ppuVar9 + 0x19) == '\0');
      }
      if ((*(char *)((longlong)ppuVar11 + 0x19) != '\0') || ((undefined8 *)param_1[1] < ppuVar11[4])
         ) {
        if (DAT_1803fac70 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          FUN_180013b80();
        }
        local_78 = &DAT_1803fac68;
        local_70 = (undefined8 **)0x0;
        puVar10 = (undefined8 *)FUN_1802d8350(0x30);
        puVar10[4] = param_1[1];
        *(undefined4 *)(puVar10 + 5) = 0;
        *puVar10 = puVar5;
        puVar10[1] = puVar5;
        puVar10[2] = puVar5;
        *(undefined2 *)(puVar10 + 3) = 0;
        local_70 = (undefined8 **)(ulonglong)uVar4;
        local_78 = ppuVar13;
        ppuVar11 = (undefined8 **)FUN_18022bb90(&DAT_1803fac68,&local_78,puVar10);
      }
      *(int *)(ppuVar11 + 5) = (int)uVar8;
      puVar5 = (undefined8 *)FUN_18020cfa0(ppuVar11,&local_58);
      *puVar5 = uVar2;
      cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 600))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
          pcVar15 = "client";
          if (cVar3 == '\0') {
            pcVar15 = "unknown";
          }
        }
        else {
          pcVar15 = "server";
        }
      }
      FUN_180014410("[LUA] persist cache initialized for %s (x64 registry ref=%d tv=%llx)\n",pcVar15
                    ,uVar8 & 0xffffffff,uVar2);
      return 1;
    }
  }
  cVar3 = (*(code *)((undefined8 *)*param_1)[0x4d])(param_1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 600))(param_1);
    if (cVar3 != '\0') {
      FUN_180014410("[LUA] persist init failed: glref null for %s\n","server");
      return 0;
    }
    cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
    pcVar15 = "client";
    if (cVar3 == '\0') {
      pcVar15 = "unknown";
    }
  }
  FUN_180014410("[LUA] persist init failed: glref null for %s\n",pcVar15);
  return 0;
}


