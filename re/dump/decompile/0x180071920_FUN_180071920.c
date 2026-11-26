// 0x180071920  FUN_180071920
// size=266 thunk=false
// signature: undefined FUN_180071920()
// status: ok


ulonglong FUN_180071920(float *param_1,undefined1 *param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined1 *puVar6;
  
  if ((DAT_1803fa608 == (float *)0x0) || (fVar1 = *DAT_1803fa608, fVar1 <= 0.0)) {
    return CONCAT71((int7)((ulonglong)DAT_1803fa608 >> 8),1);
  }
  LOCK();
  fVar4 = param_1[4];
  param_1[4] = 1.4013e-45;
  UNLOCK();
  fVar3 = DAT_180380bb0;
  while (DAT_180380bb0 = fVar3, fVar4 != 0.0) {
    LOCK();
    fVar4 = param_1[4];
    param_1[4] = 1.4013e-45;
    UNLOCK();
    fVar3 = DAT_180380bb0;
  }
  fVar4 = fVar3;
  if (0.0 <= *param_1) {
    fVar4 = fVar1 - *param_1;
  }
  *param_1 = fVar1;
  if (fVar4 < fVar3) {
    fVar4 = param_1[2];
    cVar5 = *(char *)(param_1 + 3);
  }
  else {
    fVar4 = 0.0;
    param_1[1] = fVar1;
    cVar5 = '\0';
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if ((param_1[1] < 0.0) || (fVar3 < fVar1 - param_1[1])) {
    param_1[1] = fVar1;
    param_1[2] = 1.4013e-45;
  }
  else {
    param_1[2] = (float)((int)fVar4 + 1);
    if ((6 < (int)fVar4 + 1) && (cVar5 == '\0')) {
      bVar2 = true;
      *(undefined1 *)(param_1 + 3) = 1;
      cVar5 = '\x01';
      goto LAB_1800719e6;
    }
  }
  bVar2 = false;
LAB_1800719e6:
  param_1[4] = 0.0;
  if (bVar2) {
    puVar6 = &DAT_18033e9cc;
    if (param_2 != (undefined1 *)0x0) {
      puVar6 = param_2;
    }
    FUN_180014410("[AntiSS] \'%s\' fires continuously (>%d/s) -- background machinery, reactive clean window NOT armed for it\n"
                  ,puVar6,6);
  }
  return (ulonglong)(cVar5 == '\0');
}


