// 0x180057ab0  FUN_180057ab0
// size=1135 thunk=false
// signature: undefined FUN_180057ab0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180057ab0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  HMODULE hModule;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)FUN_180039770();
  if (plVar2 == (longlong *)0x0) {
    if (DAT_1803ff2a8 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_1803ff2a8 = GetProcAddress(hModule,"lua_pushnil");
    }
    (*DAT_1803ff2a8)(param_2);
  }
  else {
    (**(code **)(*plVar2 + 0x30))(plVar2);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)*param_1);
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"origin_x");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 4));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"origin_y");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 8));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"origin_z");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0xc));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"start_x");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x10));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"start_y");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x14));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"start_z");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x18));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"normal_x");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x1c));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"normal_y");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x20));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"normal_z");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x24));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"pitch");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x28));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,&DAT_180343d6c);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x2c));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,&DAT_180343d64);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(int *)(*param_1 + 0x30));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"flags");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x40));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"scale");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x44));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"magnitude");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(*param_1 + 0x48));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"radius");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(int *)(*param_1 + 0x4c));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"attachment");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(*param_1 + 0x50));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"surfaceprop");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(int *)(*param_1 + 0x58));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"damagetype");
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(int *)(*param_1 + 0x5c));
    (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"hitbox");
    if (DAT_1803fa360 != (longlong *)0x0) {
      local_18[0] = *(undefined4 *)(*param_1 + 0x38);
      plVar3 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_18);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
        if (0 < iVar1) {
          (**(code **)(*plVar2 + 0xf0))(plVar2,(double)iVar1);
          (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,"entindex");
        }
      }
    }
  }
  return;
}


