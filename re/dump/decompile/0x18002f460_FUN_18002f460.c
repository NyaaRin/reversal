// 0x18002f460  FUN_18002f460
// size=675 thunk=false
// signature: undefined FUN_18002f460()
// status: ok


undefined8 FUN_18002f460(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  cVar4 = FUN_18002e100();
  if ((cVar4 != '\0') && (DAT_1803fafe0 != 0)) {
    if (DAT_1803fa678 == (longlong *)0x0) {
      lVar8 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      lVar8 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(lVar8 + 8);
      }
      if (DAT_1803fa678 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      }
    }
    if ((lVar8 != 0) && (plVar9 != (longlong *)0x0)) {
      FUN_18002dc30(&local_58,lVar8);
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar2 = *(uint *)(lVar3 + 0x3a84);
      if ((uVar2 & 1) == 0) {
        *(uint *)(lVar3 + 0x3a84) = uVar2 | 1;
        FUN_1802d8910(&LAB_180308e70);
      }
      if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
        iVar5 = (**(code **)*plVar9)(plVar9);
      }
      else {
        iVar5 = (*DAT_1803fb088)();
      }
      cVar4 = FUN_18002eb00(lVar8,plVar9,param_1);
      if (cVar4 != '\0') {
        (*DAT_1803faf58)(lVar8,DAT_1803fafe0,0);
        plVar1 = plVar9 + 1;
        if ((DAT_1803faf38 == (code *)0x0) || (*plVar1 == 0)) {
          (**(code **)(*plVar9 + 8))(plVar9,0xfffffffe);
        }
        else {
          (*DAT_1803faf38)(*plVar1,0xfffffffe);
        }
        (*DAT_1803fafa0)(lVar8,param_2);
        (*DAT_1803fafa0)(lVar8,param_3);
        iVar6 = FUN_180023180(lVar8,3,1);
        if (iVar6 == 0) {
          param_3 = FUN_18002d0b0(lVar8);
          while( true ) {
            if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
              iVar6 = (**(code **)*plVar9)(plVar9);
            }
            else {
              iVar6 = (*DAT_1803fb088)();
            }
            if (iVar6 <= iVar5) break;
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar1 == 0)
               ) {
              (**(code **)(*plVar9 + 0x10))(plVar9,1);
            }
            else {
              iVar7 = (*DAT_1803fb088)();
              iVar6 = 0;
              if (-1 < iVar7 + -1) {
                iVar6 = iVar7 + -1;
              }
              (*DAT_1803faf10)(*plVar1,iVar6);
            }
          }
        }
        else {
          while( true ) {
            if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
              iVar6 = (**(code **)*plVar9)(plVar9);
            }
            else {
              iVar6 = (*DAT_1803fb088)();
            }
            if (iVar6 <= iVar5) break;
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
               (plVar9[1] == 0)) {
              (**(code **)(*plVar9 + 0x10))(plVar9,1);
            }
            else {
              iVar7 = (*DAT_1803fb088)();
              iVar6 = 0;
              if (-1 < iVar7 + -1) {
                iVar6 = iVar7 + -1;
              }
              (*DAT_1803faf10)(plVar9[1],iVar6);
            }
          }
        }
      }
      if ((local_40 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        (*DAT_1803faf78)(local_58,local_50,local_48,local_44);
      }
    }
  }
  return param_3;
}


