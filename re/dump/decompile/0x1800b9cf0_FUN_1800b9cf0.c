// 0x1800b9cf0  FUN_1800b9cf0
// size=408 thunk=false
// signature: undefined FUN_1800b9cf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800b9cf0(int param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  ulonglong uVar1;
  int7 iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 in_XMM1_Da;
  float fVar6;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char local_c0 [44];
  uint local_94 [23];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  lVar5 = (longlong)param_1;
  *param_3 = in_XMM1_Da;
  *param_4 = 0xffffffff;
  uVar1 = (ulonglong)(param_1 - 1U);
  if (param_1 - 1U < 0x80) {
    local_c0[0] = '\0';
    local_c0[1] = '\0';
    local_c0[2] = '\0';
    local_c0[3] = '\0';
    local_c0[4] = '\0';
    local_c0[5] = '\0';
    local_c0[6] = '\0';
    local_c0[7] = '\0';
    local_c0[8] = '\0';
    local_c0[9] = '\0';
    local_c0[10] = '\0';
    local_c0[0xb] = '\0';
    local_c0[0xc] = '\0';
    local_c0[0xd] = '\0';
    local_c0[0xe] = '\0';
    local_c0[0xf] = '\0';
    local_c0[0x10] = '\0';
    local_c0[0x11] = '\0';
    local_c0[0x12] = '\0';
    local_c0[0x13] = '\0';
    local_c0[0x14] = '\0';
    local_c0[0x15] = '\0';
    local_c0[0x16] = '\0';
    local_c0[0x17] = '\0';
    local_c0[0x18] = '\0';
    local_c0[0x19] = '\0';
    local_c0[0x1a] = '\0';
    local_c0[0x1b] = '\0';
    local_c0[0x1c] = '\0';
    local_c0[0x1d] = '\0';
    local_c0[0x1e] = '\0';
    local_c0[0x1f] = '\0';
    local_c0[0x20] = '\0';
    local_c0[0x21] = '\0';
    local_c0[0x22] = '\0';
    local_c0[0x23] = '\0';
    local_c0[0x24] = '\0';
    local_c0[0x25] = '\0';
    local_c0[0x26] = '\0';
    local_c0[0x27] = '\0';
    local_c0[0x28] = '\0';
    local_c0[0x29] = '\0';
    local_c0[0x2a] = '\0';
    local_c0[0x2b] = '\0';
    local_118 = 0;
    uStack_110 = 0;
    local_c8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_94[0x14] = 0;
    local_94[0x15] = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_94[0x16] = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_94[0] = 0;
    local_94[1] = 0;
    local_94[2] = 0;
    local_94[3] = 0;
    local_94[4] = 0;
    local_94[5] = 0;
    local_94[6] = 0;
    local_94[7] = 0;
    local_94[8] = 0;
    local_94[9] = 0;
    local_94[10] = 0;
    local_94[0xb] = 0;
    local_94[0xc] = 0;
    local_94[0xd] = 0;
    local_94[0xe] = 0;
    local_94[0xf] = 0;
    local_94[0x10] = 0;
    local_94[0x11] = 0;
    local_94[0x12] = 0;
    local_94[0x13] = 0;
    uVar1 = FUN_1800b9590(param_1,param_2,&local_118);
    if (0 < (int)local_94[0x16]) {
      if (DAT_1803fa608 == 0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = (float)*(double *)(DAT_1803fa608 + 0x10);
      }
      uVar3 = (&DAT_180561160)[lVar5 * 0x5a];
      if ((0x15 < uVar3) || ((float)(&DAT_180561168)[lVar5 * 0x5a] <= fVar6)) {
        uVar3 = (&DAT_1805610f0)[lVar5 * 0x5a];
        if ((0x15 < uVar3) || (local_c0[(int)uVar3] == '\0')) {
          uVar1 = DAT_1803fa608;
          if (0 < (int)local_94[0x16]) {
            iVar4 = 0;
            do {
              uVar1 = (ulonglong)iVar4;
              uVar3 = local_94[uVar1];
              if ((*(uint *)(&DAT_1805610f4 + lVar5 * 0x2d) >> (uVar3 & 0x1f) & 1) == 0) {
                if (-1 < (int)uVar3) goto LAB_1800b9e2f;
                break;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)local_94[0x16]);
          }
          (&DAT_1805610f4)[lVar5 * 0x2d] = 0;
          uVar3 = 0xffffffff;
          if (0 < (int)local_94[0x16]) {
            uVar3 = local_94[0];
          }
LAB_1800b9e2f:
          (&DAT_1805610f0)[lVar5 * 0x5a] = uVar3;
          if (0x15 < uVar3) goto LAB_1800b9e6e;
        }
      }
      uVar1 = (ulonglong)(int)uVar3;
      *param_4 = uVar3;
      iVar2 = (int7)(int3)(uVar3 >> 8);
      if (local_c0[uVar1 + 0x16] != '\0') {
        *param_3 = *(undefined4 *)((longlong)&local_118 + uVar1 * 4);
        return CONCAT71(iVar2,1);
      }
      if ((&DAT_180561160)[lVar5 * 0x5a] == uVar3) {
        *param_3 = (&DAT_180561164)[lVar5 * 0x5a];
        return CONCAT71(iVar2,1);
      }
      *param_4 = 0xffffffff;
    }
  }
LAB_1800b9e6e:
  return uVar1 & 0xffffffffffffff00;
}


