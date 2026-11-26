// 0x180121960  FUN_180121960
// size=457 thunk=false
// signature: undefined FUN_180121960()
// status: ok


void FUN_180121960(ulonglong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong local_res8;
  undefined *puVar8;
  
  if ((param_1 != 0) && (DAT_1803e89e0 != '\0')) {
    puVar8 = &DAT_1803e8990;
    local_res8 = param_1;
    iVar3 = _Mtx_lock(&DAT_1803e8990);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e89dc == 0x7fffffff) {
      DAT_1803e89dc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    plVar5 = (longlong *)
             ((((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_res8 >> 8 & 0xff
                     ) * 0x100000001b3 ^ local_res8 >> 0x10 & 0xff) * 0x100000001b3 ^
                   local_res8 >> 0x18 & 0xff) * 0x100000001b3 ^ local_res8 >> 0x20 & 0xff) *
                  0x100000001b3 ^ local_res8 >> 0x28 & 0xff) * 0x100000001b3 ^
                local_res8 >> 0x30 & 0xff) * 0x100000001b3 ^ local_res8 >> 0x38) * 0x100000001b3 &
              DAT_180458280) * 0x10 + DAT_180458268);
    lVar4 = plVar5[1];
    uVar7 = 0;
    if (lVar4 == DAT_180458258) {
LAB_180121a91:
      lVar4 = 0;
    }
    else {
      plVar5 = (longlong *)*plVar5;
      uVar1 = *(ulonglong *)(lVar4 + 0x10);
      while (param_1 != uVar1) {
        if ((longlong *)lVar4 == plVar5) goto LAB_180121a91;
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar1 = *(ulonglong *)(lVar4 + 0x10);
      }
    }
    lVar6 = DAT_180458258;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
    if (lVar6 != DAT_180458258) {
      local_res8 = 0;
      FUN_18020b1f0(plVar5,&local_res8,lVar6 + 0x18,param_4,puVar8);
      uVar1 = local_res8;
      if ((local_res8 != DAT_1805c7b58) && (*(longlong *)(local_res8 + 0x28) == DAT_1803e8970)) {
        *(undefined1 *)(local_res8 + 0x3b) = 1;
        *(char *)(local_res8 + 0x3c) = param_2;
        if (param_2 == '\0') {
          plVar5 = (longlong *)FUN_180014300(&local_res8);
          *(longlong *)(uVar1 + 0x40) = *plVar5 / 1000000;
        }
        else {
          *(undefined8 *)(local_res8 + 0x40) = uVar7;
        }
      }
    }
    _Mtx_unlock(&DAT_1803e8990);
  }
  return;
}


