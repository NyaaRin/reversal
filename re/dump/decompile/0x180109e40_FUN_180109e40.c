// 0x180109e40  FUN_180109e40
// size=655 thunk=false
// signature: undefined FUN_180109e40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180109e40(longlong *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_80 = 0xf4da6ac1d14e886e;
  local_88 = 0x93fd561a96ab0c67;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,&local_88);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_98,&local_80);
  puVar2 = (undefined4 *)FUN_1802029c0(*plVar1 + 0x28);
  local_b8[0] = FUN_1801070a0(*puVar2);
  if (local_b8[0] != 0) {
    local_80 = 0x93fd561a96ab0c67;
    plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_98,&local_80);
    lVar3 = *plVar1 + 0x28;
    local_88 = 0xb3fae27070269fb2;
    plVar1 = (longlong *)FUN_180241a30(lVar3,local_a8,&local_88);
    puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
    local_78 = *puVar2;
    local_88 = 0xb3faef707026b5c9;
    plVar1 = (longlong *)FUN_180241a30(lVar3,local_a8,&local_88);
    puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
    local_74 = *puVar2;
    local_88 = 0xb3faf2707026bae2;
    plVar1 = (longlong *)FUN_180241a30(lVar3,local_a8,&local_88);
    puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
    local_70 = *puVar2;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    (**(code **)(*DAT_1803fa598 + 0xb8))(DAT_1803fa598,1);
    (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,local_b8[0],0);
    (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_78);
    (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
    if (param_1 == (longlong *)0x0) {
      (*param_2)(param_3,param_4,param_5,param_6);
    }
    else {
      (**(code **)(*param_1 + 0x48))(param_1,0,DAT_180380980);
      (**(code **)(*param_1 + 0x240))(param_1,1,0);
      (*param_2)(param_3,param_4,param_5,param_6);
      (**(code **)(*param_1 + 0x240))(param_1,0,1);
      (**(code **)(*param_1 + 0x48))(param_1,0,DAT_180380bb0);
    }
    (**(code **)(*DAT_1803fa598 + 8))(DAT_1803fa598,0,0);
    (**(code **)(*DAT_1803fa598 + 0xb8))(DAT_1803fa598,0);
    (**(code **)(*DAT_1803f9280 + 0x30))(DAT_1803f9280,&local_68);
    (**(code **)(*DAT_1803f9280 + 0x20))(DAT_1803f9280,DAT_180380bb0);
  }
  return;
}


