// 0x1801ebf30  FUN_1801ebf30
// size=1418 thunk=false
// signature: undefined FUN_1801ebf30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1801ebf30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  char *pcVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_70 = param_5;
  if ((DAT_1803fa4e0 == (code *)0x0) || (param_1 == (longlong *)0x0)) {
    uVar8 = 0x8876086c;
  }
  else {
    local_90 = param_1;
    local_88 = param_2;
    local_80 = param_3;
    local_78 = param_4;
    if (DAT_1803ff298 == 1) {
      FUN_1801ea8f0();
      DAT_1803ff298 = 2;
      local_a8 = param_5;
      uVar8 = (*DAT_1803fa4e0)(param_1,param_2,param_3,param_4);
    }
    else if (DAT_1803ff270 == '\0') {
      local_a8 = param_5;
      uVar8 = (*DAT_1803fa4e0)();
    }
    else {
      local_68 = &DAT_1803da6b0;
      iVar7 = _Mtx_lock(&DAT_1803da6b0);
      if (iVar7 != 0) {
        std::_Throw_Cpp_error(5);
      }
      if (DAT_1803da6fc == 0x7fffffff) {
        DAT_1803da6fc = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      DAT_1803fa4e8 = param_1;
      if (((DAT_1803fa452 != '\0') || (FUN_1801e9960(param_1), DAT_1803fa452 != '\0')) &&
         (DAT_1803fa608 != (float *)0x0)) {
        plVar9 = (longlong *)FUN_1801e9890(param_1);
        if (plVar9 != (longlong *)0x0) {
          if (plVar9 == DAT_1803fa580) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
          else {
            FUN_180014410("[VIS] renderTargetReal was not the back buffer (%p -> %p), re-acquiring\n"
                          ,DAT_1803fa580,plVar9);
            if (DAT_1803fa580 != (longlong *)0x0) {
              (**(code **)(*DAT_1803fa580 + 0x10))();
            }
            DAT_1803fa453 = '\0';
            DAT_1803fa455 = '\0';
            DAT_1803fa580 = plVar9;
          }
        }
        local_50 = (longlong *)0x0;
        iVar7 = (**(code **)(*param_1 + 0x130))(param_1,0,&local_50);
        if (-1 < iVar7) {
          (**(code **)(*param_1 + 0x1c8))(param_1,8,3);
          if ((DAT_1803fa580 != (longlong *)0x0) && (DAT_1803fa4f8 != 0)) {
            (**(code **)(*param_1 + 0x128))(param_1);
            cVar4 = FUN_180114710();
            local_98 = cVar4;
            if ((DAT_1803fa668 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 == '\0')) {
              cVar5 = '\0';
            }
            else {
              cVar5 = '\x01';
            }
            if (cVar5 != DAT_180425770) {
              DAT_1803fea1c = 6;
              DAT_180425770 = cVar5;
              if (cVar5 == '\0') {
                DAT_1803fea04 = *DAT_1803fa608 + DAT_180380a88;
              }
              else {
                DAT_1803fea04 = 0.0;
                DAT_1803fea1c = 0;
              }
            }
            if (0 < DAT_1803fea1c) {
              DAT_1803fea1c = DAT_1803fea1c + -1;
            }
            if ((DAT_1803fea1c != 0) || ((0.0 < DAT_1803fea04 && (*DAT_1803fa608 < DAT_1803fea04))))
            {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (cVar5 == '\0') {
              _DAT_1804ecb20 = 0;
              DAT_18040a389 = 0;
            }
            if (cVar4 != '\0') {
              if (cVar5 == '\0') {
                if (bVar3) {
                  FUN_1801eb7a0(param_1,DAT_1803fa580,1);
                }
              }
              else {
                plVar9 = (longlong *)FUN_180114890();
                if (plVar9 != (longlong *)0x0) {
                  cVar4 = FUN_1801eb7a0(param_1,plVar9,1);
                  if (cVar4 == '\0') {
                    DAT_18040a268 = DAT_18040a268 + 1;
                    DAT_180425900 = DAT_180425900 + 1;
                    if (DAT_180425900 < 0x15) {
                      FUN_180014410("[SP] v5 clean publication failed #%d\n",DAT_18040a268);
                    }
                    if (7 < DAT_18040a268) {
                      DAT_18040a388 = 1;
                      AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
                      uVar8 = DAT_18040a258;
                      DAT_18040a258 = 0;
                      DAT_1803e8844 = DAT_1803e8844 + 1;
                      DAT_18040a26c = 0;
                      LOCK();
                      DAT_18040a389 = 0;
                      UNLOCK();
                      _DAT_1804ecb20 = 0;
                      DAT_18040a370 = 0;
                      DAT_18040a380 = 0;
                      DAT_18040a368 = '\0';
                      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
                      DAT_18040a38a = '\0';
                      FUN_180114540(uVar8);
                    }
                  }
                  else {
                    DAT_18040a268 = 0;
                  }
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            uVar8 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
            uVar8 = FUN_180241610(uVar8,0x8d6c6958b3bd884);
            pcVar10 = (char *)FUN_1801fcfc0(uVar8);
            cVar5 = local_98;
            cVar4 = *pcVar10;
            if ((local_98 == '\0') || ((cVar4 != '\0' && (cVar6 = FUN_1801eb5c0(), cVar6 == '\0'))))
            {
              if (cVar4 == '\0') {
                if (cVar5 == '\0') {
                  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
                  DAT_1803e7420 = DAT_1803e7420 + 1;
                  DAT_1803fa455 = cVar5;
                  DAT_1803fa453 = cVar5;
                  DAT_1803da6a0 = 0xffffffff;
                  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
                }
              }
              else {
                FUN_1801eb7a0(param_1,DAT_1803fa580,0);
              }
            }
          }
          DAT_1803fa454 = 0;
          FUN_180115a50();
          cVar4 = DAT_18040a38a;
          if (0 < DAT_18040a254) {
            DAT_18040a254 = DAT_18040a254 + -1;
          }
          LOCK();
          DAT_18040a38a = '\0';
          UNLOCK();
          if (cVar4 != '\0') {
            AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
            if (DAT_18040a368 == '\0') {
              DAT_18040a380 = 0;
            }
            DAT_18040a368 = '\0';
            ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
          }
          if (DAT_1804009e4 < 8) {
            DAT_1804009e4 = DAT_1804009e4 + 1;
          }
          else {
            FUN_1801eaba0();
          }
          if (local_50 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x128))(param_1,0);
            (**(code **)(*local_50 + 0x10))();
          }
        }
      }
      _Mtx_unlock(&DAT_1803da6b0);
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar1 = *(undefined1 *)(lVar2 + 0xec9);
      *(undefined1 *)(lVar2 + 0xec9) = 1;
      local_a8 = param_5;
      local_98 = uVar1;
      uVar8 = (*DAT_1803fa4e0)(param_1,param_2,param_3,param_4);
      *(undefined1 *)(lVar2 + 0xec9) = uVar1;
    }
  }
  return uVar8;
}


