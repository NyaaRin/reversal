// 0x18014a8f0  FUN_18014a8f0
// size=1964 thunk=false
// signature: undefined FUN_18014a8f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014a8f0(longlong param_1,longlong param_2,char param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  size_t sVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *******_Buf1;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  ulonglong uVar16;
  undefined1 auStack_148 [32];
  undefined8 ******local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 ******local_e8;
  undefined8 *local_e0;
  undefined8 ******local_d8 [2];
  size_t local_c8;
  ulonglong local_c0;
  char local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_e0 = (undefined8 *)0x93fd561a96ab0c67;
  local_e8 = (undefined8 ******)0xf2d6f3345979f232;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_e0);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,&local_128,&local_e8);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if ((((*pcVar7 == '\0') || (param_2 == 0)) || (DAT_1803fa668 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 == '\0')) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_18014a690(param_1,param_2);
    }
    if (param_2 == 0) {
      return;
    }
    if (DAT_1803fa668 == (longlong *)0x0) {
      return;
    }
    cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))();
    if (cVar3 == '\0') {
      return;
    }
    lVar11 = FUN_1801475e0(param_2);
    if (lVar11 == 0) {
      return;
    }
    lVar12 = thunk_FUN_1802d5f00(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                                 lVar11);
    if (lVar12 != *(longlong *)(param_1 + 0x70)) {
      return;
    }
    *(longlong *)(param_1 + 0x50) = param_2;
    *(longlong *)(param_1 + 0x58) = lVar11;
    uVar5 = FUN_180147610(param_2);
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    return;
  }
  if (*(longlong *)(param_1 + 0x10) != param_2) {
    DAT_180409ae0 = 0;
    DAT_1803e83a4 = -1;
    DAT_180409b88 = 0;
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
    puVar8 = (undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    *(undefined1 *)puVar8 = 0;
  }
  local_e8 = (undefined8 *******)0x93fd561a96ab0c67;
  local_e0 = (undefined8 *)0xa8b2235b275142e2;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_128,&local_e8);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,&local_108,&local_e0);
  puVar8 = (undefined8 *)FUN_1802028c0(*plVar6 + 0x28);
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  FUN_180145c40(local_d8,puVar8);
  uVar16 = local_c0;
  pppppppuVar15 = (undefined8 *******)local_d8[0];
  if (param_3 != '\0') {
    pppppppuVar13 = (undefined8 *******)(param_1 + 0x30);
    pppppppuVar14 = pppppppuVar13;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      pppppppuVar14 = (undefined8 *******)*pppppppuVar13;
    }
    _Buf1 = local_d8;
    if (0xf < local_c0) {
      _Buf1 = (undefined8 *******)local_d8[0];
    }
    if ((local_c8 != *(size_t *)(param_1 + 0x40)) ||
       ((local_c8 != 0 && (iVar4 = memcmp(_Buf1,pppppppuVar14,local_c8), iVar4 != 0)))) {
      plVar6 = (longlong *)(param_1 + 0x18);
      *plVar6 = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      DAT_1803e83a4 = -1;
      DAT_180409b88 = 0;
      if (pppppppuVar13 != local_d8) {
        pppppppuVar14 = local_d8;
        if (0xf < uVar16) {
          pppppppuVar14 = pppppppuVar15;
        }
        FUN_180212700(pppppppuVar13,pppppppuVar14,local_c8);
        uVar16 = local_c0;
        pppppppuVar15 = (undefined8 *******)local_d8[0];
      }
      pppppppuVar13 = local_d8;
      if (0xf < uVar16) {
        pppppppuVar13 = pppppppuVar15;
      }
      cVar3 = FUN_180146890(pppppppuVar13,plVar6,param_1 + 0x28);
      if (cVar3 == '\0') {
        local_128 = (undefined8 *******)0x0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0;
        FUN_18001d080(&local_128,"Model not found / failed to load",0x20);
        local_e8 = (undefined8 ******)&DAT_1803e8400;
        iVar4 = _Mtx_lock(&DAT_1803e8400);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_1803e844c == 0x7fffffff) {
          DAT_1803e844c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        pppppppuVar15 = &local_128;
        if (0xf < local_110) {
          pppppppuVar15 = (undefined8 *******)local_128;
        }
        FUN_180212700(s_Ready_1803e9eb8,pppppppuVar15,local_118);
        _Mtx_unlock(&DAT_1803e8400);
      }
      else {
        lVar11 = *(longlong *)(param_1 + 0x58);
        if (lVar11 == 0) {
          lVar11 = FUN_1801475e0(param_2);
        }
        lVar12 = *plVar6;
        if (DAT_1803ffc3c == '\0') {
          DAT_1803ffc3c = '\x01';
          local_e8 = &local_128;
          local_128 = (undefined8 *******)0x0;
          uStack_120 = 0;
          local_118 = 0;
          local_110 = 0;
          FUN_18001d080(&local_128,
                        "48 83 EC 28 48 8B D1 48 8D 0D ? ? ? ? E8 ? ? ? ? 85 C0 78 ? 48 63 C8 48 8B 05 ? ? ? ? 48 8D 14 C8"
                        ,0x61);
          local_e0 = &local_108;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          FUN_18001d080(&local_108,"client.dll",10);
          DAT_180423b70 = FUN_180015f40(&local_108,&local_128);
          pcVar7 = "FAIL (donor transplant fallback)";
          if (DAT_180423b70 != 0) {
            pcVar7 = "OK";
          }
          FUN_180014410("[Toolbox-anim] ActivityList_IndexForName = %p %s\n",DAT_180423b70,pcVar7);
        }
        lVar2 = DAT_180423b70;
        if (DAT_180423b70 == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
LAB_18014ac98:
          lVar12 = *plVar6;
          lVar11 = FUN_1800b9fe0(lVar11);
          lVar12 = FUN_1800b9fe0(lVar12);
          if (((lVar11 != 0) && (lVar12 != 0)) && (lVar11 != lVar12)) {
            local_108 = 0;
            uStack_100 = 0;
            local_f8 = local_f8 & 0xffffffff00000000;
            local_128 = (undefined8 *******)0x0;
            uStack_120 = 0;
            local_118 = local_118 & 0xffffffff00000000;
            cVar3 = FUN_180147bc0(lVar11,&local_108);
            if ((cVar3 != '\0') && (cVar3 = FUN_180147bc0(lVar12,&local_128), cVar3 != '\0')) {
              iVar4 = (int)local_f8;
              if (0x1000 < (int)local_f8) {
                iVar4 = 0x1000;
              }
              local_f8 = CONCAT44(local_f8._4_4_,iVar4);
              iVar4 = (int)local_118;
              if (0x1000 < (int)local_118) {
                iVar4 = 0x1000;
              }
              local_118 = CONCAT44(local_118._4_4_,iVar4);
              FUN_180148520(&local_108,&local_128);
            }
          }
        }
        else {
          lVar12 = FUN_1800b9fe0(lVar12);
          if (lVar12 == 0) {
            *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            goto LAB_18014ac98;
          }
          local_128 = (undefined8 *******)0x0;
          uStack_120 = 0;
          local_118 = local_118 & 0xffffffff00000000;
          cVar3 = FUN_180147bc0(lVar12,&local_128);
          if (cVar3 == '\0') {
            *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            goto LAB_18014ac98;
          }
          iVar4 = (int)local_118;
          if (0x1000 < (int)local_118) {
            iVar4 = 0x1000;
          }
          local_118 = CONCAT44(local_118._4_4_,iVar4);
          lVar9 = FUN_1800b9fe0(lVar11);
          if (lVar9 != 0) {
            lVar12 = lVar9;
          }
          iVar4 = FUN_180148720(&local_128,*(undefined4 *)(lVar12 + 0xc4),lVar2);
          *(int *)(param_1 + 0x24) = iVar4;
          if (iVar4 < 0) goto LAB_18014ac98;
        }
        FUN_1801488a0();
        if ((*plVar6 == 0) ||
           (lVar11 = thunk_FUN_1802d5f00(*(undefined8 *)(param_1 + 0x68),
                                         *(undefined8 *)(param_1 + 0x70)),
           lVar11 == *(longlong *)(param_1 + 0x70))) {
          if (*(undefined8 **)(param_1 + 0x70) == *(undefined8 **)(param_1 + 0x78)) {
            FUN_180221c00();
          }
          else {
            **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x18);
            *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 8;
          }
        }
        if (*(int *)(param_1 + 0x28) < 0) {
          pcVar7 = "Model loaded: no precache index - pointer mode (guarded)";
LAB_18014adc3:
          FUN_180012ac0(local_b8,0x70,pcVar7);
        }
        else if (*(int *)(param_1 + 0x24) < 3) {
          if (*(int *)(param_1 + 0x24) < 0) {
            pcVar7 = "Model loaded (transplant fallback)";
            goto LAB_18014adc3;
          }
          FUN_180012ac0(local_b8,0x70,"Model loaded: %d acts only - client driver");
        }
        else {
          FUN_180012ac0(local_b8,0x70,"Model loaded: native animations (%d acts)");
        }
        local_128 = (undefined8 *******)0x0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0;
        sVar10 = strlen(local_b8);
        FUN_18001d080(&local_128,local_b8,sVar10);
        local_e8 = (undefined8 ******)&DAT_1803e8400;
        iVar4 = _Mtx_lock(&DAT_1803e8400);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_1803e844c == 0x7fffffff) {
          DAT_1803e844c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        pppppppuVar15 = &local_128;
        if (0xf < local_110) {
          pppppppuVar15 = (undefined8 *******)local_128;
        }
        FUN_180212700(s_Ready_1803e9eb8,pppppppuVar15,local_118);
        _Mtx_unlock(&DAT_1803e8400);
      }
      FUN_18020e450(&local_128);
    }
  }
  plVar6 = (longlong *)(param_1 + 0x18);
  if (*plVar6 == 0) goto LAB_18014aff9;
  lVar11 = FUN_1801475e0(param_2);
  if (((*(longlong *)(param_1 + 0x50) != param_2) && (lVar11 != 0)) &&
     (lVar12 = thunk_FUN_1802d5f00(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                                   lVar11), lVar12 == *(longlong *)(param_1 + 0x70))) {
    *(longlong *)(param_1 + 0x50) = param_2;
    *(longlong *)(param_1 + 0x58) = lVar11;
    uVar5 = FUN_180147610(param_2);
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    FUN_180014410("[Toolbox] real-model snapshot at first apply: idx=%d model=%p\n",uVar5,
                  *(undefined8 *)(param_1 + 0x58));
  }
  DAT_1803e83a4 = *(int *)(param_1 + 0x28);
  DAT_180409ae0 = param_2;
  if (DAT_1803e83a4 < 0) {
    DAT_1803e83a4 = -1;
    DAT_180409b88 = *plVar6;
    if (lVar11 != DAT_180409b88) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        DAT_180409ae8 = DAT_180409ae8 + 1;
      }
      cVar3 = FUN_1801477c0(param_2,DAT_180409b88,*(char *)(param_1 + 0x20) == '\0');
      goto LAB_18014afe8;
    }
  }
  else {
    DAT_180409b88 = 0;
    if (lVar11 != *plVar6) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        DAT_180409ae8 = DAT_180409ae8 + 1;
      }
      cVar3 = FUN_1801478f0(param_2);
LAB_18014afe8:
      if (cVar3 != '\0') {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
    }
  }
  FUN_180149d70(param_2);
LAB_18014aff9:
  FUN_18020e450(local_d8);
  return;
}


