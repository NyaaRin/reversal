// 0x18028c0e0  FUN_18028c0e0
// size=931 thunk=false
// signature: undefined FUN_18028c0e0()
// status: ok


uint FUN_18028c0e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x38);
  sVar7 = (ushort)*(byte *)(lVar1 + uVar6) * 0x100 + (ushort)*(byte *)(lVar1 + 1 + uVar6);
  if (sVar7 == 0) {
    if ((int)param_2 <
        (int)((uint)*(byte *)(lVar1 + 2 + uVar6) * 0x100 + (*(byte *)(lVar1 + 3 + uVar6) - 6))) {
      return (uint)*(byte *)((longlong)(int)param_2 + uVar6 + 6 + lVar1);
    }
  }
  else if (sVar7 == 6) {
    uVar4 = (uint)*(byte *)(lVar1 + 6 + uVar6) * 0x100 + (uint)*(byte *)(lVar1 + 7 + uVar6);
    if ((uVar4 <= param_2) &&
       (param_2 < (uint)*(byte *)(lVar1 + 9 + uVar6) +
                  (uint)*(byte *)(lVar1 + 8 + uVar6) * 0x100 + uVar4)) {
      lVar3 = (param_2 - uVar4) * 2 + uVar6;
      return (uint)*(byte *)(lVar3 + 0xb + lVar1) + (uint)*(byte *)(lVar3 + 10 + lVar1) * 0x100;
    }
  }
  else if (sVar7 != 2) {
    if (sVar7 == 4) {
      uVar13 = (ushort)((ushort)*(byte *)(lVar1 + 6 + uVar6) * 0x100 +
                       (ushort)*(byte *)(lVar1 + 7 + uVar6)) >> 1;
      sVar7 = (ushort)*(byte *)(lVar1 + 10 + uVar6) * 0x100 + (ushort)*(byte *)(lVar1 + 0xb + uVar6)
      ;
      uVar12 = (ushort)((ushort)*(byte *)(lVar1 + 8 + uVar6) * 0x100 +
                       (ushort)*(byte *)(lVar1 + 9 + uVar6)) >> 1;
      if ((int)param_2 < 0x10000) {
        uVar8 = *(uint *)(param_1 + 0x38) + 0xe;
        uVar4 = (uint)*(byte *)(lVar1 + 0xd + uVar6) + (uint)*(byte *)(lVar1 + 0xc + uVar6) * 0x100
                & 0xfffffffe;
        lVar3 = (ulonglong)uVar4 + (ulonglong)uVar8;
        uVar4 = uVar4 + uVar8;
        if ((int)param_2 <
            (int)((uint)*(byte *)(lVar3 + 1 + lVar1) + (uint)*(byte *)(lVar3 + lVar1) * 0x100)) {
          uVar4 = uVar8;
        }
        uVar4 = uVar4 - 2;
        for (; sVar7 != 0; sVar7 = sVar7 + -1) {
          uVar12 = uVar12 >> 1;
          lVar3 = (ulonglong)((uint)uVar12 + (uint)uVar12) + (ulonglong)uVar4;
          uVar2 = (uint)uVar12 + (uint)uVar12 + uVar4;
          if ((int)param_2 <=
              (int)((uint)*(byte *)(lVar3 + lVar1) * 0x100 + (uint)*(byte *)(lVar1 + 1 + lVar3))) {
            uVar2 = uVar4;
          }
          uVar4 = uVar2;
        }
        lVar3 = (ulonglong)((uVar4 - uVar8) + 2 >> 1 & 0xffff) * 2;
        lVar5 = (ulonglong)((uint)uVar13 + (uint)uVar13) + lVar3 + uVar6;
        iVar9 = (uint)*(byte *)(lVar5 + 0x11 + lVar1) +
                (uint)*(byte *)(lVar5 + 0x10 + lVar1) * 0x100;
        if ((iVar9 <= (int)param_2) &&
           (lVar5 = (ulonglong)uVar8 + lVar3,
           (int)param_2 <=
           (int)((uint)*(byte *)(lVar5 + 1 + lVar1) + (uint)*(byte *)(lVar5 + lVar1) * 0x100))) {
          uVar4 = ((uint)uVar13 + (uint)uVar13 * 2) * 2;
          lVar5 = (ulonglong)uVar4 + lVar3 + uVar6;
          uVar12 = (ushort)*(byte *)(lVar5 + 0x10 + lVar1) * 0x100 +
                   (ushort)*(byte *)(lVar5 + 0x11 + lVar1);
          if (uVar12 != 0) {
            lVar3 = (ulonglong)uVar12 + (longlong)(int)((param_2 - iVar9) * 2) + (ulonglong)uVar4 +
                    lVar3 + uVar6;
            return (uint)*(byte *)(lVar3 + 0x11 + lVar1) +
                   (uint)*(byte *)(lVar3 + 0x10 + lVar1) * 0x100;
          }
          lVar3 = (ulonglong)((uint)uVar13 * 4) + lVar3 + uVar6;
          return (uint)(ushort)((ushort)*(byte *)(lVar3 + 0x11 + lVar1) +
                                (ushort)*(byte *)(lVar3 + 0x10 + lVar1) * 0x100 + (short)param_2);
        }
      }
    }
    else if ((sVar7 == 0xc) || (sVar7 == 0xd)) {
      iVar9 = 0;
      iVar10 = (((uint)*(byte *)(lVar1 + 0xd + uVar6) + (uint)*(byte *)(lVar1 + 0xc + uVar6) * 0x100
                ) * 0x100 + (uint)*(byte *)(lVar1 + 0xe + uVar6)) * 0x100 +
               (uint)*(byte *)(lVar1 + 0xf + uVar6);
      if (0 < iVar10) {
        do {
          iVar11 = (iVar10 - iVar9 >> 1) + iVar9;
          lVar3 = (longlong)(iVar11 * 0xc) + uVar6;
          uVar4 = (uint)*(byte *)(lVar1 + 0x11 + lVar3) * 0x10000 +
                  (uint)*(byte *)(lVar3 + 0x12 + lVar1) * 0x100 +
                  (uint)*(byte *)((longlong)(iVar11 * 0xc) + 0x10 + lVar1 + uVar6) * 0x1000000 +
                  (uint)*(byte *)(lVar3 + 0x13 + lVar1);
          if (uVar4 <= param_2) {
            if (param_2 <=
                (uint)*(byte *)(lVar3 + 0x15 + lVar1) * 0x10000 +
                (uint)*(byte *)(lVar3 + 0x16 + lVar1) * 0x100 +
                (uint)*(byte *)(lVar3 + 0x14 + lVar1) * 0x1000000 +
                (uint)*(byte *)(lVar3 + 0x17 + lVar1)) {
              uVar8 = (uint)*(byte *)(lVar3 + 0x1b + lVar1) +
                      (uint)*(byte *)(lVar3 + 0x19 + lVar1) * 0x10000 +
                      (uint)*(byte *)(lVar3 + 0x1a + lVar1) * 0x100 +
                      (uint)*(byte *)(lVar3 + 0x18 + lVar1) * 0x1000000;
              if (sVar7 != 0xc) {
                return uVar8;
              }
              return (uVar8 - uVar4) + param_2;
            }
            iVar9 = iVar11 + 1;
            iVar11 = iVar10;
          }
          iVar10 = iVar11;
        } while (iVar9 < iVar10);
      }
    }
  }
  return 0;
}


