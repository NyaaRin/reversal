// 0x1801585e0  FUN_1801585e0
// size=474 thunk=false
// signature: undefined FUN_1801585e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801585e0(undefined8 param_1,undefined4 param_2)

{
  size_t _Size;
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *_Buf1;
  undefined1 *_Buf2;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 *local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  size_t local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  FUN_180157fb0(&local_58,param_1,param_2);
  if (local_48 == 0) {
    uVar7 = 0;
  }
  else {
    local_68 = &DAT_1803e8780;
    iVar6 = _Mtx_lock(&DAT_1803e8780);
    if (iVar6 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    if (DAT_1803e87cc == 0x7fffffff) {
      DAT_1803e87cc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    uVar5 = local_40;
    sVar4 = local_48;
    puVar3 = DAT_1803e9df8;
    DAT_180409d40 = 1;
    if ((ulonglong)(((longlong)DAT_1803e9df8 - (longlong)DAT_1803e9df0 >> 3) * -0x3333333333333333)
        < 0x40) {
      if (DAT_1803e9df0 != DAT_1803e9df8) {
        puVar2 = (undefined1 *)CONCAT71(uStack_57,local_58);
        puVar8 = DAT_1803e9df0;
        do {
          _Buf2 = &local_58;
          if (0xf < uVar5) {
            _Buf2 = puVar2;
          }
          _Size = puVar8[2];
          _Buf1 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((_Size == sVar4) && ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0))))
          {
            *(undefined4 *)(puVar8 + 4) = param_2;
            goto LAB_18015877b;
          }
          puVar8 = puVar8 + 5;
        } while (puVar8 != puVar3);
      }
      if (puVar3 == DAT_1803e9e00) {
        FUN_180223cb0();
      }
      else {
        local_60 = puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = CONCAT71(uStack_57,local_58);
        puVar3[1] = local_50;
        puVar3[2] = local_48;
        puVar3[3] = local_40;
        local_48 = 0;
        local_40 = 0xf;
        local_58 = 0;
        *(undefined4 *)(puVar3 + 4) = local_38;
        *(undefined1 *)((longlong)puVar3 + 0x24) = local_34;
        DAT_1803e9df8 = DAT_1803e9df8 + 5;
      }
LAB_18015877b:
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    _Mtx_unlock(&DAT_1803e8780);
  }
  FUN_18020e450(&local_58);
  return uVar7;
}


