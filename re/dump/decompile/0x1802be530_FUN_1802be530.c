// 0x1802be530  FUN_1802be530
// size=3068 thunk=false
// signature: undefined FUN_1802be530()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802be530(undefined8 param_1,float *param_2,uint param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  float *pfVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  float *local_1c0;
  float local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  byte local_1a0;
  undefined1 local_198 [8];
  float fStack_190;
  float fStack_18c;
  float *local_188;
  undefined8 local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined8 local_160;
  float local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  char local_108 [8];
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined1 local_f0 [8];
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_188 = param_2;
  local_180 = param_1;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar3 + 0xec0);
  uVar14 = *(ulonglong *)(lVar17 + 0x1520);
  *(undefined1 *)(uVar14 + 0xce) = 1;
  plVar4 = *(longlong **)(lVar17 + 0x1520);
  if (*(char *)((longlong)plVar4 + 0xd1) == '\0') {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = *(longlong *)(lVar3 + 0xec0);
    iVar11 = FUN_180268980(param_1,0,
                           *(undefined4 *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4));
    if (*(int *)(*plVar4 + 0x1578) == iVar11) {
      FUN_1802899e0(iVar11,0xb,param_1);
    }
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar24 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xcc8);
    fVar20 = fVar24 + fVar24 + *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
    fVar24 = param_4[1];
    if (param_4[1] == 0.0) {
      fVar24 = fVar20;
    }
    fVar21 = *param_4;
    if (*param_4 == 0.0) {
      fVar21 = fVar20;
    }
    local_100 = *(float *)(plVar4 + 0x23);
    fStack_f4 = fVar24 + *(float *)((longlong)plVar4 + 0x11c);
    fStack_fc = *(float *)((longlong)plVar4 + 0x11c);
    local_f8 = local_100 + fVar21;
    if (fVar24 < fVar20) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(lVar17 + 0xcc8);
    }
    local_1a8 = CONCAT44(fStack_f4 - fStack_fc,local_f8 - local_100);
    FUN_18027f400(&local_1a8,uVar12);
    uVar14 = FUN_18027f160(&local_100,iVar11,0,0);
    if ((char)uVar14 != '\0') {
      local_1c8 = (float *)((ulonglong)local_1c8._4_4_ << 0x20);
      local_1a0 = FUN_1802ab600(&local_100,iVar11,local_108,local_f0);
      uVar19 = param_3 & 0xffff9fff;
      if ((param_3 & 0x1002) == 0) {
        uVar19 = param_3;
      }
      local_150 = *local_188;
      fStack_14c = local_188[1];
      fStack_148 = local_188[2];
      fStack_144 = local_188[3];
      if ((uVar19 >> 0x1c & 1) != 0) {
        local_1c0 = &fStack_148;
        local_1c8 = &fStack_14c;
        FUN_180269040(local_188,local_188[1],local_188[2],&local_150);
      }
      fVar9 = fStack_144;
      fVar8 = fStack_148;
      fVar7 = fStack_14c;
      fVar6 = local_150;
      fVar20 = DAT_180380ac0;
      if (fVar24 <= fVar21) {
        fVar21 = fVar24;
      }
      local_114 = fStack_14c;
      local_138 = fStack_14c;
      fStack_134 = fStack_14c;
      fStack_130 = fStack_14c;
      fStack_12c = fStack_14c;
      local_110 = fStack_148;
      local_128 = fStack_148;
      fStack_124 = fStack_148;
      fStack_120 = fStack_148;
      fStack_11c = fStack_148;
      local_118 = local_150;
      local_160 = CONCAT44(fStack_f4,local_f8);
      local_10c = 0x3f800000;
      fVar21 = fVar21 / _DAT_180380e24;
      fVar24 = *(float *)(lVar17 + 0xccc);
      if (fVar21 * DAT_180380ac0 <= *(float *)(lVar17 + 0xccc)) {
        fVar24 = fVar21 * DAT_180380ac0;
      }
      fVar22 = local_f8;
      fVar23 = local_100;
      fVar25 = 0.0;
      fVar26 = fStack_fc;
      fVar27 = fStack_f4;
      if ((uVar19 & 0x400) == 0) {
        fVar22 = local_f8 - DAT_180380b20;
        fVar27 = fStack_f4 - DAT_180380b20;
        fVar23 = local_100 - DAT_180381368;
        fVar26 = fStack_fc - DAT_180381368;
        local_160 = CONCAT44(fVar27,fVar22);
        fVar25 = DAT_180381368;
      }
      local_168 = fVar23;
      local_164 = fVar26;
      if (((uVar19 >> 0xe & 1) == 0) || (DAT_180380bb0 <= fStack_144)) {
        pfVar15 = &local_118;
        if ((uVar19 >> 0xc & 1) == 0) {
          pfVar15 = &local_150;
        }
        fVar1 = pfVar15[3];
        local_158 = *pfVar15;
        local_178 = pfVar15[1];
        fStack_190 = pfVar15[2];
        local_1a8 = CONCAT44(local_1a8._4_4_,fStack_190);
        if ((DAT_180380bb0 <= fVar1) || ((uVar19 >> 0xd & 1) != 0)) {
          lVar5 = plVar4[0x59];
          if (*(char *)(lVar3 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
            fStack_190 = (float)local_1a8;
          }
          local_198._4_4_ = local_178;
          local_198._0_4_ = local_158;
          fStack_18c = fVar1 * *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xc84);
          uVar12 = FUN_180268ed0(local_198);
          local_1c0 = (float *)((ulonglong)local_1c0 & 0xffffffff00000000);
          local_1c8 = (float *)CONCAT44(local_1c8._4_4_,fVar24);
          FUN_180295000(lVar5,&local_168,&local_160,uVar12);
          fVar22 = local_138;
          fVar25 = local_128;
        }
        else {
          if (*(char *)(lVar3 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
            fStack_190 = (float)local_1a8;
          }
          local_198._4_4_ = local_178;
          local_198._0_4_ = local_158;
          fStack_18c = fVar1 * *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xc84);
          uVar12 = FUN_180268ed0(local_198);
          local_1b0 = 0;
          local_1c0 = (float *)CONCAT44(fVar25,fVar25);
          local_1c8 = (float *)CONCAT44(local_1c8._4_4_,fVar21);
          local_1b8 = fVar24;
          FUN_18029fa50(plVar4[0x59],CONCAT44(fVar26,fVar23),CONCAT44(fVar27,fVar22),uVar12);
          fVar22 = local_138;
          fVar25 = local_128;
        }
      }
      else {
        local_1a8 = CONCAT44(local_1a8._4_4_,
                             (float)(int)((fVar22 + fVar23) * DAT_180380ac0 + DAT_180380ac0));
        if ((uVar19 >> 0xd & 1) == 0) {
          _local_198 = ZEXT416((uint)(fVar25 - fVar21));
          if (*(char *)(lVar3 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          local_174 = local_138;
          local_170 = local_128;
          local_16c = fVar9 * *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xc84);
          local_178 = fVar6;
          uVar12 = FUN_180268ed0(&local_178);
          local_1b0 = 0xa0;
          local_1c0 = (float *)CONCAT44(fVar25,local_198._0_4_);
          local_1c8 = (float *)CONCAT44(local_1c8._4_4_,fVar21);
          local_160 = CONCAT44(fVar27,fVar22);
          local_1b8 = fVar24;
          FUN_18029fa50(plVar4[0x59],CONCAT44(fVar26,fVar21 + fVar23),CONCAT44(fVar27,fVar22),uVar12
                       );
          fVar22 = local_138;
          fVar25 = local_128;
        }
        else {
          lVar5 = plVar4[0x59];
          if (*(char *)(lVar3 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar25 = local_128;
          fVar22 = local_138;
          local_178 = fVar21 + fVar23;
          local_198._4_4_ = local_138;
          local_198._0_4_ = fVar6;
          fStack_190 = local_128;
          fStack_18c = fVar9 * *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xc84);
          local_174 = fVar26;
          uVar12 = FUN_180268ed0(local_198);
          local_1c0 = (float *)CONCAT44(local_1c0._4_4_,0xa0);
          local_1c8 = (float *)CONCAT44(local_1c8._4_4_,fVar24);
          FUN_180295000(lVar5,&local_178,&local_160,uVar12);
        }
        lVar5 = plVar4[0x59];
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        local_198._4_4_ = fVar22;
        local_198._0_4_ = fVar6;
        fStack_190 = fVar25;
        local_1a8 = CONCAT44(fVar27,(int)local_1a8);
        fStack_18c = (float)*(undefined4 *)(*(longlong *)(lVar3 + 0xec0) + 0xc84);
        uVar12 = FUN_180268ed0(local_198);
        local_1c0 = (float *)CONCAT44(local_1c0._4_4_,0x50);
        local_1c8 = (float *)CONCAT44(local_1c8._4_4_,fVar24);
        FUN_180295000(lVar5,&local_168,&local_1a8,uVar12);
      }
      FUN_18026c370(&local_100,iVar11,0);
      if ((uVar19 & 0x400) == 0) {
        if (*(float *)(lVar17 + 0xcd0) <= 0.0) {
          lVar5 = plVar4[0x59];
          fVar21 = *(float *)(lVar17 + 0x1210);
          uVar13 = FUN_18026a6a0(7,DAT_180380bb0);
          if ((uVar13 & 0xff000000) != 0) {
            local_1c8 = (float *)((ulonglong)local_1c8 & 0xffffffff00000000);
            if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
              local_1a8 = CONCAT44(fStack_f4 - _DAT_180380abc,local_f8 - _DAT_180380abc);
            }
            else {
              local_1a8 = CONCAT44(fStack_f4 - fVar20,local_f8 - fVar20);
            }
            local_174 = fStack_fc + fVar20;
            local_178 = local_100 + fVar20;
            FUN_180294990(lVar5,&local_178,&local_1a8,fVar24);
            local_1c0 = (float *)CONCAT44(local_1c0._4_4_,0x200);
            local_1c8 = (float *)CONCAT44(local_1c8._4_4_,(float)(int)fVar21);
            FUN_1802929d0(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),uVar13);
            *(undefined4 *)(lVar5 + 0x50) = 0;
          }
        }
        else {
          FUN_18026c1f0(CONCAT44(fStack_fc,local_100),CONCAT44(fStack_f4,local_f8),fVar24);
        }
      }
      uVar18 = local_180;
      pfVar15 = local_188;
      if ((*(int *)(lVar17 + 0x1594) == iVar11) && ((uVar19 >> 9 & 1) == 0)) {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar12 = DAT_180381384;
        lVar17 = *(longlong *)(lVar3 + 0xec0);
        iVar11 = *(int *)(lVar17 + 0x1ef8);
        uVar18 = local_180;
        pfVar15 = local_188;
        if ((iVar11 != 0) && (*(int *)(lVar17 + 0x1594) == iVar11)) {
          iVar16 = (int)*(char *)(lVar17 + 0x15a7);
          if (*(char *)(lVar17 + 0x15a7) == -1) {
            iVar16 = 0;
          }
          if ((*(char *)((longlong)iVar16 + 0x108 + lVar17) != '\0') &&
             (lVar5 = *(longlong *)(lVar17 + 0x1520), *(char *)(lVar5 + 0xd1) == '\0')) {
            *(undefined1 *)(lVar17 + 0x15a1) = 0;
            uVar2 = *(undefined4 *)
                     (*(longlong *)(lVar5 + 0x110) + -4 + (longlong)*(int *)(lVar5 + 0x108) * 4);
            cVar10 = FUN_18027bec0(iVar16,uVar12);
            FUN_180272f20();
            uVar18 = local_180;
            pfVar15 = local_188;
            if (cVar10 != '\0') {
              if (*(char *)(lVar17 + 0x2298) == '\0') {
                FUN_180287530();
                if ((*(byte *)(lVar17 + 0x28e4) & 2) != 0) {
                  FUN_180289170("[dragdrop] BeginDragDropSource() DragDropActive = true, source_id = 0x%08X%s\n"
                                ,iVar11,&DAT_18033e5ea);
                }
                *(int *)(lVar17 + 0x22b4) = iVar11;
                *(undefined4 *)(lVar17 + 0x22b8) = uVar2;
                *(undefined1 *)(lVar17 + 0x2298) = 1;
                *(undefined4 *)(lVar17 + 0x229c) = 0;
                *(int *)(lVar17 + 0x22a4) = iVar16;
                if (iVar11 == *(int *)(lVar17 + 0x1594)) {
                  *(undefined1 *)(lVar17 + 0x15a2) = 1;
                }
              }
              *(undefined4 *)(lVar17 + 0x22a0) = *(undefined4 *)(lVar17 + 4);
              *(undefined1 *)(lVar17 + 0x2299) = 1;
              if ((*(int *)(lVar17 + 0x2320) == 0) || ((*(uint *)(lVar17 + 0x2314) & 0x1000) == 0))
              {
                FUN_180280a90(0);
              }
              else {
                if (*(char *)(lVar3 + 0x10) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                lVar5 = *(longlong *)(lVar3 + 0xec0);
                FUN_180276630("##Tooltip_Hidden",0,0x2030347);
                lVar5 = *(longlong *)(lVar5 + 0x1520);
                *(undefined1 *)(lVar5 + 0xd1) = 1;
                *(undefined1 *)(lVar5 + 0xd4) = 1;
                *(undefined1 *)(lVar5 + 0xeb) = 1;
              }
              *(uint *)(lVar17 + 0x1f00) = *(uint *)(lVar17 + 0x1f00) & 0xfffffffe;
              if ((uVar19 & 2) == 0) {
                if (*(char *)(lVar3 + 0x10) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                lVar17 = *(longlong *)(lVar3 + 0xec0);
                if (*(int *)(lVar17 + 0x22bc) == -1) {
                  strncpy((char *)(lVar17 + 0x22c0),"_COL4F",0x20);
                  *(undefined1 *)(lVar17 + 0x22e0) = 0;
                  FUN_18028a8d0(lVar17 + 0x2330,0);
                  *(float **)(lVar17 + 0x22a8) = (float *)(lVar17 + 0x2340);
                  *(float *)(lVar17 + 0x2340) = fVar6;
                  *(float *)(lVar17 + 0x2344) = fVar7;
                  *(float *)(lVar17 + 0x2348) = fVar8;
                  *(float *)(lVar17 + 0x234c) = fVar9;
                  *(undefined4 *)(lVar17 + 0x22b0) = 0x10;
                }
              }
              else {
                if (*(char *)(lVar3 + 0x10) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                lVar17 = *(longlong *)(lVar3 + 0xec0);
                if (*(int *)(lVar17 + 0x22bc) == -1) {
                  strncpy((char *)(lVar17 + 0x22c0),"_COL3F",0x20);
                  *(undefined1 *)(lVar17 + 0x22e0) = 0;
                  FUN_18028a8d0(lVar17 + 0x2330,0);
                  *(undefined4 *)(lVar17 + 0x234c) = 0;
                  *(float **)(lVar17 + 0x22a8) = (float *)(lVar17 + 0x2340);
                  *(float *)(lVar17 + 0x2340) = fVar6;
                  *(float *)(lVar17 + 0x2344) = fVar22;
                  *(float *)(lVar17 + 0x2348) = fVar25;
                  *(undefined4 *)(lVar17 + 0x22b0) = 0xc;
                }
              }
              uVar18 = local_180;
              pfVar15 = local_188;
              *(undefined4 *)(lVar17 + 0x22bc) = *(undefined4 *)(lVar17 + 4);
              local_1a8 = 0;
              FUN_1802be530(local_180,local_188,uVar19,&local_1a8);
              FUN_18027f5b0();
              FUN_1802aa3c0("Color",0,0);
              if (*(char *)(lVar3 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar3 = *(longlong *)(lVar3 + 0xec0);
              if ((*(byte *)(lVar3 + 0x229c) & 1) == 0) {
                FUN_180278d40();
              }
              if (*(int *)(lVar3 + 0x22bc) == -1) {
                FUN_180287530();
              }
              *(undefined1 *)(lVar3 + 0x2299) = 0;
            }
          }
        }
      }
      if ((((uVar19 & 0x40) == 0) && (local_108[0] != '\0')) &&
         (cVar10 = FUN_18026ee60(0x1000), cVar10 != '\0')) {
        FUN_1802bf130(uVar18,pfVar15,uVar19 & 0x18007002);
      }
      return (ulonglong)local_1a0;
    }
  }
  return uVar14 & 0xffffffffffffff00;
}


