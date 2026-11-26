// 0x18020df40  FUN_18020df40
// size=389 thunk=false
// signature: undefined FUN_18020df40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18020df40(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  _Locimp *p_Var2;
  longlong lVar3;
  size_t sVar4;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  char *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint5 local_58;
  undefined3 uStack_53;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  *param_1 = 0;
  plVar1 = param_1 + 1;
  local_e0 = param_1;
  local_d8 = plVar1;
  p_Var2 = std::locale::_Init(true);
  param_1[4] = (longlong)p_Var2;
  lVar3 = FUN_180233fb0(param_1 + 3);
  *plVar1 = lVar3;
  lVar3 = FUN_1801fbf10(param_1 + 3);
  param_1[2] = lVar3;
  pcStack_c0 = (char *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  puStack_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  _local_58 = 0;
  local_c8 = param_2;
  sVar4 = strlen(param_2);
  pcStack_c0 = param_2 + sVar4;
  local_b8 = 0;
  local_d0 = &uStack_b0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_e8 = (undefined8 *)FUN_1802d8350(0x30);
  *local_e8 = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  *local_e8 = vftable_std__Node_base;
  local_e8[1] = 0x14;
  local_e8[2] = 0;
  local_e8[3] = 0;
  *local_e8 = vftable_std__Root_node;
  local_e8[4] = 0;
  local_e8[5] = 0;
  uStack_80 = CONCAT44(uStack_80._4_4_,1);
  uStack_60 = CONCAT44(uStack_60._4_4_,1);
  local_58 = (uint5)(uint)local_58;
  local_68 = 0x43baefb;
  puStack_90 = local_e8;
  local_88 = local_e8;
  local_78 = plVar1;
  plStack_70 = plVar1;
  FUN_180234da0(&local_c8);
  lVar3 = FUN_18022ac70(&local_c8);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
    UNLOCK();
  }
  FUN_18021e0d0(param_1);
  *param_1 = lVar3;
  local_e8 = &uStack_b0;
  FUN_18021e060(&uStack_b0);
  return param_1;
}


