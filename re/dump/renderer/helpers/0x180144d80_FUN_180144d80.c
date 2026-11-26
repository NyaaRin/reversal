// 180144d80  FUN_180144d80
// signature: undefined FUN_180144d80()
// status: ok


void FUN_180144d80(undefined4 param_1,undefined8 param_2,char *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  size_t sVar4;
  char *_Str;
  undefined4 uVar5;
  undefined4 local_98 [2];
  ulonglong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined4 *local_20;
  
  if (DAT_180409b00 == '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"no cvar name",0xc);
    FUN_180144c60(&local_48);
  }
  else {
    local_28 = &DAT_1803e83b0;
    iVar3 = _Mtx_lock(&DAT_1803e83b0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e83fc == 0x7fffffff) {
      DAT_1803e83fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_98[0] = param_1;
    sVar4 = strlen(&DAT_180409b00);
    FUN_18001d080(&local_90,&DAT_180409b00,sVar4);
    _Str = "";
    if (param_3 != (char *)0x0) {
      _Str = param_3;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    sVar4 = strlen(_Str);
    uVar5 = FUN_18001d080(&local_70,_Str,sVar4);
    puVar2 = DAT_1803e9ee0;
    if (DAT_1803e9ee0 == DAT_1803e9ee8) {
      FUN_180224a50(uVar5,DAT_1803e9ee0,local_98);
    }
    else {
      local_20 = DAT_1803e9ee0;
      *DAT_1803e9ee0 = local_98[0];
      *(ulonglong *)(puVar2 + 2) = local_90;
      *(undefined8 *)(puVar2 + 4) = uStack_88;
      *(undefined8 *)(puVar2 + 6) = local_80;
      *(undefined8 *)(puVar2 + 8) = local_78;
      local_80 = 0;
      local_78 = 0xf;
      local_90 = local_90 & 0xffffffffffffff00;
      *(ulonglong *)(puVar2 + 10) = local_70;
      *(undefined8 *)(puVar2 + 0xc) = uStack_68;
      *(undefined8 *)(puVar2 + 0xe) = local_60;
      *(undefined8 *)(puVar2 + 0x10) = local_58;
      local_60 = 0;
      local_58 = 0xf;
      local_70 = local_70 & 0xffffffffffffff00;
      DAT_1803e9ee0 = DAT_1803e9ee0 + 0x12;
    }
    FUN_18020e450(&local_70);
    FUN_18020e450(&local_90);
    _Mtx_unlock(&DAT_1803e83b0);
  }
  return;
}


