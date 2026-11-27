// 1801544e0  FUN_1801544e0
// signature: undefined FUN_1801544e0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018015485d) */

undefined8 FUN_1801544e0(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *_ArgList;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  char local_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 ***local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  if (DAT_180400b09 == '\0') {
    pcVar7 = (char *)FUN_180152220(&local_68);
    local_78 = *pcVar7;
    cStack_77 = pcVar7[1];
    cStack_76 = pcVar7[2];
    cStack_75 = pcVar7[3];
    cStack_74 = pcVar7[4];
    cVar1 = pcVar7[5];
    cVar2 = pcVar7[6];
    cStack_71 = pcVar7[7];
    cVar3 = pcVar7[8];
    cStack_73 = cVar1;
    cStack_72 = cVar2;
    if ((((((local_78 != '\0') || (cStack_77 != '\0')) || (cStack_76 != '\0')) ||
         ((cStack_75 != '\0' || (cStack_74 != '\0')))) ||
        ((cVar1 != '\0' || ((cVar2 != '\0' || (cStack_71 != '\0')))))) || (cVar3 != '\0')) {
      iVar6 = _Mtx_lock(&DAT_1803e7a40);
      if (iVar6 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      if (DAT_1803e7a8c == 0x7fffffff) {
        DAT_1803e7a8c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      lVar5 = DAT_1803ea208;
      lVar10 = DAT_1803ea200;
      if (DAT_1803ea200 != DAT_1803ea208) {
        do {
          FUN_18020e450(lVar10);
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != lVar5);
        DAT_1803ea208 = DAT_1803ea200;
      }
      _Mtx_unlock(&DAT_1803e7a40);
      local_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_18001d080(&local_68,"Cleaning...",0xb);
      iVar6 = _Mtx_lock(&DAT_1803e7a40);
      if (iVar6 == 0) {
        if (DAT_1803e7a8c == 0x7fffffff) {
          DAT_1803e7a8c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        ppppuVar9 = &local_68;
        if (0xf < local_50) {
          ppppuVar9 = (undefined8 ****)local_68;
        }
        FUN_180212700(&DAT_1803ea218,ppppuVar9,local_58);
        _Mtx_unlock(&DAT_1803e7a40);
        FUN_18020e450(&local_68);
        DAT_180400b09 = '\x01';
        if (cVar1 != '\0') {
          DAT_180400b08 = 1;
          local_68 = (undefined8 ****)0x0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0;
          FUN_18001d080(&local_68,"sql wipe: queued for cl.db + mn.db (next game tick)",0x33);
          FUN_18014de20(&local_68);
          FUN_18020e450(&local_68);
        }
        if (cVar2 != '\0') {
          DAT_180400aec = 1;
        }
        _ArgList = (undefined8 *)FUN_1802d8350(0x18);
        *_ArgList = CONCAT17(cStack_71,
                             CONCAT16(cStack_72,
                                      CONCAT15(cStack_73,
                                               CONCAT14(cStack_74,
                                                        CONCAT13(cStack_75,
                                                                 CONCAT12(cStack_76,
                                                                          CONCAT11(cStack_77,
                                                                                   local_78)))))));
        *(char *)(_ArgList + 1) = cVar3;
        _ArgList[2] = FUN_180151b00;
        local_68 = (undefined8 ***)
                   _beginthreadex((void *)0x0,0,FUN_180221140,_ArgList,0,(uint *)&uStack_60);
        if (local_68 != (undefined8 ***)0x0) {
          if ((uint)uStack_60 != 0) {
            local_78 = (char)local_68;
            cStack_77 = (char)((ulonglong)local_68 >> 8);
            cStack_76 = (char)((ulonglong)local_68 >> 0x10);
            cStack_75 = (char)((ulonglong)local_68 >> 0x18);
            cStack_74 = (char)((ulonglong)local_68 >> 0x20);
            cStack_73 = (char)((ulonglong)local_68 >> 0x28);
            cStack_72 = (char)((ulonglong)local_68 >> 0x30);
            cStack_71 = (char)((ulonglong)local_68 >> 0x38);
            uStack_70 = (uint)uStack_60;
            uStack_6c = uStack_60._4_4_;
            iVar6 = _Thrd_detach(&local_78);
            if (iVar6 == 0) {
              return 1;
            }
          }
          std::_Throw_Cpp_error(1);
        }
        uStack_60 = uStack_60 & 0xffffffff00000000;
        std::_Throw_Cpp_error(6);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      std::_Throw_Cpp_error(5);
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    local_68 = (undefined8 ****)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"Nothing selected",0x10);
    iVar6 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar6 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar9 = &local_68;
    if (0xf < local_50) {
      ppppuVar9 = (undefined8 ****)local_68;
    }
    FUN_180212700(&DAT_1803ea218,ppppuVar9,local_58);
    _Mtx_unlock(&DAT_1803e7a40);
    FUN_18020e450(&local_68);
  }
  return 0;
}


