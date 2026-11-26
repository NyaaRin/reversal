// 0x180234da0  FUN_180234da0
// size=470 thunk=false
// signature: undefined FUN_180234da0()
// status: ok


void FUN_180234da0(longlong *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  byte *pbVar7;
  
  if ((byte *)*param_1 == (byte *)param_1[1]) {
    *(undefined1 *)((longlong)param_1 + 0x75) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
    return;
  }
  bVar4 = *(byte *)*param_1;
  *(byte *)((longlong)param_1 + 0x75) = bVar4;
  pcVar6 = strchr("()$^.*+?[]|\\-{},:=!\n\r\b",(int)(char)bVar4);
  if (pcVar6 != (char *)0x0) {
    *(uint *)(param_1 + 0xe) = (uint)bVar4;
    switch((uint)bVar4) {
    case 10:
      if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
        return;
      }
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0xe) = 0x7c;
      return;
    default:
      goto switchD_180234e15_caseD_b;
    case 0x24:
      uVar2 = param_1[0xc];
      if ((uVar2 >> 0x18 & 1) == 0) {
        return;
      }
      pcVar6 = (char *)(*param_1 + 1);
      if (pcVar6 == (char *)param_1[1]) {
        return;
      }
      if ((((*pcVar6 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
          (pcVar1 = (char *)(*param_1 + 2), pcVar1 != (char *)param_1[1])) &&
         ((((uVar2 & 8) == 0 && ((cVar5 = *pcVar1, cVar5 == '(' || (cVar5 == ')')))) ||
          (((uVar2 & 0x10) == 0 && ((cVar5 = *pcVar1, cVar5 == '{' || (cVar5 == '}')))))))) {
        bVar3 = true;
      }
      else {
        cVar5 = *pcVar6;
        bVar3 = false;
      }
      if ((((uVar2 & 4) != 0) && (cVar5 == '\n')) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
        return;
      }
      if (((bVar3) && (cVar5 == ')')) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
        return;
      }
      break;
    case 0x28:
    case 0x29:
      if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
        return;
      }
      break;
    case 0x2b:
    case 0x3f:
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        return;
      }
      break;
    case 0x5c:
      if (*(char *)((longlong)param_1 + 0x74) != '\0') {
        return;
      }
      pbVar7 = (byte *)(*param_1 + 1);
      if (pbVar7 == (byte *)param_1[1]) {
        return;
      }
      if (((param_1[0xc] & 8U) != 0) || ((bVar4 = *pbVar7, bVar4 != 0x28 && (bVar4 != 0x29)))) {
        if ((param_1[0xc] & 0x10U) != 0) {
          return;
        }
        bVar4 = *pbVar7;
        if ((bVar4 != 0x7b) && (bVar4 != 0x7d)) {
          return;
        }
      }
      *(byte *)((longlong)param_1 + 0x75) = bVar4;
      *(uint *)(param_1 + 0xe) = (uint)bVar4;
      return;
    case 0x7b:
    case 0x7d:
      if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
        return;
      }
      break;
    case 0x7c:
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
switchD_180234e15_caseD_b:
  return;
}


