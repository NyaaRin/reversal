// 0x180143040  FUN_180143040
// size=906 thunk=false
// signature: undefined FUN_180143040()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180143040(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 *puVar6;
  byte ****ppppbVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 ***local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  byte ***local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong uStack_b8;
  byte ***local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined *local_90;
  undefined1 local_88 [32];
  char local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  iVar10 = 0;
  local_118 = 0;
  local_90 = &DAT_1803e7c90;
  iVar2 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_1801fc280(param_1,"\n# Kill say messages\n");
  local_d0 = (byte ***)0x0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_18001d080(&local_d0,"killsay.count",0xd);
  uVar11 = 0x14650fb0739d0383;
  if (uStack_b8 < 0x10) {
    ppppbVar7 = &local_d0;
  }
  else {
    ppppbVar7 = (byte ****)local_d0;
    if ((byte ****)local_d0 == (byte ****)0x0) goto LAB_180143134;
  }
  do {
    if (*(byte *)ppppbVar7 == 0) break;
    uVar11 = (uVar11 ^ *(byte *)ppppbVar7) * 0x100000001b3;
    ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1);
  } while (ppppbVar7 != (byte ****)0x0);
LAB_180143134:
  FUN_180012ac0(local_68,0x11,"%016llx",uVar11);
  local_110 = (undefined8 ****)0x0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  sVar3 = strlen(local_68);
  FUN_18001d080(&local_110,local_68,sVar3);
  local_118 = 8;
  ppppuVar8 = &local_110;
  if (0xf < uStack_f8) {
    ppppuVar8 = (undefined8 ****)local_110;
  }
  uVar4 = FUN_180210c60(param_1,ppppuVar8,local_100);
  this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4,&DAT_18034118c);
  pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (this,DAT_1803e9f68 - DAT_1803e9f60 >> 5);
  FUN_1801fc280(pbVar5,&DAT_18033e92c);
  local_118 = 0;
  FUN_18020e450(&local_110);
  FUN_18020e450(&local_d0);
  if (0 < (int)(DAT_1803e9f68 - DAT_1803e9f60 >> 5)) {
    do {
      uVar4 = FUN_180013ba0(local_88,iVar10);
      puVar6 = (undefined8 *)FUN_18022a630(uVar4);
      ppppbVar7 = (byte ****)*puVar6;
      local_b0 = (byte ***)ppppbVar7;
      uStack_a8 = puVar6[1];
      uStack_98 = puVar6[3];
      local_a0 = puVar6[2];
      *(undefined1 *)puVar6 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      local_118 = 1;
      uVar11 = 0x14650fb0739d0383;
      if (uStack_98 < 0x10) {
        ppppbVar7 = &local_b0;
        goto LAB_180143292;
      }
      for (; ppppbVar7 != (byte ****)0x0; ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1)) {
LAB_180143292:
        if (*(byte *)ppppbVar7 == 0) break;
        uVar11 = (uVar11 ^ *(byte *)ppppbVar7) * 0x100000001b3;
      }
      FUN_180012ac0(local_68,0x11,"%016llx",uVar11);
      local_f0 = (undefined8 ****)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      sVar3 = strlen(local_68);
      FUN_18001d080(&local_f0,local_68,sVar3);
      local_118 = 3;
      ppppuVar8 = &local_f0;
      if (0xf < uStack_d8) {
        ppppuVar8 = (undefined8 ****)local_f0;
      }
      uVar4 = FUN_180210c60(param_1,ppppuVar8,local_e0);
      uVar4 = FUN_1801fc280(uVar4,&DAT_18034118c);
      puVar9 = (undefined8 *)((longlong)iVar10 * 0x20 + DAT_1803e9f60);
      puVar6 = puVar9 + 2;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      uVar4 = FUN_180210c60(uVar4,puVar9,*puVar6);
      FUN_1801fc280(uVar4,&DAT_18033e92c);
      local_118 = 1;
      FUN_18020e450(&local_f0);
      local_118 = 0;
      FUN_18020e450(&local_b0);
      FUN_18020e450(local_88);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(DAT_1803e9f68 - DAT_1803e9f60 >> 5));
  }
  _Mtx_unlock(&DAT_1803e7c90);
  return;
}


