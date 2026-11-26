// 0x180219900  FUN_180219900
// size=705 thunk=false
// signature: undefined FUN_180219900()
// status: ok


longlong * FUN_180219900(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined8 *local_58;
  longlong local_50;
  undefined8 *local_48;
  
  puVar9 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar12 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)((longlong)puVar9 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_180229bd0(param_1,&local_58,param_3,uVar12);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  puVar5 = (undefined8 *)FUN_1802d8350(0x38);
  puVar9 = puVar5 + 2;
  local_48 = puVar9;
  FUN_18016d4c0(puVar9,param_3);
  *(undefined4 *)(puVar5 + 6) = 0;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
    fVar13 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar7 = 0;
    if ((DAT_180381300 <= fVar13) && (fVar13 = fVar13 - DAT_180381300, fVar13 < DAT_180381300)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar13 + lVar7)) {
      uVar8 = (longlong)fVar13 + lVar7;
    }
    uVar11 = uVar6;
    if ((uVar6 < uVar8) && ((0x1ff < uVar6 || (uVar11 = uVar6 * 8, uVar6 * 8 < uVar8)))) {
      uVar11 = uVar8;
    }
    FUN_180239240(param_1,uVar11);
    puVar10 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar10 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar5[4];
      local_58 = puVar10;
      while( true ) {
        puVar10 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar10 = (undefined8 *)*puVar10;
        }
        _Buf1 = puVar9;
        if (0xf < (ulonglong)puVar5[5]) {
          _Buf1 = (undefined8 *)*puVar9;
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar10,_Size), iVar3 == 0)))) break;
        if (local_58 == puVar1) goto LAB_180219b4f;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_180219b4f:
  puVar9 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = local_58;
  puVar5[1] = puVar9;
  *puVar9 = puVar5;
  local_58[1] = puVar5;
  lVar7 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar10 = *(undefined8 **)(lVar7 + uVar12 * 0x10);
  if (puVar10 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar7 + uVar12 * 0x10) = puVar5;
  }
  else {
    if (puVar10 == local_58) {
      *(undefined8 **)(lVar7 + uVar12 * 0x10) = puVar5;
      goto LAB_180219b9e;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar12 * 0x10) != puVar9) goto LAB_180219b9e;
  }
  *(undefined8 **)(lVar7 + 8 + uVar12 * 0x10) = puVar5;
LAB_180219b9e:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


