// 0x180105470  Features_DoubleTap_DoubleTapFeature_vfunc02
// size=639 thunk=false
// signature: undefined Features_DoubleTap_DoubleTapFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_DoubleTap_DoubleTapFeature_vfunc02
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  if (((param_3 != 0) &&
      (local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68, DAT_1803fa668 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 != '\0')) {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar6 = (*pcVar2)(DAT_1803fa360,uVar5);
    if (lVar6 != 0) {
      local_18 = 0x9d10f28b96c10dd7;
      local_20 = 0x93fd561a96ab0c67;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_20);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_30,&local_18);
      pcVar8 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
      if (*pcVar8 != '\0') {
        local_18 = 0x93fd561a96ab0c67;
        local_20 = 0xb51863fffb940c02;
        plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
        plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_40,&local_20);
        piVar9 = (int *)FUN_1802029c0(*plVar7 + 0x28);
        iVar1 = *piVar9;
        if (((iVar1 < 1) ||
            (((iVar1 < 0xff && (cVar4 = FUN_180024540(), cVar4 != '\0')) &&
             ((DAT_1803fa545 == '\0' && (cVar4 = FUN_1800245f0(iVar1), cVar4 != '\0')))))) &&
           ((*(byte *)(param_3 + 0x20) & 1) != 0)) {
          local_48[1] = 0x17;
          local_20 = 0x1b344e11194f3ea3;
          local_48[0] = 1;
          local_18 = 0x93fd561a96ab0c67;
          plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
          plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_40,&local_20);
          piVar10 = (int *)FUN_1802029c0(*plVar7 + 0x28);
          fVar3 = DAT_180381418;
          piVar9 = local_48;
          if (0 < *piVar10) {
            piVar9 = piVar10;
          }
          piVar11 = local_48 + 1;
          if (*piVar10 < 0x18) {
            piVar11 = piVar9;
          }
          iVar1 = *piVar11;
          dVar14 = DAT_180380bc8;
          if (DAT_1803fa608 == (float *)0x0) {
            fVar13 = 0.0;
          }
          else {
            fVar13 = *DAT_1803fa608;
            if (0.0 < *(double *)(DAT_1803fa608 + 10)) {
              dVar14 = *(double *)(DAT_1803fa608 + 10);
            }
          }
          fVar12 = *(float *)(param_1 + 8);
          if (fVar13 < *(float *)(param_1 + 8)) {
            *(undefined4 *)(param_1 + 8) = 0xc2c80000;
            fVar12 = fVar3;
          }
          if ((float)iVar1 * (float)dVar14 <= fVar13 - fVar12) {
            *(float *)(param_1 + 8) = fVar13;
            DAT_1803db4a4 = iVar1;
          }
        }
      }
    }
  }
  return;
}


