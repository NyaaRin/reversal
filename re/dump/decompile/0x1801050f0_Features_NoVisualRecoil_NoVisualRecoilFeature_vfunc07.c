// 0x1801050f0  Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc07
// size=544 thunk=false
// signature: undefined Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc07
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined1 auStack_88 [64];
  undefined1 local_48 [16];
  uint local_38;
  uint local_34;
  uint local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar5 = (*pcVar1)(DAT_1803fa360,uVar3);
  if (((lVar5 != 0) && (cVar2 = FUN_1800da140(), cVar2 != '\0')) &&
     (cVar2 = FUN_18001c330(lVar5), cVar2 != '\0')) {
    iVar4 = FUN_180103f20();
    if (iVar4 == 1) {
      local_20 = 0x93fd561a96ab0c67;
      local_28 = 0x3c5438a1a47f8b76;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_38,&local_20);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_48,&local_28);
      pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
      if (*pcVar7 != '\0') {
        return;
      }
    }
    FUN_180104fb0(lVar5,param_3);
    lVar5 = FUN_18001dbf0(lVar5);
    if (((lVar5 != 0) && (plVar6 = (longlong *)FUN_180076750(lVar5), plVar6 != (longlong *)0x0)) &&
       ((cVar2 = (**(code **)(*plVar6 + 0xa8))(plVar6), cVar2 != '\0' &&
        (DAT_1803fa668 != (longlong *)0x0)))) {
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_38);
      if ((((local_38 & 0x7f800000) != 0x7f800000) && ((local_34 & 0x7f800000) != 0x7f800000)) &&
         (((local_30 & 0x7f800000) != 0x7f800000 &&
          ((((*(uint *)(param_3 + 0x4c) & 0x7f800000) != 0x7f800000 &&
            ((*(uint *)(param_3 + 0x50) & 0x7f800000) != 0x7f800000)) &&
           ((*(uint *)(param_3 + 0x54) & 0x7f800000) != 0x7f800000)))))) {
        *(uint *)(param_3 + 0x4c) = local_38;
        *(uint *)(param_3 + 0x50) = local_34;
      }
    }
  }
  return;
}


