// 0x180057740  FUN_180057740
// size=869 thunk=false
// signature: undefined FUN_180057740()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180057740(char *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *_Size;
  char *pcVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  char *local_100;
  undefined8 local_f8;
  undefined8 ******local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  ulonglong local_d8;
  char *local_d0;
  undefined1 local_c8;
  char *local_c0;
  undefined4 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  undefined1 local_68;
  undefined1 local_60 [32];
  char *local_40;
  ulonglong local_38;
  
  uVar3 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_180057a76;
  local_f8 = param_2;
  local_40 = param_1;
  local_38 = uVar3;
  if ((DAT_180427630 & 1) == 0) {
    DAT_180427630 = DAT_180427630 | 1;
    DAT_18042bcf0 = (char *)0x0;
    DAT_18042bcf8 = 0;
    DAT_18042bcf0 = (char *)FUN_1802d8350(0x60);
    *(char **)DAT_18042bcf0 = DAT_18042bcf0;
    *(char **)(DAT_18042bcf0 + 8) = DAT_18042bcf0;
    *(char **)(DAT_18042bcf0 + 0x10) = DAT_18042bcf0;
    DAT_18042bcf0[0x18] = '\x01';
    DAT_18042bcf0[0x19] = '\x01';
    atexit(FUN_180309200);
  }
  local_100 = (char *)0x0;
  local_f0 = (undefined8 *******)0x0;
  uStack_e8 = 0;
  local_e0 = (char *)0x0;
  local_d8 = 0;
  sVar4 = strlen(param_1);
  FUN_18001d080(&local_f0,param_1,sVar4);
  uVar3 = local_d8;
  pcVar7 = local_e0;
  local_c0 = *(char **)(DAT_18042bcf0 + 8);
  local_b8 = 0;
  local_b0 = DAT_18042bcf0;
  pcVar8 = DAT_18042bcf0;
  pcVar9 = local_c0;
  while (pcVar10 = pcVar9, pcVar10[0x19] == '\0') {
    pcVar9 = pcVar10 + 0x20;
    pppppppuVar6 = &local_f0;
    if (0xf < uVar3) {
      pppppppuVar6 = (undefined8 *******)local_f0;
    }
    pcVar11 = *(char **)(pcVar10 + 0x30);
    if (0xf < *(ulonglong *)(pcVar10 + 0x38)) {
      pcVar9 = *(char **)pcVar9;
    }
    local_100 = pcVar7;
    _Size = pcVar11;
    if (pcVar7 < pcVar11) {
      _Size = pcVar7;
    }
    local_c0 = pcVar10;
    local_88 = pcVar11;
    iVar2 = memcmp(pcVar9,pppppppuVar6,(size_t)_Size);
    if (iVar2 == 0) {
      if (pcVar11 < pcVar7) {
        local_108 = 0xff;
        cVar1 = -1;
        goto LAB_1800578bc;
      }
      if (pcVar7 < pcVar11) goto LAB_1800578b5;
      local_106 = 0;
LAB_1800578d0:
      local_b8 = 1;
      pcVar8 = pcVar10;
      pcVar9 = *(char **)pcVar10;
      local_b0 = pcVar10;
    }
    else {
      if (iVar2 < 0) {
        local_108 = 0xff;
        cVar1 = -1;
      }
      else {
LAB_1800578b5:
        local_108 = 1;
        cVar1 = '\x01';
      }
LAB_1800578bc:
      if (-1 < cVar1) goto LAB_1800578d0;
      local_b8 = 0;
      pcVar9 = *(char **)(pcVar10 + 0x10);
    }
  }
  if (pcVar8[0x19] == '\0') {
    pcVar9 = pcVar8 + 0x20;
    pcVar10 = *(char **)(pcVar8 + 0x30);
    if (0xf < *(ulonglong *)(pcVar8 + 0x38)) {
      pcVar9 = *(char **)pcVar9;
    }
    pppppppuVar6 = &local_f0;
    if (0xf < uVar3) {
      pppppppuVar6 = (undefined8 *******)local_f0;
    }
    local_d0 = pcVar7;
    pcVar11 = pcVar7;
    if (pcVar10 < pcVar7) {
      pcVar11 = pcVar10;
    }
    local_80 = pcVar10;
    iVar2 = memcmp(pppppppuVar6,pcVar9,(size_t)pcVar11);
    if (iVar2 == 0) {
      if (pcVar7 < pcVar10) {
        local_107 = 0xff;
        cVar1 = -1;
        goto LAB_180057953;
      }
      if (pcVar10 < pcVar7) goto LAB_18005794c;
      local_105 = 0;
    }
    else {
      if (iVar2 < 0) {
        local_107 = 0xff;
        cVar1 = -1;
      }
      else {
LAB_18005794c:
        local_107 = 1;
        cVar1 = '\x01';
      }
LAB_180057953:
      if (cVar1 < '\0') goto LAB_180057957;
    }
  }
  else {
LAB_180057957:
    pcVar8 = DAT_18042bcf0;
  }
  local_100 = pcVar8;
  FUN_18020e450(&local_f0);
  local_d0 = DAT_18042bcf0;
  if (pcVar8 == DAT_18042bcf0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_18001d080(&local_a8,"Effect_",7);
    uVar5 = FUN_1801fc680(local_60,&local_a8,param_1);
    FUN_180211340(extraout_XMM0_Da,&local_d0,&local_40,uVar5);
    pcVar8 = local_d0;
    local_40 = local_d0;
    local_70 = local_d0;
    local_68 = local_c8;
    local_100 = local_d0;
    FUN_18020e450(local_60);
    FUN_18020e450(&local_a8);
  }
  pcVar9 = pcVar8 + 0x40;
  pcVar7 = pcVar9;
  if (0xf < *(ulonglong *)(pcVar8 + 0x58)) {
    pcVar7 = *(char **)pcVar9;
  }
  local_78 = pcVar9;
  uVar3 = FUN_18003a090(pcVar7);
  if ((char)uVar3 != '\0') {
    if (0xf < *(ulonglong *)(pcVar8 + 0x58)) {
      pcVar9 = *(char **)pcVar9;
    }
    uVar3 = FUN_180201850(pcVar9);
    return uVar3;
  }
LAB_180057a76:
  return uVar3 & 0xffffffffffffff00;
}


