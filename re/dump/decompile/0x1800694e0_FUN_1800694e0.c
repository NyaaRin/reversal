// 0x1800694e0  FUN_1800694e0
// size=1120 thunk=false
// signature: undefined FUN_1800694e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1800694e0(char *param_1,undefined8 *******param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong *plVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 *******local_1b0;
  undefined **ppuStack_1a8;
  undefined8 *******local_188;
  undefined8 local_180;
  undefined8 *******local_168;
  char local_160 [32];
  undefined8 *******local_140;
  undefined8 *******local_138;
  undefined8 local_130;
  char *local_128;
  size_t local_120;
  char *local_118;
  size_t local_110;
  undefined1 local_108 [8];
  undefined8 *****local_100 [5];
  undefined8 *******local_d8 [2];
  longlong local_c8;
  ulonglong local_c0;
  undefined8 *******local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *******local_98;
  undefined8 *******pppppppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  longlong local_68 [9];
  
  local_68[6] = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_1b8 = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  uVar3 = FUN_180068ea0(&local_188);
  FUN_1800688e0(local_d8,uVar3);
  FUN_18021e290(&local_188);
  local_1b0 = (undefined8 *******)0x0;
  ppuStack_1a8 = &PTR_vftable_std__System_error_category_1803e9500;
  FUN_180067d80(local_d8,&local_1b0);
  if ((int)local_1b0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1800670f0("create_directories",&local_1b0,local_d8);
  }
  local_138 = &local_188;
  local_118 = param_1;
  sVar4 = strlen(param_1);
  local_110 = sVar4;
  uVar1 = FUN_1802d75e4();
  local_128 = param_1;
  local_120 = sVar4;
  FUN_1800650e0(&local_188,uVar1,&local_128);
  local_1b8 = 0;
  uVar3 = FUN_180066720(&local_1b0,local_d8,&local_188);
  FUN_1800688e0(local_b8,uVar3);
  FUN_18021e290(&local_1b0);
  FUN_18021e290(&local_188);
  local_98 = (undefined8 *******)0x0;
  pppppppuStack_90 = (undefined8 *******)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_180066920(local_d8,&local_98);
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  FUN_180066920(local_b8,local_68);
  do {
    local_168 = local_d8;
    if (7 < local_c0) {
      local_168 = local_d8[0];
    }
    local_168 = (undefined8 *******)((longlong)local_168 + local_c8 * 2);
    local_118 = local_160;
    local_160[8] = '\0';
    local_160[9] = '\0';
    local_160[10] = '\0';
    local_160[0xb] = '\0';
    local_160[0xc] = '\0';
    local_160[0xd] = '\0';
    local_160[0xe] = '\0';
    local_160[0xf] = '\0';
    local_160[0x10] = '\0';
    local_160[0x11] = '\0';
    local_160[0x12] = '\0';
    local_160[0x13] = '\0';
    local_160[0x14] = '\0';
    local_160[0x15] = '\0';
    local_160[0x16] = '\0';
    local_160[0x17] = '\0';
    local_160[0x18] = '\a';
    local_160[0x19] = '\0';
    local_160[0x1a] = '\0';
    local_160[0x1b] = '\0';
    local_160[0x1c] = '\0';
    local_160[0x1d] = '\0';
    local_160[0x1e] = '\0';
    local_160[0x1f] = '\0';
    local_160[0] = '\0';
    local_160[1] = '\0';
    local_160[2] = '\0';
    local_160[3] = '\0';
    local_160[4] = '\0';
    local_160[5] = '\0';
    local_160[6] = '\0';
    local_160[7] = '\0';
    local_140 = local_d8;
    bVar7 = local_98 == local_168;
    local_1b8 = 0;
    local_128 = local_160;
    local_138 = local_168;
    FUN_18021e290(local_160);
    if (bVar7) {
      if ((undefined8 ********)param_2 != local_b8) {
        pppppppuVar6 = local_b8;
        if (7 < local_a0) {
          pppppppuVar6 = local_b8[0];
        }
        FUN_18021a7b0(param_2,pppppppuVar6,local_a8);
      }
      local_1b0 = (undefined8 *******)(local_68 + 1);
      FUN_18021e290(local_68 + 1);
      local_1b0 = &pppppppuStack_90;
      FUN_18021e290(&pppppppuStack_90);
      FUN_18021e290(local_b8);
      FUN_18021e290(local_d8);
      return 1;
    }
    plVar5 = (longlong *)FUN_180066a70(local_b8,local_108);
    local_1b8 = 1;
    if (local_68[0] == *plVar5) {
LAB_1800697db:
      bVar7 = true;
    }
    else {
      local_188 = &pppppppuStack_90;
      if (7 < local_78) {
        local_188 = pppppppuStack_90;
      }
      local_130 = uStack_80;
      local_180 = uStack_80;
      local_138 = local_188;
      iVar2 = FUN_180065970(local_68 + 1,&local_188);
      if (iVar2 != 0) goto LAB_1800697db;
      bVar7 = false;
    }
    local_1b8 = 0;
    local_1b0 = (undefined8 *******)local_100;
    FUN_18021e290(local_100);
    if (bVar7) {
      local_1b0 = (undefined8 *******)(local_68 + 1);
      FUN_18021e290(local_68 + 1);
      local_1b0 = &pppppppuStack_90;
      FUN_18021e290(&pppppppuStack_90);
      FUN_18021e290(local_b8);
      FUN_18021e290(local_d8);
      return 0;
    }
    FUN_18020c660(&local_98);
    FUN_18020c660(local_68);
  } while( true );
}


