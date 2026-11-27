// 0x180042b70  FUN_180042b70
// size=156 thunk=false
// signature: undefined FUN_180042b70()
// status: ok


undefined8 FUN_180042b70(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  uint uVar6;
  double dVar8;
  ulonglong uVar7;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  pcVar2 = *(code **)(*plVar4 + 0xf8);
  dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar6 = (uint)dVar8;
  uVar7 = (ulonglong)uVar6;
  if (((0 < (int)uVar6) && (DAT_1803ff8a8 != 0)) && (uVar3 = uVar6 & 0xf, uVar3 < 8)) {
    lVar1 = (ulonglong)uVar3 * 0x18;
    puVar5 = &DAT_1803ff7e0 + lVar1;
    if (((&DAT_1803ff7e0)[(ulonglong)uVar3 * 0x18] != '\0') &&
       (uVar7 = (ulonglong)(uVar6 >> 4), *(uint *)(&DAT_1803ff7e4 + lVar1) == uVar6 >> 4))
    goto LAB_180042be4;
  }
  puVar5 = (undefined1 *)0x0;
LAB_180042be4:
  (*pcVar2)(plVar4,CONCAT71((int7)(uVar7 >> 8),puVar5 != (undefined1 *)0x0));
  return 1;
}


