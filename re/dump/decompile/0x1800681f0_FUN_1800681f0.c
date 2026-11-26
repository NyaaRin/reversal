// 0x1800681f0  FUN_1800681f0
// size=1762 thunk=false
// signature: undefined FUN_1800681f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1800681f0(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  code *pcVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  void *_Memory;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [40];
  undefined4 local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [12];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  puVar9 = auStack_188;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_158 = 0;
  *param_3 = 0;
  *(undefined ***)(param_3 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 7;
  local_130 = (undefined8 *)0x0;
  local_138 = param_1;
  uVar3 = FUN_180067970(&local_130);
  if (uVar3 == 0) {
    *(undefined4 *)param_1 = (undefined4)local_130;
    *(undefined4 *)((longlong)param_1 + 4) = local_130._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_128._4_4_;
    param_1[2] = local_120;
    param_1[3] = uStack_118;
    local_120 = 0;
    uStack_118 = 7;
    local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffffffff0000);
    local_158 = 1;
    goto LAB_18006880e;
  }
  if (uVar3 < 0x41) {
    if (((uVar3 != 0x40) && (uVar3 != 2)) && (uVar3 != 3)) {
      bVar11 = uVar3 == 0x35;
LAB_1800682cb:
      if (!bVar11) {
        *param_3 = uVar3;
        param_3[1] = local_148._4_4_;
        *(undefined ***)(param_3 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 7;
        *(undefined2 *)param_1 = 0;
        local_158 = 1;
        goto LAB_18006880e;
      }
    }
  }
  else if ((uVar3 != 0x7b) && (uVar3 != 0xa1)) {
    bVar11 = uVar3 == 0x10b;
    goto LAB_1800682cb;
  }
  FUN_1800661c0(param_2,local_68);
  FUN_180065b60(local_68,&local_108);
  FUN_180065c20(local_68,local_88);
  bVar11 = true;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  FUN_180066920(local_88,local_e8);
  local_e8[6] = 0;
  local_e8[7] = 0;
  local_e8[8] = 0;
  local_e8[9] = 0;
  local_e8[10] = 0;
  local_e8[0xb] = 0;
  FUN_180066a70(local_88,local_e8 + 6);
  if (local_e8[0] != local_e8[6]) {
    do {
      iVar4 = 0;
      FUN_1800654d0(&local_108,local_e8 + 1);
      if (bVar11) {
        local_120 = 0;
        puVar6 = &local_130;
        if (7 < uStack_118) {
          puVar6 = local_130;
        }
        *(undefined2 *)puVar6 = 0;
        if (local_f8 != 0) {
          puVar7 = &local_108;
          if (7 < uStack_f0) {
            puVar7 = (undefined2 *)CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
          }
          uVar3 = __std_fs_open_handle(&local_110,puVar7,0x80,0x2000000);
          uVar5 = local_120;
          if (uVar3 != 0) {
            FUN_1802d75c4(local_110);
LAB_18006863a:
            if (uVar3 < 0x41) {
              if (((uVar3 != 0x40) && (uVar3 != 2)) && (uVar3 != 3)) {
                bVar11 = uVar3 == 0x35;
LAB_180068661:
                if (!bVar11) {
                  *param_3 = uVar3;
                  param_3[1] = local_148._4_4_;
                  *(undefined ***)(param_3 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
                  param_1[2] = 0;
                  param_1[3] = 0;
                  *param_1 = 0;
                  param_1[1] = 0;
                  param_1[2] = 0;
                  param_1[3] = 7;
                  *(undefined2 *)param_1 = 0;
                  local_158 = 1;
                  local_150 = local_e8 + 7;
                  FUN_18021e290(local_e8 + 7);
                  local_148 = local_e8 + 1;
                  FUN_18021e290(local_e8 + 1);
                  FUN_18021e290(local_88);
                  FUN_18021e290(&local_108);
                  FUN_18021e290(local_68);
                  goto LAB_18006880e;
                }
              }
            }
            else if ((uVar3 != 0x7b) && (uVar3 != 0xa1)) {
              bVar11 = uVar3 == 0x10b;
              goto LAB_180068661;
            }
            bVar11 = false;
            goto LAB_18006878a;
          }
          if (local_120 < 0x104) {
            uVar10 = 0x104 - local_120;
            if (uStack_118 - local_120 < uVar10) {
              FUN_18022a480(&local_130);
            }
            else {
              local_120 = 0x104;
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              puVar7 = (undefined2 *)((longlong)puVar6 + uVar5 * 2);
              if (uVar10 != 0) {
                for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar7 = 0;
                  puVar7 = puVar7 + 1;
                }
              }
              *(undefined2 *)(puVar6 + 0x41) = 0;
            }
          }
          else {
            local_120 = 0x104;
            puVar6 = &local_130;
            if (7 < uStack_118) {
              puVar6 = local_130;
            }
            *(undefined2 *)(puVar6 + 0x41) = 0;
          }
          do {
            while( true ) {
              uVar3 = (uint)local_120;
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              uVar5 = FUN_1802d79dc(local_110,puVar6,local_120 & 0xffffffff,iVar4);
              if ((uint)uVar5 != 0) break;
              uVar3 = (uint)(uVar5 >> 0x20);
              if ((uVar3 != 3) || (iVar4 != 0)) {
                local_120 = 0;
                puVar6 = &local_130;
                if (7 < uStack_118) {
                  puVar6 = local_130;
                }
                *(undefined2 *)puVar6 = 0;
                FUN_1802d75c4(local_110);
                if (uVar3 == 0) goto LAB_180068713;
                goto LAB_18006863a;
              }
              iVar4 = 2;
            }
            uVar10 = uVar5 & 0xffffffff;
            if (local_120 < uVar10) {
              uVar8 = uVar10 - local_120;
              if (uStack_118 - local_120 < uVar8) {
                FUN_18022a480(&local_130,uVar8,uVar10,uVar8);
              }
              else {
                puVar6 = &local_130;
                if (7 < uStack_118) {
                  puVar6 = local_130;
                }
                puVar7 = (undefined2 *)((longlong)puVar6 + local_120 * 2);
                local_120 = uVar10;
                if (uVar8 != 0) {
                  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                }
                *(undefined2 *)((longlong)puVar6 + uVar10 * 2) = 0;
              }
            }
            else {
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              local_120 = uVar10;
              *(undefined2 *)((longlong)puVar6 + uVar10 * 2) = 0;
            }
          } while (uVar3 <= (uint)uVar5);
          FUN_1802d75c4(local_110);
          if (iVar4 == 0) {
            puVar6 = &local_130;
            if (7 < uStack_118) {
              puVar6 = local_130;
            }
            if (((local_120 < 6) || (iVar4 = FUN_180012bf0(puVar6,L"\\\\?\\",4), iVar4 != 0)) ||
               (0x19 < (*(uint *)(puVar6 + 1) & 0xffffffdf) - 0x3a0041)) {
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              if ((7 < local_120) && (iVar4 = FUN_180012bf0(puVar6,L"\\\\?\\UNC\\",8), iVar4 == 0))
              {
                if (local_120 < 2) goto LAB_1800688cd;
                uVar5 = 6;
                if (local_120 - 2 < 6) {
                  uVar5 = local_120 - 2;
                }
                puVar6 = &local_130;
                if (7 < uStack_118) {
                  puVar6 = local_130;
                }
                uVar10 = local_120 - uVar5;
                memmove((undefined2 *)((longlong)puVar6 + 4),
                        (undefined2 *)((longlong)puVar6 + 4) + uVar5,uVar10 * 2 - 2);
                local_120 = uVar10;
              }
            }
            else {
              uVar5 = 4;
              if (local_120 < 4) {
                uVar5 = local_120;
              }
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              uVar10 = local_120 - uVar5;
              memmove(puVar6,(undefined2 *)((longlong)puVar6 + uVar5 * 2),uVar10 * 2 + 2);
              local_120 = uVar10;
            }
          }
          else {
            FUN_180211640(&local_130);
          }
        }
LAB_180068713:
        if (7 < uStack_f0) {
          pvVar2 = (void *)CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
          _Memory = pvVar2;
          if ((0xfff < uStack_f0 * 2 + 2) &&
             (_Memory = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar9 = auStack_180;
LAB_1800688cd:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar9 + -8) = &UNK_1800688d2;
            FUN_18022ec00();
          }
          free(_Memory);
        }
        local_108 = SUB82(local_130,0);
        uStack_106 = (undefined2)((ulonglong)local_130 >> 0x10);
        uStack_104 = local_130._4_4_;
        uStack_100 = (undefined4)uStack_128;
        uStack_fc = uStack_128._4_4_;
        local_f8 = local_120;
        uStack_f0 = uStack_118;
        local_120 = 0;
        uStack_118 = 7;
        local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffffffff0000);
      }
LAB_18006878a:
      FUN_18020c660(local_e8);
    } while (local_e8[0] != local_e8[6]);
  }
  local_148 = local_e8 + 7;
  FUN_18021e290(local_e8 + 7);
  local_150 = local_e8 + 1;
  FUN_18021e290(local_e8 + 1);
  *(uint *)param_1 = CONCAT22(uStack_106,local_108);
  *(undefined4 *)((longlong)param_1 + 4) = uStack_104;
  *(undefined4 *)(param_1 + 1) = uStack_100;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_fc;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_f8;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_f8._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_f0._4_4_;
  local_f8 = 0;
  uStack_f0 = 7;
  local_108 = 0;
  local_158 = 1;
  FUN_18021e290(local_88);
  FUN_18021e290(&local_108);
  FUN_18021e290(local_68);
LAB_18006880e:
  FUN_18021e290(&local_130);
  return param_1;
}


