// 0x1800f0fa0  FUN_1800f0fa0
// size=596 thunk=false
// signature: undefined FUN_1800f0fa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f0fa0(char *param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 ***pppuVar6;
  char *pcVar7;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined *local_a8;
  undefined1 local_98 [32];
  undefined4 local_78;
  undefined8 **local_70 [2];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_48;
  
  if (param_3 != (char *)0x0) {
    local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
    local_138 = 0;
    local_b0 = &local_130;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_118 = 0;
    sVar3 = strlen(param_3);
    FUN_18001d080(&local_130,param_3,sVar3);
    FUN_1800228e0(local_98,&local_130);
    local_a8 = &DAT_1803e8500;
    iVar2 = _Mtx_lock(&DAT_1803e8500);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e854c == 0x7fffffff) {
      DAT_1803e854c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    DAT_180409bb8 = 1;
    DAT_180409bc2 = 1;
    DAT_180409ba8 = 0;
    DAT_180409bbc = local_78;
    pppuVar6 = local_70;
    if (0xf < local_58) {
      pppuVar6 = (undefined8 ***)local_70[0];
    }
    FUN_180212700(&DAT_1803ebb50,pppuVar6,local_60);
    pcVar7 = "?";
    if (param_1 != (char *)0x0) {
      pcVar7 = param_1;
    }
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    sVar3 = strlen(pcVar7);
    FUN_18001d080(&local_d0,pcVar7,sVar3);
    puVar4 = (undefined8 *)FUN_18021aef0(&local_d0,&DAT_18034f6d4,1);
    local_110 = *puVar4;
    uStack_108 = puVar4[1];
    local_100 = puVar4[2];
    uStack_f8 = puVar4[3];
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    puVar4[2] = 0;
    local_138 = 1;
    pcVar7 = "?";
    if (param_2 != (char *)0x0) {
      pcVar7 = param_2;
    }
    sVar3 = strlen(pcVar7);
    puVar5 = (undefined4 *)FUN_18021aef0(&local_110,pcVar7,sVar3);
    local_f0 = *puVar5;
    uStack_ec = puVar5[1];
    uStack_e8 = puVar5[2];
    uStack_e4 = puVar5[3];
    local_e0 = *(undefined8 *)(puVar5 + 4);
    uStack_d8 = *(undefined8 *)(puVar5 + 6);
    *(undefined1 *)puVar5 = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    local_138 = 3;
    FUN_18020e8a0(&DAT_1803e9e80,&local_f0);
    local_138 = 1;
    FUN_18020e450(&local_f0);
    local_138 = 0;
    FUN_18020e450(&local_110);
    FUN_18020e450(&local_d0);
    _Mtx_unlock(&DAT_1803e8500);
    FUN_18020e450(local_70);
    FUN_18020e450(local_98);
  }
  return;
}


