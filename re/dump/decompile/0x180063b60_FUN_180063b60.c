// 0x180063b60  FUN_180063b60
// size=392 thunk=false
// signature: undefined FUN_180063b60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180063b60(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  void *_Src;
  void *_Dst;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_38 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar4 = 0;
  }
  else {
    dVar7 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar7;
    if (((((int)uVar5 < 1) ||
         (lVar6 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar5 >> 6)) ||
       (((&DAT_1805b88e1)[lVar6] == '\0' || (&DAT_1805b8928 + lVar6 == (undefined *)0x0)))) {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    }
    else {
      local_18[0] = 0;
      _Src = (void *)(**(code **)(*plVar3 + 0xb8))(plVar3,2,local_18);
      if ((_Src == (void *)0x0) || (local_18[0] == 0)) {
        (**(code **)(*plVar3 + 0xf8))(plVar3,1);
      }
      else {
        if (0x10000 < local_18[0]) {
          local_18[0] = 0x10000;
        }
        _Dst = (void *)FUN_18005e2e0();
        if (_Dst == (void *)0x0) {
          (**(code **)(*plVar3 + 0xf8))(plVar3,0);
        }
        else {
          memcpy(_Dst,_Src,(ulonglong)local_18[0]);
          pcVar1 = *(code **)(*plVar3 + 0xf8);
          uVar2 = FUN_180019e10(&DAT_1805b8928 + lVar6,_Dst,local_18[0] * 8);
          (*pcVar1)(plVar3,uVar2);
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


