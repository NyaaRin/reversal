// 0x18003a910  FUN_18003a910
// size=660 thunk=false
// signature: undefined FUN_18003a910()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18003a910(char *param_1,undefined4 param_2,longlong param_3,int param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *_Str;
  undefined4 uVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  char *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if (DAT_1803ffb90 != '\0') {
    local_90 = &DAT_1803e77b0;
    local_b8 = param_2;
    local_98 = param_1;
    iVar7 = _Mtx_lock(&DAT_1803e77b0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
    }
    if (DAT_1803e77fc == 0x7fffffff) {
      DAT_1803e77fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar3 = DAT_1803eb3b8;
    puVar2 = DAT_1803eb3b0;
    if (0xff < (ulonglong)((longlong)DAT_1803eb3b8 - (longlong)DAT_1803eb3b0 >> 6)) {
      local_b0 = DAT_1803eb3b0;
      puVar9 = DAT_1803eb3b0;
      puVar1 = DAT_1803eb3b0;
      while( true ) {
        puVar10 = puVar1 + 8;
        local_a8 = puVar9;
        local_a0 = puVar10;
        if (puVar10 == puVar3) break;
        FUN_18020e8a0(puVar9,puVar10);
        *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar1 + 0xc);
        *(undefined4 *)((longlong)puVar9 + 0x24) = *(undefined4 *)((longlong)puVar1 + 100);
        FUN_18020caf0(puVar9 + 5,puVar1 + 0xd);
        puVar9 = puVar9 + 8;
        puVar1 = puVar10;
      }
      FUN_18003abb0(DAT_1803eb3b8 + -8);
      DAT_1803eb3b8 = DAT_1803eb3b8 + -8;
      local_b0 = puVar2;
      param_1 = local_98;
    }
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0xf;
    local_88 = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    _Str = "";
    if (param_1 != (char *)0x0) {
      _Str = param_1;
    }
    sVar8 = strlen(_Str);
    uVar11 = FUN_180212700(&local_88,_Str,sVar8);
    local_68 = local_b8;
    local_64 = param_5;
    if ((param_3 != 0) && (0 < param_4)) {
      uVar11 = FUN_1801fd7f0(&local_60,param_3,param_3 + param_4);
    }
    uVar6 = uStack_50;
    uVar5 = local_58;
    uVar4 = local_60;
    puVar2 = DAT_1803eb3b8;
    if (DAT_1803eb3b8 == DAT_1803eb3c0) {
      FUN_180227f30(uVar11,DAT_1803eb3b8,&local_88);
    }
    else {
      local_b0 = DAT_1803eb3b8;
      *DAT_1803eb3b8 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined4 *)puVar2 = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar2 + 4) = local_88._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_80._4_4_;
      puVar2[2] = local_78;
      puVar2[3] = uStack_70;
      local_78 = 0;
      uStack_70 = 0xf;
      local_88 = local_88 & 0xffffffffffffff00;
      *(undefined4 *)(puVar2 + 4) = local_68;
      *(undefined4 *)((longlong)puVar2 + 0x24) = local_64;
      uStack_50 = 0;
      local_58 = 0;
      local_60 = 0;
      puVar2[5] = uVar4;
      puVar2[6] = uVar5;
      puVar2[7] = uVar6;
      DAT_1803eb3b8 = DAT_1803eb3b8 + 8;
    }
    FUN_18003abb0(&local_88);
    _Mtx_unlock(&DAT_1803e77b0);
  }
  return;
}


