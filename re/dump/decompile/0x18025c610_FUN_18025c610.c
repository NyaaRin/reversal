// 0x18025c610  FUN_18025c610
// size=1953 thunk=false
// signature: undefined FUN_18025c610()
// status: ok


char FUN_18025c610(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (((*(char *)(param_1 + 0x48) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == '1')) &&
     (*(char *)((longlong)param_2 + 0x42) != '2')) {
    return '\x02';
  }
  if (((*(char *)(param_1 + 0x49) != '\0') && (*(char *)((longlong)param_2 + 0x42) == '2')) ||
     ((*(char *)(param_1 + 0x4a) != '\0' && (*(char *)((longlong)param_2 + 0x2a) == '\b')))) {
    return '\0';
  }
  if (*(char *)(param_1 + 0x4b) != '\0') {
    cVar3 = *(char *)((longlong)param_2 + 0x2a);
    if (cVar3 == '\x0e') {
      cVar3 = '\0';
      if (*(char *)((longlong)param_2 + 0x42) == '\x1e') {
        cVar3 = '\x02';
      }
      return cVar3;
    }
    if ((cVar3 == '\x1e') || (cVar3 == '\x1f')) {
      return '\0';
    }
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    cVar3 = *(char *)((longlong)param_2 + 0x42);
    if (cVar3 == '\b') {
      return '\x02';
    }
    if (cVar3 == '\x0e') {
      return '\x02';
    }
    if (cVar3 == '\x1e') {
      return '\x02';
    }
    if (cVar3 == '\x1f') {
      return '\x02';
    }
  }
  if (*(char *)((longlong)param_2 + 0x2a) != '&') {
    param_2[0xc] = 0;
  }
  if ((char)param_2[0xb] != '\0') {
    if (*(char *)((longlong)param_2 + 0x42) != ')') {
      *(undefined1 *)(param_2 + 0xb) = 0;
      return '\x02';
    }
    return '\x02';
  }
  if (*(char *)(param_1 + 0x4d) != '\0') {
    if (*(char *)((longlong)param_2 + 0x42) == '/') {
      return '\x02';
    }
    if (*(char *)((longlong)param_2 + 0x42) == ')') {
      switch(*(char *)((longlong)param_2 + 0x2a)) {
      case '\x05':
      case '\v':
      case '\r':
      case '\"':
      case '%':
      case '/':
        break;
      default:
        goto switchD_18025c74c_caseD_6;
      }
    }
  }
  if (*(char *)(param_1 + 0x4e) != '\0') {
    if (*(char *)((longlong)param_2 + 0x59) != '\0') {
      *(undefined1 *)((longlong)param_2 + 0x59) = 0;
      return '\x01';
    }
    if (*(char *)((longlong)param_2 + 0x2a) == '/') {
      if (*(char *)((longlong)param_2 + 0x42) != ')') {
        return '\x01';
      }
      *(undefined1 *)((longlong)param_2 + 0x59) = 1;
      return '\x02';
    }
  }
  if ((*(char *)(param_1 + 0x4f) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == '0')) {
    return '\x02';
  }
  if ((*(char *)(param_1 + 0x50) != '\0') && (cVar3 = FUN_18025b140(param_2), cVar3 != '\x03')) {
    return cVar3;
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    if (*(char *)((longlong)param_2 + 0x2a) == '\f') {
      *(undefined1 *)((longlong)param_2 + 0x2a) = 2;
    }
    if (*(char *)((longlong)param_2 + 0x42) == '\f') {
      *(undefined1 *)((longlong)param_2 + 0x42) = 2;
    }
  }
  if (*(char *)(param_1 + 0x52) != '\0') {
    if (*(char *)((longlong)param_2 + 0x42) == '-') {
      return '\x02';
    }
    if (*(char *)((longlong)param_2 + 0x2a) == '-') {
      return '\x02';
    }
  }
  if ((*(char *)(param_1 + 0x53) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == '\x12')) {
    return '\x02';
  }
  if ((*(char *)(param_1 + 0x54) != '\0') && (*(char *)((longlong)param_2 + 0x42) == '\x12')) {
    if (0x29 < *(byte *)((longlong)param_2 + 0x2a)) {
      return '\x02';
    }
    if ((0x20000a00040U >> ((longlong)(char)*(byte *)((longlong)param_2 + 0x2a) & 0x3fU) & 1) == 0)
    {
      return '\x02';
    }
  }
  if (((*(char *)(param_1 + 0x55) != '\0') && (*(byte *)((longlong)param_2 + 0x42) < 0x2b)) &&
     ((0x40000022800U >> ((longlong)(char)*(byte *)((longlong)param_2 + 0x42) & 0x3fU) & 1) != 0)) {
    return '\x02';
  }
  if ((*(char *)(param_1 + 0x56) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == '\"')) {
    if (*(char *)((longlong)param_2 + 0x42) == ')') {
      *(undefined1 *)(param_2 + 0xb) = 1;
      return '\x02';
    }
    return '\x02';
  }
  if ((*(char *)(param_1 + 0x57) != '\0') && (cVar3 = FUN_18025b300(param_2), cVar3 != '\x03')) {
    return cVar3;
  }
  if ((*(char *)(param_1 + 0x58) != '\0') && (cVar3 = FUN_18025b4c0(param_2), cVar3 != '\x03')) {
    return cVar3;
  }
  if ((((*(char *)(param_1 + 0x59) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == ')')) &&
      (*(char *)((longlong)param_2 + 0x42) == '\x1a')) &&
     ((param_2[9] + 1U < (ulonglong)param_2[1] &&
      (cVar3 = FUN_18025ad40(*(undefined2 *)(*param_2 + (param_2[9] + 1U) * 0x10)), cVar3 == '!'))))
  {
    return '\x01';
  }
  if ((*(char *)(param_1 + 0x5a) != '\0') && (*(char *)((longlong)param_2 + 0x42) == '\x1a')) {
    return '\x02';
  }
  if ((*(char *)(param_1 + 0x5b) != '\0') &&
     ((*(char *)((longlong)param_2 + 0x2a) - 0xbU & 0xfd) == 0)) {
    uVar1 = param_2[1];
    uVar7 = param_2[9];
    do {
      uVar6 = uVar7 + 1;
      if (uVar1 <= uVar7) break;
      cVar3 = FUN_18025ad40(*(undefined2 *)(*param_2 + uVar7 * 0x10));
      uVar7 = uVar6;
    } while (cVar3 == ')');
    cVar3 = *(char *)((longlong)param_2 + 0x42);
    if ((uVar6 < (ulonglong)param_2[1]) &&
       (cVar4 = FUN_18025ad40(*(undefined2 *)(*param_2 + uVar6 * 0x10)), cVar4 == ' '))
    goto LAB_18025c93b;
    if (cVar3 == ')') {
      return '\x02';
    }
  }
  if ((*(char *)(param_1 + 0x5c) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == '\x05')) {
    uVar1 = param_2[1];
    uVar7 = param_2[9];
    do {
      uVar6 = uVar7 + 1;
      if (uVar1 <= uVar7) break;
      cVar3 = FUN_18025ad40(*(undefined2 *)(*param_2 + uVar7 * 0x10));
      uVar7 = uVar6;
    } while (cVar3 == ')');
    cVar3 = *(char *)((longlong)param_2 + 0x42);
    if ((uVar6 < (ulonglong)param_2[1]) &&
       (cVar4 = FUN_18025ad40(*(undefined2 *)(*param_2 + uVar6 * 0x10)), cVar4 == '\x05')) {
LAB_18025c93b:
      if (cVar3 == ')') {
        *(undefined1 *)(param_2 + 0xb) = 1;
        return '\x02';
      }
      return '\x02';
    }
    if (cVar3 == ')') {
      return '\x02';
    }
  }
  if ((*(char *)(param_1 + 0x5d) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == ')')) {
    return '\x01';
  }
  if (*(char *)(param_1 + 0x5e) != '\0') {
    if ((*(char *)((longlong)param_2 + 0x42) == '%') &&
       (cVar3 = FUN_18025afd0((short)param_2[8]), cVar3 == '\0')) {
      return '\x02';
    }
    if ((*(char *)((longlong)param_2 + 0x2a) == '%') &&
       (cVar3 = FUN_18025ae60((short)param_2[5]), cVar3 == '\0')) {
      return '\x02';
    }
  }
  if (*(char *)(param_1 + 0x5f) != '\0') {
    cVar3 = FUN_18025f540((short)param_2[5]);
    if (cVar3 == '\0') {
      bVar8 = *(char *)((longlong)param_2 + 0x42) == '%';
LAB_18025ca59:
      if (bVar8) {
        return '\x02';
      }
    }
    else if (*(char *)((longlong)param_2 + 0x42) == '%') {
      if ((ulonglong)param_2[1] <= param_2[9] + 1U) {
        return '\x02';
      }
      lVar2 = *param_2;
      lVar5 = (param_2[9] + 1U) * 0x10;
      cVar3 = FUN_18025ad40(*(undefined2 *)(lVar5 + *param_2));
      if (cVar3 == '2') {
        return '\x02';
      }
      cVar3 = FUN_18025f540(*(undefined2 *)(lVar2 + lVar5));
      bVar8 = cVar3 == '\0';
      goto LAB_18025ca59;
    }
    cVar3 = *(char *)((longlong)param_2 + 0x2a);
    if ((cVar3 == '%') && (cVar4 = FUN_18025f540((short)param_2[8]), cVar4 == '\0')) {
      return '\x02';
    }
    if (((*(char *)((longlong)param_2 + 0x12) == '1') ||
        (cVar4 = FUN_18025f540((short)param_2[2]), cVar4 == '\0')) && (cVar3 == '%')) {
      return '\x02';
    }
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    if (*(char *)((longlong)param_2 + 0x2a) == '\t') {
      return '\x01';
    }
    if (*(char *)((longlong)param_2 + 0x42) == '\t') {
      return '\x01';
    }
  }
  if ((*(char *)(param_1 + 0x61) != '\0') && (cVar3 = FUN_18025b6d0(param_2), cVar3 != '\x03')) {
    return cVar3;
  }
  if (((*(char *)(param_1 + 99) != '\0') && (*(char *)((longlong)param_2 + 0x12) == '\x16')) &&
     (((*(char *)((longlong)param_2 + 0x2a) - 0x15U & 0xfd) == 0 &&
      (*(char *)((longlong)param_2 + 0x42) != '\x16')))) {
    return '\x02';
  }
  if (*(char *)(param_1 + 0x62) != '\0') {
    if (*(char *)((longlong)param_2 + 0x2a) == '\a') {
      return '\x02';
    }
    if ((*(byte *)((longlong)param_2 + 0x42) < 0x21) &&
       ((0x100a00040U >> ((longlong)(char)*(byte *)((longlong)param_2 + 0x42) & 0x3fU) & 1) != 0)) {
      return '\x02';
    }
  }
  if (((*(char *)(param_1 + 100) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == '*')) &&
     (*(char *)((longlong)param_2 + 0x42) == '\x16')) {
    return '\x02';
  }
  if ((*(char *)(param_1 + 0x65) != '\0') && (*(char *)((longlong)param_2 + 0x42) == '\x19')) {
    return '\x02';
  }
  if (*(char *)(param_1 + 0x66) != '\0') {
    cVar3 = *(char *)((longlong)param_2 + 0x2a);
    if ((cVar3 == '\x02') || (cVar3 == '\x16')) {
      if (*(char *)((longlong)param_2 + 0x42) == '!') {
        return '\x02';
      }
    }
    else if (cVar3 == '!') {
      if (*(char *)((longlong)param_2 + 0x42) == '\x02') {
        return '\x02';
      }
      if (*(char *)((longlong)param_2 + 0x42) == '\x16') {
        return '\x02';
      }
    }
  }
  if ((*(char *)(param_1 + 0x67) != '\0') && (cVar3 = FUN_18025b8a0(param_2), cVar3 != '\x03')) {
    return cVar3;
  }
  if (*(char *)(param_1 + 0x68) != '\0') {
    cVar3 = *(char *)((longlong)param_2 + 0x2a);
    if ((byte)(cVar3 - 0x23U) < 2) {
      cVar4 = *(char *)((longlong)param_2 + 0x42);
      if (cVar4 == '\x02') {
        return '\x02';
      }
      if (cVar4 == '\x16') {
        return '\x02';
      }
    }
    if (((cVar3 == '\x02') || (cVar3 == '\x16')) &&
       ((byte)(*(char *)((longlong)param_2 + 0x42) - 0x23U) < 2)) {
      return '\x02';
    }
  }
  if ((*(char *)(param_1 + 0x69) != '\0') && (cVar3 = FUN_18025bac0(param_2), cVar3 != '\x03')) {
    return cVar3;
  }
  if ((*(char *)(param_1 + 0x6a) != '\0') && (cVar3 = FUN_18025be90(param_2), cVar3 != '\x03')) {
    return cVar3;
  }
  if ((*(char *)(param_1 + 0x6b) != '\0') && (cVar3 = FUN_18025c210(param_2), cVar3 != '\x03')) {
    return cVar3;
  }
  if ((*(char *)(param_1 + 0x6c) != '\0') &&
     ((*(char *)((longlong)param_2 + 0x2a) == '\x02' ||
      (*(char *)((longlong)param_2 + 0x2a) == '\x16')))) {
    if (*(char *)((longlong)param_2 + 0x42) == '\x02') {
      return '\x02';
    }
    if (*(char *)((longlong)param_2 + 0x42) == '\x16') {
      return '\x02';
    }
  }
  if (*(char *)(param_1 + 0x6d) != '\0') {
    cVar3 = *(char *)((longlong)param_2 + 0x2a);
    if (cVar3 == '\x03') {
      if (*(char *)((longlong)param_2 + 0x42) == '\x01') {
        return '\x02';
      }
      if ((short)param_2[8] == 0x25cc) {
        return '\x02';
      }
      if (*(char *)((longlong)param_2 + 0x42) == '\x04') {
        return '\x02';
      }
LAB_18025cca5:
      if (((short)param_2[5] == 0x25cc) || (cVar3 == '\x04')) goto LAB_18025ccaf;
    }
    else {
      if (cVar3 != '\x01') goto LAB_18025cca5;
LAB_18025ccaf:
      if ((byte)(*(char *)((longlong)param_2 + 0x42) - 0x2bU) < 2) {
        return '\x02';
      }
    }
    if ((((*(char *)((longlong)param_2 + 0x12) == '\x01') || ((short)param_2[2] == 0x25cc)) ||
        (*(char *)((longlong)param_2 + 0x12) == '\x04')) &&
       (*(char *)((longlong)param_2 + 0x2a) == ',')) {
      if (*(char *)((longlong)param_2 + 0x42) == '\x01') {
        return '\x02';
      }
      if ((short)param_2[8] == 0x25cc) {
        return '\x02';
      }
    }
    if (((((*(char *)((longlong)param_2 + 0x2a) == '\x01') || ((short)param_2[5] == 0x25cc)) ||
         (*(char *)((longlong)param_2 + 0x2a) == '\x04')) &&
        (((*(char *)((longlong)param_2 + 0x42) == '\x01' || ((short)param_2[8] == 0x25cc)) ||
         (*(char *)((longlong)param_2 + 0x42) == '\x04')))) &&
       ((param_2[9] + 1U < (ulonglong)param_2[1] &&
        (cVar3 = FUN_18025ad40(*(undefined2 *)(*param_2 + (param_2[9] + 1U) * 0x10)), cVar3 == '+'))
       )) {
      return '\x02';
    }
  }
  if (((*(char *)(param_1 + 0x6e) == '\0') || (*(char *)((longlong)param_2 + 0x2a) != '\x1a')) ||
     ((*(char *)((longlong)param_2 + 0x42) != '\x02' &&
      (*(char *)((longlong)param_2 + 0x42) != '\x16')))) {
    if ((*(char *)(param_1 + 0x6f) != '\0') && (cVar3 = FUN_18025c410(param_2), cVar3 != '\x03')) {
      return cVar3;
    }
    if (*(char *)(param_1 + 0x70) != '\0') {
      if (*(char *)((longlong)param_2 + 0x2a) == '&') {
        if ((*(char *)((longlong)param_2 + 0x42) == '&') &&
           (param_2[0xc] = param_2[0xc] + 1, (*(byte *)(param_2 + 0xc) & 1) != 0)) {
          return '\x02';
        }
      }
      else {
        param_2[0xc] = 0;
      }
    }
    if (((*(char *)(param_1 + 0x71) != '\0') && (*(char *)((longlong)param_2 + 0x2a) == '\x0f')) &&
       (*(char *)((longlong)param_2 + 0x42) == '\x10')) {
      return '\x02';
    }
    return '\x01';
  }
switchD_18025c74c_caseD_6:
  return '\x02';
}


