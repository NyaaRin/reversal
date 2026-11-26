// 0x180130140  Features_SkyEditor_SkyEditorFeature_vfunc07
// size=586 thunk=false
// signature: undefined Features_SkyEditor_SkyEditorFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_SkyEditor_SkyEditorFeature_vfunc07(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  char local_58;
  char local_57;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if (DAT_1803fa46f == '\0') {
    local_30 = 0x93fd561a96ab0c67;
    local_28 = 0x1f5f08cfb5ace54;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_30);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_40,&local_28);
    piVar4 = (int *)FUN_1802029c0(*plVar3 + 0x28);
    if (*piVar4 != 0) {
      FUN_180024720(&local_58);
      if ((local_58 == '\0') && (local_57 != '\0')) {
        local_28 = 0x93fd561a96ab0c67;
        local_30 = 0x3cfd94a417011121;
        plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_28);
        plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_50,&local_30);
        pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
        local_28 = 0x93fd561a96ab0c67;
        local_30 = 0x3cfd94a417011121;
        cVar1 = *pcVar5;
        plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_28);
        plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_50,&local_30);
        uVar6 = FUN_1801fcfc0(*plVar3 + 0x28);
        *(bool *)uVar6 = cVar1 == '\0';
      }
    }
    local_28 = 0x93fd561a96ab0c67;
    local_30 = 0x3cfd94a417011121;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_28);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_50,&local_30);
    pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
    cVar1 = *pcVar5;
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 8) != '\0') {
        local_28 = 0x93fd561a96ab0c67;
        local_30 = 0x8911f3778b8c2d42;
        plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_28);
        plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_50,&local_30);
        piVar4 = (int *)FUN_1802029c0(*plVar3 + 0x28);
        if (*piVar4 == 0) {
          if (DAT_1803fa668 != (longlong *)0x0) {
            cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
            if (cVar2 != '\0') {
              uVar6 = FUN_18012a9f0();
              FUN_18012ab00(uVar6);
            }
          }
        }
        else {
          FUN_18012fc70(DAT_180380bb0,DAT_180380bb0,DAT_180380bb0);
        }
      }
    }
    else {
      FUN_18012fcf0(1);
    }
    *(char *)(param_1 + 8) = cVar1;
  }
  return;
}


