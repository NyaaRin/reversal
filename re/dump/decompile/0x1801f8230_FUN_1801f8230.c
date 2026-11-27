// 0x1801f8230  FUN_1801f8230
// size=669 thunk=false
// signature: undefined FUN_1801f8230()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801f8230(LPVOID param_1,LPVOID param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  BOOL BVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_80;
  int local_78 [3];
  int local_6c [3];
  undefined *local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if (((((DAT_1803fa620 != 0) && (DAT_1803fa438 != (code *)0x0)) && (DAT_1803f9278 != 0)) &&
      ((param_2 != (LPVOID)0x0 && (BVar6 = IsBadWritePtr(param_2,0x88), BVar6 == 0)))) &&
     ((iVar1 = *(int *)(DAT_1803fa620 + 0x20b88), iVar1 - 1U < 0x80 &&
      (-1 < *(int *)(DAT_1803fa620 + 0x20b84))))) {
    local_6c[0] = 2;
    local_78[2] = iVar1 + 1;
    local_78[1] = 0;
    local_6c[1] = 0;
    piVar7 = local_78 + 1;
    if (-1 < local_78[2]) {
      piVar7 = local_78 + 2;
    }
    if (0xf < local_78[2]) {
      piVar7 = &DAT_180330f10;
    }
    iVar2 = *piVar7;
    local_78[0] = (iVar1 - iVar2) + 1;
    piVar7 = local_78;
    if (local_78[0] < 3) {
      piVar7 = local_6c;
    }
    piVar8 = local_6c + 1;
    if (-1 < *piVar7) {
      piVar8 = piVar7;
    }
    if (7 < *piVar7) {
      piVar8 = &DAT_180330f0c;
    }
    local_6c[2] = *piVar8;
    iVar9 = local_6c[2] + iVar2;
    if (iVar9 - 1U < 0x16) {
      iVar12 = *(int *)(DAT_1803fa620 + 0x20b84) + 1 + iVar1;
      memset(&DAT_18042f190,0,4000);
      local_60 = &DAT_18042f190;
      local_4c = 0x100;
      local_48 = 0;
      iVar9 = (iVar12 - iVar9) + 1;
      local_58 = 4000;
      local_54 = 32000;
      if (iVar9 <= iVar12) {
        iVar11 = -1;
        do {
          iVar10 = iVar9;
          local_88 = CONCAT31(local_88._1_3_,(iVar12 - iVar2) + 1 <= iVar10);
          cVar5 = (*DAT_1803fa438)(DAT_1803f9278,&local_60,iVar11,iVar10);
          iVar4 = local_6c[2];
          iVar3 = local_78[0];
          if (cVar5 == '\0') {
            return 0;
          }
          iVar9 = iVar10 + 1;
          iVar11 = iVar10;
        } while (iVar10 + 1 <= iVar12);
        if (((char)local_4c == '\0') && (0 < local_54._4_4_)) {
          *(undefined **)((longlong)param_2 + 0x68) = local_60;
          *(undefined4 *)((longlong)param_2 + 0x70) = local_58;
          *(undefined4 *)((longlong)param_2 + 0x74) = (undefined4)local_54;
          *(int *)((longlong)param_2 + 0x24) = iVar2;
          *(int *)((longlong)param_2 + 0x20) = local_6c[2];
          *(int *)((longlong)param_2 + 0x78) = local_54._4_4_;
          *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
          if ((0 < local_78[0]) && (param_1 != (LPVOID)0x0)) {
            BVar6 = IsBadWritePtr(param_1,0x40);
            if ((BVar6 == 0) && (0 < *(int *)((longlong)param_1 + 0x20))) {
              *(int *)((longlong)param_1 + 0x20) = *(int *)((longlong)param_1 + 0x20) - iVar3;
            }
          }
          DAT_1803fd0f4 = DAT_1803fd0f4 + 1;
          if ((DAT_1803fd0f4 < 6) || (DAT_1803fd0f4 == (DAT_1803fd0f4 / 200) * 200)) {
            local_88 = local_54._4_4_;
            local_80 = DAT_1803fd0f4;
            FUN_180014410("[CLCMOVE] rebuilt: new=%d backup=%d choked=%d bits=%d (#%d)\n",iVar2,
                          iVar4,iVar1);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


