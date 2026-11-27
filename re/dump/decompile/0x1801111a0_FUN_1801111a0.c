// 0x1801111a0  FUN_1801111a0
// size=459 thunk=false
// signature: undefined FUN_1801111a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801111a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_40 = 0x93fd561a96ab0c67;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_58,&local_40);
  lVar4 = *plVar1 + 0x28;
  if (param_1 == 1) {
    local_48 = 0x3fefb7f2d012d053;
    plVar1 = (longlong *)FUN_180241a30(lVar4,local_68,&local_48);
    puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
    *param_2 = *puVar2;
    local_48 = 0x3fefcaf2d012f09c;
    plVar1 = (longlong *)FUN_180241a30(lVar4,local_68,&local_48);
    puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
    uVar3 = *puVar2;
    local_48 = 0x3fefc7f2d012eb83;
  }
  else {
    if (param_1 != 2) {
      local_48 = 0x52baa275b0ded003;
      plVar1 = (longlong *)FUN_180241a30(lVar4,local_68,&local_48);
      puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
      *param_2 = *puVar2;
      local_48 = 0x52ba9575b0deb9ec;
      plVar1 = (longlong *)FUN_180241a30(lVar4,local_68,&local_48);
      puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
      local_48 = 0x52ba9275b0deb4d3;
      *param_3 = *puVar2;
      goto LAB_180111326;
    }
    local_48 = 0xe593c30362c405ee;
    plVar1 = (longlong *)FUN_180241a30(lVar4,local_68,&local_48);
    puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
    *param_2 = *puVar2;
    local_48 = 0xe593b80362c3f33d;
    plVar1 = (longlong *)FUN_180241a30(lVar4,local_68,&local_48);
    puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
    uVar3 = *puVar2;
    local_48 = 0xe593b30362c3eabe;
  }
  *param_3 = uVar3;
LAB_180111326:
  plVar1 = (longlong *)FUN_180241a30(lVar4,local_68,&local_48);
  puVar2 = (undefined4 *)FUN_180202dc0(*plVar1 + 0x28);
  *param_4 = *puVar2;
  return;
}


