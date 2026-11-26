// 0x18014e9d0  FUN_18014e9d0
// size=444 thunk=false
// signature: undefined FUN_18014e9d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18014e9d0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  iVar5 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  FUN_18020e540(local_98,param_1);
  local_b8 = local_98;
  local_b0 = &local_78;
  FUN_18020a900(&local_78,&local_b8);
  _eh_vector_destructor_iterator_(local_98,0x20,1,FUN_1800668e0);
  if (local_78 != lStack_70) {
    do {
      if (4999 < iVar5) break;
      FUN_18020e540(local_48,lStack_70 + -0x20);
      local_a8 = lStack_70 + -0x20;
      FUN_18021e290();
      lStack_70 = lStack_70 + -0x20;
      local_60 = 0;
      lStack_58 = 0;
      local_50 = 0;
      cVar3 = FUN_18014e6f0(local_48,&local_60,0);
      lVar2 = lStack_58;
      lVar1 = local_60;
      if (cVar3 == '\0') {
        FUN_18021c690(&local_60);
      }
      else {
        for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
          piVar4 = (int *)FUN_180067c80(&local_b8,lVar1);
          if ((*piVar4 == 3) && (piVar4[2] == 0)) {
            if (lStack_70 == local_68) {
              FUN_180224360(&local_78,lStack_70);
            }
            else {
              local_a0 = lStack_70;
              FUN_18020e540(lStack_70,lVar1);
              lStack_70 = lStack_70 + 0x20;
            }
          }
          else {
            iVar5 = iVar5 + 1;
            if (4999 < iVar5) break;
          }
        }
        FUN_18021c690(&local_60);
      }
      FUN_18021e290(local_48);
    } while (local_78 != lStack_70);
  }
  FUN_18021c690(&local_78);
  return iVar5;
}


