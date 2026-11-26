// 0x180107da0  Features_LookBeam_LookBeamFeature_vfunc05
// size=476 thunk=false
// signature: undefined Features_LookBeam_LookBeamFeature_vfunc05()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_LookBeam_LookBeamFeature_vfunc05(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_30 = 0x214e9812b55edc3;
  local_38 = 0x93fd561a96ab0c67;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_58,&local_38);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_48,&local_30);
  pcVar4 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
  if (*pcVar4 != '\0') {
    local_30 = 0x93fd561a96ab0c67;
    local_38 = 0xd7a75c528ea57217;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_30);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_58,&local_38);
    piVar5 = (int *)FUN_1802029c0(*plVar3 + 0x28);
    if (*piVar5 == 0) {
      local_30 = 0x93fd561a96ab0c67;
      local_38 = 0xe07bf745bbabe848;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_30);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_58,&local_38);
      pfVar6 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      if (*pfVar6 <= DAT_180380ba0 && DAT_180380ba0 != *pfVar6) {
        return;
      }
    }
  }
  uVar1 = DAT_180380bb0;
  iVar7 = 0;
  iVar2 = DAT_1804099a8;
  if (0 < DAT_1804099a8) {
    do {
      plVar3 = (longlong *)(&DAT_180409910)[(longlong)iVar7 * 2];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xd8))(plVar3,uVar1);
        (**(code **)(*plVar3 + 0xe8))(plVar3,0x200000,(&DAT_18040991c)[(longlong)iVar7 * 0x10]);
        iVar2 = DAT_1804099a8;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  DAT_1804099a8 = 0;
  return;
}


