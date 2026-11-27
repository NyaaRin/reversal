// 0x180179f10  FUN_180179f10
// size=943 thunk=false
// signature: undefined FUN_180179f10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180179f10(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  char ****ppppcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  basic_ios<char,std::char_traits<char>_> *local_1b0;
  undefined8 ***local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  char ***local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  ulonglong local_148;
  int iStack_13c;
  undefined *local_138 [2];
  undefined **local_128;
  basic_istream<char,std::char_traits<char>_> local_120 [120];
  basic_ios<char,std::char_traits<char>_> local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_1b8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_168 = param_1;
  lVar6 = FUN_1802d8350(0x48);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *param_1 = lVar6;
  local_1b8 = 1;
  memset(local_138,0,0xf0);
  local_138[0] = &DAT_18033dc58;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_a8);
  local_1b8 = 9;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)local_138,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_128,false);
  *(undefined ***)((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_istringstream;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138[0] + 4)) =
       *(int *)(local_138[0] + 4) + -0x90;
  local_1b0 = (basic_ios<char,std::char_traits<char>_> *)&local_128;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_128);
  local_128 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18022ed80(&local_128,param_2,*puVar1,2);
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 0xf;
  local_160 = (char ***)0x0;
  cVar5 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)),'\n');
  plVar7 = (longlong *)FUN_180210550(local_138,&local_160,cVar5);
  bVar4 = *(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7);
  do {
    if ((bVar4 & 6) != 0) {
      FUN_18020e450(&local_160);
      local_1b0 = local_a8;
      *(undefined ***)((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)) =
           vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_istringstream;
      *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138[0] + 4)) =
           *(int *)(local_138[0] + 4) + -0x90;
      FUN_18020ffc0(&local_128);
      std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
                (local_120);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_a8);
      return param_1;
    }
    if (local_150 != 0) {
      ppppcVar8 = &local_160;
      if (0xf < local_148) {
        ppppcVar8 = (char ****)local_160;
      }
      if (*(char *)ppppcVar8 != '#') {
        ppppcVar8 = &local_160;
        if (0xf < local_148) {
          ppppcVar8 = (char ****)local_160;
        }
        if (((local_150 != 0) &&
            (pcVar3 = (char *)((longlong)ppppcVar8 + local_150),
            pcVar9 = (char *)thunk_FUN_1802d5c20(ppppcVar8,pcVar3,0x3d), pcVar9 != pcVar3)) &&
           (uVar12 = (longlong)pcVar9 - (longlong)ppppcVar8, uVar12 != 0xffffffffffffffff)) {
          uVar2 = uVar12 + 1;
          local_188 = 0;
          uStack_180 = 0;
          local_178 = 0;
          local_170 = 0;
          if (local_150 < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_18022ec00();
          }
          lVar6 = -1;
          if (local_150 - uVar2 != -1) {
            lVar6 = local_150 - uVar2;
          }
          ppppcVar8 = &local_160;
          if (0xf < local_148) {
            ppppcVar8 = (char ****)local_160;
          }
          FUN_18001d080(&local_188,(char *)((longlong)ppppcVar8 + uVar2),lVar6);
          local_1b8 = 0xb;
          local_1a8 = (undefined8 ****)0x0;
          uStack_1a0 = 0;
          local_198 = 0;
          local_190 = 0;
          if (local_150 < uVar12) {
            uVar12 = local_150;
          }
          ppppcVar8 = &local_160;
          if (0xf < local_148) {
            ppppcVar8 = (char ****)local_160;
          }
          FUN_18001d080(&local_1a8,ppppcVar8,uVar12);
          local_1b8 = 0xf;
          ppppuVar11 = &local_1a8;
          if (0xf < local_190) {
            ppppuVar11 = (undefined8 ****)local_1a8;
          }
          local_1b0 = (basic_ios<char,std::char_traits<char>_> *)strtoull(ppppuVar11,0,0x10);
          uVar10 = FUN_18020dcd0(param_1,&local_1b0);
          FUN_18020e8a0(uVar10,&local_188);
          local_1b8 = 0xb;
          FUN_18020e450(&local_1a8);
          local_1b8 = 9;
          FUN_18020e450(&local_188);
        }
      }
    }
    cVar5 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)),'\n');
    plVar7 = (longlong *)FUN_180210550(local_138,&local_160,cVar5);
    bVar4 = *(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7);
  } while( true );
}


