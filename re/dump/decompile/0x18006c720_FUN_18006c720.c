// 0x18006c720  FUN_18006c720
// size=645 thunk=false
// signature: undefined FUN_18006c720()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006c720(undefined *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  char *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong local_f0;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  longlong local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  puVar8 = auStack_138;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_e0 = (undefined1 *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  local_e8 = &DAT_1803da640;
  iVar3 = _Mtx_lock(&DAT_1803da640);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803da68c == 0x7fffffff) {
    DAT_1803da68c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_1805c7c48 == 0) {
    _Mtx_unlock(&DAT_1803da640);
  }
  else {
    iVar3 = (int)DAT_1805c7c48;
    if (0x20 < iVar3) {
      iVar3 = 0x20;
    }
    local_f0 = (DAT_1805c7c40 + DAT_1805c7c48) - (longlong)iVar3;
    if (DAT_1805c7c28 == (undefined8 *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = *DAT_1805c7c28;
    }
    FUN_1802120a0(&local_e0,&local_f8,(DAT_1805c7c40 + DAT_1805c7c48) - local_f0);
    _Mtx_unlock(&DAT_1803da640);
    puVar6 = &DAT_18034629c;
    if (param_1 != (undefined *)0x0) {
      puVar6 = param_1;
    }
    FUN_180014410("[NWCAP] --- %s (%d packet(s)) ---\n",puVar6,
                  ((longlong)puStack_d8 - (longlong)local_e0 >> 2) * -0x303030303030303);
    puVar2 = puStack_d8;
    for (puVar5 = local_e0; puVar5 != puVar2; puVar5 = puVar5 + 0x154) {
      local_108 = *(undefined4 *)(puVar5 + 0xc);
      local_110 = *(undefined4 *)(puVar5 + 8);
      local_118 = "?";
      if (puVar5[0x14] != '\0') {
        local_118 = puVar5 + 0x14;
      }
      FUN_180014410("[NWCAP] #%u subtype=%d tag=%d name=\'%s\' bits=%d len=%d\n",
                    *(undefined4 *)(puVar5 + 0x10),*puVar5,*(undefined4 *)(puVar5 + 4));
      iVar3 = 0;
      if (0 < *(int *)(puVar5 + 0xc)) {
        do {
          iVar9 = 0;
          iVar7 = 0;
          do {
            if (*(int *)(puVar5 + 0xc) <= iVar7 + iVar3) break;
            iVar4 = FUN_180012ac0(local_c8 + iVar9,0x80 - (longlong)iVar9,"%02X ",
                                  puVar5[(longlong)(iVar7 + iVar3) + 0x54]);
            iVar9 = iVar9 + iVar4;
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x10);
          FUN_180014410("[NWCAP]   +%02X: %s\n",iVar3,local_c8);
          iVar3 = iVar3 + 0x10;
        } while (iVar3 < *(int *)(puVar5 + 0xc));
      }
      FUN_18006c500(puVar5);
    }
  }
  if (local_e0 != (undefined1 *)0x0) {
    puVar5 = local_e0;
    puVar8 = auStack_138;
    if ((0xfff < (ulonglong)((local_d0 - (longlong)local_e0 >> 2) * 4)) &&
       (puVar5 = *(undefined1 **)(local_e0 + -8), puVar8 = auStack_138,
       (undefined1 *)0x1f < local_e0 + (-8 - (longlong)puVar5))) {
      puVar5 = (undefined1 *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar8 = auStack_130;
    }
    *(undefined8 *)(puVar8 + -8) = 0x18006c973;
    free(puVar5);
    *(undefined8 *)(puVar8 + 0x58) = 0;
    *(undefined8 *)(puVar8 + 0x60) = 0;
    *(undefined8 *)(puVar8 + 0x68) = 0;
  }
  *(undefined8 *)(puVar8 + -8) = 0x18006c995;
  return;
}


