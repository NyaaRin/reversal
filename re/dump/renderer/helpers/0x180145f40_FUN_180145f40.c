// 180145f40  FUN_180145f40
// signature: undefined FUN_180145f40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180145f40(undefined4 param_1,undefined8 param_2,char *param_3)

{
  code *pcVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  undefined4 *puVar6;
  void *_Memory;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  ulonglong uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  puVar8 = auStack_158;
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_138 = 0;
  FUN_180145ab0(&local_40);
  if (local_30 == 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    sVar5 = strlen(param_3);
    FUN_18001d080(&local_c8,param_3,sVar5);
    puVar6 = (undefined4 *)FUN_18021aef0(&local_c8,": nothing to send",0x11);
    local_130 = *puVar6;
    uStack_12c = puVar6[1];
    uStack_128 = puVar6[2];
    uStack_124 = puVar6[3];
    local_120 = *(undefined8 *)(puVar6 + 4);
    uStack_118 = *(ulonglong *)(puVar6 + 6);
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    local_138 = 1;
    local_f0 = &DAT_1803e8400;
    iVar4 = _Mtx_lock(&DAT_1803e8400);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e844c == 0x7fffffff) {
      DAT_1803e844c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar6 = &local_130;
    if (0xf < uStack_118) {
      puVar6 = (undefined4 *)CONCAT44(uStack_12c,local_130);
    }
    FUN_180212700(s_Ready_1803e9eb8,puVar6,local_120);
    _Mtx_unlock(&DAT_1803e8400);
    local_138 = 0;
    FUN_18020e450(&local_130);
    puVar7 = &local_c8;
  }
  else {
    if ((DAT_1803fa668 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 != '\0')) {
      local_48 = &DAT_1803e8400;
      iVar4 = _Mtx_lock(&DAT_1803e8400);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e844c == 0x7fffffff) {
        DAT_1803e844c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      if (0xf < CONCAT44(DAT_1803e9f20._4_4_,(undefined4)DAT_1803e9f20)) {
        pvVar2 = (void *)CONCAT44(DAT_1803e9f08._4_4_,(uint)DAT_1803e9f08);
        _Memory = pvVar2;
        puVar8 = auStack_158;
        if ((0xfff < CONCAT44(DAT_1803e9f20._4_4_,(undefined4)DAT_1803e9f20) + 1) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8), puVar8 = auStack_158,
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          pcVar1 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar1)(5);
          puVar8 = auStack_150;
        }
        *(undefined8 *)(puVar8 + -8) = 0x180146132;
        free(_Memory);
      }
      DAT_1803e9f08._0_4_ = local_40;
      DAT_1803e9f08._4_4_ = uStack_3c;
      _DAT_1803e9f10 = uStack_38;
      uRam00000001803e9f14 = uStack_34;
      _DAT_1803e9f18 = (undefined4)local_30;
      uRam00000001803e9f1c = local_30._4_4_;
      DAT_1803e9f20._0_4_ = (undefined4)uStack_28;
      DAT_1803e9f20._4_4_ = uStack_28._4_4_;
      local_30 = 0;
      uStack_28 = 0xf;
      local_40 = local_40 & 0xffffff00;
      *(undefined8 *)(puVar8 + -8) = 0x180146164;
      DAT_180409a70 = param_1;
      _DAT_180409af0 = GetTickCount64();
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      *(undefined8 *)(puVar8 + -8) = 0x180146182;
      sVar5 = strlen(param_3);
      *(undefined8 *)(puVar8 + -8) = 0x180146191;
      FUN_18001d080(&local_88,param_3,sVar5);
      *(undefined8 *)(puVar8 + -8) = 0x1801461a8;
      puVar6 = (undefined4 *)FUN_18021aef0(&local_88," queued",7);
      local_a8 = *puVar6;
      uStack_a4 = puVar6[1];
      uStack_a0 = puVar6[2];
      uStack_9c = puVar6[3];
      local_98 = *(undefined8 *)(puVar6 + 4);
      uStack_90 = *(undefined8 *)(puVar6 + 6);
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0xf;
      *(undefined1 *)puVar6 = 0;
      *(undefined4 *)(puVar8 + 0x20) = 8;
      *(undefined8 *)(puVar8 + -8) = 0x1801461e7;
      FUN_18020e8a0(s_Ready_1803e9eb8,&local_a8);
      *(undefined4 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x1801461f7;
      FUN_18020e450(&local_a8);
      *(undefined8 *)(puVar8 + -8) = 0x180146201;
      FUN_18020e450(&local_88);
      *(undefined8 *)(puVar8 + -8) = 0x18014620b;
      _Mtx_unlock(&DAT_1803e8400);
      goto LAB_18014636a;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"Not in a server - ",0x12);
    sVar5 = strlen(param_3);
    puVar7 = (undefined8 *)FUN_18021aef0(&local_68,param_3,sVar5);
    local_e8 = *puVar7;
    uStack_e0 = puVar7[1];
    local_d8 = puVar7[2];
    uStack_d0 = puVar7[3];
    puVar7[2] = 0;
    puVar7[3] = 0xf;
    *(undefined1 *)puVar7 = 0;
    local_138 = 2;
    puVar6 = (undefined4 *)FUN_18021aef0(&local_e8," refused",8);
    local_110 = *puVar6;
    uStack_10c = puVar6[1];
    uStack_108 = puVar6[2];
    uStack_104 = puVar6[3];
    local_100 = *(undefined8 *)(puVar6 + 4);
    uStack_f8 = *(ulonglong *)(puVar6 + 6);
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    local_138 = 6;
    local_f0 = &DAT_1803e8400;
    iVar4 = _Mtx_lock(&DAT_1803e8400);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e844c == 0x7fffffff) {
      DAT_1803e844c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar6 = &local_110;
    if (0xf < uStack_f8) {
      puVar6 = (undefined4 *)CONCAT44(uStack_10c,local_110);
    }
    FUN_180212700(s_Ready_1803e9eb8,puVar6,local_100);
    _Mtx_unlock(&DAT_1803e8400);
    local_138 = 2;
    FUN_18020e450(&local_110);
    local_138 = 0;
    FUN_18020e450(&local_e8);
    puVar7 = &local_68;
  }
  FUN_18020e450(puVar7);
  puVar8 = auStack_158;
LAB_18014636a:
  *(undefined8 *)(puVar8 + -8) = 0x180146373;
  FUN_18020e450(&local_40);
  *(undefined8 *)(puVar8 + -8) = 0x18014637f;
  return;
}


