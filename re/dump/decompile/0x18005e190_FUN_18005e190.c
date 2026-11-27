// 0x18005e190  FUN_18005e190
// size=221 thunk=false
// signature: undefined FUN_18005e190()
// status: ok


undefined8 FUN_18005e190(uint param_1,char param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (0 < (int)param_1) {
    uVar1 = (ulonglong)(param_1 & 0x3f);
    lVar3 = uVar1 * 0x68;
    if (((&DAT_1805b88e0)[lVar3] != '\0') && (*(uint *)(&DAT_1805b88e4 + lVar3) == param_1 >> 6)) {
      (&DAT_1805b88e0)[lVar3] = 0;
      (&DAT_1805b88e8)[uVar1 * 0x1a] = 0;
      plVar2 = &DAT_1805b88f0 + uVar1 * 0xd;
      lVar3 = *plVar2;
      if ((ulonglong)((&DAT_1805b8900)[uVar1 * 0xd] - lVar3 >> 2) < 0x801) {
        if (lVar3 != (&DAT_1805b88f8)[uVar1 * 0xd]) {
          (&DAT_1805b88f8)[uVar1 * 0xd] = lVar3;
        }
      }
      else {
        local_28 = 0;
        uStack_20 = 0;
        local_18 = 0;
        if (&local_28 != plVar2) {
          local_28 = *plVar2;
          *plVar2 = 0;
          uStack_20 = (&DAT_1805b88f8)[uVar1 * 0xd];
          (&DAT_1805b88f8)[uVar1 * 0xd] = 0;
          local_18 = (&DAT_1805b8900)[uVar1 * 0xd];
          (&DAT_1805b8900)[uVar1 * 0xd] = 0;
        }
        FUN_18021e060(&local_28);
      }
      if (param_2 != '\0') {
        if (DAT_1803ff7b8 != 0) {
          DAT_1803ff7b8 = DAT_1803ff7b8 + -1;
        }
      }
      return 1;
    }
  }
  return 0;
}


