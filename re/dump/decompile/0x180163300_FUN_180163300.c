// 0x180163300  FUN_180163300
// size=758 thunk=false
// signature: undefined FUN_180163300()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180163300(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong *plVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  longlong **local_f0;
  undefined8 local_e8;
  float local_d8 [4];
  longlong *local_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  plVar8 = DAT_180423a78;
  if ((DAT_180423a78 == (longlong *)0x0) && (param_1 != (longlong *)0x0)) {
    local_f0 = &local_c8;
    local_e8 = 0;
    local_f8 = 1;
    local_100 = 0x15;
    local_c8 = (longlong *)0x0;
    local_108 = 0;
    iVar7 = (**(code **)(*param_1 + 0xb8))(param_1,0x40,0x40,1);
    if ((-1 < iVar7) && (local_c8 != (longlong *)0x0)) {
      local_108 = 0;
      local_c0 = 0;
      lStack_b8 = 0;
      iVar7 = (**(code **)(*local_c8 + 0x98))(local_c8,0,&local_c0,0);
      fVar6 = DAT_1803811c8;
      fVar5 = DAT_180380f70;
      fVar4 = DAT_180380e28;
      fVar3 = DAT_180380ac0;
      fVar2 = DAT_180380a6c;
      fVar1 = DAT_18038098c;
      uVar12 = 0;
      if (-1 < iVar7) {
        do {
          iVar7 = (int)uVar12;
          lVar14 = (int)local_c0 * iVar7 + lStack_b8;
          fVar17 = (float)iVar7 * fVar1;
          uVar12 = 0;
          do {
            local_d8[2] = 255.0;
            local_d8[0] = 0.0;
            fVar16 = (float)(int)uVar12 * fVar1;
            fVar15 = sinf((fVar16 * fVar4 - fVar17) * fVar5);
            fVar16 = sinf((fVar16 + fVar17) * fVar5);
            local_d8[1] = (((fVar15 * fVar3 + fVar16 * fVar3) * fVar3 + fVar3) * fVar2 +
                          DAT_180380b10) * fVar6;
            pfVar11 = local_d8;
            if (0.0 <= local_d8[1]) {
              pfVar11 = local_d8 + 1;
            }
            pfVar9 = local_d8 + 2;
            if (local_d8[1] <= fVar6) {
              pfVar9 = pfVar11;
            }
            uVar13 = (int)uVar12 + 1;
            uVar10 = (uint)(longlong)*pfVar9;
            *(uint *)(lVar14 + uVar12 * 4) = ((uVar10 | 0xffffff00) << 8 | uVar10) << 8 | uVar10;
            uVar12 = (ulonglong)uVar13;
          } while ((int)uVar13 < 0x40);
          uVar12 = (ulonglong)(iVar7 + 1U);
        } while ((int)(iVar7 + 1U) < 0x40);
        (**(code **)(*local_c8 + 0xa0))(local_c8,0);
        DAT_180423a78 = local_c8;
        return local_c8;
      }
      (**(code **)(*local_c8 + 0x10))();
    }
    plVar8 = (longlong *)0x0;
  }
  return plVar8;
}


