// 0x1800203f0  FUN_1800203f0
// size=894 thunk=false
// signature: undefined FUN_1800203f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800203f0(float *param_1,float *param_2,undefined4 param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,longlong param_9,int param_10)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_628 [32];
  undefined8 local_608;
  undefined4 local_600;
  undefined4 local_5f8;
  float local_5f4;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  undefined1 local_5e0;
  undefined1 local_5df;
  undefined1 local_5de;
  undefined1 local_5dd;
  float local_5dc;
  undefined4 local_5d8;
  undefined1 local_5c8 [1280];
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_628;
  if (((param_9 != 0) && (DAT_1803fa640 != (longlong *)0x0)) &&
     (local_5f8 = param_3, local_5f4 = param_4, lVar3 = (**(code **)(*DAT_1803fa640 + 0x330))(),
     lVar3 != 0)) {
    iVar5 = 2;
    if (1 < param_10) {
      iVar5 = param_10;
    }
    if (0x20 < iVar5) {
      iVar5 = 0x20;
    }
    memset(local_5c8,0,0x500);
    FUN_1800200b0();
    if (DAT_1803f9259 != '\0') {
      if (DAT_1803f9268 != (code *)0x0) {
        local_600 = 0;
        local_608 = 0;
        (*DAT_1803f9268)(local_5c8,lVar3,iVar5,param_9);
      }
      fVar11 = *param_2 - *param_1;
      fVar12 = param_2[1] - param_1[1];
      fVar13 = param_2[2] - param_1[2];
      fVar7 = (float)(*(code *)PTR_FUN_1803da018)
                               (fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
      fVar2 = DAT_1803811c8;
      fVar1 = DAT_180380bb0;
      fVar10 = DAT_180380bb0;
      if (DAT_180381148 < fVar7) {
        fVar10 = fVar7 * _DAT_180380978;
      }
      iVar4 = 0;
      if (0 < iVar5) {
        pcVar6 = DAT_1803f9270;
        do {
          fVar9 = (float)iVar4 / (float)(iVar5 + -1);
          fVar8 = fVar9 * (param_8 - param_7) + param_7;
          fVar7 = 0.0;
          if (0.0 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = fVar1;
          if (fVar7 <= fVar1) {
            fVar8 = fVar7;
          }
          local_5f0 = fVar9 * fVar11 + *param_1;
          local_5ec = fVar9 * fVar12 + param_1[1];
          local_5d8 = local_5f8;
          local_5dc = fVar9 * fVar10;
          local_5e8 = fVar9 * fVar13 + param_1[2];
          local_5e0 = (undefined1)(int)(fVar8 * local_5f4 * fVar2);
          local_5df = (undefined1)(int)(fVar8 * param_5 * fVar2);
          local_5de = (undefined1)(int)(fVar8 * param_6 * fVar2);
          local_5dd = (undefined1)(int)(fVar8 * fVar2);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(local_5c8,&local_5f0);
            pcVar6 = DAT_1803f9270;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      if (DAT_1803f9260 != (code *)0x0) {
        (*DAT_1803f9260)(local_5c8);
      }
    }
  }
  return;
}


