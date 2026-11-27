// 0x180173db0  FUN_180173db0
// size=205 thunk=false
// signature: undefined FUN_180173db0()
// status: ok


void FUN_180173db0(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  plVar4 = DAT_1803fb108;
  fVar3 = DAT_180380c50;
  fVar2 = DAT_180380ac0;
  fVar8 = 0.0;
  plVar6 = DAT_1803fb100;
  if (DAT_1803fb100 == DAT_1803fb108) {
    return;
  }
  do {
    if ((((longlong *)*plVar6 != (longlong *)0x0) &&
        (iVar5 = (**(code **)(*(longlong *)*plVar6 + 8))(), iVar5 == 3)) &&
       (lVar1 = *plVar6, *(char *)(lVar1 + 0x14) != '\0')) {
      if ((*(char *)(lVar1 + 0x78) == '\0') || (*(int *)(lVar1 + 0x7c) != 0)) {
        fVar7 = (float)*(int *)(lVar1 + 0x74) * fVar2;
        if ((*(char *)(lVar1 + 0x79) != '\0') &&
           ((*(char *)(lVar1 + 0x78) == '\0' && (fVar7 <= fVar3)))) {
          fVar7 = fVar3;
        }
      }
      else {
        fVar7 = 0.0;
      }
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
    }
    plVar6 = plVar6 + 1;
  } while (plVar6 != plVar4);
  return;
}


