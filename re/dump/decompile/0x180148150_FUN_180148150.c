// 0x180148150  FUN_180148150
// size=975 thunk=false
// signature: undefined FUN_180148150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180148150(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  char *pcVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_298 [32];
  undefined *local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined4 local_240;
  double local_238;
  double local_230;
  uint local_228;
  int local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined1 local_1e8 [320];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_298;
  uVar27 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  local_218 = param_2;
  memset(local_1e8,0,0x140);
  FUN_1802053a0(local_1e8);
  lVar21 = 2;
  puVar15 = param_3;
  puVar16 = &local_1f8;
  do {
    puVar22 = puVar16;
    puVar20 = puVar15;
    uVar9 = puVar22[1];
    uVar10 = puVar22[2];
    uVar11 = puVar22[3];
    *puVar20 = *puVar22;
    puVar20[1] = uVar9;
    uVar9 = puVar22[4];
    uVar12 = puVar22[5];
    puVar20[2] = uVar10;
    puVar20[3] = uVar11;
    uVar10 = puVar22[6];
    uVar11 = puVar22[7];
    puVar20[4] = uVar9;
    puVar20[5] = uVar12;
    uVar9 = puVar22[8];
    uVar12 = puVar22[9];
    puVar20[6] = uVar10;
    puVar20[7] = uVar11;
    uVar10 = puVar22[10];
    uVar11 = puVar22[0xb];
    puVar20[8] = uVar9;
    puVar20[9] = uVar12;
    uVar9 = puVar22[0xc];
    uVar12 = puVar22[0xd];
    puVar20[10] = uVar10;
    puVar20[0xb] = uVar11;
    uVar10 = puVar22[0xe];
    uVar11 = puVar22[0xf];
    puVar20[0xc] = uVar9;
    puVar20[0xd] = uVar12;
    puVar20[0xe] = uVar10;
    puVar20[0xf] = uVar11;
    lVar21 = lVar21 + -1;
    puVar15 = puVar20 + 0x10;
    puVar16 = puVar22 + 0x10;
  } while (lVar21 != 0);
  uVar9 = puVar22[0x11];
  uVar10 = puVar22[0x12];
  uVar11 = puVar22[0x13];
  puVar20[0x10] = puVar22[0x10];
  puVar20[0x11] = uVar9;
  uVar9 = puVar22[0x14];
  uVar12 = puVar22[0x15];
  puVar20[0x12] = uVar10;
  puVar20[0x13] = uVar11;
  uVar1 = *(undefined4 *)(puVar22 + 0x16);
  uVar2 = *(undefined4 *)((longlong)puVar22 + 0xb4);
  uVar3 = *(undefined4 *)(puVar22 + 0x17);
  uVar4 = *(undefined4 *)((longlong)puVar22 + 0xbc);
  puVar20[0x14] = uVar9;
  puVar20[0x15] = uVar12;
  uVar5 = *(undefined4 *)(puVar22 + 0x18);
  uVar6 = *(undefined4 *)((longlong)puVar22 + 0xc4);
  uVar7 = *(undefined4 *)(puVar22 + 0x19);
  uVar8 = *(undefined4 *)((longlong)puVar22 + 0xcc);
  *(undefined4 *)(puVar20 + 0x16) = uVar1;
  *(undefined4 *)((longlong)puVar20 + 0xb4) = uVar2;
  *(undefined4 *)(puVar20 + 0x17) = uVar3;
  *(undefined4 *)((longlong)puVar20 + 0xbc) = uVar4;
  *(undefined4 *)(puVar20 + 0x18) = uVar5;
  *(undefined4 *)((longlong)puVar20 + 0xc4) = uVar6;
  *(undefined4 *)(puVar20 + 0x19) = uVar7;
  *(undefined4 *)((longlong)puVar20 + 0xcc) = uVar8;
  *param_3 = param_1;
  *(int *)(param_3 + 1) = param_2;
  lVar21 = FUN_1800b9fe0(param_1);
  local_200 = 0;
  local_210 = 0;
  uStack_208 = 0;
  if ((lVar21 != 0) &&
     (cVar17 = FUN_180147bc0(lVar21,&local_210), uVar25 = uVar27, uVar26 = uVar27, cVar17 != '\0'))
  {
    do {
      iVar19 = -1;
      uVar13 = uVar27;
      if ((*(longlong *)((longlong)&PTR_s_ACT_HL2MP_IDLE_18033c460 + uVar26) == 0) ||
         (0x11 < param_2 - 1U)) {
LAB_180148323:
        lVar21 = *(longlong *)((longlong)&PTR_s_ACT_HL2MP_IDLE_18033c460 + uVar26);
        if (lVar21 != 0) {
          iVar19 = FUN_180147d80(&local_210,lVar21,0);
        }
      }
      else {
        local_278 = (&PTR_DAT_18033c3c0)[param_2];
        FUN_180012ac0(local_a8,0x60,"%s_%s");
        iVar19 = FUN_180147d80(&local_210,local_a8,0);
        if (iVar19 < 0) goto LAB_180148323;
      }
      while (((uVar14 = uVar27, iVar19 < 0 && (iVar24 = (int)uVar13, iVar24 < 3)) &&
             (lVar21 = *(longlong *)
                        ((longlong)&PTR_s_ACT_MP_STAND_IDLE_18033c468 +
                        (longlong)iVar24 * 8 + uVar26), lVar21 != 0))) {
        iVar19 = FUN_180147d80(&local_210,lVar21,0);
        uVar13 = (ulonglong)(iVar24 + 1);
      }
      while (iVar19 < 0) {
        iVar24 = (int)uVar14;
        if (1 < iVar24) {
LAB_1801483b6:
          if ((*(longlong *)((longlong)&PTR_DAT_18033c490 + uVar26) == 0) ||
             (iVar19 = FUN_180147d80(&local_210,*(longlong *)((longlong)&PTR_DAT_18033c490 + uVar26)
                                     ,2), iVar19 < 0)) goto LAB_1801483fb;
          break;
        }
        lVar21 = *(longlong *)
                  ((longlong)&PTR_s_idle_all_01_18033c480 + (longlong)iVar24 * 8 + uVar26);
        if (lVar21 == 0) {
          if (iVar19 < 0) goto LAB_1801483b6;
          break;
        }
        iVar19 = FUN_180147d80(&local_210,lVar21,1);
        uVar14 = (ulonglong)(iVar24 + 1);
      }
      FUN_180147e50(&local_210,iVar19);
LAB_1801483fb:
      uVar25 = uVar25 + 1;
      uVar26 = uVar26 + 0x38;
    } while (uVar25 != 8);
    if (((*(int *)(param_3 + 2) < 0) && (*(int *)(param_3 + 7) < 0)) &&
       (*(int *)(param_3 + 0xc) < 0)) {
      bVar18 = 0;
    }
    else {
      bVar18 = 1;
    }
    local_240 = *(undefined4 *)((longlong)param_3 + 0x4c);
    local_248 = *(undefined4 *)(param_3 + 9);
    local_250 = *(undefined4 *)(param_3 + 0x25);
    local_258 = *(undefined4 *)(param_3 + 0x20);
    local_260 = *(undefined4 *)(param_3 + 0x1b);
    local_268 = *(undefined4 *)(param_3 + 0x16);
    local_270 = *(undefined4 *)(param_3 + 0x11);
    *(byte *)((longlong)param_3 + 0xc) = bVar18;
    local_228 = (uint)bVar18;
    local_230 = (double)*(float *)(param_3 + 0xd);
    local_238 = (double)*(float *)(param_3 + 8);
    pcVar23 = "normal";
    if (*(&PTR_DAT_18033c3c0)[local_218] != '\0') {
      pcVar23 = (&PTR_DAT_18033c3c0)[local_218];
    }
    local_278 = (undefined *)CONCAT44(local_278._4_4_,*(undefined4 *)(param_3 + 0xc));
    FUN_180014410("[Toolbox-anim] cache hold=%s idle=%d walk=%d run=%d cidle=%d cwalk=%d jump=%d swim=%d sit=%d walkPose=(%d,%d) gsWalk=%.0f gsRun=%.0f valid=%d\n"
                  ,pcVar23,*(int *)(param_3 + 2),*(undefined4 *)(param_3 + 7));
  }
  return;
}


