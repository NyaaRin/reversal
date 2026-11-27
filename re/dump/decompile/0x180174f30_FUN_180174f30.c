// 0x180174f30  FUN_180174f30
// size=426 thunk=false
// signature: undefined FUN_180174f30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180174f30(undefined8 param_1,undefined8 *param_2,float param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined8 ****ppppuVar4;
  undefined8 in_R8;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined8 ***local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  byte ***local_60 [3];
  ulonglong local_48;
  char local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  local_a8 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_98 = 0;
  local_a0 = &DAT_18033e5ea;
  FUN_18020e930(local_60,param_2,in_R8,param_2);
  local_88 = 1;
  uVar5 = 0x14650fb0739d0383;
  if (local_48 < 0x10) {
    local_60[0] = (byte ***)local_60;
  }
  else if ((byte ****)local_60[0] == (byte ****)0x0) goto LAB_180174fe4;
  do {
    if (*(byte *)local_60[0] == 0) break;
    uVar5 = (uVar5 ^ *(byte *)local_60[0]) * 0x100000001b3;
    local_60[0] = (byte ***)((longlong)local_60[0] + 1);
  } while ((byte ****)local_60[0] != (byte ****)0x0);
LAB_180174fe4:
  FUN_180012ac0(local_40,0x11,"%016llx",uVar5);
  local_80 = (undefined8 ****)0x0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  sVar1 = strlen(local_40);
  FUN_18001d080(&local_80,local_40,sVar1);
  local_88 = 3;
  ppppuVar4 = &local_80;
  if (0xf < uStack_68) {
    ppppuVar4 = (undefined8 ****)local_80;
  }
  uVar2 = FUN_180210c60(param_1,ppppuVar4,local_70);
  this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar2,&DAT_18034118c);
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,param_3);
  FUN_1801fc280(pbVar3,&DAT_18033e92c);
  local_88 = 1;
  FUN_18020e450(&local_80);
  local_88 = 0;
  FUN_18020e450(local_60);
  return;
}


