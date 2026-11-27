// 0x180020b70  FUN_180020b70
// size=449 thunk=false
// signature: undefined FUN_180020b70()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180020b70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 ***local_98 [4];
  undefined1 local_78 [56];
  
  uVar9 = 0;
  local_a8 = &DAT_1803e73b0;
  iVar4 = _Mtx_lock(&DAT_1803e73b0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e73fc == 0x7fffffff) {
    DAT_1803e73fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  uVar3 = _UNK_1803814b8;
  uVar2 = _DAT_1803814b0;
  lVar10 = 0;
  do {
    lVar8 = lVar10 * 0x40;
    if (param_1 == 0) {
      uStack_e0 = 0;
      local_d8 = uVar2;
      uStack_d0 = uVar3;
      local_e8 = (undefined8 ****)0x0;
      uStack_c0 = 0;
      local_b8 = uVar2;
      uStack_b0 = uVar3;
      local_c8 = 0;
      ppppuVar7 = &local_e8;
      uVar9 = uVar9 | 0xe;
      ppppuVar5 = (undefined8 ****)local_e8;
    }
    else {
      FUN_18016d4c0(local_98,lVar8 + param_1);
      FUN_18016d4c0(local_78,lVar8 + param_1 + 0x20);
      ppppuVar7 = local_98;
      uVar9 = uVar9 | 1;
      ppppuVar5 = (undefined8 ****)local_98[0];
    }
    uVar11 = uVar9;
    if ((undefined8 ****)(&DAT_1803ebbe0 + lVar8) != ppppuVar7) {
      ppppuVar6 = ppppuVar7;
      if ((undefined8 ***)0xf < ppppuVar7[3]) {
        ppppuVar6 = ppppuVar5;
      }
      FUN_180212700(&DAT_1803ebbe0 + lVar8,ppppuVar6,ppppuVar7[2],param_4,uVar9);
    }
    ppppuVar5 = ppppuVar7 + 4;
    if ((undefined8 ****)(&DAT_1803ebc00 + lVar8) != ppppuVar5) {
      if ((undefined8 ***)0xf < ppppuVar7[7]) {
        ppppuVar5 = (undefined8 ****)*ppppuVar5;
      }
      FUN_180212700(&DAT_1803ebc00 + lVar8,ppppuVar5,ppppuVar7[6],param_4,uVar11);
    }
    if ((uVar9 & 8) != 0) {
      uVar9 = uVar9 & 0xfffffff7;
      FUN_18020e450(&local_c8);
      FUN_18020e450(&local_e8);
    }
    if ((uVar9 & 1) != 0) {
      uVar9 = uVar9 & 0xfffffffe;
      FUN_18020e450(local_78);
      FUN_18020e450(local_98);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x81);
                    /* WARNING: Could not recover jumptable at 0x000180020d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e73b0);
  return;
}


