// 0x180215a50  FUN_180215a50
// size=634 thunk=false
// signature: undefined FUN_180215a50()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180215a50(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  uVar6 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)(DAT_1803fa878 + 8 + (uVar6 & DAT_1803fa890) * 0x10);
  puVar7 = DAT_1803fa868;
  if (puVar5 != DAT_1803fa868) {
    lVar1 = puVar5[2];
    puVar7 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar1) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == *(undefined8 **)(DAT_1803fa878 + (uVar6 & DAT_1803fa890) * 0x10)) break;
      puVar7 = (undefined8 *)puVar7[1];
      lVar1 = puVar7[2];
    }
  }
  if (DAT_1803fa870 == 0x7ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar4 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar4)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_1802d8350(0x20);
  puVar5[2] = *(undefined8 *)param_3;
  puVar5[3] = 0;
  if (_DAT_1803fa860 < (float)(DAT_1803fa870 + 1) / (float)DAT_1803fa898) {
    FUN_18022c300(&DAT_1803fa860);
    puVar2 = *(undefined8 **)(DAT_1803fa878 + 8 + (DAT_1803fa890 & uVar6) * 0x10);
    puVar7 = DAT_1803fa868;
    if (puVar2 != DAT_1803fa868) {
      lVar1 = puVar2[2];
      puVar7 = puVar2;
      while (puVar5[2] != lVar1) {
        if (puVar7 == *(undefined8 **)(DAT_1803fa878 + (DAT_1803fa890 & uVar6) * 0x10))
        goto LAB_180215c5a;
        puVar7 = (undefined8 *)puVar7[1];
        lVar1 = puVar7[2];
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_180215c5a:
  puVar2 = (undefined8 *)puVar7[1];
  DAT_1803fa870 = DAT_1803fa870 + 1;
  *puVar5 = puVar7;
  puVar5[1] = puVar2;
  *puVar2 = puVar5;
  puVar7[1] = puVar5;
  lVar1 = DAT_1803fa878;
  uVar6 = DAT_1803fa890 & uVar6;
  puVar3 = *(undefined8 **)(DAT_1803fa878 + uVar6 * 0x10);
  if (puVar3 == DAT_1803fa868) {
    *(undefined8 **)(DAT_1803fa878 + uVar6 * 0x10) = puVar5;
  }
  else {
    if (puVar3 == puVar7) {
      *(undefined8 **)(DAT_1803fa878 + uVar6 * 0x10) = puVar5;
      goto LAB_180215cbe;
    }
    if (*(undefined8 **)(DAT_1803fa878 + 8 + uVar6 * 0x10) != puVar2) goto LAB_180215cbe;
  }
  *(undefined8 **)(lVar1 + 8 + uVar6 * 0x10) = puVar5;
LAB_180215cbe:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


