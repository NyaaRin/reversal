// 0x180175790  FUN_180175790
// size=347 thunk=false
// signature: undefined FUN_180175790()
// status: ok


ulonglong FUN_180175790(longlong *param_1,byte *param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ushort *puVar7;
  longlong *plVar8;
  int iVar9;
  
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  uVar6 = 0x14650fb0739d0383;
  for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
    uVar6 = (uVar6 ^ *param_2) * 0x100000001b3;
  }
  param_1 = (longlong *)*param_1;
  plVar4 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar3 = param_1;
  while (cVar1 == '\0') {
    plVar8 = plVar4;
    if ((ulonglong)plVar4[4] < uVar6) {
      plVar4 = plVar4 + 2;
      plVar8 = plVar3;
    }
    plVar4 = (longlong *)*plVar4;
    plVar3 = plVar8;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar3 + 0x19) != '\0') || (uVar6 < (ulonglong)plVar3[4])) ||
     (plVar3 == param_1)) {
    return (ulonglong)param_3;
  }
  uVar6 = plVar3[8];
  puVar7 = (ushort *)(plVar3 + 5);
  lVar2 = plVar3[7];
  puVar5 = puVar7;
  if (0xf < uVar6) {
    puVar5 = *(ushort **)puVar7;
  }
  if ((lVar2 != 1) || ((char)*puVar5 != '1')) {
    puVar5 = puVar7;
    if (0xf < uVar6) {
      puVar5 = *(ushort **)puVar7;
    }
    if ((lVar2 != 4) || (*(int *)puVar5 != 0x65757274)) {
      puVar5 = puVar7;
      if (0xf < uVar6) {
        puVar5 = *(ushort **)puVar7;
      }
      if ((lVar2 != 2) || (*puVar5 != 0x6e6f)) {
        puVar5 = puVar7;
        if (0xf < uVar6) {
          puVar5 = *(ushort **)puVar7;
        }
        if ((lVar2 == 1) && ((char)*puVar5 == '0')) {
LAB_1801758b5:
          return (ulonglong)puVar5 & 0xffffffffffffff00;
        }
        puVar5 = puVar7;
        if (0xf < uVar6) {
          puVar5 = *(ushort **)puVar7;
        }
        if (lVar2 == 5) {
          iVar9 = *(int *)puVar5 + -0x736c6166;
          if (iVar9 == 0) {
            iVar9 = (byte)puVar5[2] - 0x65;
          }
          if (iVar9 == 0) goto LAB_1801758b5;
        }
        if (0xf < uVar6) {
          puVar7 = *(ushort **)puVar7;
        }
        if (lVar2 != 3) {
          return (ulonglong)param_3;
        }
        iVar9 = *puVar7 - 0x666f;
        if (iVar9 == 0) {
          iVar9 = (byte)puVar7[1] - 0x66;
        }
        uVar6 = 0;
        if (iVar9 != 0) {
          uVar6 = (ulonglong)param_3;
        }
        return uVar6;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
}


