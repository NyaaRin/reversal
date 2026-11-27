// 0x18006cf50  FUN_18006cf50
// size=1238 thunk=false
// signature: undefined FUN_18006cf50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18006cf50(uint param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined8 *******pppppppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_458 [32];
  ulonglong *local_438;
  uint *local_430;
  uint local_428 [2];
  undefined4 local_420;
  longlong local_418;
  ulonglong local_410;
  uint local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  ulonglong local_3f0;
  undefined8 local_3e8;
  ulonglong *local_3e0;
  undefined1 local_3d8 [30];
  short asStack_3ba [65];
  ulonglong local_338;
  ulonglong uStack_330;
  ulonglong local_328;
  ulonglong uStack_320;
  undefined8 *******local_318;
  ulonglong uStack_310;
  ulonglong local_308;
  ulonglong local_300;
  ulonglong local_2f8;
  undefined8 local_2f0;
  char local_2e8 [128];
  char local_268 [512];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_458;
  uVar1 = param_3[1];
  uVar11 = *param_3;
  if (uVar11 != uVar1) {
    do {
      local_410 = uVar11;
      FUN_18020e450(uVar11 + 0x20);
      FUN_18020e450(uVar11);
      uVar11 = uVar11 + 0x50;
    } while (uVar11 != uVar1);
    param_3[1] = *param_3;
    local_410 = uVar11;
  }
  if (DAT_1803e7830 == -1) {
    DAT_1803e7830 = FUN_18006c9b0();
  }
  lVar8 = DAT_1803e7830;
  if (((DAT_1803e7830 != 0) && (0 < (int)param_1)) && (param_1 < 0x4000)) {
    iVar15 = 0;
    local_428[0] = 0;
    cVar4 = FUN_18006cb90(param_2,local_428);
    if ((cVar4 != '\0') && ((local_428[0] & 0x3fff) == param_1)) {
      local_420 = 0xffff;
      local_418 = 0;
      cVar4 = FUN_18006cc20(lVar8,param_1,local_428[0],&local_420);
      uVar11 = _UNK_1803814b8;
      uVar1 = _DAT_1803814b0;
      if (cVar4 != '\0') {
        if (((local_420._2_2_ != 0) && (local_418 != 0)) && ((short)local_420 != -1)) {
          asStack_3ba[1] = (short)local_420;
          lVar8 = local_418;
          uVar13 = 1;
          do {
            if (0x3f < (int)((longlong)(param_3[1] - *param_3) >> 4) * -0x33333333) {
              return 1;
            }
            iVar15 = iVar15 + 1;
            if (0xfff < iVar15) {
              return 1;
            }
            uVar12 = (uint)uVar13;
            uVar14 = (ulonglong)(uVar12 - 1);
            if (asStack_3ba[uVar13] != -1) {
              local_400 = 0xffffffff;
              local_3f8 = 0;
              local_3f0 = 0;
              local_3e8 = 0;
              local_408 = uVar12;
              cVar4 = FUN_18006cca0(lVar8,asStack_3ba[uVar13],&local_400);
              lVar8 = local_418;
              if (cVar4 != '\0') {
                cVar4 = FUN_18006ceb0(local_3f8,local_2e8);
                uVar10 = uVar12;
                if (cVar4 != '\0') {
                  uStack_330 = 0;
                  local_328 = uVar1;
                  uStack_320 = uVar11;
                  local_338 = 0;
                  uStack_310 = 0;
                  local_308 = 0;
                  local_300 = 0xf;
                  local_318 = (undefined8 *******)0x0;
                  local_2f8 = 0;
                  local_2f0 = 0;
                  sVar6 = strlen(local_2e8);
                  FUN_180212700(&local_338,local_2e8,sVar6);
                  local_2f8 = local_3f0;
                  iVar3 = local_3e8._4_4_;
                  local_2f0 = local_3e8;
                  local_308 = 0;
                  pppppppuVar7 = &local_318;
                  if (0xf < local_300) {
                    pppppppuVar7 = local_318;
                  }
                  *(undefined1 *)pppppppuVar7 = 0;
                  if (((((0 < local_3e8._4_4_) && (DAT_1803faf88 != 0)) && (DAT_1803faff8 != 0)) &&
                      ((DAT_1803fb088 != (code *)0x0 && (DAT_1803faf10 != (code *)0x0)))) &&
                     ((DAT_1803fa678 != (longlong *)0x0 &&
                      ((lVar8 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar8 != 0 &&
                       (lVar8 = *(longlong *)(lVar8 + 8), lVar8 != 0)))))) {
                    uVar5 = (*DAT_1803fb088)(lVar8);
                    local_410 = 0;
                    local_428[0] = 0;
                    local_430 = local_428;
                    local_438 = &local_410;
                    cVar4 = FUN_18006cd30(lVar8,iVar3,local_268);
                    (*DAT_1803faf10)(lVar8,uVar5);
                    if (cVar4 != '\0') {
                      if (local_428[0] == 4) {
LAB_18006d286:
                        sVar6 = strlen(local_268);
                        FUN_180212700(&local_318,local_268,sVar6);
                      }
                      else if (local_428[0] == 3) {
                        uVar9 = FUN_180027490(local_3d8);
                        FUN_18020e8a0(&local_318,uVar9);
                        FUN_18020e450(local_3d8);
                      }
                      else if (local_428[0] == 1) goto LAB_18006d286;
                    }
                  }
                  puVar2 = (ulonglong *)param_3[1];
                  if (puVar2 == (ulonglong *)param_3[2]) {
                    FUN_1802275a0(param_3,puVar2,&local_338);
                  }
                  else {
                    *puVar2 = 0;
                    puVar2[1] = 0;
                    puVar2[2] = 0;
                    puVar2[3] = 0;
                    *puVar2 = local_338;
                    puVar2[1] = uStack_330;
                    puVar2[2] = local_328;
                    puVar2[3] = uStack_320;
                    local_328 = uVar1;
                    uStack_320 = uVar11;
                    local_338 = local_338 & 0xffffffffffffff00;
                    puVar2[4] = 0;
                    puVar2[5] = 0;
                    puVar2[6] = 0;
                    puVar2[7] = 0;
                    puVar2[4] = (ulonglong)local_318;
                    puVar2[5] = uStack_310;
                    puVar2[6] = local_308;
                    puVar2[7] = local_300;
                    local_308 = 0;
                    local_300 = 0xf;
                    local_318 = (undefined8 *******)((ulonglong)local_318 & 0xffffffffffffff00);
                    puVar2[8] = local_2f8;
                    *(undefined4 *)(puVar2 + 9) = (undefined4)local_2f0;
                    *(undefined4 *)((longlong)puVar2 + 0x4c) = local_2f0._4_4_;
                    param_3[1] = param_3[1] + 0x50;
                    local_3e0 = puVar2;
                  }
                  FUN_18020e450(&local_318);
                  FUN_18020e450(&local_338);
                  uVar10 = local_408;
                }
                lVar8 = local_418;
                if ((int)(uVar12 + 1) < 0x41) {
                  if ((short)local_400 != -1) {
                    asStack_3ba[uVar13] = (short)local_400;
                    uVar14 = (ulonglong)uVar10;
                  }
                  if (local_400._2_2_ != -1) {
                    asStack_3ba[(longlong)(int)uVar14 + 1] = local_400._2_2_;
                    uVar14 = (ulonglong)((int)uVar14 + 1);
                  }
                }
              }
            }
            uVar13 = uVar14;
          } while (0 < (int)uVar14);
        }
        return 1;
      }
    }
  }
  return 0;
}


