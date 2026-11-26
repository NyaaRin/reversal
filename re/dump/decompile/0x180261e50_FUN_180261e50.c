// 0x180261e50  FUN_180261e50
// size=613 thunk=false
// signature: undefined FUN_180261e50()
// status: ok


longlong * FUN_180261e50(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_48;
  longlong local_40;
  
  puVar10 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar10 = (undefined8 *)*param_3;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (param_3[2] != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)puVar10 + uVar8)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)param_3[2]);
  }
  FUN_180229bd0(param_1,&local_48,param_3,uVar11);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    plVar6 = (longlong *)(*pcVar3)();
    return plVar6;
  }
  puVar7 = (undefined8 *)FUN_1802d8350(0x30);
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  uVar4 = param_3[1];
  puVar7[2] = *param_3;
  puVar7[3] = uVar4;
  uVar4 = param_3[3];
  puVar7[4] = param_3[2];
  puVar7[5] = uVar4;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  fVar12 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar10 = local_48;
  if (*param_1 <= fVar12 && fVar12 != *param_1) {
    FUN_18022ea90(param_1);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar10 = *(undefined8 **)(param_1 + 2);
    if (puVar9 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar7[4];
      puVar10 = puVar9;
      while( true ) {
        puVar9 = puVar10 + 2;
        if (0xf < (ulonglong)puVar10[5]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        if ((ulonglong)puVar7[5] < 0x10) {
          _Buf1 = puVar7 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar7[2];
        }
        if ((_Size == puVar10[4]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar9,_Size), iVar5 == 0)))) break;
        if (puVar10 == puVar1) goto LAB_180262041;
        puVar10 = (undefined8 *)puVar10[1];
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_180262041:
  puVar9 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar10;
  puVar7[1] = puVar9;
  *puVar9 = puVar7;
  puVar10[1] = puVar7;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar1 = *(undefined8 **)(lVar2 + uVar11 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar11 * 0x10) = puVar7;
  }
  else {
    if (puVar1 == puVar10) {
      *(undefined8 **)(lVar2 + uVar11 * 0x10) = puVar7;
      goto LAB_180262090;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar11 * 0x10) != puVar9) goto LAB_180262090;
  }
  *(undefined8 **)(lVar2 + 8 + uVar11 * 0x10) = puVar7;
LAB_180262090:
  *param_2 = (longlong)puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


