// 0x1801457e0  FUN_1801457e0
// size=568 thunk=false
// signature: undefined FUN_1801457e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801457e0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  size_t sVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  char local_e8 [176];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  plVar9 = (longlong *)(param_1 + 2);
  plVar8 = plVar9;
  if (0xf < *(ulonglong *)(param_1 + 8)) {
    plVar8 = (longlong *)*plVar9;
  }
  lVar5 = FUN_180016fb0(plVar8);
  if (lVar5 == 0) {
    local_118 = &local_110;
    uVar6 = FUN_18002cfb0(&local_110,plVar9," : not found");
    FUN_180144c60(uVar6);
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      cVar2 = FUN_1800170f0(lVar5);
      if (cVar2 == '\0') {
        FUN_1801452b0(lVar5,plVar9,param_1 + 10);
      }
      else {
        FUN_180145600(lVar5,plVar9,param_1 + 10,&DAT_18035d7e8);
      }
    }
    else if (iVar1 == 1) {
      FUN_180145600(lVar5,plVar9,param_1 + 10,&DAT_18033e5ea);
    }
    else if (iVar1 == 2) {
      cVar2 = FUN_1800170f0(lVar5);
      if (cVar2 == '\0') {
        uVar3 = FUN_1800170a0(lVar5);
        cVar2 = FUN_1800170f0(lVar5);
        if (cVar2 == '\0') {
          uVar4 = FUN_1800170a0(lVar5);
          uVar10 = uVar4 & 0x406012;
          if (uVar10 != 0) {
            FUN_1800170c0(lVar5,~uVar10 & uVar4);
          }
        }
        else {
          uVar10 = 0;
        }
        local_128 = FUN_1800170a0(lVar5);
        if (0xf < *(ulonglong *)(param_1 + 8)) {
          plVar9 = (longlong *)*plVar9;
        }
        local_138 = uVar10;
        local_130 = uVar3;
        FUN_180012ac0(local_e8,0xb0,"%s : cleared 0x%X, flags 0x%X -> 0x%X",plVar9);
        local_118 = &local_110;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        sVar7 = strlen(local_e8);
        FUN_18001d080(&local_110,local_e8,sVar7);
        FUN_180144c60(&local_110);
        FUN_180014410("[CVAR] %s\n",local_e8);
      }
      else {
        local_118 = &local_110;
        uVar6 = FUN_18002cfb0(&local_110,plVar9,&DAT_18035d6f0);
        FUN_180144c60(uVar6);
        if (0xf < *(ulonglong *)(param_1 + 8)) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_180014410("[CVAR] refused flag unlock on guarded cvar \'%s\'\n",plVar9);
      }
    }
    else if (iVar1 == 3) {
      local_118 = &local_110;
      if (0xf < *(ulonglong *)(param_1 + 8)) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar6 = FUN_180144f60(&local_110,plVar9);
      FUN_180144c60(uVar6);
    }
  }
  return;
}


