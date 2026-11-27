// 0x180219e20  FUN_180219e20
// size=594 thunk=false
// signature: undefined FUN_180219e20()
// status: ok


longlong * FUN_180219e20(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 *local_48;
  longlong local_40;
  
  puVar9 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (param_3[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)puVar9 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_3[2]);
  }
  FUN_180229bd0(param_1,&local_48,param_3,uVar10);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar3)();
    return plVar5;
  }
  puVar6 = (undefined8 *)FUN_1802d8350(0x30);
  FUN_18016d4c0(puVar6 + 2,param_3);
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar9 = local_48;
  if (*param_1 <= fVar11 && fVar11 != *param_1) {
    FUN_18022ea90(param_1);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar9 = *(undefined8 **)(param_1 + 2);
    if (puVar8 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar6[4];
      puVar9 = puVar8;
      while( true ) {
        puVar8 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[5]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        if ((ulonglong)puVar6[5] < 0x10) {
          _Buf1 = puVar6 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar6[2];
        }
        if ((_Size == puVar9[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar8,_Size), iVar4 == 0)))) break;
        if (puVar9 == puVar1) goto LAB_180219ffb;
        puVar9 = (undefined8 *)puVar9[1];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_180219ffb:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar9;
  puVar6[1] = puVar8;
  *puVar8 = puVar6;
  puVar9[1] = puVar6;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar1 = *(undefined8 **)(lVar2 + uVar10 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar10 * 0x10) = puVar6;
  }
  else {
    if (puVar1 == puVar9) {
      *(undefined8 **)(lVar2 + uVar10 * 0x10) = puVar6;
      goto LAB_18021a04f;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) != puVar8) goto LAB_18021a04f;
  }
  *(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) = puVar6;
LAB_18021a04f:
  *param_2 = (longlong)puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


