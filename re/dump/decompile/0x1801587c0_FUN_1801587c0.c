// 0x1801587c0  FUN_1801587c0
// size=983 thunk=false
// signature: undefined FUN_1801587c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801587c0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 *puVar7;
  byte ****ppppbVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
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
  local_118 = 0;
  local_90 = &DAT_1803e8780;
  iVar2 = _Mtx_lock(&DAT_1803e8780);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e87cc == 0x7fffffff) {
    DAT_1803e87cc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_1801fc280(param_1,"\n# Lua file cloak\n");
  local_d0 = (byte ***)0x0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_18001d080(&local_d0,"luafs.count",0xb);
  uVar11 = 0x14650fb0739d0383;
  if (uStack_b8 < 0x10) {
    ppppbVar8 = &local_d0;
  }
  else {
    ppppbVar8 = (byte ****)local_d0;
    if ((byte ****)local_d0 == (byte ****)0x0) goto LAB_1801588b4;
  }
  do {
    if (*(byte *)ppppbVar8 == 0) break;
    uVar11 = (uVar11 ^ *(byte *)ppppbVar8) * 0x100000001b3;
    ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1);
  } while (ppppbVar8 != (byte ****)0x0);
LAB_1801588b4:
  FUN_180012ac0(local_68,0x11,"%016llx",uVar11);
  local_110 = (undefined8 ****)0x0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  sVar3 = strlen(local_68);
  FUN_18001d080(&local_110,local_68,sVar3);
  local_118 = 8;
  ppppuVar9 = &local_110;
  if (0xf < uStack_f8) {
    ppppuVar9 = (undefined8 ****)local_110;
  }
  uVar4 = FUN_180210c60(param_1,ppppuVar9,local_100);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4,&DAT_18034118c);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar5,(DAT_1803e9df8 - DAT_1803e9df0 >> 3) * -0x3333333333333333);
  FUN_1801fc280(pbVar6,&DAT_18033e92c);
  local_118 = 0;
  FUN_18020e450(&local_110);
  FUN_18020e450(&local_d0);
  uVar11 = 0;
  if ((DAT_1803e9df8 - DAT_1803e9df0 >> 3) * -0x3333333333333333 != 0) {
    do {
      uVar4 = FUN_180013d70(local_88,uVar11);
      puVar7 = (undefined8 *)FUN_18022a630(uVar4);
      ppppbVar8 = (byte ****)*puVar7;
      local_b0 = (byte ***)ppppbVar8;
      uStack_a8 = puVar7[1];
      uStack_98 = puVar7[3];
      local_a0 = puVar7[2];
      *(undefined1 *)puVar7 = 0;
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      local_118 = 1;
      uVar12 = 0x14650fb0739d0383;
      if (uStack_98 < 0x10) {
        ppppbVar8 = &local_b0;
        goto LAB_180158a27;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180158a27:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar12 = (uVar12 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_68,0x11,"%016llx",uVar12);
      local_f0 = (undefined8 ****)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      sVar3 = strlen(local_68);
      FUN_18001d080(&local_f0,local_68,sVar3);
      local_118 = 3;
      ppppuVar9 = &local_f0;
      if (0xf < uStack_d8) {
        ppppuVar9 = (undefined8 ****)local_f0;
      }
      uVar4 = FUN_180210c60(param_1,ppppuVar9,local_e0);
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4,&DAT_18034118c);
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar5,*(int *)(uVar11 * 0x28 + 0x20 + DAT_1803e9df0));
      uVar4 = FUN_1801fc280(pbVar6,&DAT_1803601c4);
      puVar10 = (undefined8 *)(DAT_1803e9df0 + uVar11 * 0x28);
      puVar7 = puVar10 + 2;
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      uVar4 = FUN_180210c60(uVar4,puVar10,*puVar7);
      FUN_1801fc280(uVar4,&DAT_18033e92c);
      local_118 = 1;
      FUN_18020e450(&local_f0);
      local_118 = 0;
      FUN_18020e450(&local_b0);
      FUN_18020e450(local_88);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulonglong)((DAT_1803e9df8 - DAT_1803e9df0 >> 3) * -0x3333333333333333));
  }
  _Mtx_unlock(&DAT_1803e8780);
  return;
}


