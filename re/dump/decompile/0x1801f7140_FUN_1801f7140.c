// 0x1801f7140  FUN_1801f7140
// size=75 thunk=false
// signature: undefined FUN_1801f7140()
// status: ok


longlong FUN_1801f7140(longlong param_1)

{
  longlong lVar1;
  
  if (DAT_1803ff270 == '\0') {
    if (DAT_1803fa390 != (code *)0x0) {
      param_1 = (*DAT_1803fa390)();
    }
    return param_1;
  }
  if ((DAT_1803fa545 != '\0') && (param_1 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801f7188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_1803fa390)();
  return lVar1;
}


