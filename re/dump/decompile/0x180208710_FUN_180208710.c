// 0x180208710  FUN_180208710
// size=994 thunk=false
// signature: undefined FUN_180208710()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_180208710(ulonglong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 uVar6;
  char cVar7;
  BOOL BVar8;
  int iVar9;
  code *pcVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *_Memory;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  code *local_60;
  ulonglong local_58;
  undefined *local_48;
  DWORD local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if ((param_1 != (ulonglong *)0x0) && (BVar8 = IsBadReadPtr(param_1,8), BVar8 == 0)) {
    uVar13 = *param_1;
    local_60 = (code *)(uVar13 >> 0x10);
    local_58 = uVar13 >> 8;
    if (uVar13 != 0) {
      plVar1 = (longlong *)(uVar13 + 0x60);
      local_68 = uVar13;
      BVar8 = IsBadReadPtr(plVar1,8);
      if (BVar8 == 0) {
        local_48 = &DAT_1803e8860;
        iVar9 = _Mtx_lock(&DAT_1803e8860);
        if (iVar9 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar5 = (code *)swi(3);
          uVar6 = (*pcVar5)();
          return uVar6;
        }
        if (DAT_1803e88ac == 0x7fffffff) {
          DAT_1803e88ac = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        uVar12 = ((((((((uVar13 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_58 & 0xff) *
                       0x100000001b3 ^ (ulonglong)local_60 & 0xff) * 0x100000001b3 ^
                     uVar13 >> 0x18 & 0xff) * 0x100000001b3 ^ uVar13 >> 0x20 & 0xff) * 0x100000001b3
                   ^ uVar13 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar13 >> 0x30 & 0xff) * 0x100000001b3
                 ^ uVar13 >> 0x38) * 0x100000001b3 & DAT_180458ad0;
        plVar11 = *(longlong **)(DAT_180458ab8 + 8 + uVar12 * 0x10);
        if (plVar11 == DAT_180458aa8) {
LAB_180208892:
          plVar11 = (longlong *)0x0;
        }
        else {
          uVar2 = plVar11[2];
          while (uVar13 != uVar2) {
            if (plVar11 == *(longlong **)(DAT_180458ab8 + uVar12 * 0x10)) goto LAB_180208892;
            plVar11 = (longlong *)plVar11[1];
            uVar2 = plVar11[2];
          }
        }
        if ((plVar11 != (longlong *)0x0) && (plVar11 != DAT_180458aa8)) {
          pcVar5 = (code *)*plVar1;
          _Mtx_unlock(&DAT_1803e8860);
          return pcVar5 == FUN_180191020;
        }
        pcVar5 = (code *)*plVar1;
        if ((((pcVar5 != (code *)0x0) && (pcVar5 != FUN_180191020)) &&
            (cVar7 = FUN_180190ef0(uVar13), cVar7 != '\0')) &&
           (cVar7 = FUN_180190ef0(pcVar5), cVar7 != '\0')) {
          local_40[0] = 0;
          BVar8 = VirtualProtect(plVar1,8,0x40,local_40);
          if (BVar8 != 0) {
            local_60 = pcVar5;
            FUN_180214000();
            LOCK();
            pcVar10 = (code *)*plVar1;
            if (pcVar5 == pcVar10) {
              *plVar1 = (longlong)FUN_180191020;
              pcVar10 = pcVar5;
            }
            UNLOCK();
            local_40[1] = 0;
            VirtualProtect(plVar1,8,local_40[0],local_40 + 1);
            lVar4 = DAT_180458ab8;
            plVar1 = DAT_180458aa8;
            if (pcVar10 == pcVar5) {
              _Mtx_unlock(&DAT_1803e8860);
              return true;
            }
            uVar13 = ((((((((local_68 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           local_68 >> 8 & 0xff) * 0x100000001b3 ^ local_68 >> 0x10 & 0xff) *
                          0x100000001b3 ^ local_68 >> 0x18 & 0xff) * 0x100000001b3 ^
                        local_68 >> 0x20 & 0xff) * 0x100000001b3 ^ local_68 >> 0x28 & 0xff) *
                       0x100000001b3 ^ local_68 >> 0x30 & 0xff) * 0x100000001b3 ^ local_68 >> 0x38)
                     * 0x100000001b3 & DAT_180458ad0;
            plVar11 = *(longlong **)(DAT_180458ab8 + 8 + uVar13 * 0x10);
            _Memory = (longlong *)0x0;
            if (plVar11 != DAT_180458aa8) {
              uVar12 = plVar11[2];
              plVar3 = plVar11;
              while ((_Memory = plVar3, local_68 != uVar12 &&
                     (_Memory = (longlong *)0x0,
                     plVar3 != *(longlong **)(DAT_180458ab8 + uVar13 * 0x10)))) {
                plVar3 = (longlong *)plVar3[1];
                uVar12 = plVar3[2];
              }
            }
            if (_Memory != (longlong *)0x0) {
              lVar14 = uVar13 * 0x10;
              if (plVar11 == _Memory) {
                if (*(longlong **)(lVar14 + DAT_180458ab8) == _Memory) {
                  *(longlong **)(lVar14 + DAT_180458ab8) = DAT_180458aa8;
                  *(longlong **)(lVar4 + 8 + uVar13 * 0x10) = plVar1;
                }
                else {
                  *(longlong *)(DAT_180458ab8 + 8 + uVar13 * 0x10) = _Memory[1];
                }
              }
              else if (*(longlong **)(lVar14 + DAT_180458ab8) == _Memory) {
                *(longlong *)(lVar14 + DAT_180458ab8) = *_Memory;
              }
              lVar4 = *_Memory;
              DAT_180458ab0 = DAT_180458ab0 + -1;
              *(longlong *)_Memory[1] = lVar4;
              *(longlong *)(lVar4 + 8) = _Memory[1];
              free(_Memory);
            }
          }
        }
        _Mtx_unlock(&DAT_1803e8860);
      }
    }
  }
  return false;
}


