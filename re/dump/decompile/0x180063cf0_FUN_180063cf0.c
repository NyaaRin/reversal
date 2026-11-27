// 0x180063cf0  FUN_180063cf0
// size=455 thunk=false
// signature: undefined FUN_180063cf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180063cf0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_48 [32];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    uVar6 = 0;
  }
  else {
    dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    uVar7 = (uint)dVar9;
    if (((((int)uVar7 < 1) ||
         (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) ||
       (((&DAT_1805b88e1)[lVar8] == '\0' || (&DAT_1805b8928 + lVar8 == (undefined *)0x0)))) {
      (**(code **)(*plVar5 + 0xf8))(plVar5,0);
    }
    else {
      local_28[0] = 0;
      _Src = (void *)(**(code **)(*plVar5 + 0xb8))(plVar5,2,local_28);
      if (_Src == (void *)0x0) {
        (**(code **)(*plVar5 + 0xf8))(plVar5,0);
      }
      else {
        dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);
        iVar4 = 0;
        if (-1 < (int)dVar9) {
          iVar4 = (int)dVar9;
        }
        if (0x80000 < iVar4) {
          iVar4 = 0x80000;
        }
        iVar2 = local_28[0] * 8;
        if (iVar4 <= local_28[0] * 8) {
          iVar2 = iVar4;
        }
        if (iVar2 < 1) {
          (**(code **)(*plVar5 + 0xf8))(plVar5,1);
        }
        else {
          iVar4 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
          _Dst = (void *)FUN_18005e2e0(iVar4);
          if (_Dst == (void *)0x0) {
            (**(code **)(*plVar5 + 0xf8))(plVar5,0);
          }
          else {
            memcpy(_Dst,_Src,(longlong)iVar4);
            pcVar1 = *(code **)(*plVar5 + 0xf8);
            uVar3 = FUN_180019e10(&DAT_1805b8928 + lVar8,_Dst,iVar2);
            (*pcVar1)(plVar5,uVar3);
          }
        }
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


