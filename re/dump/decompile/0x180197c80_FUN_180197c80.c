// 0x180197c80  FUN_180197c80
// size=832 thunk=false
// signature: undefined FUN_180197c80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_180197c80(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  size_t sVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 ****_Buf1;
  char *_Buf1_00;
  undefined8 ****ppppuVar11;
  char unaff_BL;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined *unaff_RDI;
  undefined8 ****ppppuVar14;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  undefined8 local_e8 [2];
  undefined *local_d8;
  undefined1 local_d0 [32];
  undefined8 ***local_b0;
  undefined8 uStack_a8;
  size_t local_a0;
  ulonglong local_98;
  float local_90;
  undefined1 local_8c [4];
  undefined8 ***local_88 [2];
  size_t local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  puVar12 = auStack_108;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0xf;
  local_b0 = (undefined8 ****)0x0;
  local_90 = 0.0;
  local_8c[0] = 0;
  local_e8[0] = 0;
  cVar8 = FUN_180196d90(local_e8,&local_90,local_8c);
  puVar7 = auStack_108;
  if ((cVar8 != '\0') &&
     (cVar8 = FUN_180196f70(local_e8[0],0x80,&local_b0), puVar7 = auStack_108, cVar8 != '\0')) {
    uVar10 = FUN_1801973a0(local_d0,&local_b0);
    FUN_180197120(local_88,uVar10);
    FUN_18020e450(local_d0);
    local_d8 = &DAT_1803e7c20;
    iVar9 = _Mtx_lock(&DAT_1803e7c20);
    fVar6 = local_90;
    uVar5 = local_98;
    sVar4 = local_a0;
    pppuVar3 = local_b0;
    uVar13 = DAT_1803eb338;
    ppppuVar14 = DAT_1803eb320;
    if (iVar9 == 0) {
      if (DAT_1803e7c6c == 0x7fffffff) {
        DAT_1803e7c6c = 0x7ffffffe;
        puVar12 = auStack_108;
LAB_180197f2b:
        *(undefined8 *)(puVar12 + -8) = 0x180197f36;
        std::_Throw_Cpp_error(6);
LAB_180197f37:
        *(undefined8 *)(puVar12 + -8) = 0x180197f43;
        FUN_1802097d0(&DAT_18056ded0);
        *(undefined8 *)(puVar12 + -8) = 0x180197f4d;
        _Mtx_unlock(unaff_RDI);
        if (unaff_BL != '\0') {
          ppppuVar14 = local_88;
          if (0xf < local_70) {
            ppppuVar14 = (undefined8 ****)local_88[0];
          }
          *(undefined8 *)(puVar12 + -8) = 0x180197f6b;
          FUN_180014410("[DUMP] server folder -> %s\n",ppppuVar14);
        }
      }
      else {
        if (DAT_1803eb330 == 0) {
LAB_180197de2:
          bVar2 = false;
        }
        else {
          ppppuVar11 = &DAT_1803eb320;
          if (0xf < DAT_1803eb338) {
            ppppuVar11 = DAT_1803eb320;
          }
          _Buf1 = &local_b0;
          if (0xf < local_98) {
            _Buf1 = (undefined8 ****)local_b0;
          }
          if ((local_a0 == DAT_1803eb330) &&
             (((local_a0 == 0 || (iVar9 = memcmp(_Buf1,ppppuVar11,local_a0), iVar9 == 0)) &&
              (DAT_1803e7c10 <= fVar6 + DAT_180380ac0)))) goto LAB_180197de2;
          bVar2 = true;
        }
        ppppuVar11 = local_88;
        if (0xf < local_70) {
          ppppuVar11 = (undefined8 ****)local_88[0];
        }
        _Buf1_00 = s_unknown_server_1803e9fb8;
        if (0xf < DAT_1803e9fd0) {
          _Buf1_00 = (char *)s_unknown_server_1803e9fb8._0_8_;
        }
        if (DAT_1803e9fc8 == local_78) {
          if (DAT_1803e9fc8 == 0) {
            unaff_BL = false;
          }
          else {
            iVar9 = memcmp(_Buf1_00,ppppuVar11,DAT_1803e9fc8);
            unaff_BL = iVar9 != 0;
            if ((bool)unaff_BL) goto LAB_180197e41;
          }
        }
        else {
          unaff_BL = true;
LAB_180197e41:
          ppppuVar14 = local_88;
          if (0xf < local_70) {
            ppppuVar14 = (undefined8 ****)local_88[0];
          }
          FUN_180212700(s_unknown_server_1803e9fb8,ppppuVar14,local_78);
          uVar13 = DAT_1803eb338;
          ppppuVar14 = DAT_1803eb320;
        }
        puVar12 = auStack_108;
        if (0xf < uVar13) {
          ppppuVar11 = ppppuVar14;
          puVar12 = auStack_108;
          if (0xfff < uVar13 + 1) {
            ppppuVar11 = (undefined8 ****)ppppuVar14[-1];
            ppppuVar14 = (undefined8 ****)((longlong)ppppuVar14 + (-8 - (longlong)ppppuVar11));
            puVar12 = auStack_108;
            if ((undefined8 ****)0x1f < ppppuVar14) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              ppppuVar11 = ppppuVar14;
              puVar12 = auStack_100;
            }
          }
          *(undefined8 *)(puVar12 + -8) = 0x180197ea4;
          free(ppppuVar11);
        }
        DAT_1803eb320 = (undefined8 ****)pppuVar3;
        _DAT_1803eb328 = uStack_a8;
        DAT_1803eb330 = sVar4;
        DAT_1803eb338 = uVar5;
        local_a0 = 0;
        local_98 = 0xf;
        local_b0 = (undefined8 ***)((ulonglong)local_b0 & 0xffffffffffffff00);
        DAT_1803e7c10 = fVar6;
        *(undefined8 *)(puVar12 + -8) = 0x180197eed;
        _Mtx_unlock(&DAT_1803e7c20);
        DAT_1804096f1 = 1;
        if (((bool)unaff_BL != false) || (bVar2)) {
          unaff_RDI = &DAT_1803e7bc0;
          *(undefined **)(puVar12 + 0x20) = &DAT_1803e7bc0;
          *(undefined8 *)(puVar12 + -8) = 0x180197f12;
          iVar9 = _Mtx_lock(&DAT_1803e7bc0);
          if (iVar9 != 0) goto LAB_180197f77;
          if (DAT_1803e7c0c == 0x7fffffff) {
            DAT_1803e7c0c = 0x7ffffffe;
            goto LAB_180197f2b;
          }
          goto LAB_180197f37;
        }
      }
      *(undefined8 *)(puVar12 + -8) = 0x180197f75;
      FUN_18020e450(local_88);
      goto LAB_180197f8c;
    }
LAB_180197f77:
    *(undefined8 *)(puVar12 + -8) = 0x180197f82;
    std::_Throw_Cpp_error(5);
    puVar7 = puVar12;
  }
  puVar12 = puVar7;
  DAT_1804096f1 = 0;
  unaff_BL = '\0';
LAB_180197f8c:
  *(undefined8 *)(puVar12 + -8) = 0x180197f95;
  FUN_18020e450(&local_b0);
  *(undefined8 *)(puVar12 + -8) = 0x180197fa4;
  return unaff_BL;
}


