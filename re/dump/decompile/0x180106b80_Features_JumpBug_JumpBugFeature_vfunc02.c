// 0x180106b80  Features_JumpBug_JumpBugFeature_vfunc02
// size=827 thunk=false
// signature: undefined Features_JumpBug_JumpBugFeature_vfunc02()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_JumpBug_JumpBugFeature_vfunc02(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  uint *puVar13;
  char *pcVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_a8 [4];
  undefined1 local_a4 [140];
  
  if ((DAT_180409bd8 != '\0') && (param_3 != 0)) {
    pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar10 = (*pcVar4)(DAT_1803fa360,uVar9);
    if ((lVar10 == 0) || (DAT_1803de067 == '\0')) {
      if (DAT_180409bf8 < 0x14) {
        FUN_180014410("[JUMPBUG] sent: IN_DUCK=%d IN_JUMP=%d (no sim, result next tick)\n",
                      *(uint *)(param_3 + 0x20) >> 2 & 1,*(uint *)(param_3 + 0x20) >> 1 & 1);
      }
    }
    else {
      pbVar11 = (byte *)FUN_18001d710(lVar10,local_a8);
      bVar2 = *pbVar11;
      lVar12 = FUN_18001d530(lVar10);
      fVar1 = *(float *)(lVar12 + 8);
      if (((bVar2 & 1) != 0) || (fVar1 <= 0.0)) {
        cVar15 = '\0';
      }
      else {
        cVar15 = '\x01';
      }
      DAT_180409bf8 = DAT_180409bf8 + 1;
      DAT_180409bd8 = '\0';
      if (DAT_180409bf8 < 0x15) {
        uVar3 = *(uint *)(param_3 + 0x20);
        fVar16 = (float)FUN_1801056f0(lVar10,"m_flDucktime",DAT_180381384);
        fVar18 = DAT_1803e85a8 - DAT_1803e85b0;
        dVar5 = (double)DAT_180409be0;
        dVar6 = (double)DAT_180409bcc;
        dVar7 = (double)DAT_180409bd0;
        dVar8 = (double)DAT_180409bdc;
        if ((fVar18 < DAT_180380e9c) || (DAT_180381148 < fVar18)) {
          fVar18 = DAT_180381080;
        }
        lVar12 = FUN_18001daf0(lVar10,local_a4);
        fVar17 = *(float *)(lVar12 + 8) - _DAT_180409bf0;
        puVar13 = (uint *)FUN_18001d710(lVar10,local_a8);
        pcVar14 = " -> reverting to ducked, fall stays alive";
        if (cVar15 != '\0') {
          pcVar14 = "";
        }
        FUN_180014410("[JUMPBUG] sim says: jumped=%d onGround=%d ducked=%d dz=%.1f (unduck alone = -%.0f) vz=%.0f | fired: hullGap=%.1f rayGap=%.1f n.z=%.2f ducktime=%.0f->%.0f sent(duck=%d jump=%d)%s\n"
                      ,cVar15,bVar2 & 1,*puVar13 >> 1 & 1,(double)fVar17,(double)fVar18,
                      (double)fVar1,dVar8,dVar7,dVar6,dVar5,(double)fVar16,(uVar3 & 4) >> 2,
                      (uVar3 & 2) >> 1,pcVar14);
      }
      if (cVar15 == '\0') {
        *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 4;
        *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffffffd;
        return;
      }
    }
  }
  return;
}


