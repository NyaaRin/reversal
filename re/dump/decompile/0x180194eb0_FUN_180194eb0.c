// 0x180194eb0  FUN_180194eb0
// size=1353 thunk=false
// signature: undefined FUN_180194eb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180194eb0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int *piVar11;
  longlong lVar12;
  size_t sVar13;
  undefined1 *puVar15;
  undefined8 uVar16;
  char *_Str;
  ulonglong uVar17;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 *local_1f8 [2];
  undefined1 local_1e8 [24];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  char local_198 [168];
  uint local_f0;
  char local_6c;
  ulonglong local_48;
  ulonglong uVar14;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  uVar14 = 0;
  local_1d0 = 0x93fd561a96ab0c67;
  local_1c8 = (undefined8 *)0x11da5b42ad2c912c;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1f8,&local_1d0);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_1e8,&local_1c8);
  piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
  iVar8 = *piVar11;
  local_1c8 = (undefined8 *)0x93fd561a96ab0c67;
  local_1d0 = 0x42e98a6fcf3a4937;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1e8,&local_1c8);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_1f8,&local_1d0);
  piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
  iVar3 = *piVar11;
  if ((((iVar8 - 1U < 0xfe) && (cVar6 = FUN_180024540(), cVar6 != '\0')) && (DAT_1803fa545 == '\0'))
     && (cVar6 = FUN_1800245f0(iVar8), cVar6 != '\0')) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  if (((iVar3 - 1U < 0xfe) && (cVar7 = FUN_180024540(), cVar7 != '\0')) &&
     ((DAT_1803fa545 == '\0' && (cVar7 = FUN_1800245f0(iVar3), cVar7 != '\0')))) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  if ((cVar6 == '\0') || (DAT_18042555c != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((cVar7 == '\0') || (DAT_180426108 != '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  DAT_18042555c = cVar6;
  DAT_180426108 = cVar7;
  if ((bVar4) || (bVar5)) {
    lVar12 = FUN_180194360();
    if (lVar12 == 0) {
      local_1c8 = &local_218;
      local_208 = 0;
      local_200 = 0;
      local_218 = 0;
      uStack_210 = 0;
      if (bVar4) {
        FUN_18001d080(&local_218,"Nothing to add",0xe);
      }
      else {
        FUN_18001d080(&local_218,"Aim at a player",0xf);
      }
    }
    else {
      iVar8 = FUN_1801947a0(lVar12);
      if (iVar8 == 0) {
        if (bVar4) {
          FUN_180194900(lVar12);
          return;
        }
        local_1f8[0] = &local_218;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        local_200 = 0;
        FUN_18001d080(&local_218,"Aim at a player",0xf);
      }
      else if (bVar5) {
        memset(local_198,0,0x144);
        if ((iVar8 < 1) ||
           (cVar6 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,iVar8,local_198),
           cVar6 == '\0')) {
          local_1f8[0] = &local_218;
          local_218 = 0;
          uStack_210 = 0;
          local_208 = 0;
          local_200 = 0;
          FUN_18001d080(&local_218,"Player info is not available yet",0x20);
        }
        else {
          if (local_6c == '\0') {
            uVar17 = uVar14;
            if (local_f0 != 0) {
              uVar17 = (ulonglong)local_f0 + 0x110000100000000;
            }
            if (uVar17 != 0) {
              _Str = local_198;
              if (local_198[0] == '\0') {
                _Str = "player";
              }
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              sVar13 = strlen(_Str);
              FUN_18001d080(&local_1b8,_Str,sVar13);
              iVar8 = (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249;
              if (0 < iVar8) {
                do {
                  if (*(ulonglong *)(uVar14 * 0x38 + DAT_1803edce0) == uVar17) {
                    FUN_180182ea0(uVar17);
                    local_1c8 = &local_218;
                    uVar16 = FUN_1801fd120(&local_218,"Removed friend: ",&local_1b8);
                    goto LAB_1801952e0;
                  }
                  uVar9 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar9;
                } while ((int)uVar9 < iVar8);
              }
              local_1c8 = (undefined8 *)0x93fd561a96ab0c67;
              local_1d0 = 0x377571a4549d5240;
              plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1e8,&local_1c8);
              plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,&local_218,&local_1d0);
              puVar15 = (undefined1 *)FUN_1801fcfc0(*plVar10 + 0x28);
              uVar1 = *puVar15;
              local_1c8 = (undefined8 *)0x93fd561a96ab0c67;
              local_1d0 = 0x9fd9050fb35e0f88;
              plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_218,&local_1c8);
              plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_1e8,&local_1d0);
              puVar15 = (undefined1 *)FUN_1801fcfc0(*plVar10 + 0x28);
              uVar2 = *puVar15;
              local_1c8 = (undefined8 *)0x93fd561a96ab0c67;
              local_1d0 = 0xb384791d0b14dec1;
              plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_218,&local_1c8);
              plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_1e8,&local_1d0);
              puVar15 = (undefined1 *)FUN_1801fcfc0(*plVar10 + 0x28);
              local_1c8 = (undefined8 *)CONCAT44(DAT_1803e89ec,DAT_1803e89e8);
              uStack_1c0 = DAT_1803e89f0;
              uStack_1bc = DAT_1803e89f4;
              local_228 = uVar1;
              FUN_180182d70(uVar17,&local_1c8,*puVar15,uVar2);
              local_1f8[0] = &local_218;
              uVar16 = FUN_1801fd120(&local_218,"Added friend: ",&local_1b8);
LAB_1801952e0:
              FUN_180121e90(uVar16);
              FUN_18020e450(&local_1b8);
              return;
            }
          }
          local_1f8[0] = &local_218;
          local_218 = 0;
          uStack_210 = 0;
          local_208 = 0;
          local_200 = 0;
          FUN_18001d080(&local_218,"Bots cannot be saved as friends",0x1f);
        }
      }
      else {
        local_1c8 = &local_218;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        local_200 = 0;
        FUN_18001d080(&local_218,"Player ignored - use Players friend bind",0x28);
      }
    }
    FUN_180121e90(&local_218);
  }
  return;
}


