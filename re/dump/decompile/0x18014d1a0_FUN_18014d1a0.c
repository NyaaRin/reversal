// 0x18014d1a0  FUN_18014d1a0
// size=1013 thunk=false
// signature: undefined FUN_18014d1a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18014d1a0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 ****ppppuVar8;
  int iVar9;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 *local_170;
  longlong local_168;
  undefined4 local_158;
  undefined8 ***local_150;
  longlong lStack_148;
  longlong local_140;
  ulonglong uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined8 ***local_70 [3];
  ulonglong local_58;
  undefined8 ***local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  iVar9 = 0;
  local_158 = 0;
  cVar3 = FUN_18014d0e0(param_2);
  if ((cVar3 == '\0') || (iVar4 = FUN_18014cda0(param_1), iVar4 < 1)) {
    iVar9 = 0;
  }
  else {
    local_168 = param_2[2];
    if (0x7fffffffffffffffU - local_168 < 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_170 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      local_170 = (undefined8 *)*param_2;
    }
    local_178 = 0x16;
    FUN_18020e930(local_110);
    local_158 = 1;
    FUN_1801fc680(local_70,local_110,&DAT_18035e784);
    local_158 = 0;
    FUN_18020e450(local_110);
    ppppuVar8 = local_70;
    if (0xf < local_58) {
      ppppuVar8 = (undefined8 ****)local_70[0];
    }
    if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0))
       && ((code *)param_1[1] != (code *)0x0)) {
      local_178 = 0;
      (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);
    }
    if (0x7fffffffffffffff - param_2[2] < 0xe) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_170 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      local_170 = (undefined8 *)*param_2;
    }
    local_178 = 0xe;
    local_168 = param_2[2];
    FUN_18020e930(local_f0);
    local_158 = 4;
    plVar5 = (longlong *)FUN_18021aef0(local_f0,"] ( a TEXT )",0xc);
    local_150 = (undefined8 ***)*plVar5;
    lStack_148 = plVar5[1];
    local_140 = plVar5[2];
    uStack_138 = plVar5[3];
    *(undefined1 *)plVar5 = 0;
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    local_158 = 0xc;
    ppppuVar8 = &local_150;
    if (0xf < uStack_138) {
      ppppuVar8 = (undefined8 ****)local_150;
    }
    if ((((longlong *)*param_1 == (longlong *)0x0) || (lVar1 = *(longlong *)*param_1, lVar1 == 0))
       || ((code *)param_1[1] == (code *)0x0)) {
      iVar4 = -1;
    }
    else {
      local_178 = 0;
      iVar4 = (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);
    }
    local_158 = 4;
    FUN_18020e450(&local_150);
    local_158 = 0;
    FUN_18020e450(local_f0);
    if (iVar4 == 0) {
      uVar6 = FUN_18020ea80(local_90,0x2000,0x30);
      plVar5 = param_2 + 2;
      if (0x7fffffffffffffffU - *plVar5 < 0xd) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      local_178 = 0xd;
      local_170 = param_2;
      local_168 = *plVar5;
      FUN_18020e930(local_b0);
      local_158 = 0x10;
      puVar7 = (undefined4 *)FUN_18021aef0(local_b0,"] VALUES (\'",0xb);
      local_130 = *puVar7;
      uStack_12c = puVar7[1];
      uStack_128 = puVar7[2];
      uStack_124 = puVar7[3];
      uVar2 = puVar7[4];
      local_120 = *(undefined8 *)(puVar7 + 4);
      uStack_118 = *(undefined8 *)(puVar7 + 6);
      *(undefined1 *)puVar7 = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0xf;
      local_158 = 0x30;
      FUN_18021e540(local_d0,uVar2,&local_130,uVar6);
      local_158 = 0x70;
      FUN_1801fc680(local_50,local_d0,&DAT_18035e7c0);
      local_158 = 0x30;
      FUN_18020e450(local_d0);
      local_158 = 0x10;
      FUN_18020e450(&local_130);
      local_158 = 0;
      FUN_18020e450(local_b0);
      FUN_18020e450(local_90);
      while (iVar4 = FUN_18014cda0(param_1), 0 < iVar4) {
        ppppuVar8 = local_50;
        if (0xf < local_38) {
          ppppuVar8 = (undefined8 ****)local_50[0];
        }
        if ((((longlong *)*param_1 == (longlong *)0x0) ||
            (lVar1 = *(longlong *)*param_1, lVar1 == 0)) || ((code *)param_1[1] == (code *)0x0))
        break;
        local_178 = 0;
        iVar4 = (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);
        if ((iVar4 != 0) || (iVar9 = iVar9 + 1, 0x3ff < iVar9)) break;
      }
      ppppuVar8 = local_70;
      if (0xf < local_58) {
        ppppuVar8 = (undefined8 ****)local_70[0];
      }
      if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0))
         && ((code *)param_1[1] != (code *)0x0)) {
        local_178 = 0;
        (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);
      }
      FUN_18020e450(local_50);
    }
    FUN_18020e450(local_70);
  }
  return iVar9;
}


