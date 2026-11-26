// 0x180024720  FUN_180024720
// size=319 thunk=false
// signature: undefined FUN_180024720()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_180024720(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_02;
  undefined1 auStack_38 [32];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  local_18[0] = param_2;
  if ((DAT_1805c392c & 1) == 0) {
    DAT_1805c392c = DAT_1805c392c | 1;
    DAT_1805b8828 = (undefined8 *)0x0;
    DAT_1805b8830 = 0;
    DAT_1805b8828 = (undefined8 *)FUN_1802d8350(0x28);
    *DAT_1805b8828 = DAT_1805b8828;
    DAT_1805b8828[1] = DAT_1805b8828;
    DAT_1805b8828[2] = DAT_1805b8828;
    *(undefined2 *)(DAT_1805b8828 + 3) = 0x101;
    atexit(FUN_180308ba0);
  }
  cVar4 = *(char *)((longlong)DAT_1805b8828[1] + 0x19);
  puVar6 = (undefined8 *)DAT_1805b8828[1];
  puVar2 = DAT_1805b8828;
  while (puVar8 = puVar6, cVar4 == '\0') {
    if (*(int *)((longlong)puVar8 + 0x1c) < local_18[0]) {
      puVar6 = (undefined8 *)puVar8[2];
      puVar8 = puVar2;
    }
    else {
      puVar6 = (undefined8 *)*puVar8;
    }
    cVar4 = *(char *)((longlong)puVar6 + 0x19);
    puVar2 = puVar8;
  }
  if ((*(char *)((longlong)puVar2 + 0x19) != '\0') ||
     (local_18[0] < *(int *)((longlong)puVar2 + 0x1c))) {
    puVar7 = (undefined1 *)FUN_18020ce90(puVar2,local_18);
    *puVar7 = 0;
  }
  puVar7 = (undefined1 *)FUN_18020ce90();
  iVar3 = local_18[0];
  uVar1 = *puVar7;
  uVar9 = extraout_XMM0_Da;
  if (((local_18[0] - 1U < 0xfe) &&
      (cVar4 = FUN_180024540(), uVar9 = extraout_XMM0_Da_00, cVar4 != '\0')) &&
     (DAT_1803fa545 == '\0')) {
    uVar5 = FUN_1800245f0(iVar3);
    uVar9 = extraout_XMM0_Da_01;
  }
  else {
    uVar5 = 0;
  }
  puVar7 = (undefined1 *)FUN_18020ce90(uVar9,local_18);
  *puVar7 = uVar5;
  puVar7 = (undefined1 *)FUN_18020ce90(extraout_XMM0_Da_02,local_18);
  *param_1 = uVar1;
  param_1[1] = *puVar7;
  return param_1;
}


