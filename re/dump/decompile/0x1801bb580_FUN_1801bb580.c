// 0x1801bb580  FUN_1801bb580
// size=649 thunk=false
// signature: undefined FUN_1801bb580()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801bb580(undefined8 param_1)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 ***local_c0;
  longlong local_b8;
  undefined4 local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 local_58 [32];
  undefined8 ***local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar7 = auStack_e8;
  puVar8 = auStack_e8;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  local_60 = local_58;
  uVar4 = FUN_18016d4c0(local_58,param_1);
  FUN_1801a93b0(local_38,uVar4);
  puVar5 = (undefined8 *)FUN_1801a9580(local_58,local_38);
  local_a8 = 1;
  if (7 < (ulonglong)puVar5[3]) {
    puVar5 = (undefined8 *)*puVar5;
  }
  uVar4 = FUN_1802d7d9c(puVar5);
  if (((char)uVar4 == '\0') || ((int)((ulonglong)uVar4 >> 0x20) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_a8 = 0;
  FUN_18021e290(local_58);
  if (bVar3) {
    if (0x7fffffffffffffffU - local_28 < 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_c0 = local_38;
    if (0xf < local_20) {
      local_c0 = local_38[0];
    }
    local_b8 = local_28;
    local_c8 = 0x10;
    FUN_18020e930(&local_a0);
    local_a8 = 2;
    if (0xf < CONCAT44(DAT_1803fa8d8._4_4_,(undefined4)DAT_1803fa8d8)) {
      pvVar2 = (void *)CONCAT44(DAT_1803fa8c0._4_4_,(uint)DAT_1803fa8c0);
      pvVar6 = pvVar2;
      puVar7 = auStack_e8;
      if ((0xfff < CONCAT44(DAT_1803fa8d8._4_4_,(undefined4)DAT_1803fa8d8) + 1) &&
         (pvVar6 = *(void **)((longlong)pvVar2 + -8), puVar7 = auStack_e8,
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
        pcVar1 = (code *)swi(0x29);
        pvVar6 = (void *)(*pcVar1)(5);
        puVar7 = auStack_e0;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1801bb6ba;
      free(pvVar6);
    }
    DAT_1803fa8c0._0_4_ = local_a0;
    DAT_1803fa8c0._4_4_ = uStack_9c;
    uRam00000001803fa8c8 = uStack_98;
    uRam00000001803fa8cc = uStack_94;
    _DAT_1803fa8d0 = (undefined4)local_90;
    uRam00000001803fa8d4 = local_90._4_4_;
    DAT_1803fa8d8._0_4_ = (undefined4)uStack_88;
    DAT_1803fa8d8._4_4_ = uStack_88._4_4_;
    local_90 = 0;
    uStack_88 = 0xf;
    local_a0 = local_a0 & 0xffffff00;
    local_a8 = 0;
    *(undefined8 *)(puVar7 + -8) = 0x1801bb6f3;
    FUN_18020e450(&local_a0);
    *(undefined8 *)(puVar7 + -8) = 0x1801bb6f8;
    FUN_1801a9730();
    uVar4 = 1;
    puVar8 = puVar7;
  }
  else {
    if (0x7fffffffffffffffU - local_28 < 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_c0 = local_38;
    if (0xf < local_20) {
      local_c0 = local_38[0];
    }
    local_b8 = local_28;
    local_c8 = 0x19;
    FUN_18020e930(&local_80);
    local_a8 = 4;
    if (0xf < CONCAT44(DAT_1803fa8d8._4_4_,(undefined4)DAT_1803fa8d8)) {
      pvVar2 = (void *)CONCAT44(DAT_1803fa8c0._4_4_,(uint)DAT_1803fa8c0);
      pvVar6 = pvVar2;
      puVar8 = auStack_e8;
      if ((0xfff < CONCAT44(DAT_1803fa8d8._4_4_,(undefined4)DAT_1803fa8d8) + 1) &&
         (pvVar6 = *(void **)((longlong)pvVar2 + -8), puVar8 = auStack_e8,
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
        pcVar1 = (code *)swi(0x29);
        pvVar6 = (void *)(*pcVar1)(5);
        puVar8 = auStack_e0;
      }
      *(undefined8 *)(puVar8 + -8) = 0x1801bb797;
      free(pvVar6);
    }
    DAT_1803fa8c0._0_4_ = local_80;
    DAT_1803fa8c0._4_4_ = uStack_7c;
    uRam00000001803fa8c8 = uStack_78;
    uRam00000001803fa8cc = uStack_74;
    _DAT_1803fa8d0 = (undefined4)local_70;
    uRam00000001803fa8d4 = local_70._4_4_;
    DAT_1803fa8d8._0_4_ = (undefined4)uStack_68;
    DAT_1803fa8d8._4_4_ = uStack_68._4_4_;
    local_70 = 0;
    uStack_68 = 0xf;
    local_80 = local_80 & 0xffffff00;
    local_a8 = 0;
    *(undefined8 *)(puVar8 + -8) = 0x1801bb7d0;
    FUN_18020e450(&local_80);
    uVar4 = 0;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1801bb7db;
  FUN_18020e450(local_38);
  *(undefined8 *)(puVar8 + -8) = 0x1801bb7ea;
  return uVar4;
}


