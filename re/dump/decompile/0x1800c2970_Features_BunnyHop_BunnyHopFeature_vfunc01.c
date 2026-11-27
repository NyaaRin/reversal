// 0x1800c2970  Features_BunnyHop_BunnyHopFeature_vfunc01
// size=1309 thunk=false
// signature: undefined Features_BunnyHop_BunnyHopFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_BunnyHop_BunnyHopFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1a8 [32];
  undefined1 *local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_e8 [32];
  float local_c8;
  float local_bc;
  char local_b1;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  DAT_18040986c = 0;
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
  uVar5 = (*pcVar2)(DAT_1803fa360,uVar4);
  local_148 = 0x5635981221fff3b8;
  local_158 = (undefined **)0x93fd561a96ab0c67;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_178,&local_158);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_168,&local_148);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (*pcVar7 == '\0') {
    return;
  }
  local_148 = 0x237bcfbdef3b6800;
  local_158 = (undefined **)0x402819404e703058;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_168,&local_148);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_178,&local_158);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (*pcVar7 != '\0') {
    return;
  }
  cVar3 = FUN_18001e0a0(uVar5);
  if (cVar3 != '\x02') {
    return;
  }
  cVar3 = FUN_18001fcf0(uVar5);
  if ('\x01' < cVar3) {
    return;
  }
  lVar8 = param_4;
  if (param_4 == 0) {
    lVar8 = param_3;
  }
  iVar1 = *(int *)(lVar8 + 4);
  uVar10 = iVar1 - _DAT_180409878;
  _DAT_180409878 = iVar1;
  pbVar9 = (byte *)FUN_18001d710(uVar5,&local_158);
  if ((*pbVar9 & 1) == 0) {
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffffffd;
    if (DAT_18040986d == '\0') {
      DAT_18040986d = '\x01';
      _DAT_180409860 = iVar1;
    }
    if (DAT_18040985c != '\0') {
      DAT_180409870 = 0;
    }
  }
  else {
    if (DAT_18040986d != '\0') {
      DAT_18040986d = '\0';
      if ((iVar1 - _DAT_180409860) - 1U < 4) {
        DAT_180409854 = DAT_180409854 + 1;
        if (1 < DAT_180409854) {
          DAT_180409868 = iVar1 + 0x10;
        }
      }
      else {
        DAT_180409854 = 0;
      }
    }
    if (((DAT_18040985c != '\0') && (DAT_18040985c = '\0', uVar10 < 2)) &&
       (DAT_180409870 = DAT_180409870 + 1, 2 < DAT_180409870)) {
      DAT_18040987c = DAT_18040987c + 1;
      DAT_180409875 = '\x01';
      DAT_180409874 = '\x01';
      DAT_180409858 = 0;
      if (DAT_18040987c < 6) {
        FUN_180014410(
                     "[BHOP] sim said jumped, engine kept us grounded #%d -- gamemode blocks the jump from Lua; heuristic path for this contact\n"
                     );
      }
    }
    uVar10 = *(uint *)(param_3 + 0x20);
    if (((uVar10 & 2) != 0) || ((param_4 != 0 && ((*(byte *)(param_4 + 0x20) & 2) != 0)))) {
      if ((1 < DAT_180409854) && (iVar1 < DAT_180409868)) {
LAB_1800c2c76:
        *(uint *)(param_3 + 0x20) = uVar10 & 0xfffffffd;
        return;
      }
      if (DAT_180409875 == '\0') {
        local_148 = 0x93fd561a96ab0c67;
        local_158 = (undefined **)0xfc192b983f5bff62;
        plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_168,&local_148);
        plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_178,&local_158);
        pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
        if (*pcVar7 != '\0') {
          uVar10 = *(uint *)(param_3 + 0x20);
          if (DAT_180409852 == '\0') {
            DAT_18040986c = 1;
            *(uint *)(param_3 + 0x20) = uVar10 | 2;
            return;
          }
          goto LAB_1800c2c76;
        }
      }
      if (DAT_180409874 != '\0') {
        if (DAT_1803fa610 != (longlong *)0x0) {
          FUN_18001daf0(uVar5,&local_148);
          fVar12 = (float)local_148 + 0.0;
          local_f8 = 0;
          fVar14 = local_140 + DAT_180380d30;
          local_128 = ((float)local_148 - 0.0) - fVar12;
          fVar13 = local_148._4_4_ + 0.0;
          local_120 = (local_140 - DAT_180381024) - fVar14;
          local_124 = (local_148._4_4_ - 0.0) - fVar13;
          fVar11 = (float)(*(code *)PTR_FUN_1803da018)
                                    (local_124 * local_124 + local_128 * local_128 +
                                     local_120 * local_120);
          local_ef = fVar11 != 0.0;
          local_188 = local_e8;
          local_104 = 0;
          local_108 = 0;
          local_f8 = 0;
          local_f0 = 1;
          local_114 = 0;
          local_118 = 0;
          local_158 = vftable_CTraceFilter;
          local_150 = uVar5;
          local_138 = fVar12;
          local_134 = fVar13;
          local_130 = fVar14;
          (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_138,0x201400b,&local_158);
          if (((local_b1 == '\0') && (local_bc < DAT_180380bb0)) && (local_c8 < DAT_180380b10)) {
            *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffffffd;
            DAT_180409858 = 0;
            DAT_180409864 = 1;
            return;
          }
        }
        if (DAT_180409864 == '\0') {
          DAT_180409858 = DAT_180409858 + 1;
          if (DAT_180409858 < 8) {
            *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffffffd;
            return;
          }
        }
        else {
          DAT_180409864 = '\0';
        }
      }
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 2;
      DAT_180409858 = 0;
      DAT_180409874 = 1;
      return;
    }
  }
  DAT_180409875 = 0;
  DAT_180409874 = 0;
  DAT_180409864 = 0;
  DAT_18040985c = 0;
  DAT_180409858 = 0;
  return;
}


