// 0x180018c10  FUN_180018c10
// size=340 thunk=false
// signature: undefined FUN_180018c10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180018c10(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *_Str2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  plVar6 = param_1 + 1;
  uVar1 = param_2[3];
  puVar8 = param_2;
  if (0xf < uVar1) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)puVar8 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[2]);
  }
  local_48 = param_2;
  lVar5 = FUN_180229bd0(plVar6,local_58,param_2,uVar10);
  lVar5 = *(longlong *)(lVar5 + 8);
  if (lVar5 == 0) {
    lVar5 = param_1[2];
  }
  if (lVar5 == param_1[2]) {
    puVar8 = (undefined8 *)*param_1;
    puVar11 = param_2;
    if (0xf < uVar1) {
      puVar11 = (undefined8 *)*param_2;
    }
    _Str2 = param_1 + 9;
    if (0xf < (ulonglong)param_1[0xc]) {
      _Str2 = (longlong *)*_Str2;
    }
    plVar2 = (longlong *)puVar8[1];
    for (plVar9 = (longlong *)*puVar8; plVar9 != plVar2; plVar9 = plVar9 + 1) {
      lVar5 = *plVar9;
      if ((lVar5 != 0) && (iVar3 = _stricmp(*(char **)(lVar5 + 0x18),(char *)_Str2), iVar3 == 0)) {
        uVar4 = FUN_180018a30(puVar8,lVar5,puVar11);
        goto LAB_180018cf5;
      }
    }
    uVar4 = 0;
LAB_180018cf5:
    plVar6 = (longlong *)FUN_180219900(plVar6,local_58,param_2);
    *(undefined4 *)(*plVar6 + 0x30) = uVar4;
  }
  else {
    plVar6 = (longlong *)FUN_180219900(plVar6,local_58,param_2);
    uVar4 = *(undefined4 *)(*plVar6 + 0x30);
  }
  FUN_18020e450(param_2);
  return uVar4;
}


