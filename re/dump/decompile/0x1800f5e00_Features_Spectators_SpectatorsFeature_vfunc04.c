// 0x1800f5e00  Features_Spectators_SpectatorsFeature_vfunc04
// size=2025 thunk=false
// signature: undefined Features_Spectators_SpectatorsFeature_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Spectators_SpectatorsFeature_vfunc04(longlong param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined4 uVar12;
  longlong lVar13;
  basic_ios<char,std::char_traits<char>_> **ppbVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float *pfVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *******pppppppuVar23;
  longlong *plVar24;
  float fVar25;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined4 local_1e0;
  basic_ios<char,std::char_traits<char>_> *local_1d8;
  undefined8 ******local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  ulonglong uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_17c;
  undefined *local_178;
  undefined **local_170;
  basic_ostream<char,std::char_traits<char>_> local_168 [16];
  longlong *local_158;
  longlong *local_150;
  longlong *local_138;
  ulonglong *local_130;
  int *local_120;
  ulonglong local_108;
  uint local_100;
  basic_ios<char,std::char_traits<char>_> local_f0 [104];
  ulonglong local_88;
  ulonglong uVar22;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  local_1e0 = 0;
  if (DAT_1803e7b78 == '\0') {
    return;
  }
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (cVar11 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar11 != '\0')) {
    pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar12 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar13 = (*pcVar3)(DAT_1803fa360,uVar12);
    if (lVar13 != 0) goto LAB_1800f5ea3;
  }
  FUN_18020ba00(param_1 + 8);
