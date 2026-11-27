// 0x1802904f0  FUN_1802904f0
// size=1011 thunk=false
// signature: undefined FUN_1802904f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802904f0(longlong param_1,int param_2,float param_3,longlong *param_4,int *param_5)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_118 [32];
  float local_f8;
  float local_f0;
  float local_e8;
  float local_e0;
  float local_d8;
  float local_d0;
  float local_c8;
  undefined4 local_c0;
  uint local_b8;
  longlong *local_b0;
  int local_a8;
  int *local_a0;
  uint local_98 [2];
  ulonglong local_90;
  
  local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  uVar5 = 0;
  local_a0 = param_5;
  uVar3 = uVar5;
  uVar12 = uVar5;
  uVar6 = uVar5;
  if (0 < param_2) {
    do {
      uVar3 = (ulonglong)((int)uVar12 + 1);
      if (*(char *)(uVar6 * 0xe + 0xc + param_1) != '\x01') {
        uVar3 = uVar12;
      }
      uVar9 = (int)uVar6 + 1;
      uVar12 = uVar3;
      uVar6 = (ulonglong)uVar9;
    } while ((int)uVar9 < param_2);
  }
  iVar11 = (int)uVar3;
  *param_5 = iVar11;
  if (iVar11 != 0) {
    local_b0 = param_4;
    local_a8 = param_2;
    lVar4 = FUN_18026f580((longlong)iVar11 << 2);
    *local_b0 = lVar4;
    if (lVar4 != 0) {
      uVar6 = 0;
      local_b8 = 0;
      uVar3 = uVar5;
      plVar8 = local_b0;
      uVar12 = uVar6;
      do {
        if (((int)uVar6 == 1) &&
           (uVar5 = FUN_18026f580((longlong)(int)uVar3 << 3), plVar8 = local_b0, uVar5 == 0)) {
          FUN_18026f680(0);
          plVar8 = local_b0;
          FUN_18026f680(*local_b0);
          *plVar8 = 0;
          *local_a0 = 0;
          return 0;
        }
        uVar3 = 0;
        local_98[0] = 0;
        iVar11 = -1;
        uVar6 = uVar3;
        uVar10 = uVar3;
        if (0 < param_2) {
          do {
            lVar4 = uVar10 * 0xe;
            cVar1 = *(char *)(lVar4 + 0xc + param_1);
            iVar7 = (int)uVar3;
            if (cVar1 == '\x01') {
              if (-1 < iVar11) {
                *(int *)(*plVar8 + (longlong)iVar11 * 4) = iVar7 - (int)uVar12;
              }
              iVar11 = iVar11 + 1;
              uVar12 = (ulonglong)iVar7;
              sVar2 = *(short *)(lVar4 + 2 + param_1);
              local_98[0] = iVar7 + 1;
              uVar3 = (ulonglong)local_98[0];
              if (uVar5 != 0) {
                *(float *)(uVar5 + uVar12 * 8) = (float)(int)*(short *)(lVar4 + param_1);
                *(float *)(uVar5 + 4 + uVar12 * 8) = (float)(int)sVar2;
              }
            }
            else if (cVar1 == '\x02') {
              sVar2 = *(short *)(lVar4 + 2 + param_1);
              local_98[0] = iVar7 + 1;
              uVar3 = (ulonglong)local_98[0];
              if (uVar5 != 0) {
                *(float *)(uVar5 + (longlong)iVar7 * 8) = (float)(int)*(short *)(lVar4 + param_1);
                *(float *)(uVar5 + 4 + (longlong)iVar7 * 8) = (float)(int)sVar2;
              }
            }
            else {
              if (cVar1 == '\x03') {
                local_d0 = 0.0;
                local_e0 = (float)(int)*(short *)(lVar4 + 2 + param_1);
                local_e8 = (float)(int)*(short *)(lVar4 + param_1);
                local_f0 = (float)(int)*(short *)(lVar4 + 6 + param_1);
                local_f8 = (float)(int)*(short *)(lVar4 + 4 + param_1);
                local_d8 = param_3 * param_3;
                FUN_18028fe50(uVar5,local_98);
              }
              else {
                if (cVar1 != '\x04') goto LAB_18029081a;
                local_c0 = 0;
                local_d0 = (float)(int)*(short *)(lVar4 + 2 + param_1);
                local_d8 = (float)(int)*(short *)(lVar4 + param_1);
                local_e0 = (float)(int)*(short *)(lVar4 + 10 + param_1);
                local_e8 = (float)(int)*(short *)(lVar4 + 8 + param_1);
                local_f0 = (float)(int)*(short *)(lVar4 + 6 + param_1);
                local_f8 = (float)(int)*(short *)(lVar4 + 4 + param_1);
                local_c8 = param_3 * param_3;
                FUN_180290050(uVar5,local_98);
              }
              uVar3 = (ulonglong)local_98[0];
            }
LAB_18029081a:
            uVar9 = (int)uVar6 + 1;
            plVar8 = local_b0;
            uVar6 = (ulonglong)uVar9;
            uVar10 = uVar10 + 1;
            param_2 = local_a8;
          } while ((int)uVar9 < local_a8);
        }
        *(int *)(*plVar8 + (longlong)iVar11 * 4) = (int)uVar3 - (int)uVar12;
        local_b8 = local_b8 + 1;
        uVar6 = (ulonglong)local_b8;
        if (1 < (int)local_b8) {
          return uVar5;
        }
      } while( true );
    }
    *param_5 = 0;
  }
  return 0;
}


