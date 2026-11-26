// 0x18022a8c0  FUN_18022a8c0
// size=838 thunk=false
// signature: undefined FUN_18022a8c0()
// status: ok


undefined8 *
FUN_18022a8c0(longlong param_1,undefined8 *param_2,byte *param_3,byte *param_4,longlong param_5,
             uint param_6)

{
  char *pcVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  byte *pbVar9;
  ulonglong uVar10;
  int iVar11;
  char *pcVar12;
  char *local_48;
  byte *local_40;
  
  if (param_5 == 0) {
    param_5 = *(longlong *)(param_1 + 200);
  }
  if (param_3 == param_4) {
switchD_18022a929_caseD_0:
    *param_2 = param_3;
    return param_2;
  }
LAB_18022a910:
  for (; param_5 != 0; param_5 = *(longlong *)(param_5 + 0x10)) {
    switch(*(undefined4 *)(param_5 + 8)) {
    default:
      goto switchD_18022a929_caseD_0;
    case 1:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x14:
      break;
    case 2:
      if ((*(uint *)(param_1 + 0xd0) & 0x1000) == 0) goto LAB_18022aa0e;
      if ((param_3[-1] != 10) && (param_3[-1] != 0xd)) {
        if ((longlong)param_4 - (longlong)param_3 < 0x10) {
          do {
            pbVar5 = &DAT_18033bce8;
            do {
              if (*param_3 == *pbVar5) goto LAB_18022a9a4;
              pbVar5 = pbVar5 + 1;
            } while (pbVar5 != &DAT_18033bcea);
            param_3 = param_3 + 1;
            if (param_3 == param_4) {
              *param_2 = param_3;
              return param_2;
            }
          } while( true );
        }
        param_3 = (byte *)FUN_1802d7070(param_3,param_4,&DAT_18033bce8,&DAT_18033bcea);
LAB_18022a9a4:
        if (param_3 != param_4) {
          param_3 = param_3 + 1;
        }
      }
      goto LAB_18022a9ac;
    case 3:
      if ((*(uint *)(param_1 + 0xd0) & 0x1000) != 0) {
        FUN_180233f10(param_2,param_3,param_4,0x180000000,&DAT_18033bcea);
        return param_2;
      }
      goto LAB_18022aa0e;
    case 4:
      cVar8 = (&DAT_18033d080)[param_3[-1]];
      while (bVar2 = *param_3,
            (*(uint *)(param_5 + 0xc) & 1) != (uint)((&DAT_18033d080)[bVar2] == cVar8)) {
        param_3 = param_3 + 1;
        cVar8 = (&DAT_18033d080)[bVar2];
        if (param_3 == param_4) {
          *param_2 = param_3;
          return param_2;
        }
      }
      goto LAB_18022a9ac;
    case 6:
      local_48 = *(char **)(param_5 + 0x28);
      uVar10 = (ulonglong)*(uint *)(param_5 + 0x24);
      if ((*(uint *)(param_1 + 0xd0) & 0x100) == 0) {
        if ((longlong)uVar10 <= (longlong)param_4 - (longlong)param_3) {
          uVar6 = thunk_FUN_1802d6b60(param_3,param_4,local_48);
          *param_2 = uVar6;
          return param_2;
        }
LAB_18022aa0e:
        *param_2 = param_4;
        return param_2;
      }
      pbVar5 = param_4;
      if ((longlong)param_4 - (longlong)param_3 < (longlong)uVar10) goto LAB_18022aaa0;
      lVar3 = *(longlong *)(param_1 + 0xe8);
      pcVar1 = local_48 + uVar10;
      local_40 = param_4 + -uVar10;
      pbVar5 = param_3;
      pbVar9 = param_3;
      pcVar12 = local_48;
      if (local_48 == pcVar1) goto LAB_18022aaa0;
      goto LAB_18022aa61;
    case 7:
      goto switchD_18022a929_caseD_7;
    case 10:
      if (param_6 < 0x32) {
        iVar11 = param_6 + 1;
        puVar7 = (undefined8 *)
                 FUN_18022a8c0(param_1,&local_48,param_3,param_4,*(undefined8 *)(param_5 + 0x20),
                               iVar11);
        param_3 = (byte *)*puVar7;
        puVar7 = (undefined8 *)
                 FUN_18022a8c0(param_1,&local_48,param_3,param_4,*(undefined8 *)(param_5 + 0x10),
                               iVar11);
        pbVar5 = (byte *)*puVar7;
        if (pbVar5 != param_3) {
          while( true ) {
            puVar7 = (undefined8 *)
                     FUN_18022a8c0(param_1,&local_40,pbVar5,param_4,*(undefined8 *)(param_5 + 0x20),
                                   iVar11);
            param_3 = (byte *)*puVar7;
            if (pbVar5 == param_3) break;
            puVar7 = (undefined8 *)
                     FUN_18022a8c0(param_1,&local_48,param_3,param_4,*(undefined8 *)(param_5 + 0x10)
                                   ,iVar11);
            pbVar5 = (byte *)*puVar7;
            if (pbVar5 == param_3) {
              *param_2 = param_3;
              return param_2;
            }
          }
        }
        goto LAB_18022a9ac;
      }
      goto switchD_18022a929_caseD_0;
    case 0xc:
      goto switchD_18022a929_caseD_c;
    case 0x10:
      if (*(longlong *)(param_5 + 0x28) != 0) goto switchD_18022a929_caseD_0;
      break;
    case 0x12:
      if (*(int *)(param_5 + 0x20) == 0) goto switchD_18022a929_caseD_0;
    }
  }
  goto switchD_18022a929_caseD_0;
switchD_18022a929_caseD_c:
  param_5 = 0;
  goto LAB_18022a910;
LAB_18022aa61:
  cVar8 = *pcVar12;
  cVar4 = std::ctype<char>::tolower(*(ctype<char> **)(lVar3 + 8),*pbVar9);
  if (cVar4 != cVar8) {
    pbVar5 = param_4;
    if (param_3 == local_40) {
LAB_18022aaa0:
      *param_2 = pbVar5;
      return param_2;
    }
    param_3 = param_3 + 1;
    pbVar9 = param_3;
    pcVar12 = local_48;
    goto LAB_18022aa61;
  }
  pbVar5 = param_3;
  if (pcVar12 + 1 == pcVar1) goto LAB_18022aaa0;
  pbVar9 = pbVar9 + 1;
  pcVar12 = pcVar12 + 1;
  goto LAB_18022aa61;
switchD_18022a929_caseD_7:
  while (puVar7 = (undefined8 *)FUN_1802342e0(param_1,&local_48,param_5,param_3),
        (byte *)*puVar7 == param_3) {
    param_3 = param_3 + 1;
    if (param_3 == param_4) {
      *param_2 = param_3;
      return param_2;
    }
  }
LAB_18022a9ac:
  *param_2 = param_3;
  return param_2;
}


