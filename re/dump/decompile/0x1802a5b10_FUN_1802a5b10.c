// 0x1802a5b10  FUN_1802a5b10
// size=356 thunk=false
// signature: undefined FUN_1802a5b10()
// status: ok


void FUN_1802a5b10(longlong param_1)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  
  sVar7 = 1;
  sVar3 = *(short *)(param_1 + 0x22a);
  sVar6 = 1;
  if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
    sVar6 = *(short *)(param_1 + 0x202);
  }
  if (((int)*(short *)(param_1 + 0x202) < *(int *)(param_1 + 0x6c)) ||
     (iVar4 = memcmp(*(void **)(param_1 + 0x58),*(void **)(param_1 + 0x50),
                     (longlong)(*(int *)(param_1 + 0x6c) + 0x1f >> 5) << 2), iVar4 != 0)) {
    sVar8 = 1;
  }
  else {
    sVar8 = 0;
  }
  FUN_180296d10(*(undefined8 *)(param_1 + 0x1a0));
  *(undefined2 *)(param_1 + 0x234) = 1;
  sVar2 = -1;
  if (sVar8 != 0) {
    sVar2 = ((0 < sVar3) + 1) * (sVar6 + 1) + sVar8;
  }
  *(short *)(param_1 + 0x232) = sVar2;
  if (0 < *(short *)(param_1 + 0x22a)) {
    sVar7 = sVar6 + 2;
  }
  iVar4 = 0;
  *(short *)(param_1 + 0x236) = sVar7;
  sVar7 = 2;
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      lVar5 = (longlong)iVar4 * 0x74 + *(longlong *)(param_1 + 0x18);
      if ((*(char *)(lVar5 + 0x69) == '\0') || (*(char *)(lVar5 + 0x6a) == '\0')) {
        sVar3 = *(short *)(param_1 + 0x232);
        *(short *)(lVar5 + 100) = sVar3;
        *(short *)(lVar5 + 0x62) = sVar3;
        sVar8 = sVar7;
      }
      else {
        *(short *)(lVar5 + 0x62) = sVar7;
        sVar3 = 0;
        if (0 < *(short *)(param_1 + 0x22a)) {
          sVar3 = sVar6 + 1;
        }
        *(short *)(lVar5 + 100) = sVar3 + sVar7;
        sVar8 = sVar7 + 1;
        sVar3 = sVar7;
        if ((*(uint *)(param_1 + 4) & 0x100000) != 0) {
          sVar8 = sVar7;
        }
      }
      sVar7 = sVar8;
      iVar4 = iVar4 + 1;
      *(short *)(lVar5 + 0x60) = sVar3;
    } while (iVar4 < *(int *)(param_1 + 0x6c));
  }
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x128);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x270);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x268);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x168);
  return;
}


