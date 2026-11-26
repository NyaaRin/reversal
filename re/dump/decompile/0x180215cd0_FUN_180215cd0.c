// 0x180215cd0  FUN_180215cd0
// size=584 thunk=false
// signature: undefined FUN_180215cd0()
// status: ok


undefined8 * FUN_180215cd0(float *param_1,undefined8 *param_2,byte *param_3)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar7 = *(undefined8 **)pfVar1;
  if (puVar6 != puVar7) {
    lVar2 = puVar6[2];
    puVar7 = puVar6;
    while( true ) {
      if (*(longlong *)param_3 == lVar2) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar7 = (undefined8 *)puVar7[1];
      lVar2 = puVar7[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar5 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar5)();
    return puVar6;
  }
  puVar6 = (undefined8 *)FUN_1802d8350(0x20);
  puVar6[2] = *(undefined8 *)param_3;
  puVar6[3] = 0;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    FUN_18022c300(param_1);
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar7 = *(undefined8 **)pfVar1;
    if (puVar3 != puVar7) {
      lVar2 = puVar3[2];
      puVar7 = puVar3;
      while (puVar6[2] != lVar2) {
        if (puVar7 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_180215eb9;
        puVar7 = (undefined8 *)puVar7[1];
        lVar2 = puVar7[2];
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_180215eb9:
  puVar3 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar7;
  puVar6[1] = puVar3;
  *puVar3 = puVar6;
  puVar7[1] = puVar6;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar8 = uVar8 & *(ulonglong *)(param_1 + 0xc);
  puVar4 = *(undefined8 **)(lVar2 + uVar8 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar6;
  }
  else {
    if (puVar4 == puVar7) {
      *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar6;
      goto LAB_180215f0b;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) != puVar3) goto LAB_180215f0b;
  }
  *(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) = puVar6;
LAB_180215f0b:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


