// 0x1800ddaa0  FUN_1800ddaa0
// size=903 thunk=false
// signature: undefined FUN_1800ddaa0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1800ddaa0(char *param_1,float *param_2)

{
  double dVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  uint7 uVar10;
  longlong lVar8;
  float *pfVar9;
  undefined8 *_Buf1;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_97;
  undefined2 local_93;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  char local_78;
  
  lVar8 = 0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) && (DAT_1803fa678 != 0)) {
    DVar3 = GetTickCount();
    sVar7 = strlen(param_1);
    _Buf1 = &DAT_1803ea238;
    if (0xf < DAT_1803ea250) {
      _Buf1 = DAT_1803ea238;
    }
    if (((DAT_1803ea248 == sVar7) &&
        ((DAT_1803ea248 == 0 || (iVar4 = memcmp(_Buf1,param_1,DAT_1803ea248), iVar4 == 0)))) &&
       (fVar11 = DAT_1803e9bc0, uVar5 = DVar3 - _DAT_18040a558, uVar5 < 500)) {
      *param_2 = DAT_1803e9bc0;
      fVar12 = DAT_1803e9bc4;
      param_2[1] = DAT_1803e9bc4;
      param_2[2] = DAT_1803e9bc8;
      uVar10 = (uint7)(uint3)(uVar5 >> 8);
      if ((fVar11 == 0.0) && (fVar12 == 0.0)) {
        lVar8 = (ulonglong)uVar10 << 8;
      }
      else {
        lVar8 = CONCAT71(uVar10,1);
      }
    }
    else {
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      FUN_18001bcd0(0,&local_b8);
      if ((local_b8 == (longlong *)0x0) || (lVar8 = local_b8[1], lVar8 == 0)) {
        lVar8 = 0;
      }
      else {
        FUN_18002dc30(&local_90,lVar8);
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
        iVar4 = (**(code **)*local_b8)();
        FUN_18002db10(lVar8,0xffffd8ee,"LeyHitreg");
        cVar2 = (**(code **)(*local_b8 + 0x138))(local_b8,0xffffffff,5);
        if (cVar2 != '\0') {
          FUN_18002db10(lVar8,0xffffffff,"WeaponSpreads");
          cVar2 = (**(code **)(*local_b8 + 0x138))(local_b8,0xffffffff,5);
          if (cVar2 != '\0') {
            FUN_18002db10(lVar8,0xffffffff,param_1);
            cVar2 = (**(code **)(*local_b8 + 0x138))(local_b8,0xffffffff,10);
            if (cVar2 == '\0') {
              cVar2 = (**(code **)(*local_b8 + 0x138))(local_b8,0xffffffff,3);
              if (cVar2 != '\0') {
                dVar1 = (double)(**(code **)(*local_b8 + 0xc0))(local_b8,0xffffffff);
                fVar11 = (float)dVar1;
                fVar12 = fVar11;
                fVar13 = fVar11;
              }
            }
            else {
              pfVar9 = (float *)(**(code **)(*local_b8 + 0x178))();
              fVar11 = *pfVar9;
              fVar12 = pfVar9[1];
              fVar13 = pfVar9[2];
            }
          }
        }
        iVar6 = (**(code **)*local_b8)();
        while (iVar4 < iVar6) {
          (**(code **)(*local_b8 + 0x10))(local_b8,1);
          iVar6 = (**(code **)*local_b8)();
        }
        sVar7 = strlen(param_1);
        FUN_180212700(&DAT_1803ea238,param_1,sVar7);
        DAT_1803e9bc0 = fVar11;
        DAT_1803e9bc4 = fVar12;
        DAT_1803e9bc8 = fVar13;
        _DAT_18040a558 = DVar3;
        *param_2 = fVar11;
        param_2[1] = fVar12;
        param_2[2] = fVar13;
        if ((fVar11 == 0.0) && (fVar12 == 0.0)) {
          lVar8 = 0;
        }
        else {
          lVar8 = 1;
        }
        if ((local_78 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
          (*DAT_1803faf78)(local_90,local_88,local_80,local_7c);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)*local_b8)();
        if (local_a8 == 0) {
          DAT_1803fa330 = local_a0;
          DAT_1803fa338 = 0;
          DAT_1803fa339 = local_97;
          DAT_1803fa33d = local_93;
          DAT_1803fa33f = local_91;
        }
        else {
          DAT_1803fa330 = local_a8;
          DAT_1803fa338 = 1;
          DAT_1803fa339 = local_97;
          DAT_1803fa33d = local_93;
          DAT_1803fa33f = local_91;
        }
      }
    }
  }
  return lVar8;
}