LAB_1800f5ea3:
  fVar2 = DAT_180381138;
  if (DAT_1804015c8 == '\0') {
    if (DAT_1803e7b80 <= DAT_180381138) {
      DAT_1803e7b80 = DAT_180381138;
    }
    if (DAT_1803e7b84 <= DAT_180381070) {
      DAT_1803e7b84 = DAT_180381070;
    }
    DAT_1804015c8 = '\x01';
  }
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar11 = *(char *)(lVar13 + 0x10);
  if (cVar11 == '\0') {
    __dyn_tls_on_demand_init();
    cVar11 = *(char *)(lVar13 + 0x10);
  }
  lVar18 = *(longlong *)(lVar13 + 0xec0);
  if (*(char *)(lVar18 + 0x108) == '\0') {
    DAT_1803f8fd0 = '\0';
    _DAT_1803fe680 = 0;
  }
  else if (DAT_1803f8fd0 != '\0') {
    DAT_1803e7b74 = *(float *)(lVar18 + 0x104) - _DAT_1803fe684;
    DAT_1803e7b70 = *(float *)(lVar18 + 0x100) - _DAT_1803fe680;
  }
  local_1e8 = (basic_ios<char,std::char_traits<char>_> *)CONCAT44(local_1e8._4_4_,0x3fc00000);
  local_1d8 = (basic_ios<char,std::char_traits<char>_> *)CONCAT44(local_1d8._4_4_,0x3f400000);
  pfVar19 = (float *)&local_1d8;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar19 = &DAT_1803da6a4;
  }
  ppbVar14 = (basic_ios<char,std::char_traits<char>_> **)&local_1e8;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    ppbVar14 = (basic_ios<char,std::char_traits<char>_> **)pfVar19;
  }
  fVar1 = *(float *)ppbVar14;
  lVar21 = DAT_1803fa5d0;
  if (DAT_1803fa5d0 == 0) {
    if (cVar11 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar21 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1228);
  }
  FUN_18027a8a0(lVar21,fVar1 * DAT_180380fd8);
  fVar25 = fVar1 * DAT_180380fa8;
  local_1e8 = (basic_ios<char,std::char_traits<char>_> *)CONCAT44(fVar25,fVar25);
  FUN_18026aad0(2,&local_1e8);
  local_1e8 = (basic_ios<char,std::char_traits<char>_> *)CONCAT44(fVar1 * DAT_180380e9c,fVar25);
  FUN_18026aad0(0xb,&local_1e8);
  local_1e8 = (basic_ios<char,std::char_traits<char>_> *)CONCAT44(fVar1 * DAT_180380f40,fVar25);
  FUN_18026aad0(0xe,&local_1e8);
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar21 = *(longlong *)(lVar13 + 0xec0);
  *(uint *)(lVar21 + 0x1f48) = *(uint *)(lVar21 + 0x1f48) | 1;
  *(float *)(lVar21 + 0x1f58) = DAT_1803e7b70;
  *(float *)(lVar21 + 0x1f5c) = DAT_1803e7b74;
  *(undefined8 *)(lVar21 + 0x1f60) = 0;
  *(undefined4 *)(lVar21 + 0x1f4c) = 1;
  local_1e8 = (basic_ios<char,std::char_traits<char>_> *)0x7f7fffff7f7fffff;
  local_1d8 = (basic_ios<char,std::char_traits<char>_> *)(ulonglong)(uint)(fVar1 * fVar2);
  FUN_180279900(&local_1d8,&local_1e8);
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_18026a810(10,*(longlong *)(lVar13 + 0xec0) + 0xe60);
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_18026a810(0xc);
  FUN_180276630("Spectators",0,0x178);
  if (((DAT_1803f8fd0 == '\0') && (*(char *)(lVar18 + 0xb30) != '\0')) &&
     (cVar11 = FUN_180279410(3), cVar11 != '\0')) {
    cVar11 = *(char *)(lVar13 + 0x10);
    if (cVar11 == '\0') {
      __dyn_tls_on_demand_init();
      cVar11 = *(char *)(lVar13 + 0x10);
    }
    lVar21 = *(longlong *)(lVar13 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar21 + 0x1520) + 0xce) = 1;
    lVar21 = *(longlong *)(lVar21 + 0x1520);
    if (lVar21 != 0) {
      fVar2 = *(float *)(lVar18 + 0xae0);
      if (*(float *)(lVar21 + 0x28) <= fVar2) {
        fVar1 = *(float *)(lVar18 + 0xae4);
        if (((*(float *)(lVar21 + 0x2c) <= fVar1) &&
            (fVar2 < *(float *)(lVar21 + 0x28) + *(float *)(lVar21 + 0x30))) &&
           (fVar1 < *(float *)(lVar21 + 0x2c) + *(float *)(lVar21 + 0x34))) {
          if (cVar11 == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (*(int *)(*(longlong *)(lVar13 + 0xec0) + 0x1594) == 0) {
            DAT_1803f8fd0 = '\x01';
            if (*(char *)(lVar13 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar18 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
            _DAT_1803fe680 =
                 CONCAT44(fVar1 - *(float *)(lVar18 + 0x2c),fVar2 - *(float *)(lVar18 + 0x28));
            if (*(char *)(lVar13 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            FUN_1802827b0(*(undefined8 *)(*(longlong *)(lVar13 + 0xec0) + 0x1520));
          }
        }
      }
    }
  }
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
  DAT_1803e7b70 = *(float *)(lVar18 + 0x28);
  DAT_1803e7b74 = *(float *)(lVar18 + 0x2c);
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar10 = _UNK_180381768;
  uVar9 = _DAT_180381760;
  uVar8 = _UNK_180381648;
  uVar7 = _DAT_180381640;
  uVar6 = _UNK_1803814b8;
  uVar5 = _DAT_1803814b0;
  lVar18 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
  DAT_1803e7b80 = *(float *)(lVar18 + 0x30);
  DAT_1803e7b84 = *(float *)(lVar18 + 0x34);
  puVar20 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar20 == puVar4) {
    FUN_1802aac00("No spectators");
  }
  else {
    do {
      if ((*(int *)(puVar20 + 4) != 0) && (*(int *)(puVar20 + 4) != 6)) {
        memset(&local_178,0,0xe8);
        local_178 = &DAT_18033b3dc;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (local_f0);
        local_1e0 = 4;
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)&local_178,
                   (basic_streambuf<char,std::char_traits<char>_> *)&local_170,false);
        *(undefined ***)((longlong)&local_178 + (longlong)*(int *)(local_178 + 4)) =
             vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
        *(int *)((longlong)&iStack_17c + (longlong)*(int *)(local_178 + 4)) =
             *(int *)(local_178 + 4) + -0x88;
        local_1e8 = (basic_ios<char,std::char_traits<char>_> *)&local_170;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)&local_170);
        local_170 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
        local_108 = 0;
        local_100 = 4;
        if (*(int *)(puVar20 + 4) == 4) {
          FUN_1801fc280(&local_178,"[First-Person] ");
        }
        puVar17 = puVar20;
        if (0xf < (ulonglong)puVar20[3]) {
          puVar17 = (undefined8 *)*puVar20;
        }
        FUN_180210c60(&local_178,puVar17,puVar20[2]);
        plVar24 = puVar20 + 5;
        plVar15 = plVar24;
        if (0xf < (ulonglong)puVar20[8]) {
          plVar15 = (longlong *)*plVar24;
        }
        if ((puVar20[7] != 4) || (*(int *)plVar15 != 0x72657375)) {
          uVar16 = FUN_1801fc280(&local_178,&DAT_18034f9b0);
          if (0xf < (ulonglong)puVar20[8]) {
            plVar24 = (longlong *)*plVar24;
          }
          uVar16 = FUN_180210c60(uVar16,plVar24,puVar20[7]);
          FUN_1801fc280(uVar16,&DAT_1803467cc);
        }
        uStack_1c8 = 0;
        local_1c0 = uVar5;
        uStack_1b8 = uVar6;
        local_1d0 = (undefined8 *******)0x0;
        local_1e0 = 6;
        if ((((local_100 & 2) == 0) || ((local_100 & 0x20) != 0)) &&
           (uVar22 = *local_130, uVar22 != 0)) {
          lVar18 = *local_150;
          if (uVar22 < local_108) {
            uVar22 = local_108;
          }
          lVar21 = uVar22 - lVar18;
LAB_1800f646d:
          if (lVar18 != 0) {
            FUN_180212700(&local_1d0,0,lVar21);
          }
        }
        else if (((local_100 & 4) == 0) && (*local_138 != 0)) {
          lVar18 = *local_158;
          lVar21 = (*local_120 - lVar18) + *local_138;
          goto LAB_1800f646d;
        }
        local_1e0 = 5;
        pppppppuVar23 = &local_1d0;
        if (0xf < uStack_1b8) {
          pppppppuVar23 = (undefined8 *******)local_1d0;
        }
        if (*(int *)(puVar20 + 4) == 4) {
          local_1b0 = uVar7;
          uStack_1a8 = uVar8;
          puVar17 = &local_1b0;
        }
        else {
          local_1a0 = uVar9;
          uStack_198 = uVar10;
          puVar17 = &local_1a0;
        }
        local_190 = *(undefined4 *)puVar17;
        uStack_18c = *(undefined4 *)((longlong)puVar17 + 4);
        uStack_188 = *(undefined4 *)(puVar17 + 1);
        uStack_184 = *(undefined4 *)((longlong)puVar17 + 0xc);
        FUN_1802aabb0(&local_190,&DAT_1803431ac,pppppppuVar23);
        local_1e0 = 4;
        FUN_18020e450(&local_1d0);
        local_1d8 = local_f0;
        *(undefined ***)((longlong)&local_178 + (longlong)*(int *)(local_178 + 4)) =
             vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
        *(int *)((longlong)&iStack_17c + (longlong)*(int *)(local_178 + 4)) =
             *(int *)(local_178 + 4) + -0x88;
        FUN_18020ffc0(&local_170);
        std::basic_ostream<char,std::char_traits<char>_>::
        ~basic_ostream<char,std::char_traits<char>_>(local_168);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (local_f0);
      }
      puVar20 = puVar20 + 9;
    } while (puVar20 != puVar4);
  }
  FUN_180278d40();
  FUN_18026a890(2);
  FUN_18026abb0(3);
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar13 + 0xec0);
  lVar18 = (longlong)*(int *)(lVar13 + 0x1fe8);
  if (*(int *)(lVar13 + 0x1fe8) < 1) {
    FUN_18027e9c0("Calling PopFont() too many times!");
  }
  else {
    lVar21 = *(longlong *)(lVar13 + 0x1ff0);
    FUN_18027a5f0(*(undefined8 *)(lVar21 + -0x10 + lVar18 * 0x10),
                  *(undefined4 *)(lVar21 + -8 + lVar18 * 0x10),
                  *(undefined4 *)(lVar21 + -4 + lVar18 * 0x10));
    *(int *)(lVar13 + 0x1fe8) = *(int *)(lVar13 + 0x1fe8) + -1;
  }
  return;
}


