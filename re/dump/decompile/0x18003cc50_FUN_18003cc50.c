// 0x18003cc50  FUN_18003cc50
// size=254 thunk=false
// signature: undefined FUN_18003cc50()
// status: ok


undefined8 FUN_18003cc50(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar8;
    if ((((((int)uVar6 < 1) || (uVar5 = (ulonglong)(uVar6 & 0xf), 7 < (uVar6 & 0xf))) ||
         (lVar7 = uVar5 * 0x30, (&DAT_1803e75c0)[lVar7] == '\0')) ||
        ((*(uint *)(&DAT_1803e75c4 + lVar7) != uVar6 >> 4 ||
         (puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar5 * 6], puVar1 == (undefined8 *)0x0)))) ||
       ((&DAT_1803e75d8)[uVar5 * 6] == 0)) {
      (**(code **)(*plVar4 + 0xe0))(plVar4);
    }
    else {
      if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
        iVar3 = (**(code **)*puVar1)();
      }
      else {
        iVar3 = (*DAT_1803fb088)(puVar1[1]);
      }
      iVar2 = iVar3 - *(int *)(&DAT_1803e75e0 + lVar7);
      if (iVar3 - *(int *)(&DAT_1803e75e0 + lVar7) < 0) {
        iVar2 = 0;
      }
      (**(code **)(*plVar4 + 0xf0))(plVar4,(double)iVar2);
    }
    return 1;
  }
  return 0;
}


