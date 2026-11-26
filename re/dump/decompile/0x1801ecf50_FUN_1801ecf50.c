// 0x1801ecf50  FUN_1801ecf50
// size=744 thunk=false
// signature: undefined FUN_1801ecf50()
// status: ok


undefined8 FUN_1801ecf50(void)

{
  undefined1 *puVar1;
  char cVar2;
  void *lp;
  undefined1 *lp_00;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  DAT_1803ff228 = (undefined1 *)0x0;
  DAT_1803e73a8 = 0xffffffff;
  if (DAT_1803f9278 == (undefined8 *)0x0) {
    FUN_180014410("[SENDPKT-FAIL] g_pClient is null; choke disabled\n");
    return 0;
  }
  lp = (void *)*DAT_1803f9278;
  if ((lp == (void *)0x0) || (BVar3 = IsBadReadPtr(lp,0xb0), BVar3 != 0)) {
    FUN_180014410("[SENDPKT-FAIL] CHLClient vtable unreadable; choke disabled\n");
    return 0;
  }
  lp_00 = *(undefined1 **)((longlong)lp + 0xa8);
  if ((lp_00 == (undefined1 *)0x0) || (BVar3 = IsBadReadPtr(lp_00,0x30), BVar3 != 0)) {
    FUN_180014410("[SENDPKT-FAIL] CHLClient::CreateMove=%p unreadable; choke disabled\n",lp_00);
    return 0;
  }
  iVar5 = 0;
  do {
    cVar2 = lp_00[iVar5];
    puVar1 = lp_00 + iVar5;
    if (cVar2 == 'W') {
      DAT_1803ff228 = lp_00 + iVar5;
      DAT_1803e73a8 = 0xffffffff;
      FUN_180014410("[SENDPKT] CHLClient::CreateMove=%p rdi-spill=%p (push rdi)\n",lp_00);
      return 1;
    }
    if (cVar2 == '@') {
      if (puVar1[1] == 'W') {
        DAT_1803ff228 = lp_00 + iVar5;
        DAT_1803e73a8 = 0xffffffff;
        FUN_180014410("[SENDPKT] CHLClient::CreateMove=%p rdi-spill=%p (REX push rdi)\n",lp_00);
        return 1;
      }
LAB_1801ed079:
      if (7 < (byte)(puVar1[1] + 0xb0)) goto LAB_1801ed08e;
      iVar4 = 2;
    }
    else {
      if (cVar2 == 'H') {
        if (puVar1[1] == -0x77) {
          if ((puVar1[2] == '|') && (puVar1[3] == '$')) {
            DAT_1803e73a8 = (uint)(byte)puVar1[4];
            uVar6 = (uint)(byte)puVar1[4];
LAB_1801ed1b2:
            DAT_1803ff228 = lp_00 + iVar5;
            FUN_180014410("[SENDPKT] CHLClient::CreateMove=%p rdi-spill=%p (mov [rsp+0x%X], rdi)\n",
                          lp_00,puVar1,uVar6);
            return 1;
          }
          if (puVar1[2] == -0x44) {
            if (puVar1[3] == '$') {
              DAT_1803e73a8 = *(uint *)(puVar1 + 4);
              uVar6 = DAT_1803e73a8;
              goto LAB_1801ed1b2;
            }
            goto LAB_1801ed063;
          }
        }
      }
      else {
LAB_1801ed063:
        if ((byte)(cVar2 + 0xb0U) < 8) {
          iVar4 = 1;
          goto LAB_1801ed152;
        }
        if (cVar2 == 'A') goto LAB_1801ed079;
      }
LAB_1801ed08e:
      if ((cVar2 + 0xb8U & 0xfb) == 0) {
        if (((puVar1[1] == -0x77) && ((puVar1[2] & 199) == 0x44)) && (puVar1[3] == '$')) {
          iVar4 = 5;
          goto LAB_1801ed152;
        }
        if (cVar2 != 'H') goto LAB_1801ed0bd;
      }
      else {
LAB_1801ed0bd:
        if (cVar2 != 'L') break;
      }
      if (((puVar1[1] == -0x77) && ((puVar1[2] & 199) == 0x84)) && (puVar1[3] == '$')) {
        iVar4 = 8;
      }
      else {
        if (cVar2 != 'H') break;
        cVar2 = puVar1[1];
        if (cVar2 == -0x7d) {
          if (puVar1[2] == -0x14) {
            iVar4 = 4;
          }
          else {
LAB_1801ed114:
            if (cVar2 == -0x73) {
              if (puVar1[2] == 'l') {
                if (puVar1[3] != '$') break;
                iVar4 = 5;
              }
              else {
                if ((puVar1[2] != -0x54) || (puVar1[3] != '$')) break;
                iVar4 = 8;
              }
            }
            else {
              if ((cVar2 != -0x75) || (puVar1[2] != -0x14)) break;
              iVar4 = 3;
            }
          }
        }
        else {
          if (cVar2 != -0x7f) goto LAB_1801ed114;
          if (puVar1[2] != -0x14) break;
          iVar4 = 7;
        }
      }
    }
LAB_1801ed152:
    iVar5 = iVar5 + iVar4;
  } while (iVar5 < 0x30);
  FUN_180014410("[SENDPKT-FAIL] no rdi spill in CHLClient::CreateMove=%p prologue (first bytes %02X %02X %02X %02X %02X); choke disabled\n"
                ,lp_00,*lp_00,lp_00[1],lp_00[2],lp_00[3],lp_00[4]);
  return 0;
}


