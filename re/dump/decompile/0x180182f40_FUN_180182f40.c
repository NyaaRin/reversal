// 0x180182f40  FUN_180182f40
// size=509 thunk=false
// signature: undefined FUN_180182f40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180182f40(longlong param_1,int param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_4e;
  undefined2 local_3b;
  undefined1 local_39;
  undefined1 local_31;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_30[0] = param_2;
  if (param_1 == 0) {
    if (0 < param_2) {
      plVar5 = (longlong *)DAT_180570810[1];
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
      plVar7 = DAT_180570810;
      while (cVar1 == '\0') {
        plVar6 = plVar5;
        if ((int)plVar5[4] < param_2) {
          plVar5 = plVar5 + 2;
          plVar6 = plVar7;
        }
        plVar5 = (longlong *)*plVar5;
        plVar7 = plVar6;
        cVar1 = *(char *)((longlong)plVar5 + 0x19);
      }
      if ((*(char *)((longlong)plVar7 + 0x19) != '\0') || (param_2 < (int)plVar7[4])) {
        plVar7 = DAT_180570810;
      }
      if (plVar7 != DAT_180570810) {
        return plVar7 + 5;
      }
      if (param_3 != '\0') {
        uVar3 = CONCAT44(DAT_1803e89ec,DAT_1803e89e8);
        uVar4 = CONCAT44(DAT_1803e89f4,DAT_1803e89f0);
        plVar5 = (longlong *)FUN_180215310(plVar7,&local_78,local_30);
        lVar2 = *plVar5;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
        *(undefined8 *)(lVar2 + 0x38) = uVar4;
        *(undefined2 *)(lVar2 + 0x40) = 0;
        *(undefined2 *)(lVar2 + 0x42) = local_4e;
        *(undefined4 *)(lVar2 + 0x44) = 0x3eb33333;
        *(undefined4 *)(lVar2 + 0x48) = 0x3f400000;
        *(undefined4 *)(lVar2 + 0x4c) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
        *(undefined1 *)(lVar2 + 0x54) = 1;
        *(undefined2 *)(lVar2 + 0x55) = local_3b;
        *(undefined1 *)(lVar2 + 0x57) = local_39;
        *(undefined4 *)(lVar2 + 0x58) = 0;
        *(undefined2 *)(lVar2 + 0x5c) = 0;
        *(undefined1 *)(lVar2 + 0x5e) = 0;
        *(undefined1 *)(lVar2 + 0x5f) = local_31;
        plVar5 = (longlong *)FUN_180215310(lVar2,&local_78,local_30);
        return (longlong *)(*plVar5 + 0x28);
      }
    }
    return (longlong *)0x0;
  }
  uVar8 = 0;
  iVar10 = (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249;
  if (0 < iVar10) {
    do {
      plVar5 = (longlong *)((ulonglong)uVar8 * 0x38 + DAT_1803edce0);
      if (*plVar5 == param_1) {
        return plVar5;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar10);
  }
  if (param_3 == '\0') {
    return (longlong *)0x0;
  }
  local_88 = 0;
  local_78 = DAT_1803e89e8;
  uStack_74 = DAT_1803e89ec;
  uStack_70 = DAT_1803e89f0;
  uStack_6c = DAT_1803e89f4;
  FUN_180182d70(DAT_1803e89e8,&local_78,0,0);
  uVar9 = 0;
  iVar10 = (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249;
  if (0 < iVar10) {
    do {
      plVar5 = (longlong *)(uVar9 * 0x38 + DAT_1803edce0);
      if (*plVar5 == param_1) {
        return plVar5;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar10);
  }
  return (longlong *)0x0;
}


