// 0x18027d4f0  FUN_18027d4f0
// size=734 thunk=false
// signature: undefined FUN_18027d4f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027d4f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  char *local_48;
  char *local_38 [3];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar3 = *param_2;
  lVar5 = *(longlong *)(lVar5 + 0xec0);
  if (iVar3 == 1) {
    if (((float)param_2[3] == DAT_180381454) && ((float)param_2[4] == DAT_180381454)) {
      if ((*(byte *)(lVar5 + 0x28e4) & 0x80) != 0) {
        FUN_180289170("[io] %s: MousePos (-FLT_MAX, -FLT_MAX)\n",param_1);
      }
    }
    else if ((*(byte *)(lVar5 + 0x28e4) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      FUN_180289170("[io] %s: MousePos (%.1f, %.1f) (%s)\n",param_1,(double)(float)param_2[3],
                    (double)(float)param_2[4]);
    }
  }
  else if (iVar3 == 3) {
    if ((*(byte *)(lVar5 + 0x28e4) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      puVar4 = &DAT_180348b68;
      if ((char)param_2[4] != '\0') {
        puVar4 = &DAT_180363038;
      }
      FUN_180289170("[io] %s: MouseButton %d %s (%s)\n",param_1,param_2[3],puVar4);
    }
  }
  else if (iVar3 == 2) {
    if ((*(byte *)(lVar5 + 0x28e4) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      FUN_180289170("[io] %s: MouseWheel (%.3f, %.3f) (%s)\n",param_1,(double)(float)param_2[3],
                    (double)(float)param_2[4]);
    }
  }
  else if (iVar3 == 4) {
    if ((*(byte *)(lVar5 + 0x28e4) & 0x80) != 0) {
      uVar2 = FUN_18027b110(param_2[3]);
      FUN_180289170("[io] %s: Key \"%s\" %s\n",param_1,uVar2);
    }
  }
  else if (iVar3 == 5) {
    iVar3 = param_2[3];
    iVar1 = FUN_180268db0(local_20,iVar3,iVar3);
    local_20[iVar1] = 0;
    if ((*(byte *)(lVar5 + 0x28e4) & 0x80) != 0) {
      FUN_180289170("[io] %s: Text: \'%s\' (U+%08X)\n",param_1,local_20,iVar3);
    }
  }
  else if ((iVar3 == 6) && ((*(byte *)(lVar5 + 0x28e4) & 0x80) != 0)) {
    FUN_180289170("[io] %s: AppFocused %d\n",param_1,(char)param_2[3]);
  }
  return;
}


