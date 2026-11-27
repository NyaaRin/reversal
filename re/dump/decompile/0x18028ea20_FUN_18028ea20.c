// 0x18028ea20  FUN_18028ea20
// size=623 thunk=false
// signature: undefined FUN_18028ea20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028ea20(longlong param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,int *param_7,int *param_8,int *param_9,int *param_10)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = FUN_18028c490();
    if (iVar3 < 0) {
      if (param_7 != (int *)0x0) {
        *param_7 = 0;
      }
      if (param_8 != (int *)0x0) {
        *param_8 = 0;
      }
      if (param_9 != (int *)0x0) {
        *param_9 = 0;
      }
      if (param_10 == (int *)0x0) {
        return;
      }
      *param_10 = 0;
      return;
    }
    lVar1 = *(longlong *)(param_1 + 8);
    lVar5 = (longlong)iVar3;
    iVar2 = (int)(short)((ushort)*(byte *)(lVar1 + 2 + lVar5) * 0x100 +
                        (ushort)*(byte *)(lVar1 + 3 + lVar5));
    iVar4 = (int)(short)((ushort)*(byte *)(lVar1 + 5 + lVar5) +
                        (ushort)*(byte *)(lVar1 + 4 + lVar5) * 0x100);
    iVar6 = (int)(short)((ushort)*(byte *)(lVar1 + 7 + lVar5) +
                        (ushort)*(byte *)(lVar1 + 6 + lVar5) * 0x100);
    iVar3 = (int)(short)((ushort)*(byte *)(lVar1 + 9 + lVar5) +
                        (ushort)*(byte *)(lVar1 + 8 + lVar5) * 0x100);
  }
  else {
    iVar3 = 0;
    local_98 = 1;
    local_70 = 0;
    local_68 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    iVar2 = FUN_18028d920(param_1,param_2,&local_98);
    bVar7 = iVar2 != 0;
    iVar2 = iVar3;
    if (bVar7) {
      iVar2 = (int)local_80;
    }
    iVar4 = iVar3;
    if (bVar7) {
      iVar4 = (int)uStack_78;
    }
    iVar6 = iVar3;
    if (bVar7) {
      iVar6 = local_80._4_4_;
    }
    if (bVar7) {
      iVar3 = uStack_78._4_4_;
    }
  }
  if (param_7 != (int *)0x0) {
    fVar8 = (float)iVar2 * param_3 + param_5;
    iVar2 = (int)fVar8;
    if ((fVar8 < 0.0) && ((float)iVar2 != fVar8)) {
      iVar2 = iVar2 + -1;
    }
    *param_7 = (int)(float)iVar2;
  }
  if (param_8 != (int *)0x0) {
    fVar8 = param_6 - (float)iVar3 * param_4;
    iVar3 = (int)fVar8;
    if ((fVar8 < 0.0) && ((float)iVar3 != fVar8)) {
      iVar3 = iVar3 + -1;
    }
    *param_8 = (int)(float)iVar3;
  }
  if (param_9 != (int *)0x0) {
    fVar8 = ceilf((float)iVar6 * param_3 + param_5);
    *param_9 = (int)fVar8;
  }
  if (param_10 != (int *)0x0) {
    fVar8 = ceilf(param_6 - (float)iVar4 * param_4);
    *param_10 = (int)fVar8;
  }
  return;
}


