// 0x180291060  FUN_180291060
// size=325 thunk=false
// signature: undefined FUN_180291060()
// status: ok


int FUN_180291060(char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '1') {
    if (param_1[1] != '\0') {
      return -1;
    }
    if (param_1[2] != '\0') {
      return -1;
    }
    bVar2 = param_1[3] == '\0';
    goto LAB_1802910f3;
  }
  if (cVar1 == 't') {
    if (param_1[1] == 'y') {
      if (param_1[2] != 'p') {
        return -1;
      }
      bVar2 = param_1[3] == '1';
      goto LAB_1802910f3;
    }
  }
  else {
    if (cVar1 == 'O') {
      if (param_1[1] != 'T') {
        return -1;
      }
      if (param_1[2] != 'T') {
        return -1;
      }
      bVar2 = param_1[3] == 'O';
      goto LAB_1802910f3;
    }
    if (cVar1 == '\0') {
      if (param_1[1] != '\x01') {
        return -1;
      }
      if (param_1[2] != '\0') {
        return -1;
      }
      bVar2 = param_1[3] == '\0';
      goto LAB_1802910f3;
    }
    if (cVar1 != 't') {
      return -1;
    }
  }
  if (param_1[1] != 'r') {
    if (param_1[1] != 't') {
      return -1;
    }
    if (param_1[2] != 'c') {
      return -1;
    }
    if (param_1[3] != 'f') {
      return -1;
    }
    if (((uint)(byte)param_1[5] * 0x10000 + (uint)(byte)param_1[6] * 0x100 +
         (uint)(byte)param_1[4] * 0x1000000 + ((byte)param_1[7] - 0x10000) & 0xfffeffff) != 0) {
      return -1;
    }
    if ((int)((((uint)(byte)param_1[8] * 0x100 + (uint)(byte)param_1[9]) * 0x100 +
              (uint)(byte)param_1[10]) * 0x100 + (uint)(byte)param_1[0xb]) <= param_2) {
      return -1;
    }
    return (uint)(byte)param_1[(longlong)(param_2 * 4) + 0xd] * 0x10000 +
           (uint)(byte)param_1[(longlong)(param_2 * 4) + 0xe] * 0x100 +
           (uint)(byte)param_1[(longlong)(param_2 * 4) + 0xc] * 0x1000000 +
           (uint)(byte)param_1[(longlong)(param_2 * 4) + 0xf];
  }
  if (param_1[2] != 'u') {
    return -1;
  }
  bVar2 = param_1[3] == 'e';
LAB_1802910f3:
  if (!bVar2) {
    return -1;
  }
  return -(uint)(param_2 != 0);
}


