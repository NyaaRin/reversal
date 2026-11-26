// 0x18001de40  FUN_18001de40
// size=360 thunk=false
// signature: undefined FUN_18001de40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18001de40(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (param_1 != 0) {
    plVar3 = (longlong *)FUN_18001dd10();
    if ((plVar3 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar3 + 0x420))(plVar3), cVar1 != '\0')) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_18001d080(&local_d8,"DT_GMOD_Player",0xe);
      local_98 = &local_d8;
      local_90 = local_70;
      uVar4 = FUN_18016d4c0(local_70,&local_d8);
      uVar4 = FUN_180018ef0(&DAT_1803fac80,uVar4);
      FUN_18020e450(&local_d8);
      local_88 = &local_b8;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_18001d080(&local_b8,"m_Hands",7);
      local_80 = &local_b8;
      local_78 = local_50;
      uVar5 = FUN_18016d4c0(local_50,&local_b8);
      iVar2 = FUN_180018c10(uVar4,uVar5);
      FUN_18020e450(&local_b8);
      if (*(longlong *)((longlong)iVar2 + (longlong)plVar3) != 0) {
        local_30[0] = (undefined4)*(longlong *)((longlong)iVar2 + (longlong)plVar3);
        lVar6 = (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_30);
        if (lVar6 == param_1) {
          return 1;
        }
      }
    }
  }
  return 0;
}


