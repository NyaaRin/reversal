// 0x18029d7b0  FUN_18029d7b0
// size=493 thunk=false
// signature: undefined FUN_18029d7b0()
// status: ok


void FUN_18029d7b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  ushort *param_5,byte *param_6,undefined8 param_7,int param_8)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  uint *_Dst;
  int iVar7;
  uint uVar8;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  iVar7 = *(int *)(lVar3 + 0x24) * *(int *)(lVar3 + 0x1c);
  uVar6 = (uint)param_5[3];
  uVar2 = param_5[2];
  _Dst = (uint *)((longlong)
                  (int)(((uint)param_5[1] * *(int *)(lVar3 + 0x1c) + (uint)*param_5) *
                       *(int *)(lVar3 + 0x24)) + *(longlong *)(lVar3 + 0x28));
  if (*(int *)(lVar3 + 0x18) == 1) {
    if (param_5[3] != 0) {
      do {
        memcpy(_Dst,param_6,(ulonglong)uVar2);
        uVar6 = uVar6 - 1;
        param_6 = param_6 + param_8;
        _Dst = (uint *)((longlong)_Dst + (longlong)iVar7);
      } while (0 < (int)uVar6);
    }
  }
  else if ((*(int *)(lVar3 + 0x18) == 0) && (uVar6 != 0)) {
    do {
      pbVar4 = param_6;
      puVar5 = _Dst;
      uVar9 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          uVar8 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar8;
          *puVar5 = (uint)bVar1 << 0x18 | 0xffffff;
          puVar5 = puVar5 + 1;
        } while (0 < (int)uVar8);
      }
      uVar6 = uVar6 - 1;
      param_6 = param_6 + param_8;
      _Dst = (uint *)((longlong)_Dst + (longlong)iVar7);
    } while (0 < (int)uVar6);
  }
  local_80 = *(undefined8 *)(param_2 + 0x58);
  local_54 = *(int *)(lVar3 + 0x1c) * *(int *)(lVar3 + 0x24);
  local_60 = (longlong)
             (int)(((uint)*param_5 + (uint)param_5[1] * *(int *)(lVar3 + 0x1c)) *
                  *(int *)(lVar3 + 0x24)) + *(longlong *)(lVar3 + 0x28);
  local_58 = *(undefined4 *)(lVar3 + 0x18);
  local_50 = (uint)param_5[2];
  local_4c = (uint)param_5[3];
  local_88 = param_1;
  local_78 = param_3;
  local_70 = param_2;
  local_68 = param_4;
  if (*(float *)(param_3 + 0x6c) != DAT_180380bb0) {
    FUN_180297ea0(&local_88);
  }
  FUN_1802981f0(lVar3,*param_5,param_5[1],param_5[2],param_5[3]);
  *(undefined1 *)(param_1 + 0x52) = 0;
  return;
}


