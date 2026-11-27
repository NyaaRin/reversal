// 0x1801a9de0  FUN_1801a9de0
// size=256 thunk=false
// signature: undefined FUN_1801a9de0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a9de0(undefined8 param_1,undefined8 param_2,int param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  char local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_180012ac0(local_30,0x11,"%016llx",param_2);
  local_50 = (undefined8 ***)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  sVar1 = strlen(local_30);
  FUN_18001d080(&local_50,local_30,sVar1);
  local_58 = 1;
  pppuVar4 = &local_50;
  if (0xf < uStack_38) {
    pppuVar4 = (undefined8 ***)local_50;
  }
  uVar2 = FUN_180210c60(param_1,pppuVar4,local_40);
  this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar2,&DAT_18034118c);
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,param_3);
  FUN_1801fc280(pbVar3,&DAT_18033e92c);
  local_58 = 0;
  FUN_18020e450(&local_50);
  return;
}


