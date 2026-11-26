// 0x180147130  FUN_180147130
// size=1196 thunk=false
// signature: undefined FUN_180147130()
// status: ok


undefined8 * FUN_180147130(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (DAT_180423b18 == '\0') {
    DAT_180423b18 = '\x01';
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"40 53 48 83 EC 20 66 89 91 ? ? ? ? 48 8B D9 83 FA FF",0x34);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    lVar4 = 10;
    FUN_18001d080(&local_48,"client.dll",10);
    lVar3 = FUN_180015f40(&local_48,&local_68);
    if (lVar3 == 0) {
      FUN_180014410("[Toolbox] SetModelIndex sig OUTDATED - local model changer disabled\n");
    }
    else {
      if (((*(char *)(lVar3 + 6) == 'f') && (*(char *)(lVar3 + 7) == -0x77)) &&
         (*(char *)(lVar3 + 8) == -0x6f)) {
        DAT_1803e7300 = (longlong)*(int *)(lVar3 + 9);
      }
      lVar7 = 7;
      lVar6 = 8;
      lVar8 = 6;
      lVar5 = 9;
      lVar9 = DAT_1803e7310;
      lVar10 = DAT_1803e7308;
      lVar11 = DAT_1803e7320;
      iVar1 = DAT_1803e7318;
      do {
        if (((lVar10 == 0) && (*(char *)(lVar3 + lVar8) == 'H')) &&
           ((*(char *)(lVar3 + 1 + lVar8) == ';' && (*(char *)(lVar3 + 2 + lVar8) == -0x7d)))) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar8);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar8) == '\x0f')) &&
                ((*(char *)(lVar3 + 1 + lVar8) == -0x49 && (*(char *)(lVar3 + 2 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar8);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar8) == -1) && (*(char *)(lVar3 + 1 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar8);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar8) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar8) + 5 + lVar8 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar7) == 'H')) &&
            (*(char *)(lVar3 + 2 + lVar8) == ';')) && (*(char *)(lVar3 + 3 + lVar8) == -0x7d)) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar7);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar7) == '\x0f')) &&
                ((*(char *)(lVar3 + 2 + lVar8) == -0x49 && (*(char *)(lVar3 + 3 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar7);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar7) == -1) && (*(char *)(lVar3 + 2 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar7);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar7) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar7) + 5 + lVar7 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar6) == 'H')) &&
            (*(char *)(lVar3 + 3 + lVar8) == ';')) && (*(char *)(lVar3 + 4 + lVar8) == -0x7d)) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar6);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar6) == '\x0f')) &&
                ((*(char *)(lVar3 + 3 + lVar8) == -0x49 && (*(char *)(lVar3 + 4 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar6);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar6) == -1) && (*(char *)(lVar3 + 3 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar6);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar6) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar6) + 5 + lVar6 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar5) == 'H')) &&
            (*(char *)(lVar3 + 4 + lVar8) == ';')) && (*(char *)(lVar3 + 5 + lVar8) == -0x7d)) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar5);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar5) == '\x0f')) &&
                ((*(char *)(lVar3 + 4 + lVar8) == -0x49 && (*(char *)(lVar3 + 5 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar5);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar5) == -1) && (*(char *)(lVar3 + 4 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar5);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar5) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar5) + 5 + lVar5 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar4) == 'H')) &&
            (*(char *)(lVar3 + 5 + lVar8) == ';')) && (*(char *)(lVar3 + 6 + lVar8) == -0x7d)) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar4);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar4) == '\x0f')) &&
                ((*(char *)(lVar3 + 5 + lVar8) == -0x49 && (*(char *)(lVar3 + 6 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar4);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar4) == -1) && (*(char *)(lVar3 + 5 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar4);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar4) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar4) + 5 + lVar4 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        lVar8 = lVar8 + 5;
        lVar7 = lVar7 + 5;
        lVar6 = lVar6 + 5;
        lVar5 = lVar5 + 5;
        lVar4 = lVar4 + 5;
      } while (lVar8 != 0x88);
      if ((((DAT_1803e7300 == 0) || (lVar10 == 0)) || (lVar9 == 0)) || (iVar1 < 1)) {
        DAT_1803e7328 = 0;
        uVar2 = 0;
      }
      else {
        DAT_1803e7328 = 1;
        uVar2 = 1;
      }
      FUN_180014410("[Toolbox] SetModelCtx idx=+0x%zX pModel=+0x%zX instance=+0x%zX OnNewModel=vt[%d] updVis=%p valid=%d\n"
                    ,DAT_1803e7300,lVar10,lVar9,iVar1,lVar11,uVar2);
    }
  }
  return &DAT_1803e7300;
}


