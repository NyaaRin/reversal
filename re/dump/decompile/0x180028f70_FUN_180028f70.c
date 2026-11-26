// 0x180028f70  FUN_180028f70
// size=1905 thunk=false
// signature: undefined FUN_180028f70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180028f70(longlong param_1,char ****param_2,double param_3,char param_4,longlong param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  size_t sVar4;
  char ****ppppcVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *_Dst;
  longlong *plVar10;
  char ****ppppcVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  undefined4 local_228;
  char **local_220;
  char **ppcStack_218;
  ulonglong local_210;
  undefined8 uStack_208;
  undefined1 local_200 [32];
  undefined1 local_1e0 [24];
  undefined8 local_1c8;
  char ***local_1c0;
  longlong lStack_1b8;
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  char ***local_1a0;
  longlong lStack_198;
  ulonglong local_190;
  ulonglong uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined4 local_100 [8];
  undefined4 local_e0 [8];
  char ***local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  ulonglong uStack_88;
  char local_80 [32];
  ulonglong local_60;
  
  puVar15 = auStack_248;
  puVar14 = auStack_248;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  _Dst = (void *)0x0;
  local_228 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0xf;
  local_c0 = (char ***)0x0;
  if (*(char *)(param_1 + 0x89) == '\0') {
    if (param_2[2] == (char ***)0x0) goto LAB_180029695;
    if (&local_c0 != param_2) {
      if ((char ***)0xf < param_2[3]) {
        param_2 = (char ****)*param_2;
      }
      FUN_180212700(&local_c0,param_2);
    }
    iVar16 = *(int *)(param_1 + 0x84);
    puVar15 = auStack_248;
    if ((iVar16 < 1) || (puVar15 = auStack_248, iVar16 <= (int)local_b0)) goto LAB_18002965c;
    uVar12 = FUN_18020ea80(local_e0,(longlong)(iVar16 - (int)local_b0),0x20);
    ppppcVar5 = &local_c0;
    if (0xf < uStack_a8) {
      ppppcVar5 = (char ****)local_c0;
    }
    plVar10 = (longlong *)FUN_18021aef0(uVar12,ppppcVar5,local_b0);
    ppppcVar5 = (char ****)*plVar10;
    lVar9 = plVar10[1];
    uVar2 = plVar10[2];
    uVar7 = plVar10[3];
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    *(undefined1 *)plVar10 = 0;
    local_228 = 0x10;
    puVar14 = auStack_248;
    local_1a0 = (char ***)ppppcVar5;
    lStack_198 = lVar9;
    if (0xf < uStack_a8) {
      ppppcVar11 = (char ****)local_c0;
      puVar14 = auStack_248;
      local_190 = uVar2;
      uStack_188 = uVar7;
      if ((0xfff < uStack_a8 + 1) &&
         (ppppcVar11 = (char ****)local_c0[-1], puVar14 = auStack_248,
         (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar11)))) {
        pcVar1 = (code *)swi(0x29);
        ppppcVar11 = (char ****)(*pcVar1)(5);
        puVar14 = auStack_240;
      }
      *(undefined8 *)(puVar14 + -8) = 0x18002960b;
      free(ppppcVar11);
    }
    local_190 = 0;
    uStack_188 = 0xf;
    local_1a0 = (char ***)((ulonglong)local_1a0 & 0xffffffffffffff00);
    *(undefined4 *)(puVar14 + 0x20) = 0;
    *(undefined8 *)(puVar14 + -8) = 0x180029652;
    local_c0 = (char ***)ppppcVar5;
    lStack_b8 = lVar9;
    local_b0 = uVar2;
    uStack_a8 = uVar7;
    FUN_18020e450(&local_1a0);
    puVar6 = local_e0;
LAB_180029657:
    *(undefined8 *)(puVar14 + -8) = 0x18002965c;
    FUN_18020e450(puVar6);
    puVar15 = puVar14;
