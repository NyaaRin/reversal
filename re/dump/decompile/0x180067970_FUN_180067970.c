// 0x180067970  FUN_180067970
// size=778 thunk=false
// signature: undefined FUN_180067970()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180067970(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (param_2[2] != 0) {
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar3 = __std_fs_open_handle(&local_38,param_2,0x80,0x2000000);
    uVar9 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180067bbd:
      FUN_1802d75c4(local_38);
      return uVar9;
    }
    iVar4 = 0;
    puVar1 = param_1 + 2;
    uVar9 = *puVar1;
    if (uVar9 < 0x104) {
      uVar5 = 0x104 - uVar9;
      if (param_1[3] - uVar9 < uVar5) {
        FUN_18022a480(param_1);
      }
      else {
        *puVar1 = 0x104;
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        puVar10 = (undefined2 *)((longlong)puVar7 + uVar9 * 2);
        if (uVar5 != 0) {
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
        }
        *(undefined2 *)(puVar7 + 0x41) = 0;
      }
    }
    else {
      *puVar1 = 0x104;
      puVar7 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar7 = (undefined8 *)*param_1;
      }
      *(undefined2 *)(puVar7 + 0x41) = 0;
      iVar4 = 0;
    }
    do {
      while( true ) {
        uVar9 = *puVar1;
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        uVar5 = FUN_1802d79dc(local_38,puVar7,(uint)uVar9,iVar4);
        if ((uint)uVar5 != 0) break;
        uVar9 = uVar5 >> 0x20;
        if (((int)(uVar5 >> 0x20) != 3) || (iVar4 != 0)) {
          *puVar1 = 0;
          if (7 < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          *(undefined2 *)param_1 = 0;
          goto LAB_180067bbd;
        }
        iVar4 = 2;
      }
      uVar2 = *puVar1;
      uVar8 = uVar5 & 0xffffffff;
      if (uVar2 < uVar8) {
        uVar6 = uVar8 - uVar2;
        if (param_1[3] - uVar2 < uVar6) {
          FUN_18022a480(param_1,uVar6);
        }
        else {
          *puVar1 = uVar8;
          puVar7 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar7 = (undefined8 *)*param_1;
          }
          puVar10 = (undefined2 *)((longlong)puVar7 + uVar2 * 2);
          if (uVar6 != 0) {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
          }
          *(undefined2 *)((longlong)puVar7 + uVar8 * 2) = 0;
        }
      }
      else {
        *puVar1 = uVar8;
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        *(undefined2 *)((longlong)puVar7 + uVar8 * 2) = 0;
      }
    } while ((uint)uVar9 <= (uint)uVar5);
    FUN_1802d75c4(local_38);
    if (iVar4 == 0) {
      puVar7 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar7 = (undefined8 *)*param_1;
      }
      if (5 < *puVar1) {
        iVar4 = FUN_180012bf0(puVar7,L"\\\\?\\",4);
        if ((iVar4 == 0) && ((*(uint *)(puVar7 + 1) & 0xffffffdf) - 0x3a0041 < 0x1a)) {
          uVar9 = *puVar1;
          uVar5 = 4;
          if (uVar9 < 4) {
            uVar5 = uVar9;
          }
          if (7 < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          memmove(param_1,(void *)((longlong)param_1 + uVar5 * 2),(uVar9 - uVar5) * 2 + 2);
          *puVar1 = uVar9 - uVar5;
          return 0;
        }
      }
      puVar7 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar7 = (undefined8 *)*param_1;
      }
      if ((7 < *puVar1) && (iVar4 = FUN_180012bf0(puVar7,L"\\\\?\\UNC\\",8), iVar4 == 0)) {
        uVar9 = *puVar1;
        if (uVar9 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_18022ec00();
        }
        uVar5 = 6;
        if (uVar9 - 2 < 6) {
          uVar5 = uVar9 - 2;
        }
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        memmove((void *)((longlong)puVar7 + 4),(void *)((longlong)puVar7 + 4 + uVar5 * 2),
                (uVar9 - uVar5) * 2 - 2);
        param_1[2] = uVar9 - uVar5;
      }
    }
    else {
      FUN_180211640(param_1);
    }
  }
  return 0;
}


