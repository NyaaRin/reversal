// 0x18001f7d0  FUN_18001f7d0
// size=387 thunk=false
// signature: undefined FUN_18001f7d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18001f7d0(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_378 [32];
  undefined4 local_358;
  char local_348 [15];
  undefined1 uStack_339;
  char local_338 [800];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_378;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if ((plVar5 != (longlong *)0x0) &&
     (uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5), DAT_1803fa668 != (longlong *)0x0)) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar9 = lVar2 + 0x3940;
    cVar3 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,uVar4,lVar9);
    if (cVar3 != '\0') {
      if (DAT_1803ff25c == '\0') {
        DAT_1803ff25c = '\x01';
        FUN_180014410("[DIAG] player_info_t: name=\'%s\' userID=%d sizeof=%d\n",lVar9,
                      *(undefined4 *)(lVar2 + 0x39c0),0x144);
        local_358 = 0xa8;
        FUN_180014410("[DIAG] offsets: name=%d userID=%d guid=%d friendsID=%d\n",0,0x80,0x84);
        lVar8 = 0;
        local_338[0] = '\0';
        do {
          FUN_180012a00(local_348,"%02X ",*(undefined1 *)(lVar9 + lVar8));
          puVar6 = &uStack_339;
          do {
            pcVar1 = puVar6 + 1;
            puVar6 = puVar6 + 1;
          } while (*pcVar1 != '\0');
          lVar7 = 0;
          do {
            cVar3 = local_348[lVar7];
            puVar6[lVar7] = cVar3;
            lVar7 = lVar7 + 1;
          } while (cVar3 != '\0');
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x100);
        FUN_180014410("[DIAG] raw: %s\n",local_338);
      }
      return *(undefined4 *)(lVar2 + 0x39c0);
    }
  }
  return 0xffffffff;
}


