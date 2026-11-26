// 0x180139540  FUN_180139540
// size=256 thunk=false
// signature: undefined FUN_180139540()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180139540(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)FUN_1801367d0(local_28);
  puVar1 = (undefined8 *)puVar4[1];
  for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 9) {
    lVar5 = FUN_180135100(local_68,puVar4);
    lVar5 = *(longlong *)(lVar5 + 0x10);
    FUN_18020e450(local_68);
    if (lVar5 == 0) {
      uVar2 = puVar4[4];
      FUN_1801338c0(local_48,puVar4,uVar2);
      if (local_38 == 0) {
        FUN_18020e450(local_48);
      }
      else {
        cVar3 = FUN_180134a00(puVar4,uVar2,local_48);
        FUN_18020e450(local_48);
        if (cVar3 != '\0') {
          puVar6 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar6 = (undefined8 *)*puVar4;
          }
          FUN_180014410("[AS] token vault: picked up Steam\'s cached token for \'%s\'\n",puVar6);
        }
      }
    }
  }
  FUN_18020ad50(local_28);
  return;
}


