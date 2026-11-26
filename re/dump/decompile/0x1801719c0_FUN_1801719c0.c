// 0x1801719c0  FUN_1801719c0
// size=439 thunk=false
// signature: undefined FUN_1801719c0()
// status: ok


ulonglong FUN_1801719c0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  char cVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 local_res18 [16];
  
  if (((param_2 - 2U < 2) || (param_2 - 9U < 4)) && (param_1 != (longlong *)0x0)) {
    iVar6 = (**(code **)(*param_1 + 8))();
    if ((iVar6 != 4) && (iVar6 != 7)) {
      uVar9 = FUN_180171430(param_2);
      return uVar9;
    }
    iVar6 = (**(code **)(*param_1 + 8))(param_1);
    puVar4 = DAT_1803fb108;
    fVar3 = DAT_180380bb0;
    if ((iVar6 != 7) || (param_1[0x16] == 0)) {
      fVar10 = 0.0;
      puVar2 = DAT_1803fb100;
      if ((param_2 == 2) || (param_2 - 9U < 2)) {
        cVar8 = '\x01';
      }
      else {
        cVar8 = '\0';
      }
      do {
        if ((puVar2 == puVar4) || (plVar1 = (longlong *)*puVar2, plVar1 == param_1)) {
          return (ulonglong)(uint)fVar10;
        }
        if ((((*(char *)((longlong)plVar1 + 0x14) != '\0') &&
             (((DAT_1803fcb80 != '\0' ||
               (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar1 + 0x16) != '\0')) &&
                ((*(char *)((longlong)plVar1 + 0x15) == '\0' ||
                 (DAT_1803fcb68 <= *(float *)(plVar1 + 3))))))) &&
              ((cVar5 = (**(code **)(*plVar1 + 0x38))(plVar1), cVar5 != '\0' &&
               (plVar1 != (longlong *)0x0)))))) &&
            ((iVar6 = (**(code **)(*plVar1 + 8))(plVar1), iVar6 == 4 || (iVar6 == 7)))) &&
           ((iVar6 = (**(code **)(*plVar1 + 8))(plVar1), iVar6 != 7 || (plVar1[0x16] == 0)))) {
          iVar6 = (int)plVar1[1];
          if ((iVar6 == 2) || (iVar6 - 9U < 2)) {
            cVar5 = '\x01';
          }
          else {
            if (((iVar6 - 3U & 0xfffffff6) != 0) || (iVar6 == 4)) goto LAB_180171b3d;
            cVar5 = '\0';
          }
          if (cVar8 == cVar5) {
            pfVar7 = (float *)(**(code **)(*plVar1 + 0x10))(plVar1,local_res18);
            fVar10 = fVar10 + *pfVar7 + fVar3;
          }
        }
LAB_180171b3d:
        puVar2 = puVar2 + 1;
      } while( true );
    }
  }
  return 0;
}


