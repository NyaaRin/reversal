// 0x180114e10  FUN_180114e10
// size=759 thunk=false
// signature: undefined FUN_180114e10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180114e10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  int local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  if (((param_1 != 0) &&
      (local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88, param_1 != DAT_1803fa580)) &&
     (DAT_18040a38a != '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_18040a280);
    lVar4 = DAT_18040a378;
    iVar3 = DAT_18040a36c;
    iVar2 = DAT_18040a290;
    iVar1 = DAT_1803e8844;
    if ((DAT_18040a258 == 0) || (DAT_18040a26c != DAT_1803e8844)) {
      bVar6 = DAT_18040a380 == param_1;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
      if ((lVar4 != 0) && ((0 < iVar2 && (0 < iVar3)))) {
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        uStack_30 = 0;
        cVar5 = FUN_180114db0(param_1,&local_48);
        if (cVar5 != '\0') {
          if (((int)uStack_30 == iVar2) && (uStack_30._4_4_ == iVar3)) {
            if (bVar6) {
              AcquireSRWLockShared((PSRWLOCK)&DAT_18040a280);
              cVar5 = DAT_18040a368;
              ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
              if ((cVar5 == '\0') && (cVar5 = FUN_180114de0(param_1), cVar5 != '\0')) {
                AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
                if ((DAT_1803e8844 == iVar1) &&
                   ((DAT_18040a378 == lVar4 && (DAT_18040a380 == param_1)))) {
                  DAT_18040a368 = '\x01';
                  if (DAT_18040a258 == 0) {
                    DAT_18040a26c = iVar1;
                    DAT_18040a258 = param_1;
                    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
                    FUN_180114540(0);
                    local_68 = DAT_18040a370;
                    FUN_180014410("[SP] v5 cleanSurf learned from SetRenderTarget %p (%ux%u) after %d clean frames\n"
                                  ,param_1,uStack_30 & 0xffffffff,uStack_30._4_4_);
                    DAT_18040a370 = 0;
                    DAT_18040a268 = 0;
                    DAT_18040a38a = '\0';
                  }
                  else {
                    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
                    FUN_180114540(param_1);
                  }
                }
                else {
                  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
                  FUN_180114540(param_1);
                  DAT_1803fe660 = DAT_1803fe660 + 1;
                  if (DAT_1803fe660 < 6) {
                    FUN_180014410("[SP] discarded stale cleanSurf bind after reset/resize #%d\n");
                  }
                }
              }
            }
            else {
              AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
              if (((DAT_18040a258 == 0) && (DAT_1803e8844 == iVar1)) && (DAT_18040a380 == 0)) {
                DAT_18040a368 = '\x01';
                DAT_18040a380 = param_1;
                FUN_180014410("[SP] v5 clean RT bind candidate %p (%ux%u), awaiting confirmation\n",
                              param_1,uStack_30 & 0xffffffff,uStack_30._4_4_);
              }
              ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
            }
          }
          else {
            DAT_180425404 = DAT_180425404 + 1;
            if (DAT_180425404 < 0xb) {
              local_58 = iVar3;
              local_60 = iVar2;
              local_68 = uStack_30._4_4_;
              FUN_180014410("[SP] v5 bind reject #%d: %p %ux%u (want %dx%d)\n",DAT_180425404,param_1
                           );
            }
          }
        }
      }
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
    }
  }
  return;
}


