// 0x180201e70  FUN_180201e70
// size=460 thunk=false
// signature: undefined FUN_180201e70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180201e70(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8 [4];
  undefined8 local_298;
  undefined1 local_290 [592];
  char local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_308;
  local_2e0 = 0;
  local_2e8 = local_2b8;
  FUN_18020e540(local_2b8);
  local_298 = 0xffffffffffffffff;
  iVar5 = FUN_1800672c0(local_2b8,param_3,&local_298,local_290);
  local_3c = 0;
  if (iVar5 == 0) {
    local_40 = '\x01';
  }
  else {
    local_40 = '\0';
    if (iVar5 != 0x12) {
      local_3c = iVar5;
    }
  }
  local_3f = local_2e8._1_2_;
  local_3d = local_2e8._3_1_;
  if (local_40 != '\0') {
    puVar6 = (undefined8 *)FUN_1802d8350(0x58);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = vftable_std_std_filesystem_U_Dir_enum_impl____Ref_count_obj2;
    local_2e8 = puVar6;
    FUN_1800675c0(puVar6 + 2,local_2b8);
    local_2e0 = 1;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c8 = *param_1;
    *param_1 = puVar6 + 2;
    plVar3 = (longlong *)param_1[1];
    param_1[1] = puVar6;
    plStack_2c0 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
    local_2e0 = 0;
  }
  iVar5 = local_3c;
  FUN_1802d7900(local_298);
  local_2e8 = local_2b8;
  FUN_18021e290(local_2b8);
  return iVar5;
}