LAB_18002965c:
    if (*(longlong *)(param_5 + 0x10) + local_b0 < 0x101) {
      ppppcVar5 = &local_c0;
      if (0xf < uStack_a8) {
        ppppcVar5 = (char ****)local_c0;
      }
      *(undefined8 *)(puVar15 + -8) = 0x180029691;
      FUN_18021aef0(param_5,ppppcVar5);
      uVar12 = 1;
      goto LAB_180029697;
    }
  }
  else {
    puVar15 = auStack_248;
    if ((((param_4 != '\0') &&
         (puVar15 = auStack_248, ((uint)((ulonglong)param_3 >> 0x34) & 0x7ff) != 0x7ff)) &&
        (puVar15 = auStack_248, DAT_180381430 <= param_3)) &&
       (puVar15 = auStack_248, param_3 <= _DAT_180381230)) {
      FUN_180012ac0(local_80,0x20,&DAT_18033f574,(longlong)param_3);
      sVar4 = strlen(local_80);
      FUN_180212700(&local_c0,local_80,sVar4);
      uVar2 = local_b0;
      iVar16 = *(int *)(param_1 + 0x84);
      puVar15 = auStack_248;
      if ((0 < iVar16) && (puVar15 = auStack_248, (int)local_b0 < iVar16)) {
        iVar16 = iVar16 - (int)local_b0;
        if (*(char *)(param_1 + 0x88) == '\0') {
          uVar12 = FUN_18020ea80(local_100,(longlong)iVar16,0x20);
          ppppcVar5 = &local_c0;
          if (0xf < uStack_a8) {
            ppppcVar5 = (char ****)local_c0;
          }
          plVar10 = (longlong *)FUN_18021aef0(uVar12,ppppcVar5,local_b0);
          ppppcVar5 = (char ****)*plVar10;
          lVar9 = plVar10[1];
          uVar2 = plVar10[2];
          uVar7 = plVar10[3];
          plVar10[2] = 0;
          plVar10[3] = 0xf;
          *(undefined1 *)plVar10 = 0;
          local_228 = 0x20;
          puVar14 = auStack_248;
          local_1c0 = (char ***)ppppcVar5;
          lStack_1b8 = lVar9;
          if (0xf < uStack_a8) {
            ppppcVar11 = (char ****)local_c0;
            puVar14 = auStack_248;
            local_1b0 = uVar2;
            uStack_1a8 = uVar7;
            if ((0xfff < uStack_a8 + 1) &&
               (ppppcVar11 = (char ****)local_c0[-1], puVar14 = auStack_248,
               (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar11)))) {
              pcVar1 = (code *)swi(0x29);
              ppppcVar11 = (char ****)(*pcVar1)(5);
              puVar14 = auStack_240;
            }
            *(undefined8 *)(puVar14 + -8) = 0x1800294c2;
            free(ppppcVar11);
          }
          local_1b0 = 0;
          uStack_1a8 = 0xf;
          local_1c0 = (char ***)((ulonglong)local_1c0 & 0xffffffffffffff00);
          *(undefined4 *)(puVar14 + 0x20) = 0;
          *(undefined8 *)(puVar14 + -8) = 0x180029509;
          local_c0 = (char ***)ppppcVar5;
          lStack_b8 = lVar9;
          local_b0 = uVar2;
          uStack_a8 = uVar7;
          FUN_18020e450(&local_1c0);
          puVar6 = local_100;
          goto LAB_180029657;
        }
        if (local_b0 == 0) {
LAB_180029100:
          local_220 = (char **)0x0;
          ppcStack_218 = (char **)0x0;
          local_210 = 0;
          uStack_208 = 0;
          ppppcVar5 = &local_c0;
          if (0xf < uStack_a8) {
            ppppcVar5 = (char ****)local_c0;
          }
          if (0x7fffffffffffffff < local_b0) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          if (local_b0 < 0x10) {
            local_210 = local_b0;
            uStack_208 = 0xf;
            local_220 = (char **)*ppppcVar5;
            ppcStack_218 = (char **)ppppcVar5[1];
            puVar14 = auStack_248;
          }
          else {
            uVar7 = local_b0 | 0xf;
            if (uVar7 < 0x8000000000000000) goto LAB_180029183;
            uVar8 = 0x8000000000000027;
            uVar7 = 0x7fffffffffffffff;
            puVar14 = auStack_248;
            while( true ) {
              *(undefined8 *)(puVar14 + -8) = 0x180029174;
              lVar9 = FUN_1802d8350(uVar8);
              if (lVar9 != 0) break;
              pcVar1 = (code *)swi(0x29);
              uVar7 = (*pcVar1)(5);
              puVar14 = puVar14 + 8;
LAB_180029183:
              if (uVar7 < 0x16) {
                uVar7 = 0x16;
              }
              if (uVar7 == 0xffffffffffffffff) goto LAB_1800291cb;
              if (uVar7 + 1 < 0x1000) {
                *(undefined8 *)(puVar14 + -8) = 0x1800291cb;
                _Dst = (void *)FUN_1802d8350();
                goto LAB_1800291cb;
              }
              uVar8 = uVar7 + 0x28;
              if (uVar8 <= uVar7 + 1) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar14 + -8) = &UNK_1800296e2;
                FUN_180012fe0();
              }
            }
            _Dst = (void *)(lVar9 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)_Dst - 8) = lVar9;
LAB_1800291cb:
            *(void **)(puVar14 + 0x28) = _Dst;
            *(ulonglong *)(puVar14 + 0x38) = uVar2;
            *(ulonglong *)(puVar14 + 0x40) = uVar7;
            *(undefined8 *)(puVar14 + -8) = 0x1800291e9;
            memcpy(_Dst,ppppcVar5,uVar2 + 1);
          }
          bVar3 = false;
          puVar6 = (undefined4 *)(puVar14 + 0x28);
          uVar13 = 2;
        }
        else {
          ppppcVar5 = &local_c0;
          if (0xf < uStack_a8) {
            ppppcVar5 = (char ****)local_c0;
          }
          if (*(char *)ppppcVar5 != '-') goto LAB_180029100;
          bVar3 = true;
          puVar6 = (undefined4 *)FUN_18020e670(&local_c0,local_140,1,0xffffffffffffffff);
          uVar13 = 1;
          puVar14 = auStack_248;
        }
        *(uint *)(puVar14 + 0x20) = uVar13;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = *puVar6;
        uStack_9c = puVar6[1];
        uStack_98 = puVar6[2];
        uStack_94 = puVar6[3];
        local_90 = *(undefined8 *)(puVar6 + 4);
        uStack_88 = *(ulonglong *)(puVar6 + 6);
        *(undefined8 *)(puVar6 + 4) = 0;
        *(undefined8 *)(puVar6 + 6) = 0xf;
        *(undefined1 *)puVar6 = 0;
        if ((uVar13 & 2) != 0) {
          uVar13 = uVar13 & 0xfffffffd;
          *(uint *)(puVar14 + 0x20) = uVar13;
          *(undefined8 *)(puVar14 + -8) = 0x180029242;
          FUN_18020e450(puVar14 + 0x28);
        }
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar13 & 0xfffffffe;
          *(uint *)(puVar14 + 0x20) = uVar13;
          *(undefined8 *)(puVar14 + -8) = 0x180029258;
          FUN_18020e450(local_140);
        }
        *(undefined8 *)(puVar14 + -8) = 0x180029267;
        FUN_18020ea80(local_120,(longlong)iVar16,0x30);
        if (bVar3) {
          local_180 = 0;
          uStack_178 = 0;
          local_170 = 0;
          local_168 = 0;
          *(undefined8 *)(puVar14 + -8) = 0x180029294;
          FUN_18001d080(&local_180,&DAT_1803410ec,1);
          uVar13 = uVar13 | 4;
        }
        else {
          *(undefined8 *)(puVar14 + 0x68) = 0;
          *(undefined8 *)(puVar14 + 0x70) = 0;
          *(undefined8 *)(puVar14 + 0x78) = 0;
          *(undefined8 *)(puVar14 + 0x78) = 0;
          local_1c8 = 0xf;
          puVar14[0x68] = 0;
          uVar13 = uVar13 | 8;
        }
        *(uint *)(puVar14 + 0x20) = uVar13;
        *(undefined8 *)(puVar14 + -8) = 0x1800292d5;
        FUN_18021e540(local_160);
        *(uint *)(puVar14 + 0x20) = uVar13 | 0x80;
        uVar12 = local_90;
        puVar6 = &local_a0;
        if (0xf < uStack_88) {
          puVar6 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
        }
        *(undefined8 *)(puVar14 + -8) = 0x180029304;
        plVar10 = (longlong *)FUN_18021aef0(local_160,puVar6,uVar12);
        *(undefined8 *)(puVar14 + 0x58) = 0;
        *(undefined8 *)(puVar14 + 0x60) = 0;
        ppppcVar5 = (char ****)*plVar10;
        lVar9 = plVar10[1];
        *(char *****)(puVar14 + 0x48) = ppppcVar5;
        *(longlong *)(puVar14 + 0x50) = lVar9;
        uVar2 = plVar10[2];
        uVar7 = plVar10[3];
        *(ulonglong *)(puVar14 + 0x58) = uVar2;
        *(ulonglong *)(puVar14 + 0x60) = uVar7;
        plVar10[2] = 0;
        plVar10[3] = 0xf;
        *(undefined1 *)plVar10 = 0;
        *(uint *)(puVar14 + 0x20) = uVar13 | 0xc0;
        if (0xf < uStack_a8) {
          ppppcVar11 = (char ****)local_c0;
          if ((0xfff < uStack_a8 + 1) &&
             (ppppcVar11 = (char ****)local_c0[-1],
             (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar11)))) {
            pcVar1 = (code *)swi(0x29);
            ppppcVar11 = (char ****)(*pcVar1)(5);
            puVar14 = puVar14 + 8;
          }
          *(undefined8 *)(puVar14 + -8) = 0x18002937b;
          free(ppppcVar11);
        }
        local_c0 = (char ***)ppppcVar5;
        lStack_b8 = lVar9;
        local_b0 = uVar2;
        uStack_a8 = uVar7;
        *(undefined8 *)(puVar14 + 0x58) = 0;
        *(undefined8 *)(puVar14 + 0x60) = 0xf;
        puVar14[0x48] = 0;
        *(uint *)(puVar14 + 0x20) = uVar13 | 0x80;
        *(undefined8 *)(puVar14 + -8) = 0x1800293c6;
        FUN_18020e450(puVar14 + 0x48);
        *(uint *)(puVar14 + 0x20) = uVar13;
        *(undefined8 *)(puVar14 + -8) = 0x1800293d7;
        FUN_18020e450(local_160);
        if ((uVar13 & 8) != 0) {
          uVar13 = uVar13 & 0xffffff37;
          *(uint *)(puVar14 + 0x20) = uVar13;
          *(undefined8 *)(puVar14 + -8) = 0x1800293ee;
          FUN_18020e450(puVar14 + 0x68);
        }
        if ((uVar13 & 4) != 0) {
          *(uint *)(puVar14 + 0x20) = uVar13 & 0xfffffffb;
          *(undefined8 *)(puVar14 + -8) = 0x180029404;
          FUN_18020e450(&local_180);
        }
        *(undefined8 *)(puVar14 + -8) = 0x18002940e;
        FUN_18020e450(local_120);
        puVar6 = &local_a0;
        goto LAB_180029657;
      }
      goto LAB_18002965c;
    }
  }
LAB_180029695:
  uVar12 = 0;
LAB_180029697:
  *(undefined8 *)(puVar15 + -8) = 0x1800296a3;
  FUN_18020e450(&local_c0);
  *(undefined8 *)(puVar15 + -8) = 0x1800296b5;
  return uVar12;
}


