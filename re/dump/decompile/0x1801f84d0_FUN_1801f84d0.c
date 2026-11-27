// 0x1801f84d0  FUN_1801f84d0
// size=772 thunk=false
// signature: undefined FUN_1801f84d0()
// status: ok


undefined8 FUN_1801f84d0(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ULONGLONG UVar6;
  undefined8 uVar7;
  char *pcVar8;
  int local_48;
  longlong local_40;
  
  if (DAT_1803fa408 == (code *)0x0) {
    return 0;
  }
  if (DAT_1803ff270 != '\0') {
    if (((DAT_1805b88a0 != 0) && (lVar4 = FUN_1801f81f0(param_2), lVar4 != 0)) &&
       (cVar2 = FUN_180059340(lVar4), cVar2 != '\0')) {
      DAT_1803ff90c = DAT_1803ff90c + 1;
      if ((DAT_180400ae8 & 0x3f) != 0) {
        DAT_180400ae8 = DAT_180400ae8 + 1;
        return 1;
      }
      DAT_180400ae8 = DAT_180400ae8 + 1;
      FUN_180014410("[LUANET] dropped outgoing \'%s\' (%u so far)\n",lVar4);
      return 1;
    }
    iVar3 = FUN_1801f8180(param_2);
    if (iVar3 == 9) {
      if (DAT_180423aea == '\0') {
        DAT_180423aea = '\x01';
        pcVar5 = (char *)FUN_1801f81f0(param_2);
        pcVar8 = "<null>";
        if (pcVar5 != (char *)0x0) {
          pcVar8 = pcVar5;
        }
        FUN_180014410("[CLCMOVE] type=%d name=%s (GetName idx %d)\n",9,pcVar8,9);
        local_48 = 0;
        local_40 = 0;
        do {
          FUN_180014410("[CLCMOVE] +%02X: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X\n"
                        ,local_48,*(undefined1 *)(local_40 + param_2),
                        *(undefined1 *)(local_40 + 1 + param_2),
                        *(undefined1 *)(local_40 + 2 + param_2),
                        *(undefined1 *)(local_40 + 3 + param_2),
                        *(undefined1 *)(local_40 + 4 + param_2),
                        *(undefined1 *)(local_40 + 5 + param_2),
                        *(undefined1 *)(local_40 + 6 + param_2),
                        *(undefined1 *)(local_40 + 7 + param_2),
                        *(undefined1 *)(local_40 + 8 + param_2),
                        *(undefined1 *)(local_40 + 9 + param_2),
                        *(undefined1 *)(local_40 + 10 + param_2),
                        *(undefined1 *)(local_40 + 0xb + param_2),
                        *(undefined1 *)(local_40 + 0xc + param_2),
                        *(undefined1 *)(local_40 + 0xd + param_2),
                        *(undefined1 *)(local_40 + 0xe + param_2),
                        *(undefined1 *)(local_40 + 0xf + param_2));
          local_48 = local_48 + 0x10;
          local_40 = local_40 + 0x10;
        } while (local_48 < 0x60);
        FUN_180014410("[CLCMOVE] new=%d backup=%d (expected small ints at +0x24/+0x20)\n",
                      *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x20));
      }
      uVar1 = DAT_1804099b0;
      if ((DAT_1804099b0 != 0) && (UVar6 = GetTickCount64(), cVar2 = DAT_1804099b8, UVar6 < uVar1))
      {
        LOCK();
        DAT_1804099b8 = '\0';
        UNLOCK();
        if (cVar2 == '\0') {
          DAT_180423b68 = DAT_180423b68 + 1;
          if ((3 < DAT_180423b68) && (DAT_180423b68 != (DAT_180423b68 / 200) * 200)) {
            DAT_1804099b8 = 0;
            return 1;
          }
          FUN_180014410("[CLCMOVE] frozen: clc_Move dropped, datagram still sent (#%d)\n",
                        DAT_180423b68);
          return 1;
        }
      }
      FUN_1801f8230(param_1,param_2);
    }
    param_4 = param_4 & 0xff;
    param_3 = param_3 & 0xff;
  }
  uVar7 = (*DAT_1803fa408)(param_1,param_2,param_3,param_4);
  return uVar7;
}


