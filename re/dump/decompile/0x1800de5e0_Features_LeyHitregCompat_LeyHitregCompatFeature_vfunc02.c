// 0x1800de5e0  Features_LeyHitregCompat_LeyHitregCompatFeature_vfunc02
// size=830 thunk=false
// signature: undefined Features_LeyHitregCompat_LeyHitregCompatFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_LeyHitregCompat_LeyHitregCompatFeature_vfunc02
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               undefined1 *param_5)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  float *local_98;
  uint local_88;
  uint local_80;
  uint local_78;
  float local_70;
  float local_6c;
  float local_68;
  ulonglong local_60;
  
  if (param_3 != (undefined4 *)0x0) {
    local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar5 = (*pcVar2)(DAT_1803fa360,uVar4);
    if ((((lVar5 != 0) && (cVar3 = FUN_18001c330(lVar5), cVar3 != '\0')) &&
        (lVar5 = FUN_18001dbf0(lVar5), lVar5 != 0)) &&
       ((cVar3 = FUN_1800de4c0(lVar5,param_3), cVar3 != '\0' && (DAT_1803fa545 == '\0')))) {
      uVar6 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
      uVar6 = FUN_180241610(uVar6,0x4660102069c10657);
      pcVar7 = (char *)FUN_1801fcfc0(uVar6);
      if (*pcVar7 != '\0') {
        uVar6 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800);
        uVar6 = FUN_180241610(uVar6,0x402819404e703058);
        pcVar7 = (char *)FUN_1801fcfc0(uVar6);
        if (*pcVar7 == '\0') {
          local_70 = 0.0;
          local_6c = 0.0;
          local_68 = 0.0;
          local_98 = &local_70;
          cVar3 = FUN_1800ddea0(lVar5,param_3,SUB84((double)DAT_18040a560,0),param_3 + 2);
          if ((cVar3 != '\0') && ((local_70 != 0.0 || (local_6c != 0.0)))) {
            fVar1 = (float)param_3[2];
            uVar4 = param_3[3];
            uVar10 = param_3[4];
            param_3[2] = fVar1 - local_70;
            param_3[3] = (float)param_3[3] - local_6c;
            param_3[4] = (float)param_3[4] - local_68;
            FUN_180022190(param_3 + 2);
            local_88 = param_3[2];
            if (((local_88 & 0x7f800000) == 0x7f800000) ||
               ((local_80 = param_3[3], (local_80 & 0x7f800000) == 0x7f800000 ||
                (local_78 = param_3[4], (local_78 & 0x7f800000) == 0x7f800000)))) {
              param_3[2] = fVar1;
              param_3[3] = uVar4;
              param_3[4] = uVar10;
            }
            else {
              FUN_1800d2e50(param_3,param_3 + 2,1);
              DAT_1803e9090 = *param_3;
              uVar6 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
              uVar6 = FUN_180241610(uVar6,0x4064f70bc33de70a);
              piVar8 = (int *)FUN_1802029c0(uVar6);
              if (0 < *piVar8) {
                *param_5 = 0;
              }
              iVar9 = DAT_1803fe6a0 + 1;
              if ((DAT_1803fe6a0 < 0x14) || (DAT_1803fe6a0 = iVar9, iVar9 == (iVar9 / 0x32) * 0x32))
              {
                if (DAT_1803fa608 == 0) {
                  uVar4 = 0;
                  uVar10 = 0;
                }
                else {
                  uVar4 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
                  uVar10 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
                }
                local_98 = (float *)CONCAT44(local_98._4_4_,*param_3);
                DAT_1803fe6a0 = iVar9;
                FUN_180014410("[LEYHITREG] applied dev=(%.4f,%.4f) curtime=%.4f cmd=%d clip-tick\n",
                              (double)local_70,(double)local_6c,CONCAT44(uVar10,uVar4));
              }
            }
          }
        }
      }
    }
  }
  return;
}


