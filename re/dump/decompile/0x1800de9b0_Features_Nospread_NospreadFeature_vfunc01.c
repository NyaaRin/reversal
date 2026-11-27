// 0x1800de9b0  Features_Nospread_NospreadFeature_vfunc01
// size=261 thunk=false
// signature: undefined Features_Nospread_NospreadFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Nospread_NospreadFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if (param_3 != 0) {
    local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
    local_28 = 0x93fd561a96ab0c67;
    local_20 = 0x4660102069c10657;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_38,&local_20);
    pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
    if (*pcVar5 != '\0') {
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar6 = (*pcVar1)(DAT_1803fa360,uVar3);
      if ((((lVar6 != 0) && (cVar2 = FUN_18001c330(lVar6), cVar2 != '\0')) &&
          (lVar6 = FUN_18001dbf0(lVar6), lVar6 != 0)) &&
         (plVar4 = (longlong *)FUN_180076750(lVar6), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0xd8))(plVar4,lVar6,param_3);
      }
    }
  }
  return;
}


