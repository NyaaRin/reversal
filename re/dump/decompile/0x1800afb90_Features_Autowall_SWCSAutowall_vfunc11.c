// 0x1800afb90  Features_Autowall_SWCSAutowall_vfunc11
// size=975 thunk=false
// signature: undefined Features_Autowall_SWCSAutowall_vfunc11()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
Features_Autowall_SWCSAutowall_vfunc11(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ****_Buf1;
  undefined ***pppuVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  float *local_170;
  undefined8 local_168;
  undefined4 local_160;
  float local_158 [2];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_140 [2];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 ***local_120 [2];
  longlong local_110;
  ulonglong local_108;
  undefined1 local_f8 [112];
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  cVar2 = (**(code **)(*param_1 + 0x20))();
  fVar8 = DAT_180380bb0;
  if (cVar2 != '\0') {
    fVar7 = *(float *)(param_3 + 0x74);
    fVar10 = *(float *)(param_3 + 0x80);
    fVar9 = fVar10 - *(float *)((longlong)param_1 + 0x34);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if ((0.0 < fVar9) && (*(float *)(param_1 + 3) < DAT_180380bb0)) {
      fVar9 = powf(*(float *)(param_1 + 3),fVar9 / _DAT_180381248);
      fVar7 = fVar9 * fVar7;
    }
    *(float *)((longlong)param_1 + 0x34) = fVar10;
    if (0.0 < fVar7) {
      iVar3 = FUN_1800aa2b0(param_3);
      if (((((*(byte *)(param_3 + 0x30) & 8) == 0) && ((*(byte *)(param_3 + 0x4a) & 0x80) == 0)) &&
          (iVar3 != 0x59)) && (iVar3 != 0x47)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar5 = FUN_1800abeb0(local_120,param_3);
      FUN_1800af7b0(uVar5,local_158);
      FUN_18020e450(local_120);
      fVar10 = local_158[0];
      if ((_DAT_180381288 < *(float *)(param_3 + 0x80)) || (local_158[0] < DAT_1803809ec)) {
        *(undefined4 *)(param_1 + 7) = 0;
      }
      if (0 < (int)param_1[7]) {
        FUN_1800ac060(local_120,param_3);
        _Buf1 = local_120;
        if (0xf < local_108) {
          _Buf1 = (undefined8 ****)local_120[0];
        }
        if ((local_110 == 0x17) &&
           (iVar4 = memcmp(_Buf1,"tools/toolsblockbullets",0x17), iVar4 == 0)) {
          FUN_18020e450(local_120);
        }
        else {
          FUN_18020e450(local_120);
          local_158[0] = 0.0;
          local_160 = 0x46004003;
          local_168 = *(undefined8 *)(param_3 + 0x88);
          local_170 = local_158;
          local_178 = &local_150;
          cVar2 = FUN_1800acb50(param_3 + 0xc,param_3 + 0x68,DAT_180380e9c,DAT_18038110c);
          if (cVar2 != '\0') {
            local_138 = vftable_CDoubleTraceFilter;
            local_130 = 0;
            uStack_128 = 0;
            pppuVar6 = &local_138;
            if (*(undefined ****)(param_3 + 0x88) != (undefined ***)0x0) {
              pppuVar6 = *(undefined ****)(param_3 + 0x88);
            }
            local_178 = (undefined4 *)local_f8;
            FUN_1800abbc0(&local_150,param_3 + 0xc,0x46004003,pppuVar6);
            iVar4 = FUN_1800aa2b0(local_f8);
            uVar5 = FUN_1800abeb0(local_120,local_f8);
            FUN_1800af7b0(uVar5,local_140);
            FUN_18020e450(local_120);
            fVar9 = DAT_180380ac0;
            fVar12 = DAT_180380a20;
            if (bVar1) {
              fVar10 = fVar8;
              if (iVar3 == 0x47) {
                fVar10 = DAT_180380e28;
                fVar12 = DAT_1803809c4;
              }
            }
            else {
              fVar10 = (local_140[0] + fVar10) * DAT_180380ac0;
            }
            if (((iVar3 == iVar4) &&
                ((fVar11 = DAT_180380e28, (iVar4 - 0x55U & 0xfffffffd) == 0 ||
                 (fVar11 = DAT_180380d30, iVar4 == 0x4c)))) || (fVar11 = fVar10, 0.0 < fVar10)) {
              fVar11 = fVar8 / fVar11;
              if (fVar11 <= 0.0) {
                fVar11 = 0.0;
              }
              fVar10 = (DAT_180380e28 / *(float *)(param_1 + 1)) * DAT_180380c00;
              if (fVar10 <= 0.0) {
                fVar10 = 0.0;
              }
              fVar10 = fVar10 * fVar11 * DAT_180380e28 + fVar12 * fVar7 +
                       (fVar11 * local_158[0] * local_158[0]) / DAT_180381038;
              if (fVar10 <= 0.0) {
                fVar10 = 0.0;
              }
              if (fVar8 <= fVar7 - fVar10) {
                *(int *)(param_1 + 7) = (int)param_1[7] + -1;
                local_158[0] = local_158[0] + *(float *)((longlong)param_1 + 0x34);
                *(float *)((longlong)param_1 + 0x34) = local_158[0];
                *(float *)(param_1 + 6) = (*(float *)(param_1 + 6) - local_158[0]) * fVar9;
                *param_2 = 1;
                *(undefined4 *)(param_2 + 4) = local_150;
                *(undefined4 *)(param_2 + 8) = local_14c;
                *(undefined4 *)(param_2 + 0xc) = local_148;
                *(float *)(param_2 + 0x10) = fVar7 - fVar10;
                *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x78);
                fVar8 = *(float *)(param_1 + 6) - *(float *)((longlong)param_1 + 0x34);
                if (fVar8 <= 0.0) {
                  fVar8 = 0.0;
                }
                *(float *)(param_2 + 0x18) = fVar8;
              }
            }
          }
        }
      }
    }
  }
  return param_2;
}


