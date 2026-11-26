// 0x18003d6d0  FUN_18003d6d0
// size=466 thunk=false
// signature: undefined FUN_18003d6d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18003d6d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_38 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar6 = 0;
  }
  else {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar7 = (uint)dVar8;
    if ((((((int)uVar7 < 1) || (uVar4 = (ulonglong)(uVar7 & 0xf), 7 < (uVar7 & 0xf))) ||
         ((&DAT_1803e75c0)[uVar4 * 0x30] == '\0')) ||
        ((*(uint *)(&DAT_1803e75c4 + uVar4 * 0x30) != uVar7 >> 4 ||
         ((&DAT_1803e75d0)[uVar4 * 6] == 0)))) || ((&DAT_1803e75d8)[uVar4 * 6] == 0)) {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    }
    else if ((DAT_1803fb038 == (code *)0x0) ||
            (iVar2 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar4 * 6],2), iVar2 == 0)) {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    }
    else {
      local_18[0] = 0;
      lVar5 = (**(code **)(*plVar3 + 0xb8))(plVar3,2,local_18);
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0xf8))(plVar3,0);
      }
      else {
        cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
        if (cVar1 != '\0') {
          dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
          uVar7 = (uint)dVar8;
          if ((-1 < (int)uVar7) && (uVar7 < local_18[0])) {
            local_18[0] = uVar7;
          }
        }
        if (0x4000 < local_18[0]) {
          local_18[0] = 0x4000;
        }
        (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar4 * 6] + 0xe8))
                  ((longlong *)(&DAT_1803e75d0)[uVar4 * 6],lVar5);
        (**(code **)(*plVar3 + 0xf8))(plVar3,1);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


