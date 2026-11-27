// 0x18010cfb0  FUN_18010cfb0
// size=874 thunk=false
// signature: undefined FUN_18010cfb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18010cfb0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [6];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  DAT_18040a3c0 = 0;
  local_48 = 0x63c2f5206022a3b5;
  local_50 = 0x93fd561a96ab0c67;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_68,&local_48);
  pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
  if (*pcVar6 == '\0') {
    return;
  }
  local_48 = 0x93fd561a96ab0c67;
  local_50 = 0x9753ed81b6269b2f;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,&local_48);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_78,&local_50);
  pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
  pcVar1 = DAT_1803fa4f8;
  plVar5 = DAT_1803fa4e8;
  if (*pcVar6 == '\0') {
    return;
  }
  if (DAT_1803fa4e8 == (longlong *)0x0) {
    return;
  }
  if (DAT_1803fa4f8 == (code *)0x0) {
    return;
  }
  local_58 = (longlong *)0x0;
  iVar2 = (**(code **)(*DAT_1803fa4e8 + 0x130))(DAT_1803fa4e8,0,&local_58);
  if (iVar2 < 0) {
    return;
  }
  if (local_58 == (longlong *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*local_58 + 0x60))(local_58,local_40);
  if (((iVar2 < 0) || (local_28 < 0x40)) || (local_24 < 0x40)) {
    (**(code **)(*local_58 + 0x10))();
    return;
  }
  iVar2 = ((int)local_28 >> 0x1f & 3U) + local_28;
  iVar8 = iVar2 >> 2;
  iVar7 = (int)(((int)local_24 >> 0x1f & 3U) + local_24) >> 2;
  if ((iVar8 != DAT_18040a3ac) || (iVar7 != DAT_18040a3b0)) {
    FUN_18010cf20();
  }
  iVar3 = DAT_18040a3ac;
  iVar4 = DAT_18040a3b0;
  if (DAT_18040a3b8 == (longlong *)0x0) {
    local_88 = 0;
    local_90 = &DAT_18040a3b8;
    local_98 = 0;
    local_a0 = local_40[0];
    local_a8._0_4_ = 1;
    iVar3 = (**(code **)(*plVar5 + 0xb8))(plVar5,iVar8,iVar7,1);
    if (-1 < iVar3) {
      local_88 = 0;
      iVar3 = 1;
      if (0 < iVar7 / 2) {
        iVar3 = iVar7 / 2;
      }
      iVar4 = iVar8 - (iVar2 >> 0x1f) >> 1;
      iVar2 = 1;
      if (0 < iVar4) {
        iVar2 = iVar4;
      }
      local_90 = &DAT_18040a390;
      local_98 = 0;
      local_a0 = local_40[0];
      local_a8._0_4_ = 1;
      iVar2 = (**(code **)(*plVar5 + 0xb8))(plVar5,iVar2,iVar3,1);
      if (((-1 < iVar2) &&
          (iVar2 = (**(code **)(*DAT_18040a3b8 + 0x90))(DAT_18040a3b8,0,&DAT_18040a3c8), -1 < iVar2)
          ) && (iVar2 = (**(code **)(*DAT_18040a390 + 0x90))(DAT_18040a390,0,&DAT_18040a398),
               iVar3 = iVar8, iVar4 = iVar7, -1 < iVar2)) goto LAB_18010d24c;
    }
    FUN_18010cf20();
  }
  else {
LAB_18010d24c:
    DAT_18040a3b0 = iVar4;
    DAT_18040a3ac = iVar3;
    local_a0 = 2;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    iVar2 = (*pcVar1)(plVar5,local_58,0,DAT_18040a3c8);
    if (-1 < iVar2) {
      iVar2 = 2;
      do {
        local_a0 = 2;
        local_a8 = 0;
        (*pcVar1)(plVar5,DAT_18040a3c8,0,DAT_18040a398);
        local_a0 = 2;
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 0;
        (*pcVar1)(plVar5,DAT_18040a398,0,DAT_18040a3c8);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_18040a3c0 = 1;
    }
  }
  (**(code **)(*local_58 + 0x10))();
  return;
}


