// 0x18006ed50  FUN_18006ed50
// size=684 thunk=false
// signature: undefined FUN_18006ed50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006ed50(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  void *_Memory;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_88;
  char local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_18;
  
  puVar5 = auStack_d8;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  puVar6 = auStack_d8;
  if (DAT_1803feff0 != '\0') {
    DAT_1803feff0 = '\0';
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_18001d080(&local_b8,"net.SendToServer()",0x12);
    FUN_180214300(&DAT_1803eb820,&local_b8);
    FUN_18020e450(&local_b8);
    local_88 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0xf;
    local_80 = 0;
    local_60 = 0;
    local_5c = 0xffffffff;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    if (DAT_1803fa608 != (undefined4 *)0x0) {
      local_88 = *DAT_1803fa608;
    }
    local_84 = '\x01';
    puVar4 = &DAT_1803edd10;
    if (0xf < DAT_1803edd28) {
      puVar4 = DAT_1803edd10;
    }
    FUN_180212700(&local_80,puVar4,DAT_1803edd20);
    FUN_180219bd0(&local_50,DAT_1803eb820,DAT_1803eb828 - DAT_1803eb820 >> 5);
    local_60 = 0;
    local_5c = 0xffffffff;
    if (DAT_18042586d != '\0') {
      cVar1 = DAT_1803e95f1;
      if (local_84 != '\0') {
        cVar1 = DAT_1803e95f0;
      }
      if (cVar1 != '\0') {
        local_98 = &DAT_1803e9600;
        iVar3 = _Mtx_lock(&DAT_1803e9600);
        if (iVar3 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = extraout_XMM0_Da;
        if (DAT_1803e964c == 0x7fffffff) {
          DAT_1803e964c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
          uVar7 = extraout_XMM0_Da_00;
        }
        DAT_180425860 = DAT_180425860 + 1;
        local_58 = DAT_180425860;
        FUN_18020c4b0(uVar7,&local_88);
        while (500 < DAT_1805c7ac8) {
          FUN_18006b910(*(undefined8 *)(DAT_1805c7ab0 + (DAT_1805c7ab8 - 1U & DAT_1805c7ac0) * 8));
          DAT_1805c7ac8 = DAT_1805c7ac8 - 1;
          if (DAT_1805c7ac8 == 0) {
            DAT_1805c7ac0 = 0;
            break;
          }
          DAT_1805c7ac0 = DAT_1805c7ac0 + 1;
        }
        _Mtx_unlock(&DAT_1803e9600);
      }
    }
    if (local_38 != (void *)0x0) {
      _Memory = local_38;
      puVar5 = auStack_d8;
      if ((0xfff < (ulonglong)(local_28 - (longlong)local_38)) &&
         (_Memory = *(void **)((longlong)local_38 + -8), puVar5 = auStack_d8,
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
        pcVar2 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar2)(5);
        puVar5 = auStack_d0;
      }
      *(undefined8 *)(puVar5 + -8) = 0x18006efbc;
      free(_Memory);
      local_38 = (void *)0x0;
      uStack_30 = 0;
      local_28 = 0;
    }
    *(undefined8 *)(puVar5 + -8) = 0x18006efd1;
    FUN_18020d5c0(&local_50);
    *(undefined8 *)(puVar5 + -8) = 0x18006efdb;
    FUN_18020e450(&local_80);
    puVar6 = puVar5;
  }
  *(undefined8 *)(puVar6 + -8) = 0x18006efe7;
  return;
}


