// 0x180131d80  FUN_180131d80
// size=165 thunk=false
// signature: undefined FUN_180131d80()
// status: ok


undefined1 FUN_180131d80(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_180131880();
  if (lVar2 != 0) {
    lVar3 = FUN_180131880(param_1);
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        cVar1 = FUN_1801311e0(*(undefined8 *)(lVar3 + uVar5 * 8));
        if (cVar1 == '\0') break;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < 0x200);
      if (0xf < (uint)uVar5) {
        cVar1 = FUN_1801313e0(*(undefined8 *)(lVar2 + 0x10),"CSteamClient::CreateGlobalUser",0x600);
        if (cVar1 != '\0') {
          cVar1 = FUN_1801313e0(*(undefined8 *)(lVar2 + 0x28),"CreatePipeToLocalUser obsolete",0x200
                               );
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


