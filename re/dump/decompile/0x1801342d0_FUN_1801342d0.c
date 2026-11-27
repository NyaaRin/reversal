// 0x1801342d0  FUN_1801342d0
// size=1372 thunk=false
// signature: undefined FUN_1801342d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801342d0(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char ****ppppcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_2a8 [48];
  undefined4 local_278;
  ulonglong local_270;
  undefined8 uStack_268;
  longlong local_260;
  undefined8 local_258;
  char ***local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  ulonglong local_238;
  basic_ios<char,std::char_traits<char>_> *local_230;
  undefined8 *local_228;
  undefined1 *local_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [28];
  int iStack_1dc;
  longlong local_1d8 [2];
  int local_1c8 [2];
  basic_istream<char,std::char_traits<char>_> local_1c0 [152];
  basic_ios<char,std::char_traits<char>_> local_128 [96];
  char ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_2a8;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_278 = 1;
  local_228 = param_1;
  memset(local_1d8,0,0x110);
  uVar4 = FUN_180133bf0(&local_250);
  FUN_180202040(local_1d8,uVar4,1);
  FUN_18021e290(&local_250);
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  local_c8 = (char ***)0x0;
  iVar2 = *(int *)((longlong)local_1c8 + (longlong)*(int *)(local_1d8[0] + 4));
  while (iVar2 == 0) {
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)),'\n');
    plVar5 = (longlong *)FUN_180210550(local_1d8,&local_c8,cVar3);
    if ((*(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5) & 6) != 0) break;
    if (local_b8 != 0) {
      ppppcVar6 = &local_c8;
      if (0xf < local_b0) {
        ppppcVar6 = (char ****)local_c8;
      }
      if (*(char *)ppppcVar6 != '#') {
        ppppcVar6 = &local_c8;
        if (0xf < local_b0) {
          ppppcVar6 = (char ****)local_c8;
        }
        if (local_b8 != 0) {
          pcVar1 = (char *)((longlong)ppppcVar6 + local_b8);
          pcVar7 = (char *)thunk_FUN_1802d5c20(ppppcVar6,pcVar1,9);
          if ((pcVar7 != pcVar1) && (lVar10 = (longlong)pcVar7 - (longlong)ppppcVar6, lVar10 != -1))
          {
            uVar13 = lVar10 + 1;
            ppppcVar6 = &local_c8;
            if (0xf < local_b0) {
              ppppcVar6 = (char ****)local_c8;
            }
            if (((uVar13 < local_b8) &&
                (pcVar1 = (char *)((longlong)ppppcVar6 + local_b8),
                pcVar7 = (char *)thunk_FUN_1802d5c20((char *)((longlong)ppppcVar6 + uVar13),pcVar1,9
                                                    ), pcVar7 != pcVar1)) &&
               (lVar12 = (longlong)pcVar7 - (longlong)ppppcVar6, lVar12 != -1)) {
              uStack_a0 = 0;
              lVar8 = 0;
              local_98 = 0;
              local_90 = 0xf;
              local_a8 = 0;
              local_88 = 0;
              uStack_78 = 0;
              local_70 = 0;
              local_68 = 0xf;
              local_80 = 0;
              local_220 = local_218;
              uVar4 = FUN_18020e670(&local_c8,local_218,0,lVar10);
              puVar9 = (undefined8 *)FUN_180133a10(local_1f8,uVar4);
              if (&local_a8 != puVar9) {
                local_a8 = *puVar9;
                uStack_a0 = puVar9[1];
                lVar8 = puVar9[2];
                local_90 = puVar9[3];
                puVar9[2] = 0;
                puVar9[3] = 0xf;
                *(undefined1 *)puVar9 = 0;
                local_98 = lVar8;
              }
              FUN_18020e450(local_1f8);
              local_250 = (char ***)0x0;
              uStack_248 = 0;
              local_240 = 0;
              local_238 = 0;
              if (local_b8 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_18022ec00();
              }
              uVar11 = (lVar12 - lVar10) - 1;
              if (local_b8 - uVar13 < uVar11) {
                uVar11 = local_b8 - uVar13;
              }
              ppppcVar6 = &local_c8;
              if (0xf < local_b0) {
                ppppcVar6 = (char ****)local_c8;
              }
              FUN_18001d080(&local_250,(char *)((longlong)ppppcVar6 + uVar13),uVar11);
              local_278 = 5;
              ppppcVar6 = &local_250;
              if (0xf < local_238) {
                ppppcVar6 = (char ****)local_250;
              }
              local_88 = _strtoui64((char *)ppppcVar6,(char **)0x0,10);
              local_278 = 1;
              FUN_18020e450(&local_250);
              uVar13 = lVar12 + 1;
              local_270 = 0;
              uStack_268 = 0;
              local_260 = 0;
              local_258 = 0;
              if (local_b8 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_18022ec00();
              }
              lVar10 = -1;
              if (local_b8 - uVar13 != -1) {
                lVar10 = local_b8 - uVar13;
              }
              ppppcVar6 = &local_c8;
              if (0xf < local_b0) {
                ppppcVar6 = (char ****)local_c8;
              }
              FUN_18001d080(&local_270,(char *)((longlong)ppppcVar6 + uVar13),lVar10);
              lVar10 = local_260;
              local_80 = local_270;
              uStack_78 = uStack_268;
              local_70 = local_260;
              local_68 = local_258;
              local_260 = 0;
              local_258 = 0xf;
              local_270 = local_270 & 0xffffffffffffff00;
              local_278 = 1;
              FUN_18020e450(&local_270);
              if ((lVar8 != 0) && (lVar10 != 0)) {
                lVar10 = param_1[1];
                if (lVar10 == param_1[2]) {
                  FUN_180224fe0(param_1,lVar10,&local_a8);
                }
                else {
                  local_230 = (basic_ios<char,std::char_traits<char>_> *)lVar10;
                  FUN_18016d4c0(lVar10,&local_a8);
                  *(ulonglong *)(lVar10 + 0x20) = local_88;
                  FUN_18016d4c0(lVar10 + 0x28,&local_80);
                  param_1[1] = param_1[1] + 0x48;
                }
              }
              FUN_18020e450(&local_80);
              FUN_18020e450(&local_a8);
            }
          }
        }
      }
    }
    iVar2 = *(int *)((longlong)local_1c8 + (longlong)*(int *)(local_1d8[0] + 4));
  }
  FUN_18020e450(&local_c8);
  local_230 = local_128;
  *(undefined ***)((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)((longlong)&iStack_1dc + (longlong)*(int *)(local_1d8[0] + 4)) =
       *(int *)(local_1d8[0] + 4) + -0xb0;
  FUN_18020f850(local_1c8);
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (local_1c0);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_128);
  return param_1;
}


