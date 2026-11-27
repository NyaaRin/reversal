// 0x180121b30  FUN_180121b30
// size=851 thunk=false
// signature: undefined FUN_180121b30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180121b30(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *_Memory;
  undefined4 uVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  longlong lStack_60;
  longlong local_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined *local_38;
  longlong local_30;
  ulonglong local_28;
  
  if ((param_1 != 0) && (local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88, DAT_1803e89e0 != '\0')) {
    local_38 = &DAT_1803e8990;
    iVar6 = _Mtx_lock(&DAT_1803e8990);
    if (iVar6 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (DAT_1803e89dc == 0x7fffffff) {
      DAT_1803e89dc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    uVar8 = ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                  0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff)
                * 0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff)
              * 0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
            0x100000001b3 & DAT_1805c7b80;
    _Memory = *(longlong **)(DAT_1805c7b68 + 8 + uVar8 * 0x10);
    if (_Memory == DAT_1805c7b58) {
LAB_180121c82:
      _Memory = (longlong *)0x0;
    }
    else {
      uVar2 = _Memory[2];
      while (param_1 != uVar2) {
        if (_Memory == *(longlong **)(DAT_1805c7b68 + uVar8 * 0x10)) goto LAB_180121c82;
        _Memory = (longlong *)_Memory[1];
        uVar2 = _Memory[2];
      }
    }
    if ((_Memory != (longlong *)0x0) && (_Memory != DAT_1805c7b58)) {
      local_68 = (undefined4)_Memory[3];
      uStack_64 = *(undefined4 *)((longlong)_Memory + 0x1c);
      lStack_60 = _Memory[4];
      local_58 = _Memory[5];
      uStack_50 = (undefined1)_Memory[7];
      uStack_4f = *(undefined1 *)((longlong)_Memory + 0x39);
      uStack_4e = *(undefined1 *)((longlong)_Memory + 0x3a);
      uStack_4d = *(undefined1 *)((longlong)_Memory + 0x3b);
      uStack_4c = CONCAT31(uStack_4c._1_3_,*(undefined1 *)((longlong)_Memory + 0x3c));
      local_48 = _Memory[8];
      plVar7 = (longlong *)FUN_180014300(&local_30);
      uStack_40 = *plVar7 / 1000000;
      if (_Memory[6] != 0) {
        local_30 = 0;
        uVar9 = FUN_18020b0b0(*plVar7,&local_30);
        if ((local_30 != DAT_180458258) && (*(ulonglong *)(local_30 + 0x18) == param_1)) {
          FUN_180204d00(uVar9,&local_30);
        }
      }
      plVar5 = DAT_1805c7b58;
      uVar8 = (((((((((ulonglong)*(byte *)(_Memory + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)_Memory + 0x11)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Memory + 0x12)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)_Memory + 0x13)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)_Memory + 0x14)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)_Memory + 0x15)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)_Memory + 0x16)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)_Memory + 0x17)) * 0x100000001b3 & DAT_1805c7b80;
      plVar7 = (longlong *)(DAT_1805c7b68 + uVar8 * 0x10);
      lVar1 = DAT_1805c7b68 + uVar8 * 0x10;
      if (*(longlong **)(lVar1 + 8) == _Memory) {
        if ((longlong *)*plVar7 == _Memory) {
          *plVar7 = (longlong)DAT_1805c7b58;
          *(longlong **)(lVar1 + 8) = plVar5;
        }
        else {
          *(longlong *)(lVar1 + 8) = _Memory[1];
        }
      }
      else if ((longlong *)*plVar7 == _Memory) {
        *plVar7 = *_Memory;
      }
      lVar1 = *_Memory;
      DAT_1805c7b60 = DAT_1805c7b60 + -1;
      *(longlong *)_Memory[1] = lVar1;
      *(longlong *)(lVar1 + 8) = _Memory[1];
      free(_Memory);
      puVar4 = DAT_1803e9bf8;
      if (DAT_1803e9bf8 == DAT_1803e9c00) {
        FUN_180225740();
      }
      else {
        *DAT_1803e9bf8 = CONCAT44(uStack_64,local_68);
        puVar4[1] = lStack_60;
        puVar4[2] = local_58;
        puVar4[3] = CONCAT44(uStack_4c,
                             CONCAT13(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,uStack_50))));
        *(undefined4 *)(puVar4 + 4) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar4 + 0x24) = local_48._4_4_;
        *(undefined4 *)(puVar4 + 5) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_40._4_4_;
        DAT_1803e9bf8 = DAT_1803e9bf8 + 6;
      }
    }
    _Mtx_unlock(&DAT_1803e8990);
  }
  return;
}


