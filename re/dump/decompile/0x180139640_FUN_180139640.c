// 0x180139640  FUN_180139640
// size=1604 thunk=false
// signature: undefined FUN_180139640()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180139640(undefined8 *param_1)

{
  char cVar1;
  ulonglong *puVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  byte *******pppppppbVar9;
  char *******pppppppcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_248 [32];
  longlong local_228;
  char *local_220;
  undefined8 local_218;
  undefined4 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  ulonglong *local_150;
  undefined1 local_148 [32];
  byte *******local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  char *******local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 *******local_e8 [2];
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8 [9];
  undefined1 local_80;
  undefined1 local_78 [16];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  *param_1 = 0;
  param_1[1] = 0;
  uVar11 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_208 = 1;
  local_158 = param_1;
  FUN_180132730(local_78);
  if (local_68 == 0) {
    local_208 = 0;
  }
  else {
    if (0x7fffffffffffffffU - local_68 < 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_218 = 0x16;
    local_220 = "\\config\\loginusers.vdf";
    local_228 = local_68;
    FUN_18020e930(local_148);
    local_208 = 3;
    FUN_180132b90(local_e8,local_148);
    local_208 = 1;
    FUN_18020e450(local_148);
    if (local_d8 == 0) {
      local_208 = 0;
    }
    else {
      uStack_100 = 0;
      local_f8 = _DAT_1803814b0;
      uStack_f0 = _UNK_1803814b8;
      local_108 = (char *******)0x0;
      bVar3 = false;
      local_c8[0] = 0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_c8[4] = 0xf;
      local_c8[1] = 0;
      local_c8[6] = 0;
      local_c8[7] = 0;
      local_c8[8] = 0xf;
      local_c8[5] = 0;
      local_80 = 0;
      uVar12 = uVar11;
      if (local_d8 != 0) {
        do {
          pppppppuVar8 = local_e8;
          if (0xf < local_d0) {
            pppppppuVar8 = local_e8[0];
          }
          cVar1 = *(char *)((longlong)pppppppuVar8 + uVar11);
          iVar7 = (int)uVar12;
          if (cVar1 == '{') {
            if ((iVar7 == 1) && (bVar3)) {
              local_1f8 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1d8 = 0xf;
              uStack_1f0 = 0;
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_1b8 = 0xf;
              uStack_1d0 = 0;
              uStack_1b0 = 0;
              local_c8[0] = 0;
              FUN_18020e8a0(local_c8 + 1,&uStack_1f0);
              FUN_18020e8a0(local_c8 + 5,&uStack_1d0);
              local_80 = (undefined1)uStack_1b0;
              FUN_18020e450(&uStack_1d0);
              FUN_18020e450(&uStack_1f0);
              pppppppcVar10 = (char *******)&local_108;
              if (0xf < uStack_f0) {
                pppppppcVar10 = local_108;
              }
              local_c8[0] = _strtoui64((char *)pppppppcVar10,(char **)0x0,10);
            }
            bVar3 = false;
            uVar12 = (ulonglong)(iVar7 + 1);
          }
          else if (cVar1 == '}') {
            if (iVar7 == 2) {
              if ((local_c8[0] != 0) && (local_c8[3] != 0)) {
                puVar2 = (ulonglong *)param_1[1];
                if (puVar2 == (ulonglong *)param_1[2]) {
                  FUN_180224d40(param_1,puVar2,local_c8);
                }
                else {
                  *puVar2 = local_c8[0];
                  local_150 = puVar2;
                  FUN_18016d4c0(puVar2 + 1,local_c8 + 1);
                  FUN_18016d4c0(puVar2 + 5,local_c8 + 5);
                  *(undefined1 *)(puVar2 + 9) = local_80;
                  param_1[1] = param_1[1] + 0x50;
                }
              }
              local_1a8 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_188 = 0xf;
              uStack_1a0 = 0;
              local_178 = 0;
              uStack_170 = 0;
              local_168 = 0xf;
              uStack_180 = 0;
              uStack_160 = 0;
              local_c8[0] = 0;
              FUN_18020e8a0(local_c8 + 1,&uStack_1a0);
              FUN_18020e8a0(local_c8 + 5,&uStack_180);
              local_80 = (undefined1)uStack_160;
              FUN_18020e450(&uStack_180);
              FUN_18020e450(&uStack_1a0);
            }
            bVar3 = false;
            uVar6 = iVar7 - 1;
            if (iVar7 == 0) {
              uVar6 = 0;
            }
            uVar12 = (ulonglong)uVar6;
          }
          else if (cVar1 == '\"') {
            uStack_120 = 0;
            local_118 = 0;
            local_110 = 0xf;
            local_128 = (byte *******)0x0;
            uVar11 = uVar11 + 1;
            if (uVar11 < local_d8) {
              do {
                uVar4 = local_118;
                pppppppuVar8 = local_e8;
                if (0xf < local_d0) {
                  pppppppuVar8 = local_e8[0];
                }
                if (*(char *)((longlong)pppppppuVar8 + uVar11) == '\"') break;
                pppppppuVar8 = local_e8;
                if (0xf < local_d0) {
                  pppppppuVar8 = local_e8[0];
                }
                if ((*(char *)((longlong)pppppppuVar8 + uVar11) == '\\') && (uVar11 + 1 < local_d8))
                {
                  uVar11 = uVar11 + 1;
                }
                pppppppuVar8 = local_e8;
                if (0xf < local_d0) {
                  pppppppuVar8 = local_e8[0];
                }
                if (local_118 < local_110) {
                  local_118 = local_118 + 1;
                  pppppppbVar9 = (byte *******)&local_128;
                  if (0xf < local_110) {
                    pppppppbVar9 = local_128;
                  }
                  *(byte *)((longlong)pppppppbVar9 + uVar4) =
                       *(byte *)((longlong)pppppppuVar8 + uVar11);
                  *(byte *)((longlong)pppppppbVar9 + uVar4 + 1) = 0;
                }
                else {
                  FUN_18021abd0(&local_128);
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < local_d8);
            }
            uVar5 = local_110;
            uVar4 = local_118;
            if (bVar3) {
              if (iVar7 == 2) {
                pppppppcVar10 = (char *******)&local_108;
                if (0xf < uStack_f0) {
                  pppppppcVar10 = local_108;
                }
                iVar7 = _stricmp((char *)pppppppcVar10,"AccountName");
                if (iVar7 == 0) {
                  pppppppbVar9 = (byte *******)&local_128;
                  if (0xf < uVar5) {
                    pppppppbVar9 = local_128;
                  }
                  FUN_180212700(local_c8 + 1,pppppppbVar9,uVar4);
                }
                else {
                  pppppppcVar10 = (char *******)&local_108;
                  if (0xf < uStack_f0) {
                    pppppppcVar10 = local_108;
                  }
                  iVar7 = _stricmp((char *)pppppppcVar10,"PersonaName");
                  if (iVar7 == 0) {
                    pppppppbVar9 = (byte *******)&local_128;
                    if (0xf < uVar5) {
                      pppppppbVar9 = local_128;
                    }
                    FUN_180212700(local_c8 + 5,pppppppbVar9,uVar4);
                  }
                  else {
                    pppppppcVar10 = (char *******)&local_108;
                    if (0xf < uStack_f0) {
                      pppppppcVar10 = local_108;
                    }
                    iVar7 = _stricmp((char *)pppppppcVar10,"RememberPassword");
                    if (iVar7 == 0) {
                      pppppppbVar9 = (byte *******)&local_128;
                      if (0xf < uVar5) {
                        pppppppbVar9 = local_128;
                      }
                      if (uVar4 == 1) {
                        if (*(byte *)pppppppbVar9 == 0x31) {
                          uVar6 = 0;
                        }
                        else {
                          uVar6 = -(uint)(*(byte *)pppppppbVar9 < 0x31) | 1;
                        }
                        local_80 = uVar6 == 0;
                      }
                      else {
                        local_80 = 0;
                      }
                    }
                  }
                }
              }
              bVar3 = false;
            }
            else {
              pppppppbVar9 = (byte *******)&local_128;
              if (0xf < local_110) {
                pppppppbVar9 = local_128;
              }
              FUN_180212700(&local_108,pppppppbVar9,local_118);
              bVar3 = true;
            }
            FUN_18020e450(&local_128);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < local_d8);
      }
      local_208 = 0;
      FUN_18020e450(local_c8 + 5);
      FUN_18020e450(local_c8 + 1);
      FUN_18020e450(&local_108);
    }
    FUN_18020e450(local_e8);
  }
  FUN_18020e450(local_78);
  return param_1;
}


