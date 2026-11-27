// 0x18011bac0  FUN_18011bac0
// size=657 thunk=false
// signature: undefined FUN_18011bac0()
// status: ok


char * FUN_18011bac0(char *param_1,ulonglong param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  HMODULE pHVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  char *pcVar17;
  char *pcVar18;
  
  pHVar4 = GetModuleHandleA("menusystem.dll");
  if (pHVar4 == (HMODULE)0x0) {
    return (char *)0x0;
  }
  if (((short)pHVar4->unused == 0x5a4d) &&
     (piVar6 = (int *)((longlong)&pHVar4->unused + (longlong)pHVar4[0xf].unused), *piVar6 == 0x4550)
     ) {
    lVar8 = (ulonglong)*(ushort *)(piVar6 + 5) + 0x18 + (longlong)piVar6;
    uVar1 = *(ushort *)((longlong)piVar6 + 6);
    uVar10 = (uint)uVar1;
    pcVar17 = (char *)0x0;
    uVar16 = 0;
    for (iVar11 = 0; iVar11 < (int)(uint)uVar1; iVar11 = iVar11 + 1) {
      piVar6 = (int *)(lVar8 + (longlong)iVar11 * 0x28);
      if ((*piVar6 == 0x7865742e) && ((char)piVar6[1] == 't')) {
        pcVar17 = (char *)((longlong)&pHVar4->unused + (ulonglong)(uint)piVar6[3]);
        uVar16 = (ulonglong)(uint)piVar6[2];
        break;
      }
    }
    if ((pcVar17 != (char *)0x0) && (0xfff < uVar16)) {
      iVar11 = 0;
      uVar13 = (uint)uVar1;
      lVar15 = lVar8;
      pcVar18 = pcVar17;
      while (iVar14 = iVar11, iVar11 < (int)uVar10) {
        lVar5 = (longlong)iVar11;
        if ((*(byte *)(lVar8 + 0x24 + lVar5 * 0x28) & 0x20) == 0) {
          uVar12 = (ulonglong)*(uint *)(lVar8 + 8 + lVar5 * 0x28);
          if (uVar12 < param_2) {
            iVar11 = iVar11 + 1;
          }
          else {
            uVar2 = *(uint *)(lVar8 + 0xc + lVar5 * 0x28);
            lVar5 = 0;
            uVar10 = uVar13;
            lVar8 = lVar15;
            while (lVar5 + param_2 <= uVar12) {
              pcVar9 = (char *)((longlong)&pHVar4->unused + lVar5 + (ulonglong)uVar2);
              if ((*pcVar9 == *param_1) && (iVar3 = memcmp(pcVar9,param_1,param_2), iVar3 == 0)) {
                uVar13 = uVar10;
                lVar15 = lVar8;
                if ((lVar5 == 0) || (pcVar9[-1] == '\0')) goto LAB_18011bc7d;
                lVar5 = lVar5 + 1;
              }
              else {
                lVar5 = lVar5 + 1;
              }
            }
            iVar11 = iVar11 + 1;
            uVar13 = uVar10;
            lVar15 = lVar8;
          }
        }
        else {
          iVar11 = iVar11 + 1;
        }
      }
      pcVar9 = (char *)0x0;
LAB_18011bc7d:
      if (pcVar9 == (char *)0x0) {
        return (char *)0x0;
      }
      lVar5 = 3;
      while (lVar5 + 4U <= uVar16) {
        if (pcVar17 + (longlong)*(int *)(pcVar17 + lVar5) + 4 + lVar5 == pcVar9) {
          pcVar7 = pcVar17 + lVar5 + -3;
          if ((*pcVar7 == 'H') && (pcVar17[lVar5 + -2] == -0x73)) goto LAB_18011bcd3;
          lVar5 = lVar5 + 1;
        }
        else {
          lVar5 = lVar5 + 1;
        }
      }
      pcVar7 = (char *)0x0;
LAB_18011bcd3:
      if (pcVar7 == (char *)0x0) {
        return (char *)0x0;
      }
      pcVar9 = pcVar7;
      if (param_3 == 1) {
        while ((pcVar18 = pcVar9, pcVar17 < pcVar18 &&
               ((ulonglong)((longlong)pcVar7 - (longlong)pcVar18) < 0x200))) {
          pcVar9 = pcVar18 + -1;
          if (pcVar18[-1] == -0x34) {
            return pcVar18;
          }
        }
        return (char *)0x0;
      }
      pcVar17 = (char *)FUN_18011b9a0(pHVar4,lVar8,uVar10,pcVar17,uVar16,pcVar7,uVar13,iVar14,lVar15
                                      ,uVar16,pcVar18);
      return pcVar17;
    }
  }
  return (char *)0x0;
}


