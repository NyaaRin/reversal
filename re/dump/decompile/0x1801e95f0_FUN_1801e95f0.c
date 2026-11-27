// 0x1801e95f0  FUN_1801e95f0
// size=284 thunk=false
// signature: undefined FUN_1801e95f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e95f0(char param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (param_1 == '\0') {
    lVar2 = *(longlong *)(lVar1 + 0xed8);
    plVar5 = (longlong *)(lVar1 + 0xdb8);
    if (lVar2 != 0) {
      lVar3 = *plVar5;
      *(longlong *)(lVar1 + 0xed8) = 0;
      *plVar5 = 0;
      if (lVar3 != 0) {
        FUN_1801e95c0(lVar3,lVar2);
      }
      FUN_180114540(lVar2);
    }
    lVar2 = DAT_1803fa4e8;
    if (DAT_1803fa4e8 != 0) {
      local_18 = 0;
      iVar4 = FUN_1801e9580(DAT_1803fa4e8,&local_18);
      if ((-1 < iVar4) && (local_18 != 0)) {
        iVar4 = FUN_1801e95c0(lVar2,0);
        if (iVar4 < 0) {
          FUN_180114540(local_18);
        }
        else {
          *(longlong *)(lVar1 + 0xed8) = local_18;
          *plVar5 = lVar2;
        }
      }
    }
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0xed8);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar1 + 0xed8) = 0;
      lVar3 = *(longlong *)(lVar1 + 0xdb8);
      *(undefined8 *)(lVar1 + 0xdb8) = 0;
      if (lVar3 != 0) {
        FUN_1801e95c0(lVar3,lVar2);
      }
      FUN_180114540(lVar2);
    }
  }
  return;
}


