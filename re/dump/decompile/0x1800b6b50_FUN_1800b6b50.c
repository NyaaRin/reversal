// 0x1800b6b50  FUN_1800b6b50
// size=131 thunk=false
// signature: undefined FUN_1800b6b50()
// status: ok


double FUN_1800b6b50(int param_1,double param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  if ((((-1 < param_1) && (-1 < DAT_1803db410)) && (0 < DAT_1803fb244)) &&
     (iVar3 = 0, 0 < DAT_1803fb244)) {
    do {
      for (uVar1 = DAT_1803db410 - iVar3; (int)uVar1 < 0; uVar1 = uVar1 + 0x100) {
      }
      uVar2 = (ulonglong)(uVar1 & 0xff);
      if (((&DAT_1803fb260)[uVar2 * 0x18] != '\0') &&
         (*(int *)(&DAT_1803fb258 + uVar2 * 0x18) == param_1)) {
        param_2 = param_2 - *(double *)(&DAT_1803fb250 + uVar2 * 0x18);
        if ((param_2 <= 0.0) || (DAT_180380d38 <= param_2)) {
          param_2 = 0.0;
        }
        return param_2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1803fb244);
  }
  return 0.0;
}


