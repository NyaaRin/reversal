// 0x18023d650  FUN_18023d650
// size=338 thunk=false
// signature: undefined FUN_18023d650()
// status: ok


ulonglong FUN_18023d650(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  
  if ((0 < *(int *)(param_1 + 0xf8)) &&
     (iVar3 = *(int *)(param_1 + 0xf8) + -1, *(int *)(param_1 + 0xf8) = iVar3, iVar3 < 1)) {
    std::_Xregex_error(0xc);
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  bVar7 = 0;
  bVar8 = 0;
  if (param_2 != 0) {
    do {
      lVar6 = param_2;
      switch(*(undefined4 *)(param_2 + 8)) {
      default:
        goto switchD_18023d6d1_caseD_0;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xe:
      case 0xf:
      case 0x14:
        break;
      case 10:
      case 0xb:
        cVar2 = FUN_18023d650(param_1,param_2,param_3);
        bVar8 = bVar7;
        if (cVar2 != '\0') {
          bVar8 = 1;
        }
        lVar6 = 0;
        bVar7 = bVar8;
        if (cVar2 == '\0') {
          lVar6 = param_2;
        }
        break;
      case 0xd:
        uVar4 = *(undefined4 *)(param_2 + 0x20);
LAB_18023d769:
        *(undefined4 *)(param_3 + 0xc) = uVar4;
LAB_18023d76c:
        bVar8 = 1;
        goto switchD_18023d6d1_caseD_0;
      case 0x10:
        do {
          cVar2 = FUN_18023d650(param_1,*(undefined8 *)(lVar6 + 0x10),param_3);
          if (cVar2 != '\0') goto LAB_18023d76c;
          lVar6 = *(longlong *)(lVar6 + 0x28);
        } while (lVar6 != 0);
        lVar6 = *(longlong *)(param_2 + 0x20);
        break;
      case 0x12:
        lVar6 = (ulonglong)*(uint *)(param_2 + 0x30) * 0x10 + *(longlong *)(param_1 + 0x80);
        cVar2 = FUN_18023d650(param_1,*(undefined8 *)(param_2 + 0x10),lVar6);
        if (cVar2 != '\0') {
          uVar4 = *(undefined4 *)(lVar6 + 0xc);
          goto LAB_18023d769;
        }
        *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(param_1 + 0x20);
        lVar6 = *(longlong *)(param_2 + 0x28);
      }
      if ((lVar6 == 0) || (param_2 = *(longlong *)(lVar6 + 0x10), param_2 == 0))
      goto switchD_18023d6d1_caseD_0;
    } while( true );
  }
LAB_18023d77f:
  if (0 < *(int *)(param_1 + 0xf8)) {
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  }
  return (ulonglong)bVar8;
switchD_18023d6d1_caseD_0:
  goto LAB_18023d77f;
}


