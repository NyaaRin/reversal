// 0x180138760  FUN_180138760
// size=1223 thunk=false
// signature: undefined FUN_180138760()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180138760(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  HMODULE pHVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ushort uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint local_e0;
  uint local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  int local_a8;
  int *local_a0;
  int *local_98;
  undefined *local_90;
  undefined8 local_88;
  uint *puStack_80;
  ulonglong local_78;
  int *local_70;
  int *piStack_68;
  int *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_88 = 0;
  puStack_80 = (uint *)0x0;
  local_78 = 0;
  local_70 = (int *)0x0;
  piStack_68 = (int *)0x0;
  local_60 = (int *)0x0;
  do {
    if ((((DAT_180409c49 == '\0') || (DAT_180409ca0 != '\0')) ||
        ((pHVar7 = DAT_1803fea40, DAT_1803fea40 == (HMODULE)0x0 &&
         (pHVar7 = GetModuleHandleA("steamclient64.dll"), pHVar7 == (HMODULE)0x0)))) ||
       (DAT_1803fea40 = pHVar7, lVar8 = FUN_180131270(), *(char *)(lVar8 + 0x30) == '\0')) {
      FUN_180014410("[AS] service loop stopped\n");
      FUN_18021e060(&local_70);
      return;
    }
    if (local_70 != piStack_68) {
      piStack_68 = local_70;
    }
    local_90 = &DAT_1803e8610;
    iVar6 = _Mtx_lock(&DAT_1803e8610);
    lVar8 = DAT_1803e9e50;
    if (iVar6 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar2 = DAT_1803e9e48;
    if (DAT_1803e865c == 0x7fffffff) {
      DAT_1803e865c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    for (; lVar2 != lVar8; lVar2 = lVar2 + 0x38) {
      if (*(int *)(lVar2 + 0x24) != -1) {
        if (piStack_68 == local_60) {
          FUN_180229d20(&local_70);
        }
        else {
          *piStack_68 = *(int *)(lVar2 + 0x24);
          piStack_68 = piStack_68 + 1;
        }
      }
    }
    _Mtx_unlock(&DAT_1803e8610);
    local_a0 = piStack_68;
    if ((local_70 == piStack_68) && (DAT_1803e85b4 != -1)) {
      if (piStack_68 == local_60) {
        FUN_180229d20(&local_70,piStack_68,&DAT_1803e85b4);
      }
      else {
        *piStack_68 = DAT_1803e85b4;
        piStack_68 = piStack_68 + 1;
      }
    }
    local_98 = local_70;
    local_a0 = piStack_68;
    if (local_70 != piStack_68) {
      do {
        iVar6 = *local_98;
        local_a8 = iVar6;
        lVar8 = FUN_180131270();
        cVar5 = (**(code **)(lVar8 + 0x18))(iVar6,&local_88);
        plVar3 = DAT_180409c80;
        while (DAT_180409c80 = plVar3, cVar5 != '\0') {
          local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
          iVar4 = local_88._4_4_;
          if (local_88._4_4_ == 0xa3) {
            uVar9 = 0;
            uVar10 = 0;
            if ((puStack_80 != (uint *)0x0) && (7 < (int)local_78)) {
              uVar9 = *puStack_80;
              uVar10 = (ulonglong)puStack_80[1];
            }
            local_e8 = FUN_180132470(uVar10);
            FUN_180014410("[AS] *** callback 163 GetAuthSessionTicketResponse on pipe %d: handle=%u EResult=%u (%s)\n"
                          ,iVar6,uVar9,uVar10);
            DAT_180409c98 = (ulonglong)uVar9 << 0x20 | uVar10;
          }
          else if (local_88._4_4_ == 0x71) {
            uVar9 = 0;
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0;
            uVar12 = 0;
            if ((puStack_80 != (uint *)0x0) && (uVar16 = 0, uVar12 = 0, 0xf < (int)local_78)) {
              uVar9 = *puStack_80;
              uVar16 = puStack_80[1];
              uVar12 = (ushort)puStack_80[2];
              uVar14 = (uint)*(ushort *)((longlong)puStack_80 + 10);
              uVar15 = puStack_80[3];
            }
            if (plVar3 == (longlong *)0x0) {
              uVar11 = 0xffffffff;
LAB_180138a0f:
              local_b8 = 0xffffffff;
            }
            else {
              iVar6 = FUN_1801318c0(plVar3,0x71,"BGameConnectTokensAvailable");
              if (iVar6 < 0) {
                cVar5 = '\0';
              }
              else {
                cVar5 = (**(code **)(*plVar3 + (longlong)iVar6 * 8))(plVar3);
              }
              plVar3 = DAT_180409c80;
              uVar11 = (uint)(cVar5 != '\0');
              if (DAT_180409c80 == (longlong *)0x0) goto LAB_180138a0f;
              iVar6 = FUN_1801318c0(DAT_180409c80);
              if (iVar6 < 0) {
                local_b8 = 0;
              }
              else {
                cVar5 = (**(code **)(*plVar3 + (longlong)iVar6 * 8))(plVar3);
                local_b8 = (uint)(cVar5 != '\0');
              }
            }
            switch(uVar15) {
            case 1:
              pcVar13 = "invalid version";
              break;
            case 2:
              pcVar13 = "generic";
              break;
            case 3:
              pcVar13 = "not logged on - our session lost its Steam connection";
              break;
            case 4:
              pcVar13 = "no licence for the app";
              break;
            case 5:
              pcVar13 = "cheater (VAC)";
              break;
            case 6:
              pcVar13 = "logged in elsewhere - the account signed in somewhere else";
              break;
            case 7:
              pcVar13 = "unknown text";
              break;
            case 8:
              pcVar13 = "incompatible anticheat";
              break;
            case 9:
              pcVar13 = "memory corruption";
              break;
            case 10:
              pcVar13 = "incompatible software";
              break;
            case 0xb:
              pcVar13 = "Steam connection lost";
              break;
            case 0xc:
              pcVar13 = "Steam connection error";
              break;
            case 0xd:
              pcVar13 = "Steam response timed out";
              break;
            case 0xe:
              pcVar13 = "Steam validation stalled";
              break;
            case 0xf:
              pcVar13 = "owner left / guest user";
              break;
            default:
              pcVar13 = "unknown deny reason";
            }
            local_d8 = uVar16 & 0xff;
            local_e0 = uVar16 >> 8 & 0xff;
            local_d0 = (uint)uVar12;
            local_e8 = CONCAT44(local_e8._4_4_,uVar16 >> 0x10) & 0xffffffff000000ff;
            local_c8 = uVar9;
            local_c0 = uVar14;
            local_b0 = uVar11;
            FUN_180014410("[AS] *** callback 113 ClientGameServerDeny: reason=%u (%s) server=%u.%u.%u.%u:%u app=%u secure=%u [our session now: loggedOn=%d connectTokens=%d]\n"
                          ,uVar15,pcVar13,uVar16 >> 0x18);
            iVar6 = local_a8;
          }
          else if (local_88._4_4_ - 0x65U < 3) {
            FUN_180014410("[AS] service: connection callback %d on pipe %d\n",iVar4,iVar6);
          }
          else {
            uVar9 = local_88._4_4_ - 100;
            if ((uVar9 < 0x15) && (uVar9 = 1 << ((byte)uVar9 & 0x1f), (DAT_1804258f0 & uVar9) == 0))
            {
              DAT_1804258f0 = DAT_1804258f0 | uVar9;
              FUN_180014410("[AS] service: first ISteamUser callback %d on pipe %d (%d bytes) - logged once per id\n"
                            ,iVar4,iVar6,local_78 & 0xffffffff);
            }
          }
          lVar8 = FUN_180131270();
          (**(code **)(lVar8 + 0x20))(iVar6);
          lVar8 = FUN_180131270();
          cVar5 = (**(code **)(lVar8 + 0x18))(iVar6,&local_88);
          plVar3 = DAT_180409c80;
        }
        local_98 = local_98 + 1;
      } while (local_98 != local_a0);
    }
    Sleep(0x32);
  } while( true );
}


