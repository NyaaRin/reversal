// 0x180056e80  FUN_180056e80
// size=437 thunk=false
// signature: undefined FUN_180056e80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180056e80(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_1)) {
    uVar10 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,1,4);
    lVar7 = 0;
    lVar6 = lVar7;
    if (cVar2 != '\0') {
      lVar6 = (**(code **)(*plVar5 + 0xb8))(plVar5,1,0);
    }
    cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,2,4);
    if (cVar2 != '\0') {
      lVar7 = (**(code **)(*plVar5 + 0xb8))(plVar5,2,0);
    }
    if (((lVar6 == 0) || (lVar7 == 0)) || (lVar8 = FUN_180016fb0(lVar6), lVar8 == 0)) {
      (**(code **)(*plVar5 + 0xf8))(plVar5,0);
    }
    else {
      uVar9 = FUN_1800170a0(lVar8);
      if ((uVar9 & 2) == 0) {
        cVar2 = FUN_1800170f0(lVar8);
        if (cVar2 == '\0') {
          uVar4 = FUN_1800170a0(lVar8);
          if ((uVar4 & 0x406012) != 0) {
            FUN_1800170c0(lVar8,~(uVar4 & 0x406012) & uVar4);
          }
        }
        local_e8 = lVar7;
        FUN_180012ac0(local_d8,0xc0,"%s %s",lVar6);
        pcVar1 = *(code **)(*plVar5 + 0xf8);
        uVar3 = FUN_180017040(local_d8);
        (*pcVar1)(plVar5,uVar3);
      }
      else {
        (**(code **)(*plVar5 + 0xf8))(plVar5,0);
      }
    }
    uVar10 = 1;
  }
  return uVar10;
}


