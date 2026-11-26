// 0x180039180  FUN_180039180
// size=1077 thunk=false
// signature: undefined FUN_180039180()
// status: ok


char * FUN_180039180(undefined4 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *in_stack_ffffffffffffff78;
  undefined4 uVar12;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  undefined1 local_58 [32];
  
  cVar2 = FUN_18002e100();
  if (cVar2 == '\0') {
    return "";
  }
  if (DAT_1803fa678 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa678 + 0x30))();
  }
  FUN_18002dc30(&local_78);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar7 + 0x2120) & 1) == 0) {
    *(uint *)(lVar7 + 0x2120) = *(uint *)(lVar7 + 0x2120) | 1;
    FUN_1802d8910(&LAB_180309000);
  }
  if (DAT_1803dc898 != '\0') {
    pcVar11 = (char *)(lVar7 + 0x130);
    cVar2 = FUN_180038080(param_1,&DAT_1803dc880,pcVar11);
    if ((cVar2 != '\0') && (*(longlong *)(lVar7 + 0x140) != 0)) {
      if (0xf < *(ulonglong *)(lVar7 + 0x148)) {
        pcVar11 = *(char **)pcVar11;
      }
      goto LAB_180039571;
    }
  }
  if (DAT_1803fa678 == (longlong *)0x0) {
    lVar3 = 0;
    lVar4 = 0;
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa678 + 0x30))();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 8);
    }
    if (DAT_1803fa678 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*DAT_1803fa678 + 0x30))();
    }
  }
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    cVar2 = FUN_180032950(lVar3);
    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    lVar1 = DAT_1803fcc50;
    if (cVar2 != '\0') {
      for (; iVar8 = 0, lVar1 != DAT_1803fcc58; lVar1 = lVar1 + 0x98) {
        if (*(char *)(lVar1 + 0x78) != '\0') {
          for (lVar5 = *(longlong *)(lVar1 + 0x38); lVar5 != *(longlong *)(lVar1 + 0x40);
              lVar5 = lVar5 + 0x90) {
            if (*(char *)(lVar5 + 0x80) != '\0') {
              iVar8 = 1;
              goto LAB_18003931f;
            }
          }
        }
      }
LAB_18003931f:
      iVar9 = 0;
      do {
        lVar1 = DAT_1803fcc58;
        if (DAT_1803fcc50 != DAT_1803fcc58) {
          pcVar11 = (char *)(lVar7 + 0x130);
          lVar5 = DAT_1803fcc50;
          do {
            in_stack_ffffffffffffff78 = pcVar11;
            cVar2 = FUN_180035250(lVar3,lVar4,lVar5,param_1,pcVar11,iVar9 == 1);
            if (cVar2 != '\0') {
              if (DAT_1804253f8 < 3) {
                DAT_1804253f8 = DAT_1804253f8 + 1;
                pcVar10 = pcVar11;
                if (0xf < *(ulonglong *)(lVar7 + 0x148)) {
                  pcVar10 = *(char **)pcVar11;
                }
                puVar6 = (undefined8 *)FUN_180027230(local_58,lVar5 + 8);
                if (0xf < (ulonglong)puVar6[3]) {
                  puVar6 = (undefined8 *)*puVar6;
                }
                FUN_180014410("[TRAMP] RPName via netvar store \'%s\' val=\"%s\"\n",puVar6,pcVar10);
                FUN_18020e450(local_58);
              }
              if (0xf < *(ulonglong *)(lVar7 + 0x148)) {
                pcVar11 = *(char **)pcVar11;
              }
              goto LAB_180039571;
            }
            lVar5 = lVar5 + 0x98;
          } while (lVar5 != lVar1);
        }
        uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8 + 1);
    }
  }
  if (((param_2 == -1) ||
      (pcVar11 = (char *)FUN_1800318f0(param_1,param_2,"rpname",&DAT_18033e5ea),
      pcVar11 == (char *)0x0)) || (*pcVar11 == '\0')) {
    if ((DAT_1803fafe0 == 0) ||
       ((((pcVar11 = (char *)FUN_18002f460(param_1,"rpname",&DAT_18033e5ea), pcVar11 == (char *)0x0
          || (*pcVar11 == '\0')) &&
         ((pcVar11 = (char *)FUN_18002f460(param_1,"RPName",&DAT_18033e5ea), pcVar11 == (char *)0x0
          || (*pcVar11 == '\0')))) &&
        ((pcVar11 = (char *)FUN_18002f460(param_1,"name_override",&DAT_18033e5ea),
         pcVar11 == (char *)0x0 || (*pcVar11 == '\0')))))) {
      if (DAT_180400ad8 < 3) {
        DAT_180400ad8 = DAT_180400ad8 + 1;
        iVar8 = 0;
        for (lVar7 = DAT_1803fcc50; lVar7 != DAT_1803fcc58; lVar7 = lVar7 + 0x98) {
          if (*(int *)(lVar7 + 0x88) == 0) {
            cVar2 = *(int *)(lVar7 + 0x7c) != -1;
          }
          else {
            cVar2 = *(char *)(lVar7 + 0x8c);
          }
          if (cVar2 != '\0') {
            iVar8 = iVar8 + 1;
          }
        }
        FUN_180014410("[TRAMP] RPName: ALL fallbacks failed for ent=%d uid=%d darkrpRef=%d netvarSrc=%d/%d resolved\n"
                      ,param_1,param_2,DAT_1803db330,CONCAT44(uVar12,iVar8),
                      (int)(DAT_1803fcc58 - DAT_1803fcc50 >> 3) * 0x286bca1b);
      }
      pcVar11 = "";
    }
  }
  else if (DAT_1803fcf0c < 3) {
    DAT_1803fcf0c = DAT_1803fcf0c + 1;
    FUN_180014410("[TRAMP] RPName found via DarkRPVars val=\"%s\"\n",pcVar11);
  }
LAB_180039571:
  if ((local_60 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_78,local_70,local_68,local_64);
  }
  return pcVar11;
}


