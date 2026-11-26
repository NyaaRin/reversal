// 0x18017a2c0  FUN_18017a2c0
// size=862 thunk=false
// signature: undefined FUN_18017a2c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017a2c0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  byte ******ppppppbVar8;
  undefined8 *_Buf1;
  int iVar9;
  ulonglong uVar10;
  undefined8 ******ppppppuVar11;
  ulonglong uVar12;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  basic_ios<char,std::char_traits<char>_> *local_1a0;
  undefined8 *****local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulonglong uStack_180;
  byte *****local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong uStack_160;
  undefined8 *****local_158 [2];
  size_t local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined **local_130;
  basic_ostream<char,std::char_traits<char>_> local_128 [96];
  undefined8 local_c8;
  undefined4 local_c0;
  basic_ios<char,std::char_traits<char>_> local_b0 [104];
  char local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  uVar10 = 0;
  local_1a8 = 0;
  memset(&local_138,0,0xe8);
  local_138 = &DAT_18033b3dc;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_b0);
  local_1a8 = 1;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_138,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_130,false);
  *(undefined ***)((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
  *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138 + 4) + 4) =
       *(int *)(local_138 + 4) + -0x88;
  local_1a0 = (basic_ios<char,std::char_traits<char>_> *)&local_130;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_130);
  local_130 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
  local_c8 = 0;
  local_c0 = 4;
  FUN_1801768e0(&local_138);
  local_178 = (byte *****)0x0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  FUN_18001d080(&local_178,"esp.selected",0xc);
  uVar12 = 0x14650fb0739d0383;
  ppppppbVar8 = (byte ******)local_178;
  if (uStack_160 < 0x10) {
    ppppppbVar8 = &local_178;
    goto LAB_18017a3e0;
  }
  for (; ppppppbVar8 != (byte ******)0x0; ppppppbVar8 = (byte ******)((longlong)ppppppbVar8 + 1)) {
LAB_18017a3e0:
    if (*(byte *)ppppppbVar8 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar8) * 0x100000001b3;
  }
  FUN_180012ac0(local_48,0x11,"%016llx",uVar12);
  local_198 = (undefined8 ******)0x0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  sVar5 = strlen(local_48);
  FUN_18001d080(&local_198,local_48,sVar5);
  local_1a8 = 3;
  ppppppuVar11 = &local_198;
  if (0xf < uStack_180) {
    ppppppuVar11 = (undefined8 ******)local_198;
  }
  uVar6 = FUN_180210c60(&local_138,ppppppuVar11,local_188);
  this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar6,&DAT_18034118c);
  iVar4 = (int)(DAT_1803fb108 - DAT_1803fb100 >> 3);
  if (0 < iVar4) {
    do {
      iVar9 = (int)uVar10;
      if (*(longlong *)(DAT_1803fb100 + uVar10 * 8) == DAT_1803fa5f8) goto LAB_18017a4bc;
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < iVar4);
  }
  iVar9 = -1;
LAB_18017a4bc:
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,iVar9);
  FUN_1801fc280(pbVar7,&DAT_18033e92c);
  local_1a8 = 1;
  FUN_18020e450(&local_198);
  FUN_18020e450(&local_178);
  FUN_18020f8c0(&local_138,local_158);
  if (DAT_1803fb118 != DAT_1803fb120) {
    _Buf1 = (undefined8 *)(DAT_1803fb120 + -0x20);
    ppppppuVar11 = local_158;
    if (0xf < local_140) {
      ppppppuVar11 = (undefined8 ******)local_158[0];
    }
    sVar5 = *(size_t *)(DAT_1803fb120 + -0x10);
    if (0xf < *(ulonglong *)(DAT_1803fb120 + -8)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((sVar5 == local_148) &&
       ((sVar5 == 0 || (iVar4 = memcmp(_Buf1,ppppppuVar11,sVar5), iVar4 == 0)))) goto LAB_18017a5b0;
  }
  FUN_18020d6f0(&DAT_1803fb118,local_158);
  lVar3 = DAT_1803fb120;
  lVar2 = DAT_1803fb118;
  lVar1 = DAT_1803fb118;
  if (0x40 < (ulonglong)(DAT_1803fb120 - DAT_1803fb118 >> 5)) {
    while (lVar1 = lVar1 + 0x20, lVar1 != lVar3) {
      FUN_18020e8a0(lVar2,lVar1);
      lVar2 = lVar2 + 0x20;
    }
    FUN_18020e450(DAT_1803fb120 + -0x20);
    DAT_1803fb120 = DAT_1803fb120 + -0x20;
  }
LAB_18017a5b0:
  FUN_18020e450(local_158);
  local_1a0 = local_b0;
  *(undefined ***)((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
  *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138 + 4) + 4) =
       *(int *)(local_138 + 4) + -0x88;
  FUN_18020ffc0(&local_130);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_128);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_b0);
  return;
}


