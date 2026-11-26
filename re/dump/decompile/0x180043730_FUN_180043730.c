// 0x180043730  FUN_180043730
// size=443 thunk=false
// signature: undefined FUN_180043730()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180043730(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_38 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    uVar6 = 0;
  }
  else {
    dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar7 = (uint)dVar8;
    if (((((int)uVar7 < 1) || (DAT_1803ff8a8 == 0)) || (uVar2 = uVar7 & 0xf, 7 < uVar2)) ||
       (((&DAT_1803ff7e0)[(ulonglong)uVar2 * 0x18] == '\0' ||
        (*(uint *)(&DAT_1803ff7e4 + (ulonglong)uVar2 * 0x18) != uVar7 >> 4)))) {
      (**(code **)(*plVar4 + 0xf8))(plVar4,0);
      uVar6 = 1;
    }
    else if (((DAT_1803ff8a8 == 0) || (DAT_1803fb038 == (code *)0x0)) ||
            (iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,2), iVar3 == 0)) {
      (**(code **)(*plVar4 + 0xf8))(plVar4,0);
      uVar6 = 1;
    }
    else {
      local_18[0] = 0;
      lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,2,local_18);
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0xf8))(plVar4,0);
        uVar6 = 1;
      }
      else {
        cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
        if (cVar1 != '\0') {
          dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
          uVar7 = (uint)dVar8;
          if ((-1 < (int)uVar7) && (uVar7 < local_18[0])) {
            local_18[0] = uVar7;
          }
        }
        if (0x4000 < local_18[0]) {
          local_18[0] = 0x4000;
        }
        (*DAT_1803faf48)(DAT_1803ff8a8,lVar5,local_18[0]);
        (**(code **)(*plVar4 + 0xf8))(plVar4,1);
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}


