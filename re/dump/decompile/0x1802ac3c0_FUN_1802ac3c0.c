// 0x1802ac3c0  FUN_1802ac3c0
// size=417 thunk=false
// signature: undefined FUN_1802ac3c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802ac3c0(undefined8 param_1,float *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  float local_58;
  float local_54;
  undefined1 local_50;
  undefined1 local_4f [7];
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(char *)(lVar1 + 0x10) == '\0') &&
     (__dyn_tls_on_demand_init(), *(char *)(lVar1 + 0x10) == '\0')) {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar5 = *(ulonglong *)(lVar1 + 0x1520);
  *(undefined1 *)(uVar5 + 0xce) = 1;
  plVar2 = *(longlong **)(lVar1 + 0x1520);
  if (*(char *)((longlong)plVar2 + 0xd1) == '\0') {
    fVar7 = param_2[1];
    if (param_2[1] == 0.0) {
      fVar7 = DAT_180381318;
    }
    fVar6 = DAT_180381318;
    if (*param_2 != 0.0) {
      fVar6 = *param_2;
    }
    FUN_18027faa0(&local_58,CONCAT44(fVar7,fVar6),0,0);
    iVar4 = FUN_180268980(param_1,0,
                          *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
    if (*(int *)(*plVar2 + 0x1578) == iVar4) {
      FUN_1802899e0(iVar4,0xb,param_1);
    }
    local_48 = *(float *)(plVar2 + 0x23);
    local_3c = local_54 + *(float *)((longlong)plVar2 + 0x11c);
    local_44 = *(undefined4 *)((longlong)plVar2 + 0x11c);
    local_40 = local_48 + local_58;
    FUN_18027f400(&local_58,DAT_180381384);
    uVar5 = FUN_18027f160(&local_48,iVar4,0,2);
    if ((char)uVar5 != '\0') {
      local_68 = 0;
      bVar3 = FUN_1802ab600(&local_48,iVar4,local_4f,&local_50);
      FUN_18026c370(&local_48,iVar4,0);
      return (ulonglong)bVar3;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


