// 0x1800b75e0  FUN_1800b75e0
// size=447 thunk=false
// signature: undefined FUN_1800b75e0()
// status: ok


void FUN_1800b75e0(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  BOOL BVar4;
  longlong lVar5;
  double dVar6;
  
  if (DAT_1803facf8 == '\0') {
    if ((DAT_1803fb230 != (void *)0x0) || (DAT_1803fb244 != 0)) {
      FUN_1800b64b0();
    }
    DAT_1803fb0dc = 0;
    return;
  }
  if (param_1 == (void *)0x0) {
    return;
  }
  BVar4 = IsBadReadPtr(param_1,8);
  if (BVar4 != 0) {
    return;
  }
  if (DAT_1803fb230 != param_1) {
    FUN_1800b64b0();
    DAT_1803fb230 = param_1;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x10);
  if (-1 < DAT_1803db420) {
    if (iVar1 == DAT_1803db420) {
      return;
    }
    if ((iVar1 < DAT_1803db420) || (0x1000 < (longlong)iVar1 - (longlong)DAT_1803db420)) {
      FUN_1800b64b0();
      DAT_1803fb230 = param_1;
    }
  }
  dVar6 = (double)FUN_1800b6430();
  if (dVar6 <= 0.0) {
    return;
  }
  DAT_1803db410 = DAT_1803db410 + 1 & 0x800000ff;
  if ((int)DAT_1803db410 < 0) {
    DAT_1803db410 = (DAT_1803db410 - 1 | 0xffffff00) + 1;
  }
  lVar5 = (longlong)(int)DAT_1803db410;
  *(double *)(&DAT_1803fb250 + lVar5 * 0x18) = dVar6;
  (&DAT_1803fb260)[lVar5 * 0x18] = 1;
  uVar2 = *(uint *)((longlong)param_1 + 0x10);
  *(uint *)(&DAT_1803fb258 + lVar5 * 0x18) = uVar2;
  *(undefined4 *)(&DAT_1803fb25c + lVar5 * 0x18) = *(undefined4 *)((longlong)param_1 + 0x1c);
  if (DAT_1803fb244 < 0x100) {
    DAT_1803fb244 = DAT_1803fb244 + 1;
  }
  if (-1 < (int)uVar2) {
    uVar3 = uVar2;
    if (-1 < (int)DAT_1803db414) {
      if ((int)DAT_1803db414 < (int)uVar2) {
        uVar3 = uVar2 - 0x3f;
        if ((int)(uVar2 - (DAT_1803db414 + 1)) < 0x40) {
          uVar3 = DAT_1803db414 + 1;
        }
      }
      else if (-1 < (int)DAT_1803db414) goto LAB_1800b776e;
    }
    for (; (int)uVar3 <= (int)uVar2; uVar3 = uVar3 + 1) {
      (&DAT_1803fb130)[uVar3 & 0x3f] = uVar3;
      (&DAT_1803fca50)[uVar3 & 0x3f] = 0xbf800000;
    }
    DAT_1803db414 = uVar2;
    FUN_1800b6650(0);
  }
LAB_1800b776e:
  if ((DAT_1803fb0dc & 0xfffffffd) == 0) {
    DAT_1803fb0dc = 5;
  }
  DAT_1803db41c = *(undefined4 *)((longlong)param_1 + 0x1c);
  DAT_1803db420 = iVar1;
  return;
}


