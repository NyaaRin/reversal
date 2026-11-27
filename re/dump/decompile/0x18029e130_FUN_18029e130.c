// 0x18029e130  FUN_18029e130
// size=539 thunk=false
// signature: undefined FUN_18029e130()
// status: ok


char * FUN_18029e130(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4,float param_5
                    ,uint param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float in_XMM1_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar3 = (uint *)FUN_18029db30(param_1,param_2,DAT_180381384);
  uVar6 = 2;
  uVar8 = param_6 & 2;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = param_5 / (in_XMM1_Da / (float)puVar3[5]);
  fVar11 = 0.0;
  pcVar7 = param_3;
  pcVar5 = param_3;
  if (param_3 < param_4) {
    do {
      param_5 = (float)(int)*pcVar7;
      if ((uint)param_5 < 0x80) {
        lVar9 = 1;
      }
      else {
        iVar2 = FUN_180268c20(&param_5,pcVar7,param_4);
        lVar9 = (longlong)iVar2;
      }
      uVar1 = (uint)param_5;
      if ((uint)param_5 < 0x20) {
        if (param_5 == 1.4013e-44) {
          return pcVar7;
        }
        if (param_5 != 1.82169e-44) goto LAB_18029e20e;
      }
      else {
LAB_18029e20e:
        if ((*puVar3 <= (uint)param_5) ||
           (fVar10 = *(float *)(*(longlong *)(puVar3 + 2) + (ulonglong)(uint)param_5 * 4),
           fVar10 < 0.0)) {
          fVar10 = (float)FUN_18029cb50(puVar3,(uint)param_5 & 0xffff);
        }
        if (uVar1 < 0x80) {
          uVar4 = (&DAT_1803fccc0)[uVar1 >> 4];
LAB_18029e25a:
          uVar4 = uVar4 >> ((byte)uVar1 & 0xf) * '\x02' & 3;
          if (uVar4 != 0) goto LAB_18029e28a;
          if ((uVar6 != 0) && (uVar8 == 0)) {
            fVar12 = fVar12 + fVar11;
            fVar11 = 0.0;
            pcVar5 = pcVar7;
          }
          fVar13 = fVar13 + fVar10;
        }
        else {
          uVar4 = DAT_1803fcbec;
          if (uVar1 - 0x3000 < 0x10) goto LAB_18029e25a;
          uVar4 = 2;
LAB_18029e28a:
          if (uVar6 == 1) {
            if ((uVar4 != 1) && (9 < uVar1 - 0x30)) {
LAB_18029e2a6:
              fVar11 = fVar11 + fVar13;
              fVar13 = 0.0;
              fVar12 = fVar12 + fVar11;
              fVar11 = 0.0;
              pcVar5 = pcVar7;
            }
          }
          else if ((uVar6 == 0) && (uVar8 != 0)) goto LAB_18029e2a6;
          fVar11 = fVar11 + fVar10;
        }
        uVar6 = uVar4;
        if (fVar14 < fVar11 + fVar13 + fVar12) {
          if (fVar11 + fVar13 <= fVar14) {
            return pcVar5;
          }
          break;
        }
      }
      pcVar7 = pcVar7 + lVar9;
    } while (pcVar7 < param_4);
    if (pcVar7 == param_3) {
      param_5 = 0.0;
      iVar2 = FUN_180268c20(&param_5,pcVar7,param_4);
      pcVar7 = pcVar7 + iVar2;
    }
  }
  return pcVar7;
}


