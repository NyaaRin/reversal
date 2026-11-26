// 0x180247bc0  FUN_180247bc0
// size=733 thunk=false
// signature: undefined FUN_180247bc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180247bc0(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x590) != 0) && (*(longlong *)(param_1 + 0x5d0) != 0)) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    fVar8 = (float)*(ulonglong *)(param_1 + 0x510) * *(float *)(param_1 + 0x4dc) +
            *(float *)(param_1 + 0x4bc);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_58 = *(float *)(param_1 + 0x4d8);
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520) + 0x28);
    local_68 = 0;
    fVar2 = *(float *)(param_1 + 0x4e8);
    uVar7 = *(ulonglong *)(param_1 + 0x510);
    local_60 = (float)*(ulonglong *)(param_1 + 0x590) * local_58;
    local_50 = 0;
    local_5c = *(undefined4 *)(param_1 + 0x4dc);
    local_54 = local_5c;
    if (uVar7 <= *(ulonglong *)(param_1 + 0x518)) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8 + uVar7 * 0x18) == 0) {
          local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + uVar7 * 0x18);
          if (uVar7 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) *
                      -0x5555555555555555)) {
            local_50 = *(undefined8 *)(uVar7 * 0x60 + 0x58 + *(longlong *)(param_1 + 0x50));
          }
          else {
            local_50 = 0;
          }
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar5 = *(longlong *)(lVar4 + 0xec0);
          *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
          lVar5 = *(longlong *)(lVar5 + 0x1520);
          *(float *)(lVar5 + 0x118) = fVar1 + fVar2;
          *(float *)(lVar5 + 0x11c) = fVar8;
          *(undefined1 *)(lVar5 + 0x159) = 1;
          FUN_18027ae00(uVar7 & 0xffffffff);
          plVar6 = *(longlong **)(param_1 + 0x5d0);
          if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(*plVar6 + 0x10))(plVar6,&local_68);
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
          iVar3 = *(int *)(lVar5 + 0x108);
          if (iVar3 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar5 + 0x108) = iVar3 + -1;
          }
          fVar8 = fVar8 + *(float *)(param_1 + 0x4dc);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 <= *(ulonglong *)(param_1 + 0x518));
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
    lVar4 = *(longlong *)(lVar4 + 0x1520);
    *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(param_1 + 0x4b8);
    *(undefined1 *)(lVar4 + 0x159) = 1;
  }
  return;
}


