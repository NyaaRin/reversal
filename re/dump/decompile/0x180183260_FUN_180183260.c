// 0x180183260  FUN_180183260
// size=158 thunk=false
// signature: undefined FUN_180183260()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180183260(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_1803e89e2 != '\0') {
    lVar3 = FUN_180183140();
    lVar4 = FUN_180182f40(lVar3,param_1,0);
    if (lVar4 == 0) {
      if ((lVar3 != 0) && (DAT_18040a3d4 != '\0')) {
        cVar2 = FUN_180182bd0(lVar3);
        uVar1 = _DAT_1803e89f0;
        if (cVar2 != '\0') {
          *param_2 = _DAT_1803e89e8;
          param_2[1] = uVar1;
          return 1;
        }
      }
    }
    else if (*(char *)(lVar4 + 0x18) != '\0') {
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      *param_2 = *(undefined8 *)(lVar4 + 8);
      param_2[1] = uVar1;
      return 1;
    }
  }
  return 0;
}


