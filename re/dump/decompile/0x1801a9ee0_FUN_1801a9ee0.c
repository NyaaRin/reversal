// 0x1801a9ee0  FUN_1801a9ee0
// size=264 thunk=false
// signature: undefined FUN_1801a9ee0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a9ee0(undefined8 param_1,undefined8 param_2,float param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  char local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_68 = 0;
  FUN_180012ac0(local_40,0x11,"%016llx",param_2);
  local_60 = (undefined8 ***)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  sVar1 = strlen(local_40);
  FUN_18001d080(&local_60,local_40,sVar1);
  local_68 = 1;
  pppuVar4 = &local_60;
  if (0xf < uStack_48) {
    pppuVar4 = (undefined8 ***)local_60;
  }
  uVar2 = FUN_180210c60(param_1,pppuVar4,local_50);
  this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar2,&DAT_18034118c);
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,param_3);
  FUN_1801fc280(pbVar3,&DAT_18033e92c);
  local_68 = 0;
  FUN_18020e450(&local_60);
  return;
}


