// 0x18025f270  FUN_18025f270
// size=395 thunk=false
// signature: undefined FUN_18025f270()
// status: ok


void FUN_18025f270(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined1 local_48 [40];
  
  local_58 = *(ulonglong *)(param_1 + 8);
  uStack_50 = *(ulonglong *)(param_1 + 0x10);
  local_68 = *(ulonglong *)(param_1 + 0x18);
  lStack_60 = *(longlong *)(param_1 + 0x20);
  uVar4 = FUN_180254e90(param_2,local_48,&local_68,&local_58);
  FUN_18020e8a0(param_1 + 0xb8,uVar4);
  FUN_18020e450(local_48);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined2 *)(param_1 + 0xf8) = 0;
    cVar6 = *(char *)(*(longlong *)(param_1 + 8) * 0x60 + 0x21 + *param_2);
    *(bool *)(param_1 + 0xfa) = (byte)(cVar6 - 1U) < 8;
    bVar9 = (byte)(cVar6 - 9U) < 0xc;
    goto LAB_18025f3bc;
  }
  uVar7 = *(ulonglong *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    local_68 = uVar7;
    lStack_60 = lVar1;
    FUN_180256690(param_2,&local_58,&local_68);
    uVar7 = local_58;
    uVar8 = uStack_50;
  }
  else {
    uVar8 = lVar1 - 1;
  }
  lVar1 = *param_2;
  uVar5 = (param_2[1] - lVar1 >> 5) * -0x5555555555555555;
  if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  lVar2 = *(longlong *)(uVar7 * 0x60 + lVar1);
  if (uVar8 < (ulonglong)(*(longlong *)(uVar7 * 0x60 + 8 + lVar1) - lVar2 >> 4)) {
    cVar6 = *(char *)(lVar2 + 2 + uVar8 * 0x10);
    if (1 < (byte)(cVar6 - 7U)) goto LAB_18025f396;
    uVar3 = 1;
  }
  else {
    cVar6 = '\0';
LAB_18025f396:
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0xf8) = uVar3;
  *(bool *)(param_1 + 0xf9) = cVar6 == '\x03';
  *(bool *)(param_1 + 0xfa) = cVar6 == '\t';
  bVar9 = cVar6 == '\x04';
LAB_18025f3bc:
  *(bool *)(param_1 + 0xfb) = bVar9;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x100) = param_3;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xb0);
  return;
}


