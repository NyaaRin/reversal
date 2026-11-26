// 0x180135f40  FUN_180135f40
// size=1642 thunk=false
// signature: undefined FUN_180135f40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018013618b) */
/* WARNING: Removing unreachable block (ram,0x0001801361a0) */
/* WARNING: Removing unreachable block (ram,0x0001801361b5) */
/* WARNING: Removing unreachable block (ram,0x0001801361bc) */

void FUN_180135f40(void)

{
  char *pcVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char ****ppppcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [40];
  undefined4 local_288;
  undefined *local_280;
  ulonglong local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [28];
  int iStack_21c;
  longlong local_218 [2];
  int local_208 [2];
  basic_istream<char,std::char_traits<char>_> local_200 [152];
  basic_ios<char,std::char_traits<char>_> local_168 [96];
  char ***local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  longlong local_d8;
  ulonglong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  char ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  puVar10 = auStack_2b8;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  local_288 = 0;
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  memset(local_218,0,0x110);
  uVar6 = FUN_180135860(local_238);
  FUN_180202040(local_218,uVar6,1);
  FUN_18021e290(local_238);
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0xf;
  local_108 = (char ***)0x0;
  iVar5 = *(int *)((longlong)local_208 + (longlong)*(int *)(local_218[0] + 4));
  while (iVar5 == 0) {
    cVar4 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4)),'\n');
    plVar7 = (longlong *)FUN_180210550(local_218,&local_108,cVar4);
    if ((*(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7) & 6) != 0) break;
    if (local_f8 != 0) {
      ppppcVar8 = &local_108;
      if (0xf < local_f0) {
        ppppcVar8 = (char ****)local_108;
      }
      if (*(char *)ppppcVar8 != '#') {
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0xf;
        local_c8 = 0;
        local_a8 = 0;
        uStack_98 = 0;
        local_90 = 0;
        local_88 = 0xf;
        local_a0 = 0;
        ppppcVar8 = &local_108;
        if (0xf < local_f0) {
          ppppcVar8 = (char ****)local_108;
        }
        if (((local_f8 == 0) ||
            (pcVar1 = (char *)((longlong)ppppcVar8 + local_f8),
            pcVar9 = (char *)thunk_FUN_1802d5c20(ppppcVar8,pcVar1,9), pcVar9 == pcVar1)) ||
           (uVar11 = (longlong)pcVar9 - (longlong)ppppcVar8, uVar11 == 0xffffffffffffffff)) {
          FUN_18020e450(&local_a0);
        }
        else {
          local_278 = 0;
          uStack_270 = 0;
          local_268 = 0;
          local_260 = 0;
          uVar13 = uVar11;
          if (local_f8 < uVar11) {
            uVar13 = local_f8;
          }
          ppppcVar8 = &local_108;
          if (0xf < local_f0) {
            ppppcVar8 = (char ****)local_108;
          }
          FUN_18001d080(&local_278,ppppcVar8,uVar13);
          lVar3 = local_268;
          local_c8 = local_278;
          uStack_c0 = uStack_270;
          local_b8 = local_268;
          local_b0 = local_260;
          local_268 = 0;
          local_260 = 0xf;
          local_278 = local_278 & 0xffffffffffffff00;
          local_288 = 0;
          FUN_18020e450(&local_278);
          uVar13 = uVar11 + 1;
          ppppcVar8 = &local_108;
          if (0xf < local_f0) {
            ppppcVar8 = (char ****)local_108;
          }
          if ((uVar13 < local_f8) &&
             (pcVar1 = (char *)((longlong)ppppcVar8 + local_f8),
             pcVar9 = (char *)thunk_FUN_1802d5c20((char *)((longlong)ppppcVar8 + uVar13),pcVar1,9),
             pcVar9 != pcVar1)) {
            uVar12 = (longlong)pcVar9 - (longlong)ppppcVar8;
            uVar15 = local_f8;
            if (uVar12 != 0xffffffffffffffff) {
              uVar15 = uVar12;
            }
          }
          else {
            uVar12 = 0xffffffffffffffff;
            uVar15 = local_f8;
          }
          FUN_18020e670(&local_108,local_78,uVar13,(uVar15 - uVar11) + -1);
          ppppcVar8 = local_78;
          if (0xf < local_60) {
            ppppcVar8 = (char ****)local_78[0];
          }
          local_a8 = _strtoui64((char *)ppppcVar8,(char **)0x0,10);
          if ((int)local_a8 == 0) {
            local_a8 = 0;
          }
          if (uVar12 != 0xffffffffffffffff) {
            uVar12 = uVar12 + 1;
            local_258 = 0;
            uStack_250 = 0;
            local_248 = 0;
            local_240 = 0;
            if (local_f8 < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_18022ec00();
            }
            lVar14 = -1;
            if (local_f8 - uVar12 != -1) {
              lVar14 = local_f8 - uVar12;
            }
            ppppcVar8 = &local_108;
            if (0xf < local_f0) {
              ppppcVar8 = (char ****)local_108;
            }
            FUN_18001d080(&local_258,(char *)((longlong)ppppcVar8 + uVar12),lVar14);
            local_a0 = local_258;
            uStack_98 = uStack_250;
            local_90 = local_248;
            local_88 = local_240;
            local_248 = 0;
            local_240 = 0xf;
            local_258 = local_258 & 0xffffffffffffff00;
            local_288 = 0;
            FUN_18020e450(&local_258);
          }
          lVar14 = lStack_e0;
          if (lVar3 != 0) {
            if (lStack_e0 == local_d8) {
              FUN_180224fe0(&local_e8,lStack_e0,&local_c8);
            }
            else {
              local_280 = (undefined *)lStack_e0;
              FUN_18016d4c0(lStack_e0,&local_c8);
              *(ulonglong *)(lVar14 + 0x20) = local_a8;
              FUN_18016d4c0(lVar14 + 0x28,&local_a0);
              lStack_e0 = lStack_e0 + 0x48;
            }
          }
          FUN_18020e450(local_78);
          FUN_18020e450(&local_a0);
        }
        FUN_18020e450(&local_c8);
      }
    }
    iVar5 = *(int *)((longlong)local_208 + (longlong)*(int *)(local_218[0] + 4));
  }
  local_280 = &DAT_1803e86b0;
  iVar5 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar5 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar10 = auStack_2b0;
  }
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    *(undefined8 *)(puVar10 + -8) = 0x1801364bc;
    std::_Throw_Cpp_error(6);
  }
  lVar14 = DAT_1803eb7c8;
  lVar3 = DAT_1803eb7c0;
  uVar6 = DAT_1803eb7b8;
  DAT_1803eb7b8 = local_e8;
  local_e8 = uVar6;
  DAT_1803eb7c0 = lStack_e0;
  lStack_e0 = lVar3;
  DAT_1803eb7c8 = local_d8;
  local_d8 = lVar14;
  *(undefined8 *)(puVar10 + -8) = 0x18013651a;
  _Mtx_unlock(&DAT_1803e86b0);
  *(undefined8 *)(puVar10 + -8) = 0x180136527;
  FUN_18020e450(&local_108);
  *(basic_ios<char,std::char_traits<char>_> **)(puVar10 + 0x38) = local_168;
  *(undefined ***)((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)((longlong)&iStack_21c + (longlong)*(int *)(local_218[0] + 4)) =
       *(int *)(local_218[0] + 4) + -0xb0;
  *(undefined8 *)(puVar10 + -8) = 0x180136560;
  FUN_18020f850(local_208);
  *(undefined8 *)(puVar10 + -8) = 0x18013656b;
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (local_200);
  *(undefined8 *)(puVar10 + -8) = 0x180136575;
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_168);
  *(undefined8 *)(puVar10 + -8) = 0x180136582;
  FUN_18020ad50(&local_e8);
  *(undefined8 *)(puVar10 + -8) = 0x180136591;
  return;
}


