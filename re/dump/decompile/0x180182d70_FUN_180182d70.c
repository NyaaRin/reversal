// 0x180182d70  FUN_180182d70
// size=300 thunk=false
// signature: undefined FUN_180182d70()
// status: ok


void FUN_180182d70(longlong param_1,longlong *param_2,undefined1 param_3,byte param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte bStack_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  plVar1 = DAT_1803edce8;
  if (param_1 != 0) {
    uVar6 = 0;
    iVar7 = (int)((longlong)DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249;
    if (0 < iVar7) {
      do {
        lVar4 = uVar6 * 0x38;
        if (*(longlong *)(lVar4 + DAT_1803edce0) == param_1) {
          lVar2 = param_2[1];
          plVar1 = (longlong *)(lVar4 + 8 + DAT_1803edce0);
          *plVar1 = *param_2;
          plVar1[1] = lVar2;
          *(byte *)(lVar4 + 0x18 + DAT_1803edce0) = param_4;
          return;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < iVar7);
    }
    uStack_40 = (undefined4)*param_2;
    uStack_3c = *(undefined4 *)((longlong)param_2 + 4);
    lVar4 = *param_2;
    uStack_38 = (undefined4)param_2[1];
    lVar3 = *(longlong *)((longlong)param_2 + 4);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar2 = param_2[1];
    uStack_12 = param_5;
    uStack_2f = 0;
    local_1c = CONCAT31(local_1c._1_3_,1);
    local_18 = 0;
    uStack_14 = 0;
    if (DAT_1803edce8 != DAT_1803edcf0) {
      *DAT_1803edce8 = param_1;
      plVar1[1] = lVar4;
      plVar1[2] = lVar2;
      plVar1[3] = CONCAT44(uStack_40,CONCAT22(uStack_2e,(ushort)param_4));
      plVar1[4] = lVar3;
      plVar1[5] = CONCAT44(local_1c,uStack_34);
      plVar1[6] = (ulonglong)CONCAT12(uStack_11,CONCAT11(param_5,param_3)) << 0x28;
      DAT_1803edce8 = DAT_1803edce8 + 7;
      return;
    }
    local_48 = param_1;
    bStack_30 = param_4;
    uStack_2c = uStack_40;
    uStack_28 = uStack_3c;
    uStack_24 = uStack_38;
    uStack_20 = uStack_34;
    uStack_13 = param_3;
    FUN_1802225c0(uStack_40,DAT_1803edce8,&local_48);
  }
  return;
}


