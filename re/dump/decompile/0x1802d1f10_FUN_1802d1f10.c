// 0x1802d1f10  FUN_1802d1f10
// size=2850 thunk=false
// signature: undefined FUN_1802d1f10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_1802d1f10(HWND param_1,uint param_2,ulonglong param_3,ulonglong param_4,longlong param_5
                     )

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  SHORT SVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  BOOL BVar8;
  uint uVar9;
  HKL pHVar10;
  void *pvVar11;
  LRESULT LVar12;
  ulonglong uVar13;
  HWND pHVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  char cVar20;
  short sVar21;
  uint uVar22;
  char cVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_e8 [32];
  tagTRACKMOUSEEVENT local_b0;
  undefined4 local_98;
  tagTRACKMOUSEEVENT local_90;
  undefined4 local_78;
  ulonglong local_70;
  tagPOINT local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStackY_e8;
  lVar2 = *(longlong *)(param_5 + 0x90);
  if (lVar2 == 0) {
    return 0;
  }
  local_70 = param_3;
  if (param_2 < 0x201) {
    if (param_2 == 0x200) {
LAB_1802d263d:
      uVar13 = GetMessageExtraInfo();
      if ((uVar13 & 0xffffff80) == 0xff515700) {
        local_78 = 2;
      }
      else {
        local_78 = (uint)((uVar13 & 0xffffff80) == 0xff515780);
      }
      *(HWND *)(lVar2 + 8) = param_1;
      iVar7 = (param_2 != 0x200) + 1;
      if (*(int *)(lVar2 + 0x10) != iVar7) {
        local_90.cbSize = 0x18;
        local_90.dwFlags = 0x80000000;
        local_b0.dwFlags = 2;
        if (param_2 != 0x200) {
          local_b0.dwFlags = 0x12;
        }
        local_90.dwHoverTime = 0;
        local_b0.cbSize = 0x18;
        local_b0.hwndTrack._0_4_ = (int)param_1;
        local_b0.hwndTrack._4_4_ = (uint)((ulonglong)param_1 >> 0x20);
        local_b0.dwHoverTime = 0;
        local_90.hwndTrack = param_1;
        if (*(int *)(lVar2 + 0x10) != 0) {
          TrackMouseEvent(&local_90);
        }
        TrackMouseEvent(&local_b0);
        *(int *)(lVar2 + 0x10) = iVar7;
      }
      local_68.x = (LONG)(short)param_4;
      local_68.y = (LONG)(short)(param_4 >> 0x10);
      if (param_2 == 0xa0) {
        ScreenToClient(param_1,&local_68);
      }
      *(uint *)(*(longlong *)(param_5 + 0xd0) + 0x14b8) = local_78;
      FUN_180267dd0(param_5);
      return 0;
    }
    if (param_2 < 8) {
      if (param_2 == 7) {
LAB_1802d20a8:
        lVar3 = *(longlong *)(param_5 + 0xd0);
        iVar7 = *(int *)(lVar3 + 0x1498);
        uVar15 = iVar7 - 1;
        if (-1 < (int)uVar15) {
          do {
            if (*(int *)((ulonglong)uVar15 * 0x1c + *(longlong *)(lVar3 + 0x14a0)) == 6) {
              cVar23 = *(char *)((ulonglong)uVar15 * 0x1c + 0xc + *(longlong *)(lVar3 + 0x14a0));
              goto LAB_1802d20ec;
            }
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        cVar23 = *(char *)(lVar3 + 0xbcc) == '\0';
LAB_1802d20ec:
        if (((bool)cVar23 != (param_2 == 7)) &&
           ((*(char *)(param_5 + 0x7d) == '\0' || (param_2 == 7)))) {
          local_b0.hwndTrack._0_4_ = *(int *)(lVar3 + 0x14bc);
          *(int *)(lVar3 + 0x14bc) = (int)local_b0.hwndTrack + 1;
          iVar19 = *(int *)(lVar3 + 0x149c);
          local_b0.cbSize = 6;
          local_b0.dwFlags = 0;
          local_b0.dwHoverTime = 0;
          local_b0._20_4_ = 0;
          local_98 = 0;
          local_b0.hwndTrack._4_4_ = (uint)(param_2 == 7);
          if (iVar7 == iVar19) {
            if (iVar19 == 0) {
              iVar6 = 8;
            }
            else {
              iVar6 = iVar19 / 2 + iVar19;
            }
            iVar18 = iVar7 + 1;
            if (iVar7 + 1 < iVar6) {
              iVar18 = iVar6;
            }
            if (iVar19 < iVar18) {
              pvVar11 = (void *)FUN_18026f580((longlong)iVar18 * 0x1c);
              if (*(void **)(lVar3 + 0x14a0) != (void *)0x0) {
                memcpy(pvVar11,*(void **)(lVar3 + 0x14a0),(longlong)*(int *)(lVar3 + 0x1498) * 0x1c)
                ;
                FUN_18026f680(*(undefined8 *)(lVar3 + 0x14a0));
              }
              *(void **)(lVar3 + 0x14a0) = pvVar11;
              *(int *)(lVar3 + 0x149c) = iVar18;
            }
          }
          lVar16 = (longlong)*(int *)(lVar3 + 0x1498) * 0x1c;
          lVar17 = *(longlong *)(lVar3 + 0x14a0);
          puVar1 = (undefined8 *)(lVar16 + lVar17);
          *puVar1 = local_b0._0_8_;
          puVar1[1] = CONCAT44(local_b0.hwndTrack._4_4_,(int)local_b0.hwndTrack);
          puVar1 = (undefined8 *)(lVar16 + 0xc + lVar17);
          *puVar1 = CONCAT44(local_b0.dwHoverTime,local_b0.hwndTrack._4_4_);
          puVar1[1] = CONCAT44(local_98,local_b0._20_4_);
          *(int *)(lVar3 + 0x1498) = *(int *)(lVar3 + 0x1498) + 1;
        }
        *(undefined4 *)(lVar2 + 0x50) = 0;
        return 0;
      }
      if (param_2 != 2) {
        return 0;
      }
      if (*(HWND *)(lVar2 + 8) != param_1) {
        return 0;
      }
      if (*(int *)(lVar2 + 0x10) == 0) {
        return 0;
      }
      local_90.dwHoverTime = 0;
      local_90.cbSize = 0x18;
      local_90.dwFlags = 0x80000000;
      local_90.hwndTrack = param_1;
      TrackMouseEvent(&local_90);
      goto LAB_1802d2786;
    }
    if (param_2 < 0x102) {
      if (param_2 == 0x101) goto LAB_1802d2220;
      if (param_2 == 8) goto LAB_1802d20a8;
      if (param_2 == 0x20) {
        if ((short)param_4 != 1) {
          return 0;
        }
        cVar23 = FUN_1802d0d70(param_5,*(undefined4 *)(lVar2 + 0x28));
        if (cVar23 == '\0') {
          return 0;
        }
        return 1;
      }
      if (param_2 == 0x51) {
        pHVar10 = GetKeyboardLayout(0);
        iVar7 = GetLocaleInfoA((uint)((ulonglong)pHVar10 >> 0x10) & 0xffff,0x20001004,
                               (LPSTR)(lVar2 + 0x2c),4);
        if (iVar7 != 0) {
          return 0;
        }
        *(undefined4 *)(lVar2 + 0x2c) = 0;
        return 0;
      }
      if (param_2 == 0xa0) goto LAB_1802d263d;
      if (param_2 != 0x100) {
        return 0;
      }
LAB_1802d2001:
      cVar23 = '\x01';
    }
    else {
      if (param_2 == 0x102) {
        BVar8 = IsWindowUnicode(param_1);
        if (BVar8 != 0) {
          if (0xfffe < local_70 - 1) {
            return 0;
          }
          FUN_180267a60(param_5);
          return 0;
        }
        local_78 = (uint)local_78._2_2_ << 0x10;
        MultiByteToWideChar(*(UINT *)(lVar2 + 0x2c),1,(LPCSTR)&local_70,2,(LPWSTR)&local_78,1);
        if ((WCHAR)local_78 == L'\0') {
          return 0;
        }
        if (*(char *)(param_5 + 0xba5) == '\0') {
          return 0;
        }
        lVar2 = *(longlong *)(param_5 + 0xd0);
        local_b0.dwHoverTime = 0;
        local_b0._20_4_ = 0;
        local_98 = 0;
        local_b0.hwndTrack._4_4_ = local_78 & 0xffff;
        local_b0.hwndTrack._0_4_ = *(int *)(lVar2 + 0x14bc);
        *(int *)(lVar2 + 0x14bc) = (int)local_b0.hwndTrack + 1;
        iVar7 = *(int *)(lVar2 + 0x149c);
        local_b0.cbSize = 5;
        local_b0.dwFlags = 2;
        if (*(int *)(lVar2 + 0x1498) == iVar7) {
          iVar19 = *(int *)(lVar2 + 0x1498) + 1;
          if (iVar7 == 0) {
            iVar6 = 8;
          }
          else {
            iVar6 = iVar7 / 2 + iVar7;
          }
          if (iVar19 < iVar6) {
            iVar19 = iVar6;
          }
          if (iVar7 < iVar19) {
            pvVar11 = (void *)FUN_18026f580((longlong)iVar19 * 0x1c);
            if (*(void **)(lVar2 + 0x14a0) != (void *)0x0) {
              memcpy(pvVar11,*(void **)(lVar2 + 0x14a0),(longlong)*(int *)(lVar2 + 0x1498) * 0x1c);
              FUN_18026f680(*(undefined8 *)(lVar2 + 0x14a0));
            }
            *(void **)(lVar2 + 0x14a0) = pvVar11;
            *(int *)(lVar2 + 0x149c) = iVar19;
          }
        }
        lVar17 = (longlong)*(int *)(lVar2 + 0x1498) * 0x1c;
        lVar3 = *(longlong *)(lVar2 + 0x14a0);
        puVar1 = (undefined8 *)(lVar17 + lVar3);
        *puVar1 = local_b0._0_8_;
        puVar1[1] = CONCAT44(local_b0.hwndTrack._4_4_,(int)local_b0.hwndTrack);
        puVar1 = (undefined8 *)(lVar17 + 0xc + lVar3);
        *puVar1 = CONCAT44(local_b0.dwHoverTime,local_b0.hwndTrack._4_4_);
        puVar1[1] = CONCAT44(local_98,local_b0._20_4_);
        *(int *)(lVar2 + 0x1498) = *(int *)(lVar2 + 0x1498) + 1;
        return 0;
      }
      if ((param_2 != 0x104) && (param_2 != 0x105)) {
        if (param_2 != 0x10f) {
          return 0;
        }
        LVar12 = DefWindowProcW(param_1,0x10f,param_3,param_4);
        if ((param_4 >> 0xb & 1) != 0) {
          return 1;
        }
        return LVar12;
      }
      if (param_2 == 0x104) goto LAB_1802d2001;
LAB_1802d2220:
      cVar23 = '\0';
    }
    if (0xff < param_3) {
      return 0;
    }
    SVar4 = GetKeyState(0x11);
    uVar27 = DAT_180380bb0;
    if (*(char *)(param_5 + 0xba5) != '\0') {
      uVar26 = DAT_180380bb0;
      if (-1 < SVar4) {
        uVar26 = 0;
      }
      FUN_180267b90(param_5,0x1000,(byte)((ushort)SVar4 >> 0xf),uVar26);
    }
    SVar4 = GetKeyState(0x10);
    if (*(char *)(param_5 + 0xba5) != '\0') {
      uVar26 = uVar27;
      if (-1 < SVar4) {
        uVar26 = 0;
      }
      FUN_180267b90(param_5,0x2000,(byte)((ushort)SVar4 >> 0xf),uVar26);
    }
    SVar4 = GetKeyState(0x12);
    if (*(char *)(param_5 + 0xba5) != '\0') {
      uVar26 = uVar27;
      if (-1 < SVar4) {
        uVar26 = 0;
      }
      FUN_180267b90(param_5,0x4000,(byte)((ushort)SVar4 >> 0xf),uVar26);
    }
    uVar5 = GetKeyState(0x5b);
    if (((uVar5 & 0x8000) == 0) && (uVar5 = GetKeyState(0x5c), (uVar5 & 0x8000) == 0)) {
      cVar20 = '\0';
    }
    else {
      cVar20 = '\x01';
    }
    if (*(char *)(param_5 + 0xba5) != '\0') {
      uVar26 = uVar27;
      if (cVar20 == '\0') {
        uVar26 = 0;
      }
      FUN_180267b90(param_5,0x8000,cVar20,uVar26);
    }
    uVar13 = local_70;
    iVar7 = FUN_1802d1850(local_70,param_4);
    if (iVar7 == 0x262) {
      if (cVar23 == '\0') {
        if (*(char *)(param_5 + 0xba5) == '\0') goto LAB_1802d2356;
        FUN_180267b90(param_5,0x262,1,uVar27);
      }
    }
    else if (iVar7 == 0) goto LAB_1802d2356;
    if (*(char *)(param_5 + 0xba5) != '\0') {
      uVar26 = uVar27;
      if (cVar23 == '\0') {
        uVar26 = 0;
      }
      FUN_180267b90(param_5,iVar7,cVar23,uVar26);
    }
LAB_1802d2356:
    iVar7 = (int)uVar13;
    if (iVar7 == 0x10) {
      SVar4 = GetKeyState(0xa0);
      if (((char)-(char)(SVar4 >> 0xf) == cVar23) && (*(char *)(param_5 + 0xba5) != '\0')) {
        uVar26 = uVar27;
        if (cVar23 == '\0') {
          uVar26 = 0;
        }
        FUN_180267b90(param_5,0x210,cVar23,uVar26);
      }
      SVar4 = GetKeyState(0xa1);
      if ((char)-(char)(SVar4 >> 0xf) != cVar23) {
        return 0;
      }
      if (*(char *)(param_5 + 0xba5) == '\0') {
        return 0;
      }
      if (cVar23 == '\0') {
        uVar27 = 0;
      }
      FUN_180267b90(param_5,0x214,cVar23,uVar27);
      return 0;
    }
    if (iVar7 == 0x11) {
      SVar4 = GetKeyState(0xa2);
      if (((char)-(char)(SVar4 >> 0xf) == cVar23) && (*(char *)(param_5 + 0xba5) != '\0')) {
        uVar26 = uVar27;
        if (cVar23 == '\0') {
          uVar26 = 0;
        }
        FUN_180267b90(param_5,0x20f,cVar23,uVar26);
      }
      SVar4 = GetKeyState(0xa3);
      if ((char)-(char)(SVar4 >> 0xf) != cVar23) {
        return 0;
      }
      if (*(char *)(param_5 + 0xba5) == '\0') {
        return 0;
      }
      if (cVar23 == '\0') {
        uVar27 = 0;
      }
      FUN_180267b90(param_5,0x213,cVar23,uVar27);
      return 0;
    }
    if (iVar7 != 0x12) {
      return 0;
    }
    SVar4 = GetKeyState(0xa4);
    if (((char)-(char)(SVar4 >> 0xf) == cVar23) && (*(char *)(param_5 + 0xba5) != '\0')) {
      uVar26 = uVar27;
      if (cVar23 == '\0') {
        uVar26 = 0;
      }
      FUN_180267b90(param_5,0x211,cVar23,uVar26);
    }
    SVar4 = GetKeyState(0xa5);
    if ((char)-(char)(SVar4 >> 0xf) != cVar23) {
      return 0;
    }
    if (*(char *)(param_5 + 0xba5) == '\0') {
      return 0;
    }
    if (cVar23 == '\0') {
      uVar27 = 0;
    }
    FUN_180267b90(param_5,0x215,cVar23,uVar27);
    return 0;
  }
  sVar21 = (short)(param_3 >> 0x10);
  switch(param_2) {
  case 0x201:
  case 0x203:
  case 0x204:
  case 0x206:
  case 0x207:
  case 0x209:
  case 0x20b:
  case 0x20d:
    uVar13 = GetMessageExtraInfo();
    iVar7 = 0;
    if ((uVar13 & 0xffffff80) == 0xff515700) {
      local_78 = 2;
    }
    else {
      local_78 = (uint)((uVar13 & 0xffffff80) == 0xff515780);
    }
    if ((param_2 == 0x204) || (param_2 == 0x206)) {
      iVar7 = 1;
    }
    if ((param_2 - 0x207 & 0xfffffffd) == 0) {
      iVar7 = 2;
    }
    if ((param_2 - 0x20b & 0xfffffffd) == 0) {
      iVar7 = ((short)(local_70 >> 0x10) != 1) + 3;
    }
    pHVar14 = GetCapture();
    if (*(int *)(lVar2 + 0x14) == 0) {
LAB_1802d283e:
      if (pHVar14 == (HWND)0x0) {
        SetCapture(param_1);
      }
    }
    else if (pHVar14 != param_1) {
      *(undefined4 *)(lVar2 + 0x14) = 0;
      goto LAB_1802d283e;
    }
    *(uint *)(lVar2 + 0x14) = *(uint *)(lVar2 + 0x14) | 1 << iVar7;
    *(uint *)(*(longlong *)(param_5 + 0xd0) + 0x14b8) = local_78;
    FUN_180267fb0(param_5,iVar7,1);
    break;
  case 0x202:
  case 0x205:
  case 0x208:
  case 0x20c:
    uVar13 = GetMessageExtraInfo();
    uVar15 = 2;
    if ((uVar13 & 0xffffff80) == 0xff515700) {
      uVar22 = 2;
    }
    else {
      uVar22 = (uint)((uVar13 & 0xffffff80) == 0xff515780);
    }
    if (param_2 != 0x208) {
      if (param_2 == 0x20c) {
        uVar15 = ((short)(local_70 >> 0x10) != 1) + 3;
      }
      else {
        uVar15 = (uint)(param_2 == 0x205);
      }
    }
    uVar9 = *(uint *)(lVar2 + 0x14) & ~(1 << uVar15);
    *(uint *)(lVar2 + 0x14) = uVar9;
    if ((uVar9 == 0) && (pHVar14 = GetCapture(), pHVar14 == param_1)) {
      ReleaseCapture();
    }
    *(uint *)(*(longlong *)(param_5 + 0xd0) + 0x14b8) = uVar22;
    FUN_180267fb0(param_5,uVar15,0);
    break;
  case 0x20a:
    FUN_180268220(param_5,0x180000000,(float)(int)sVar21 / DAT_180381138);
    break;
  case 0x20e:
    auVar24._0_4_ = (float)((uint)(float)(int)sVar21 ^ DAT_1803817f0);
    auVar24._4_4_ = _UNK_1803817f4;
    auVar24._8_4_ = _UNK_1803817f8;
    auVar24._12_4_ = _UNK_1803817fc;
    auVar25._4_12_ = auVar24._4_12_;
    auVar25._0_4_ = auVar24._0_4_ / DAT_180381138;
    FUN_180268220(param_5,auVar25._0_8_);
    break;
  case 0x219:
    if ((int)param_3 == 7) {
      *(undefined1 *)(lVar2 + 0x31) = 1;
    }
    break;
  case 0x286:
    BVar8 = IsWindowUnicode(param_1);
    if (BVar8 == 0) {
      BVar8 = IsDBCSLeadByte((BYTE)(local_70 >> 8));
      if (BVar8 != 0) {
        local_70 = (ulonglong)(ushort)((short)local_70 << 8) | local_70 >> 8 & 0xff;
      }
      local_78 = (uint)local_78._2_2_ << 0x10;
      MultiByteToWideChar(*(UINT *)(lVar2 + 0x2c),1,(LPCSTR)&local_70,2,(LPWSTR)&local_78,1);
      FUN_180267a60(param_5,(WCHAR)local_78);
      return 1;
    }
    break;
  case 0x2a2:
  case 0x2a3:
    if (*(int *)(lVar2 + 0x10) != (param_2 != 0x2a3) + 1) {
      return 0;
    }
    if (*(HWND *)(lVar2 + 8) == param_1) {
LAB_1802d2786:
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    *(undefined4 *)(lVar2 + 0x10) = 0;
    FUN_180267dd0(param_5);
  }
  return 0;
}


