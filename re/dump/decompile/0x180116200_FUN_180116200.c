// 0x180116200  FUN_180116200
// size=1772 thunk=false
// signature: undefined FUN_180116200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180116200(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [2];
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  char local_158 [4];
  undefined4 local_154;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined1 local_128 [2];
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined2 uStack_122;
  undefined8 local_120;
  int local_118;
  int local_114;
  char *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_30;
  
  pcVar2 = DAT_180423648;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  *param_3 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar9 = (char *)(lVar1 + 0xf89);
  if ((*pcVar9 == '\0') && (pcVar2 != (code *)0x0)) {
    _local_128 = 0x93fd561a96ab0c67;
    local_120 = 0x6c96c33ad11a014c;
    local_130 = param_1;
    local_110 = pcVar9;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_150,local_128);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_140,&local_120);
    pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
    if (*pcVar7 != '\0') {
      local_120 = 0x93fd561a96ab0c67;
      _local_128 = 0xb900ad038caed4bd;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_140,&local_120);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_150,local_128);
      pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
      if (*pcVar7 != '\0') {
        local_120 = 0x93fd561a96ab0c67;
        _local_128 = 0xd5eedd6096f28a0d;
        plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_140,&local_120);
        plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_150,local_128);
        pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
        if (*pcVar7 != '\0') {
          return 0;
        }
      }
      local_120 = 0x93fd561a96ab0c67;
      _local_128 = 0xb900ad038caed4bd;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_140,&local_120);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_150,local_128);
      pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
      if (*pcVar7 != '\0') {
        local_120 = 0x93fd561a96ab0c67;
        _local_128 = 0x404ea8e2391a46c5;
        plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_140,&local_120);
        plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_150,local_128);
        pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
        if (*pcVar7 != '\0') {
          return 0;
        }
      }
      if ((((DAT_1803fa668 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 != '\0')) && (DAT_1803fa608 != 0))
         && ((DAT_1803fa680 != (longlong *)0x0 &&
             (cVar4 = FUN_180071920(&DAT_1803e9290,"render.Capture in-place"), cVar4 != '\0')))) {
        if (DAT_1804236a5 != '\0') {
          *pcVar9 = '\x01';
          FUN_180116060(local_158);
          uVar5 = (*pcVar2)(param_1);
          *param_3 = uVar5;
          local_120 = 0x93fd561a96ab0c67;
          local_110 = (char *)0x6c96c33ad11a014c;
          plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_140,&local_120);
          plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_150,&local_110);
          pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
          *pcVar7 = local_158[0];
          DAT_180425ac8 = DAT_180425ac8 + 1;
          if (DAT_180425ac8 < 0xb) {
            FUN_180014410("[AntiSS] captured native clean frame #%d\n");
          }
          *pcVar9 = '\0';
          return 1;
        }
        local_114 = 0;
        local_118 = 0;
        (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_114,&local_118);
        if ((((0 < local_114) && (0 < local_118)) &&
            ((-1 < DAT_1803e8838 &&
             ((((uint)(*(int *)(DAT_1803fa608 + 4) - DAT_1803e8838) < 0x11 &&
               (DAT_1803809c4 < DAT_1803e9c78)) && (DAT_1803e9c78 < DAT_180381184)))))) &&
           ((plVar6 = DAT_1803fa630, DAT_1803fa630 != (longlong *)0x0 ||
            ((DAT_1803fa640 != (longlong *)0x0 &&
             (plVar6 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x330))(),
             plVar6 != (longlong *)0x0)))))) {
          uVar8 = _local_128;
          uStack_e0 = uRam00000001803e9c68;
          uStack_d0 = CONCAT44(uRam00000001803e9c7c,DAT_1803e9c78);
          local_d8 = _DAT_1803e9c70;
          local_c8 = _DAT_1803e9c80;
          uStack_c0 = uRam00000001803e9c88;
          local_b8 = _DAT_1803e9c90;
          uStack_b0 = uRam00000001803e9c98;
          local_a8 = _DAT_1803e9ca0;
          uStack_a0 = uRam00000001803e9ca8;
          local_98 = _DAT_1803e9cb0;
          uStack_90 = uRam00000001803e9cb8;
          local_88 = _DAT_1803e9cc0;
          uStack_80 = uRam00000001803e9cc8;
          local_78 = _DAT_1803e9cd0;
          uStack_70 = uRam00000001803e9cd8;
          local_68 = _DAT_1803e9ce0;
          uStack_64 = uRam00000001803e9ce4;
          uStack_60 = uRam00000001803e9ce8;
          uStack_5c = uRam00000001803e9cec;
          local_58 = _DAT_1803e9cf0;
          uStack_54 = uRam00000001803e9cf4;
          uStack_50 = uRam00000001803e9cf8;
          uStack_4c = uRam00000001803e9cfc;
          local_48 = DAT_1803e9d00;
          local_108 = 0;
          uStack_100 = 0;
          _local_f8 = CONCAT44(local_114,local_114);
          _local_e8 = CONCAT44((int)((ulonglong)_DAT_1803e9c60 >> 0x20),local_118);
          _iStack_f0 = CONCAT44((int)((ulonglong)uRam00000001803e9c58 >> 0x20),local_118);
          *pcVar9 = '\x01';
          cVar4 = DAT_1804236a5;
          local_158[0] = DAT_1804236a5;
          local_128[1] = DAT_1803fa660 != 0;
          local_128[0] = DAT_1804236a5;
          auVar3 = local_128;
          uStack_122 = SUB82(uVar8,6);
          _local_128 = (uint6)(ushort)local_128;
          LOCK();
          DAT_1804236a5 = 1;
          UNLOCK();
          if (DAT_1803fa660 != 0) {
            _local_128 = CONCAT15(*(undefined1 *)(DAT_1803fa660 + 0x93),
                                  CONCAT14(*(undefined1 *)(DAT_1803fa660 + 0x92),
                                           CONCAT13(*(undefined1 *)(DAT_1803fa660 + 0x91),
                                                    CONCAT12(*(undefined1 *)(DAT_1803fa660 + 0x90),
                                                             auVar3))));
            *(undefined4 *)(DAT_1803fa660 + 0x90) = 0;
          }
          local_158[1] = 0;
          local_168 = 0xff;
          (**(code **)(*plVar6 + 0x238))(plVar6,0,0,0);
          (**(code **)(*plVar6 + 0x50))(plVar6,1,1);
          *(undefined1 *)(lVar1 + 0xf8a) = 0;
          (**(code **)(*DAT_1803fa680 + 0x30))
                    (DAT_1803fa680,&local_108,DAT_1803e8834 | 0x23,DAT_1803e883c | 3);
          if ((*(char *)(lVar1 + 0xf8a) == '\0') && (DAT_18040a248 != (code *)0x0)) {
            (*DAT_18040a248)(&local_108);
          }
          uVar5 = 2;
          local_154 = 2;
          uVar8 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
          uVar8 = FUN_180241610(uVar8,0x5ec423757a9ceab);
          pcVar7 = (char *)FUN_1801fcfc0(uVar8);
          if (*pcVar7 != '\0') {
            uVar5 = 3;
          }
          local_154 = uVar5;
          FUN_180115fd0(3,uVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,1);
          FUN_180116060(local_158 + 2);
          uVar5 = (*pcVar2)(local_130);
          *param_3 = uVar5;
          local_158[1] = 1;
          FUN_180116150(local_158 + 2);
          DAT_1803fe68c = DAT_1803fe68c + 1;
          if (DAT_1803fe68c < 0xb) {
            FUN_180014410("[AntiSS] clean in-place render.Capture #%d (%dx%d)\n",DAT_1803fe68c,
                          local_114,local_118);
          }
          lVar1 = DAT_1803fa660;
          if ((local_128[1] != '\0') && (DAT_1803fa660 != 0)) {
            *(undefined1 *)(DAT_1803fa660 + 0x90) = uStack_126;
            *(undefined1 *)(lVar1 + 0x91) = uStack_125;
            *(undefined1 *)(lVar1 + 0x92) = uStack_124;
            *(undefined1 *)(lVar1 + 0x93) = uStack_123;
          }
          LOCK();
          UNLOCK();
          DAT_1804236a5 = cVar4;
          *pcVar9 = '\0';
          return 1;
        }
      }
    }
  }
  return 0;
}


