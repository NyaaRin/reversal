// 0x180152530  FUN_180152530
// size=729 thunk=false
// signature: undefined FUN_180152530()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180152530(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 **ppuVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined2 *_Src;
  undefined8 ***pppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 ***pppuVar16;
  longlong lVar17;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [48];
  undefined4 local_98;
  undefined8 **local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  undefined8 **local_68 [2];
  undefined8 **local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  puVar15 = auStack_c8;
  puVar14 = auStack_c8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  pppuVar13 = (undefined8 ***)0x0;
  local_98 = 0;
  local_70 = param_1;
  FUN_180065930(param_2,local_68);
  pppuVar16 = pppuVar13;
  while( true ) {
    pppuVar8 = local_68;
    if ((undefined8 ***)0x7 < local_50) {
      pppuVar8 = (undefined8 ***)local_68[0];
    }
    if (local_58 <= pppuVar16) break;
    lVar17 = (longlong)pppuVar8 + (longlong)local_58 * 2;
    lVar7 = thunk_FUN_1802d5d20((longlong)pppuVar8 + (longlong)pppuVar16 * 2,lVar17,0x27);
    if ((lVar7 == lVar17) ||
       (pppuVar16 = (undefined8 ***)(lVar7 - (longlong)pppuVar8 >> 1),
       pppuVar16 == (undefined8 ***)0xffffffffffffffff)) break;
    if (local_58 < pppuVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18022ec00();
    }
    if (local_50 == local_58) {
      FUN_18021a5c0(local_68);
      pppuVar16 = (undefined8 ***)((longlong)pppuVar16 + 2);
    }
    else {
      pppuVar8 = local_68;
      if ((undefined8 ***)0x7 < local_50) {
        pppuVar8 = (undefined8 ***)local_68[0];
      }
      _Src = (undefined2 *)((longlong)pppuVar8 + (longlong)pppuVar16 * 2);
      lVar17 = (longlong)local_58 - (longlong)pppuVar16;
      local_58 = (undefined8 ***)((longlong)local_58 + 1);
      memmove(_Src + 1,_Src,lVar17 * 2 + 2);
      lVar17 = 1;
      do {
        *_Src = 0x27;
        _Src = _Src + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      pppuVar16 = (undefined8 ***)((longlong)pppuVar16 + 2);
    }
  }
  ppuVar6 = local_58;
  if ((undefined8 ***)local_58 == (undefined8 ***)0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  pppuVar16 = local_68;
  if ((undefined8 ***)0x7 < local_50) {
    pppuVar16 = (undefined8 ***)local_68[0];
  }
  local_90 = (undefined8 ***)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uVar1 = (longlong)local_58 + 1;
  if (uVar1 < 8) {
    uVar9 = 7;
    pppuVar13 = &local_90;
  }
  else {
    uVar9 = uVar1 | 7;
    if (uVar9 < 0x7fffffffffffffff) goto LAB_1801526d2;
    uVar12 = 0xfffffffffffffffe;
    puVar15 = auStack_c8;
    uVar9 = 0x7ffffffffffffffe;
    do {
      if (uVar12 < 0x1000) {
        *(undefined8 *)(puVar15 + -8) = 0x18015271d;
        pppuVar13 = (undefined8 ***)FUN_1802d8350();
        local_90 = pppuVar13;
        goto LAB_18015272f;
      }
      puVar14 = puVar15;
      if (uVar12 + 0x27 <= uVar12) {
LAB_1801527fa:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar14 + -8) = 0x1801527ff;
        FUN_180012fe0();
      }
      *(undefined8 *)(puVar15 + -8) = 0x1801526c6;
      ppuVar10 = (undefined8 **)FUN_1802d8350(uVar12 + 0x27);
      if (ppuVar10 != (undefined8 **)0x0) {
        pppuVar13 = (undefined8 ***)((longlong)ppuVar10 + 0x27U & 0xffffffffffffffe0);
        pppuVar13[-1] = ppuVar10;
        local_90 = pppuVar13;
        goto LAB_18015272f;
      }
      pcVar2 = (code *)swi(0x29);
      uVar9 = (*pcVar2)(5);
      puVar14 = puVar15 + 8;
LAB_1801526d2:
      if (uVar9 < 10) {
        uVar9 = 10;
      }
      if (0x7fffffffffffffff < uVar9 + 1) goto LAB_1801527fa;
      uVar12 = (uVar9 + 1) * 2;
      puVar15 = puVar14;
    } while (uVar12 != 0);
    local_90 = (undefined8 ***)0x0;
  }
LAB_18015272f:
  local_80 = uVar1;
  local_78 = uVar9;
  *(short *)pppuVar13 = (short)DAT_18035f1bc;
  *(undefined8 *)(puVar15 + -8) = 0x180152750;
  memcpy((undefined2 *)((longlong)pppuVar13 + 2),pppuVar16,(longlong)ppuVar6 * 2);
  *(undefined2 *)((longlong)pppuVar13 + uVar1 * 2) = 0;
  local_98 = 4;
  *(undefined8 *)(puVar15 + -8) = 0x180152772;
  puVar11 = (undefined4 *)FUN_180211740(&local_90,&DAT_18035f1bc,1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = puVar11[1];
  uVar4 = puVar11[2];
  uVar5 = puVar11[3];
  *(undefined4 *)param_1 = *puVar11;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  uVar3 = puVar11[5];
  uVar4 = puVar11[6];
  uVar5 = puVar11[7];
  *(undefined4 *)(param_1 + 2) = puVar11[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 7;
  *(undefined2 *)puVar11 = 0;
  local_98 = 1;
  *(undefined8 *)(puVar15 + -8) = 0x1801527c6;
  FUN_18021e290(&local_90);
  *(undefined8 *)(puVar15 + -8) = 0x1801527d0;
  FUN_18021e290(local_68);
  *(undefined8 *)(puVar15 + -8) = 0x1801527df;
  return param_1;
}


