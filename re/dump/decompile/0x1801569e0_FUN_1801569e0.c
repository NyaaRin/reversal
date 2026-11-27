// 0x1801569e0  FUN_1801569e0
// size=833 thunk=false
// signature: undefined FUN_1801569e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801569e0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  char *pcVar8;
  ulonglong uVar9;
  void *_Src;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_418 [32];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  ulonglong local_3d8;
  undefined *local_3d0;
  char local_3c8 [432];
  undefined1 local_218 [448];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_418;
  uVar11 = 0;
  if (DAT_180409d70 != (code *)0x0) {
    uVar3 = (*DAT_180409d70)();
    uVar11 = (ulonglong)uVar3;
    if (((0 < (int)uVar3) && (DAT_180409f60 != '\0')) && (cVar2 = FUN_180155560(), cVar2 != '\0')) {
      local_3d8 = 0x93fd561a96ab0c67;
      local_3d0 = (undefined *)0x80462f2d9c85b9d;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3f8,&local_3d8);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_3e8,&local_3d0);
      pcVar8 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
      if (*pcVar8 != '\0') {
        uVar4 = (*DAT_180409e50)(param_1);
        iVar5 = (*DAT_180409f10)(param_1,uVar4);
        if (iVar5 == 5) {
          uVar9 = (*DAT_180409d38)(param_1,uVar4);
          uVar13 = 1;
          lVar15 = 0;
          uVar12 = 1;
          if (uVar9 != 0) {
            do {
              (*DAT_180409f18)(param_1,uVar4,uVar12 & 0xffffffff);
              iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
              if (iVar5 != 5) goto LAB_180156c81;
              uVar6 = (*DAT_180409e50)(param_1);
              (*DAT_180409f30)(param_1,&DAT_18033f608);
              (*DAT_180409f38)(param_1,uVar6);
              local_3c8[0] = '\0';
              iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
              if (iVar5 == 4) {
                local_3d8 = 0;
                _Src = (void *)(*DAT_180409e58)(param_1,0xffffffff,&local_3d8);
                if (_Src == (void *)0x0) goto LAB_180156c73;
                if (0x1a3 < local_3d8) {
                  local_3d8 = 0x1a3;
                }
                uVar14 = local_3d8;
                memcpy(local_3c8,_Src,local_3d8);
                local_3c8[uVar14] = '\0';
                (*DAT_180409f20)(param_1,0xfffffffe);
                if (local_3c8[0] == '\0') goto LAB_180156c81;
                uVar10 = FUN_180154f20(local_3c8,&DAT_18033e5ea,local_218,0x1b8);
                local_3d0 = &DAT_1803e8780;
                iVar5 = _Mtx_lock(&DAT_1803e8780);
                if (iVar5 != 0) {
                  std::_Throw_Cpp_error(5);
                  pcVar1 = (code *)swi(3);
                  uVar11 = (*pcVar1)();
                  return uVar11;
                }
                if (DAT_1803e87cc == 0x7fffffff) {
                  DAT_1803e87cc = 0x7ffffffe;
                  std::_Throw_Cpp_error(6);
                  pcVar1 = (code *)swi(3);
                  uVar11 = (*pcVar1)();
                  return uVar11;
                }
                if (DAT_1803e9df0 == DAT_1803e9df8) {
                  _Mtx_unlock(&DAT_1803e8780);
                  goto LAB_180156c81;
                }
                iVar5 = FUN_180155310(local_218,uVar10);
                _Mtx_unlock(&DAT_1803e8780);
                if (iVar5 == 0) goto LAB_180156c81;
                (*DAT_180409f20)(param_1,0xfffffffe);
                lVar15 = lVar15 + 1;
              }
              else {
LAB_180156c73:
                (*DAT_180409f20)(param_1,0xfffffffe);
LAB_180156c81:
                uVar14 = uVar13 & 0xffffffff;
                uVar13 = uVar13 + 1;
                (*DAT_180409d10)(param_1,uVar4,uVar14);
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 <= uVar9);
            if (lVar15 != 0) {
              for (; uVar13 <= uVar9; uVar13 = uVar13 + 1) {
                (*DAT_180409f58)(param_1);
                (*DAT_180409d10)(param_1,uVar4,uVar13 & 0xffffffff);
              }
              LOCK();
              DAT_180409d30 = DAT_180409d30 + lVar15;
              UNLOCK();
            }
          }
        }
      }
    }
  }
  return uVar11;
}


