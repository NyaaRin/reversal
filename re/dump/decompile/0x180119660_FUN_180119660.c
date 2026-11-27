// 0x180119660  FUN_180119660
// size=1791 thunk=false
// signature: undefined FUN_180119660()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180119660(longlong param_1,longlong param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,longlong param_7,int param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  char *pcVar7;
  size_t _Size;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  int local_e8;
  char *local_e0;
  int local_d8;
  longlong local_d0;
  int local_c8;
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0 [2];
  longlong local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [16];
  int local_58;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_a8 = CONCAT44(local_a8._4_4_,param_4);
  local_b0 = CONCAT44(local_b0._4_4_,param_3);
  local_70 = param_7;
  if (param_2 == 0) {
    return 0;
  }
  if (param_7 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_5 < 1) {
    return 0;
  }
  if (param_6 < 1) {
    return 0;
  }
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_90 = param_1;
  local_78 = lVar13;
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(lVar13 + 0xec8) != '\0') {
    return 0;
  }
  cVar2 = FUN_180116970();
  if (cVar2 == '\0') {
    return 0;
  }
  if (DAT_1803fa608 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_1803fa608 + 4);
  }
  if (DAT_1803e8848 == iVar3) {
    return 0;
  }
  local_48 = 0x93fd561a96ab0c67;
  local_50 = -0x46ff52fc73512b43;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a0,&local_48);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_68,&local_50);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (*pcVar7 == '\0') {
    return 0;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    return 0;
  }
  cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
  if (cVar2 == '\0') {
    return 0;
  }
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_18040a280);
  local_88 = CONCAT71(local_88._1_7_,1);
  plVar6 = (longlong *)0x0;
  if (DAT_18040a389 != '\0') {
    plVar6 = DAT_18040a378;
  }
  plStack_80 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    local_54 = 0;
    local_58 = 0;
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_54,&local_58);
    local_b8 = (**(code **)(*plVar6 + 0x18))(plVar6);
    local_b4 = (**(code **)(*plVar6 + 0x20))(plVar6);
    if ((((0 < local_54) && (0 < local_58)) && (0 < local_b8)) &&
       (((0 < local_b4 && (-1 < param_3)) && (-1 < (int)local_a8)))) {
      local_a0[0] = CONCAT44(local_a0[0]._4_4_,param_5 + param_3);
      if (param_5 + param_3 <= local_54) {
        local_50 = CONCAT44(local_50._4_4_,(int)local_a8 + param_6);
        if ((int)local_a8 + param_6 <= local_58) {
          cVar2 = FUN_180116900(lVar13 + 0xfc8);
          if ((cVar2 == '\0') && (cVar2 = FUN_180116900(lVar13 + 0xfe8), cVar2 == '\0')) {
            if (((DAT_1803fa668 == (longlong *)0x0) ||
                (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 == '\0')) ||
               (cVar2 = (**(code **)(*DAT_1803fa668 + 0x2a8))(), cVar2 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            pcVar7 = "unannounced read";
            if (bVar1) {
              pcVar7 = "engine screenshot";
            }
          }
          else {
            pcVar7 = "lua budget";
          }
          lVar11 = (longlong)local_54;
          if ((local_b8 == local_54) && (local_b4 == local_58)) {
            FUN_180119590();
            local_c8 = param_8;
            local_d0 = param_7;
            local_d8 = param_6;
            local_e0 = (char *)CONCAT44(local_e0._4_4_,param_5);
            local_e8 = (int)local_a8;
            iVar3 = FUN_180119420(local_90,param_2,plVar6,local_b0 & 0xffffffff);
            if (iVar3 != 1) {
              if (iVar3 == 0) {
                iVar3 = 2;
              }
              ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
              return iVar3;
            }
            DAT_1803fd0ec = DAT_1803fd0ec + 1;
            if (DAT_1803fd0ec < 0xb) {
              local_e8 = param_8;
              local_e0 = pcVar7;
              FUN_180014410("[AntiSS] ReadPixels -> cleanRT #%d (%dx%d, fmt=%d, via %s)\n",
                            DAT_1803fd0ec,param_5,param_6);
            }
          }
          else {
            switch(param_8) {
            case 0:
            case 1:
            case 0xb:
            case 0xc:
            case 0x10:
            case 0x17:
            case 0x1a:
            case 0x1b:
              _Size = 4;
              break;
            case 2:
            case 3:
            case 9:
            case 10:
              _Size = 3;
              break;
            case 4:
            case 6:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x15:
            case 0x16:
              _Size = 2;
              break;
            case 5:
            case 7:
            case 8:
              _Size = 1;
              break;
            default:
              goto switchD_180119a61_caseD_d;
            case 0x18:
            case 0x19:
              _Size = 8;
              break;
            case 0x1c:
              _Size = 0xc;
              break;
            case 0x1d:
              _Size = 0x10;
            }
            local_48 = ((longlong)(int)local_b0 * (longlong)local_b8) / lVar11;
            lVar12 = (longlong)local_58;
            local_b0 = ((longlong)(int)local_a8 * (longlong)local_b4) / lVar12;
            iVar4 = (int)((lVar11 + -1 + (longlong)(int)local_a0[0] * (longlong)local_b8) / lVar11);
            iVar3 = local_b8;
            if (iVar4 < local_b8) {
              iVar3 = iVar4;
            }
            local_b8 = 1;
            if (1 < iVar3 - (int)local_48) {
              local_b8 = iVar3 - (int)local_48;
            }
            iVar4 = (int)(((longlong)(int)local_50 * (longlong)local_b4 + -1 + lVar12) / lVar12);
            iVar3 = local_b4;
            if (iVar4 < local_b4) {
              iVar3 = iVar4;
            }
            local_b4 = 1;
            if (1 < iVar3 - (int)local_b0) {
              local_b4 = iVar3 - (int)local_b0;
            }
            local_a8 = (longlong)local_b4;
            local_a0[0] = (longlong)local_b8;
            local_50 = local_a0[0] * local_a8 * _Size;
            if (0xfffffff < local_50 - 1U) goto switchD_180119a61_caseD_d;
            if ((*(uint *)(lVar13 + 0x20f4) & 1) == 0) {
              *(uint *)(lVar13 + 0x20f4) = *(uint *)(lVar13 + 0x20f4) | 1;
              FUN_1802d8910(FUN_180309d10);
            }
            FUN_180218360((longlong *)(lVar13 + 0xda0),local_50);
            FUN_180119590();
            local_c8 = param_8;
            local_d0 = *(longlong *)(lVar13 + 0xda0);
            local_d8 = local_b4;
            local_e0 = (char *)CONCAT44(local_e0._4_4_,local_b8);
            local_e8 = (int)local_b0;
            iVar3 = FUN_180119420(local_90,param_2,plVar6,local_48 & 0xffffffff);
            if (iVar3 != 1) {
              if (iVar3 == 0) {
                iVar3 = 2;
              }
              ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
              return iVar3;
            }
            uVar5 = 0;
            local_b0 = local_b0 & 0xffffffff00000000;
            local_50 = CONCAT44(local_50._4_4_,local_b4 + -1);
            iVar3 = local_b4 + -1;
            do {
              uVar10 = 0;
              iVar8 = local_b8 + -1;
              iVar4 = (int)((longlong)(local_a8 * (ulonglong)uVar5) / (longlong)param_6);
              if (iVar4 < iVar3) {
                iVar3 = iVar4;
              }
              lVar13 = iVar3 * local_a0[0];
              do {
                iVar4 = (int)((longlong)(local_a0[0] * uVar10) / (longlong)param_5);
                iVar3 = iVar8;
                if (iVar4 < iVar8) {
                  iVar3 = iVar4;
                }
                memcpy((void *)((uVar10 + (ulonglong)uVar5 * (longlong)param_5) * _Size + local_70),
                       (void *)((iVar3 + lVar13) * _Size + *(longlong *)(local_78 + 0xda0)),_Size);
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
              } while ((int)uVar9 < param_5);
              uVar5 = (int)local_b0 + 1;
              local_b0 = CONCAT44(local_b0._4_4_,uVar5);
              iVar3 = (int)local_50;
            } while ((int)uVar5 < param_6);
            DAT_1803fe3b4 = DAT_1803fe3b4 + 1;
            if (DAT_1803fe3b4 < 0xb) {
              local_d8 = param_8;
              local_e0 = (char *)CONCAT44(local_e0._4_4_,local_b4);
              local_e8 = local_b8;
              FUN_180014410("[AntiSS] ReadPixels -> scaled v5 cleanRT #%d (%dx%d <- %dx%d, fmt=%d)\n"
                            ,DAT_1803fe3b4,param_5);
            }
          }
          ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
          return 1;
        }
      }
    }
  }
switchD_180119a61_caseD_d:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
  return 0;
}


