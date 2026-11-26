// 180273410  FUN_180273410
// signature: undefined FUN_180273410()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180273410(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  lVar4 = *(longlong *)(lVar3 + 0x1520);
  uVar1 = *(undefined4 *)(lVar3 + 0x1488);
  *(undefined4 *)(lVar3 + 0x1488) = *(undefined4 *)(lVar4 + 0x10);
  local_78 = *(undefined8 *)(lVar4 + 0x30);
  fVar6 = (float)local_78;
  FUN_180278d40();
  if (*(short *)(lVar4 + 0xda) == 1) {
    lVar2 = *(longlong *)(lVar3 + 0x1520);
    local_64 = *(float *)(lVar2 + 0x11c);
    local_68 = *(float *)(lVar2 + 0x118);
    local_5c = local_64 + local_78._4_4_;
    local_60 = local_68 + fVar6;
    FUN_18027f400(&local_78,0xbf800000);
    uVar5 = *(uint *)(lVar4 + 0x18) & 0x100;
    if (((*(short *)(lVar4 + 0x174) == 0) && (*(char *)(lVar4 + 0x17a) == '\0')) || (uVar5 != 0)) {
      FUN_18027f160(&local_68,*(undefined4 *)(lVar4 + 0x90),0,2);
      if (uVar5 != 0) {
        *(ushort *)(lVar2 + 0x176) = *(ushort *)(lVar2 + 0x176) | *(ushort *)(lVar4 + 0x176);
      }
    }
    else {
      FUN_18027f160(&local_68,*(undefined4 *)(lVar4 + 0x90),0,0);
      FUN_18026c370(&local_68,*(undefined4 *)(lVar4 + 0x90),0);
      if ((*(short *)(lVar4 + 0x174) == 0) && (lVar4 == *(longlong *)(lVar3 + 0x2070))) {
        local_70 = local_60 + 2.0;
        local_78 = CONCAT44(local_64 - 2.0,local_68 - 2.0);
        local_6c = local_5c + 2.0;
        FUN_18026c370(&local_78,*(undefined4 *)(lVar3 + 0x206c),2);
      }
    }
    if (*(longlong *)(lVar3 + 0x1528) == lVar4) {
      *(uint *)(lVar3 + 0x1f00) = *(uint *)(lVar3 + 0x1f00) | 0x80;
    }
    *(undefined4 *)(lVar4 + 0x1e4) = *(undefined4 *)(lVar3 + 0x1f00);
  }
  else {
    local_68 = *(float *)(lVar4 + 0x28);
    local_64 = *(float *)(lVar4 + 0x2c);
    local_60 = local_68 + *(float *)(lVar4 + 0x30);
    local_5c = local_64 + *(float *)(lVar4 + 0x34);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    FUN_18026f490(*(undefined4 *)(lVar4 + 0x90),
                  *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1eb8),
                  *(undefined4 *)(lVar4 + 0x1e4),&local_68);
  }
  *(undefined4 *)(lVar3 + 0x2890) = 0xff7fffff;
  *(undefined4 *)(lVar3 + 0x1488) = uVar1;
  return;
}


