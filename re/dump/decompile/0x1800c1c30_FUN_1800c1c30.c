// 0x1800c1c30  FUN_1800c1c30
// size=693 thunk=false
// signature: undefined FUN_1800c1c30()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001800c1f0b) */

BADSPACEBASE * FUN_1800c1c30(longlong *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined4 uVar12;
  char cVar13;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  float *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  
  if ((param_1 != (longlong *)0x0) && (param_4 != 0)) {
    fStack_8c = 0.0;
    uStack_88 = 0;
    local_90 = 0;
    local_a0 = -1;
    local_98 = 0;
    local_9c = 0;
    puVar6 = (undefined4 *)FUN_18001d620();
    local_90 = *puVar6;
    pfVar1 = (float *)(puVar6 + 1);
    fStack_8c = *pfVar1;
    uStack_88 = puVar6[2];
    local_80 = puVar6;
    local_68 = pfVar1;
    fVar11 = (float)FUN_1802d3e00(param_3);
    *pfVar1 = fVar11;
    uVar7 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar7 = FUN_180241610(uVar7,0x3d5b6f9e4e0af044);
    pcVar8 = (char *)FUN_1801fcfc0(uVar7);
    cVar13 = *pcVar8;
    if ((cVar13 != '\0') &&
       ((param_2 - 1U < 0x80 && (*(char *)(&DAT_180561188 + (longlong)param_2 * 0xb4) != '\0')))) {
      *puVar6 = 0;
    }
    cVar3 = FUN_1800ba490();
    if (cVar3 != '\0') {
      local_60 = 0;
      local_58 = -1;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      iVar5 = FUN_1800ba250();
      local_80 = (undefined4 *)CONCAT44(local_80._4_4_,iVar5);
      if (0 < iVar5) {
        plVar9 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
        uVar7 = (**(code **)(*plVar9 + 0x48))(plVar9);
        cVar3 = FUN_1800ba0f0(uVar7,&local_60);
        if (cVar3 != '\0') {
          local_a4 = 0;
          local_70 = 0;
          local_78 = 0;
          puVar10 = (undefined8 *)FUN_18001d350(param_1);
          iVar2 = local_58;
          local_78 = *puVar10;
          local_70 = *(undefined4 *)(puVar10 + 1);
          cVar3 = FUN_1800ba390(param_1,iVar5,local_58,&local_a4);
          if (cVar3 != '\0') {
            uVar7 = FUN_1802d3e00(local_78._4_4_ - *pfVar1);
            uVar12 = FUN_1800ba3d0(uVar7,&local_60);
            cVar3 = FUN_1800ba3b0(param_1,iVar5,iVar2,uVar12);
            if (cVar3 != '\0') {
              local_a0 = iVar2;
              local_9c = local_a4;
              local_98 = iVar5;
            }
          }
        }
      }
    }
    FUN_1800c1c10(param_1);
    bVar4 = FUN_1800c1bb0(param_1,param_4);
    if (-1 < local_a0) {
      FUN_1800ba3b0(param_1,local_98,local_a0,local_9c,cVar13);
    }
    puVar10 = (undefined8 *)FUN_18001d620(param_1);
    *puVar10 = CONCAT44(fStack_8c,local_90);
    *(undefined4 *)(puVar10 + 1) = uStack_88;
    FUN_1800c1c10(param_1);
    register0x00000020 = (BADSPACEBASE *)(ulonglong)bVar4;
  }
  return register0x00000020;
}


