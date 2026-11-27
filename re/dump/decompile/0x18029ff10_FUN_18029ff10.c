// 0x18029ff10  FUN_18029ff10
// size=1465 thunk=false
// signature: undefined FUN_18029ff10()
// status: ok


byte * FUN_18029ff10(byte *param_1)

{
  byte *_Src;
  byte bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong _Size;
  size_t _Size_00;
  
  bVar1 = *param_1;
  if (0x1f < bVar1) {
    _Src = param_1 + 1;
    if (bVar1 < 0x80) {
      if (bVar1 < 0x40) {
        puVar3 = DAT_1803fcce8 + (bVar1 - 0x1f);
        if (puVar3 <= DAT_1803fccb8) {
          if (_Src < DAT_1803fccb0) {
            puVar3 = DAT_1803fccb8 + 1;
          }
          else {
            memcpy(DAT_1803fcce8,_Src,(ulonglong)(bVar1 - 0x1f));
          }
        }
        DAT_1803fcce8 = puVar3;
        return param_1 + ((ulonglong)*param_1 - 0x1e);
      }
      uVar4 = param_1[2] + 1;
      if (DAT_1803fcce8 + uVar4 <= DAT_1803fccb8) {
        puVar3 = DAT_1803fcce8 + ((ulonglong)bVar1 * -0x100 - (ulonglong)*_Src) + 0x3fff;
        if (DAT_1803fcce0 <= puVar3) {
          do {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            *DAT_1803fcce8 = uVar2;
            DAT_1803fcce8 = DAT_1803fcce8 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          return param_1 + 3;
        }
        DAT_1803fcce8 = DAT_1803fccb8 + 1;
        return param_1 + 3;
      }
      DAT_1803fcce8 = DAT_1803fcce8 + uVar4;
      return param_1 + 3;
    }
    uVar4 = bVar1 - 0x7f;
    if (DAT_1803fccb8 < DAT_1803fcce8 + uVar4) {
      DAT_1803fcce8 = DAT_1803fcce8 + uVar4;
      return param_1 + 2;
    }
    puVar3 = DAT_1803fcce8 + (-1 - (ulonglong)*_Src);
    if (DAT_1803fcce0 <= puVar3) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *DAT_1803fcce8 = uVar2;
        DAT_1803fcce8 = DAT_1803fcce8 + 1;
      }
      return param_1 + 2;
    }
    DAT_1803fcce8 = DAT_1803fccb8 + 1;
    return param_1 + 2;
  }
  if (0x17 < bVar1) {
    uVar4 = param_1[3] + 1;
    if (DAT_1803fccb8 < DAT_1803fcce8 + uVar4) {
      DAT_1803fcce8 = DAT_1803fcce8 + uVar4;
      return param_1 + 4;
    }
    puVar3 = DAT_1803fcce8 +
             ((ulonglong)CONCAT11(bVar1,param_1[1]) * -0x100 - (ulonglong)param_1[2]) + 0x17ffff;
    if (DAT_1803fcce0 <= puVar3) {
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *DAT_1803fcce8 = uVar2;
        DAT_1803fcce8 = DAT_1803fcce8 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      return param_1 + 4;
    }
    DAT_1803fcce8 = DAT_1803fccb8 + 1;
    return param_1 + 4;
  }
  if (0xf < bVar1) {
    uVar4 = (uint)param_1[4] + (uint)param_1[3] * 0x100 + 1;
    if (DAT_1803fccb8 < DAT_1803fcce8 + uVar4) {
      DAT_1803fcce8 = DAT_1803fcce8 + uVar4;
      return param_1 + 5;
    }
    puVar3 = DAT_1803fcce8 +
             ((ulonglong)CONCAT11(bVar1,param_1[1]) * -0x100 - (ulonglong)param_1[2]) + 0xfffff;
    if (DAT_1803fcce0 <= puVar3) {
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *DAT_1803fcce8 = uVar2;
        DAT_1803fcce8 = DAT_1803fcce8 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      return param_1 + 5;
    }
    DAT_1803fcce8 = DAT_1803fccb8 + 1;
    return param_1 + 5;
  }
  if (7 < bVar1) {
    _Size = (ulonglong)((param_1[1] - 0x7ff) + (uint)bVar1 * 0x100);
    puVar3 = DAT_1803fcce8 + _Size;
    if (puVar3 <= DAT_1803fccb8) {
      if (param_1 + 2 < DAT_1803fccb0) {
        puVar3 = DAT_1803fccb8 + 1;
      }
      else {
        memcpy(DAT_1803fcce8,param_1 + 2,_Size);
      }
    }
    DAT_1803fcce8 = puVar3;
    return param_1 + (ulonglong)*param_1 * 0x100 + -0x7fd + (ulonglong)param_1[1];
  }
  if (bVar1 == 7) {
    _Size_00 = (ulonglong)param_1[2] + (ulonglong)param_1[1] * 0x100 + 1;
    puVar3 = DAT_1803fcce8 + _Size_00;
    if (puVar3 <= DAT_1803fccb8) {
      if (param_1 + 3 < DAT_1803fccb0) {
        puVar3 = DAT_1803fccb8 + 1;
      }
      else {
        memcpy(DAT_1803fcce8,param_1 + 3,_Size_00);
      }
    }
    DAT_1803fcce8 = puVar3;
    return param_1 + (ulonglong)param_1[1] * 0x100 + 4 + (ulonglong)param_1[2];
  }
  if (bVar1 != 6) {
    if (bVar1 == 4) {
      uVar4 = (uint)param_1[5] + (uint)param_1[4] * 0x100 + 1;
      if (DAT_1803fccb8 < DAT_1803fcce8 + uVar4) {
        DAT_1803fcce8 = DAT_1803fcce8 + uVar4;
        return param_1 + 6;
      }
      puVar3 = DAT_1803fcce8 +
               ((ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100 - (ulonglong)param_1[3]) + -1;
      if (puVar3 < DAT_1803fcce0) {
        DAT_1803fcce8 = DAT_1803fccb8 + 1;
        return param_1 + 6;
      }
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *DAT_1803fcce8 = uVar2;
        DAT_1803fcce8 = DAT_1803fcce8 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      param_1 = param_1 + 6;
    }
    return param_1;
  }
  uVar4 = param_1[4] + 1;
  if (DAT_1803fccb8 < DAT_1803fcce8 + uVar4) {
    DAT_1803fcce8 = DAT_1803fcce8 + uVar4;
    return param_1 + 5;
  }
  puVar3 = DAT_1803fcce8 +
           ((ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100 - (ulonglong)param_1[3]) + -1;
  if (DAT_1803fcce0 <= puVar3) {
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      *DAT_1803fcce8 = uVar2;
      DAT_1803fcce8 = DAT_1803fcce8 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    return param_1 + 5;
  }
  DAT_1803fcce8 = DAT_1803fccb8 + 1;
  return param_1 + 5;
}


