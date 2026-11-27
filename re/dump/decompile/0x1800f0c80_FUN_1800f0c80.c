// 0x1800f0c80  FUN_1800f0c80
// size=796 thunk=false
// signature: undefined FUN_1800f0c80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f0c80(void)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  void *_Memory;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  uint local_118;
  undefined4 *local_110;
  undefined4 *puStack_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined4 local_88;
  undefined1 local_80 [32];
  char local_60;
  ulonglong local_58;
  
  puVar7 = auStack_138;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  uVar6 = 0;
  local_118 = 0;
  FUN_1800f0ab0();
  local_110 = (undefined4 *)0x0;
  puStack_108 = (undefined4 *)0x0;
  local_100 = 0;
  local_f8 = &DAT_1803e84a0;
  iVar4 = _Mtx_lock(&DAT_1803e84a0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e84ec == 0x7fffffff) {
    DAT_1803e84ec = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  puVar3 = DAT_1803eb430;
  puVar8 = DAT_1803eb428;
  if (DAT_1803eb428 == DAT_1803eb430) {
    _Mtx_unlock(&DAT_1803e84a0);
  }
  else {
    local_110 = DAT_1803eb428;
    DAT_1803eb428 = (undefined4 *)0x0;
    puStack_108 = DAT_1803eb430;
    DAT_1803eb430 = (undefined4 *)0x0;
    local_100 = DAT_1803eb438;
    DAT_1803eb438 = 0;
    _Mtx_unlock(&DAT_1803e84a0);
    for (; puVar8 != puVar3; puVar8 = puVar8 + 0xc) {
      FUN_1800efd50(local_a8,*puVar8,puVar8 + 2,puVar8[10]);
      local_d0 = &DAT_1803e8500;
      iVar4 = _Mtx_lock(&DAT_1803e8500);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e854c == 0x7fffffff) goto LAB_1800f0f7a;
      DAT_180409bb8 = 1;
      DAT_180409bc2 = local_60;
      DAT_180409ba8 = *puVar8;
      if (local_60 == '\0') {
        DAT_180409bbc = 0;
        uStack_e8 = 0;
        local_e0 = 0;
        local_d8 = 0xf;
        local_f0 = 0;
        puVar5 = &local_f0;
        local_118 = uVar6 | 2;
LAB_1800f0e6e:
        uVar6 = local_118;
        if (0xf < DAT_1803ebb68) {
          pvVar2 = (void *)CONCAT44(DAT_1803ebb50._4_4_,(undefined4)DAT_1803ebb50);
          _Memory = pvVar2;
          if ((0xfff < DAT_1803ebb68 + 1) &&
             (_Memory = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar7 = auStack_130;
LAB_1800f0f7a:
            DAT_1803e854c = 0x7ffffffe;
            *(undefined8 *)(puVar7 + -8) = 0x1800f0f8f;
            std::_Throw_Cpp_error(6);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          free(_Memory);
        }
        DAT_1803ebb50._0_4_ = *(undefined4 *)puVar5;
        DAT_1803ebb50._4_4_ = *(undefined4 *)((longlong)puVar5 + 4);
        uRam00000001803ebb58 = *(undefined4 *)(puVar5 + 1);
        uRam00000001803ebb5c = *(undefined4 *)((longlong)puVar5 + 0xc);
        _DAT_1803ebb60 = puVar5[2];
        DAT_1803ebb68 = puVar5[3];
        puVar5[2] = 0;
        puVar5[3] = 0xf;
        *(undefined1 *)puVar5 = 0;
      }
      else {
        DAT_180409bbc = local_88;
        puVar5 = (undefined8 *)FUN_18016d4c0(local_c8,local_80);
        local_118 = uVar6 | 1;
        uVar6 = local_118;
        if (puVar5 != &DAT_1803ebb50) goto LAB_1800f0e6e;
      }
      if ((uVar6 & 2) != 0) {
        uVar6 = uVar6 & 0xfffffffd;
        local_118 = uVar6;
        FUN_18020e450(&local_f0);
      }
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 & 0xfffffffe;
        local_118 = uVar6;
        FUN_18020e450(local_c8);
      }
      DAT_1803e9e90 = 0;
      puVar5 = &DAT_1803e9e80;
      if (0xf < DAT_1803e9e98) {
        puVar5 = DAT_1803e9e80;
      }
      *(undefined1 *)puVar5 = 0;
      _Mtx_unlock(&DAT_1803e8500);
      if (local_60 != '\0') {
        local_f8 = local_a8;
        FUN_18020e450(local_80);
        FUN_18020e450(local_a8);
      }
    }
  }
  FUN_18020baa0(&local_110);
  return;
}


