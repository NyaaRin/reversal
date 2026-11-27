// 0x1802b4740  FUN_1802b4740
// size=379 thunk=false
// signature: undefined FUN_1802b4740()
// status: ok


ulonglong FUN_1802b4740(longlong *param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  char *pcVar13;
  ulonglong uVar11;
  
  uVar12 = (ulonglong)param_3;
  if (*(char *)(param_2 + 0x17) != '\0') {
    return 0;
  }
  if (0.0 < *(float *)(param_1 + 0xd)) {
    lVar3 = *param_1;
    pcVar4 = (char *)param_1[4];
    pcVar2 = pcVar4 + uVar12;
    pcVar13 = pcVar2;
    do {
      pcVar6 = pcVar13;
      if (pcVar6 <= pcVar4) break;
      pcVar13 = pcVar6 + -1;
    } while (pcVar6[-1] != '\n');
    lVar7 = param_1[3];
    pcVar13 = pcVar6;
    do {
      pcVar8 = (char *)FUN_18029e130(*(undefined8 *)(lVar3 + 0x1228),*(undefined4 *)(lVar3 + 0x1238)
                                     ,pcVar13,pcVar4 + (int)lVar7,(int)param_1[0xd],2);
      if (pcVar13 == pcVar2) {
LAB_1802b48b4:
        return (ulonglong)(uint)((int)pcVar6 - (int)param_1[4]);
      }
      if (pcVar8 == pcVar2) {
        if (*(char *)(uVar12 + param_1[6]) == '\n') goto LAB_1802b48ad;
        if (*(char *)((longlong)param_1 + 0x76) == '\0') goto LAB_1802b48b4;
      }
      if (pcVar2 <= pcVar8) {
LAB_1802b48ad:
        return (ulonglong)(uint)((int)pcVar13 - (int)param_1[4]);
      }
      pcVar13 = pcVar8 + 1;
      if (*pcVar8 != '\n') {
        pcVar13 = pcVar8;
      }
    } while (pcVar6 <= pcVar13);
  }
  if (0 < param_3) {
    uVar5 = param_1[4];
    do {
      uVar10 = (uVar12 & 0xffffffff) + uVar5;
      do {
        uVar11 = uVar5;
        if (uVar10 <= uVar5) break;
        pbVar1 = (byte *)(uVar10 - 1);
        uVar10 = uVar10 - 1;
        uVar11 = uVar10;
      } while ((*pbVar1 & 0xc0) == 0x80);
      uVar9 = (int)uVar11 - (int)uVar5;
    } while ((*(char *)((longlong)(int)uVar9 + uVar5) != '\n') &&
            (uVar12 = (ulonglong)uVar9, 0 < (int)uVar9));
  }
  return uVar12 & 0xffffffff;
}


