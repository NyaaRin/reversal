// 0x180299e00  FUN_180299e00
// size=769 thunk=false
// signature: undefined FUN_180299e00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180299e00(byte *param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  size_t _Size;
  void *_Dst;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if ((*param_1 & 4) == 0) {
    lVar9 = *(longlong *)(param_1 + 0x2b0);
    local_58 = 0;
    uStack_50 = 0;
    lVar2 = *(longlong *)(param_1 + 0x38);
    local_48 = 0;
    cVar4 = FUN_1802990c0(param_1,*(undefined4 *)(lVar9 + 0xf0),&local_58);
    fVar3 = DAT_180380ac0;
    if (cVar4 == '\0') {
      uVar5 = FUN_180299010(param_1,0x22,0x21,&local_58);
      fVar3 = DAT_180380ac0;
      uVar11 = 0;
      *(undefined4 *)(lVar9 + 0xf0) = uVar5;
      do {
        uVar10 = (ulonglong)(uint)((int)(local_58._4_2_ - uVar11) >> 0x1f);
        iVar6 = (int)(local_58._4_2_ - uVar11) / 2;
        _Size = (size_t)iVar6;
        iVar12 = ((uint)local_58._4_2_ - iVar6) - uVar11;
        if (*(int *)(lVar2 + 0x18) == 1) {
          _Dst = (void *)((longlong)
                          (int)(((local_58._2_2_ + uVar11) * *(int *)(lVar2 + 0x1c) +
                                (uint)(ushort)local_58) * *(int *)(lVar2 + 0x24)) +
                         *(longlong *)(lVar2 + 0x28));
          if (0 < iVar6) {
            uVar10 = 0;
            memset(_Dst,0,_Size);
          }
          if (uVar11 != 0) {
            memset((void *)((longlong)_Dst + _Size),(int)CONCAT71((int7)(uVar10 >> 8),0xff),
                   (ulonglong)uVar11);
          }
          if (0 < iVar12) {
            memset((void *)((longlong)_Dst + uVar11 + _Size),0,(longlong)iVar12);
          }
        }
        else if (*(int *)(lVar2 + 0x18) == 0) {
          puVar14 = (undefined4 *)
                    ((longlong)
                     (int)(((local_58._2_2_ + uVar11) * *(int *)(lVar2 + 0x1c) +
                           (uint)(ushort)local_58) * *(int *)(lVar2 + 0x24)) +
                    *(longlong *)(lVar2 + 0x28));
          sVar8 = _Size;
          puVar13 = puVar14;
          if (0 < iVar6) {
            for (; sVar8 != 0; sVar8 = sVar8 - 1) {
              *puVar13 = 0xffffff;
              puVar13 = puVar13 + 1;
            }
          }
          if (uVar11 != 0) {
            memset(puVar14 + _Size,-1,(ulonglong)uVar11 << 2);
          }
          if (0 < iVar12) {
            puVar13 = puVar14 + uVar11 + _Size;
            for (lVar9 = (longlong)iVar12; lVar9 != 0; lVar9 = lVar9 + -1) {
              *puVar13 = 0xffffff;
              puVar13 = puVar13 + 1;
            }
          }
        }
        iVar7 = local_58._2_2_ + uVar11;
        fVar1 = *(float *)(param_1 + 0x54);
        uVar10 = (ulonglong)uVar11;
        iVar12 = (ushort)local_58 + 1 + iVar6 + uVar11;
        uVar11 = uVar11 + 1;
        fVar15 = ((float)(iVar7 + 1) * *(float *)(param_1 + 0x58) +
                 (float)iVar7 * *(float *)(param_1 + 0x58)) * fVar3;
        *(float *)(param_1 + uVar10 * 0x10 + 0x88) =
             (float)(int)(((ushort)local_58 - 1) + iVar6) * fVar1;
        *(float *)(param_1 + uVar10 * 0x10 + 0x8c) = fVar15;
        *(float *)(param_1 + uVar10 * 0x10 + 0x90) = (float)iVar12 * fVar1;
        *(float *)(param_1 + uVar10 * 0x10 + 0x94) = fVar15;
      } while ((int)uVar11 < 0x21);
    }
    else {
      uVar11 = 0;
      do {
        iVar6 = local_58._4_2_ - uVar11;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 1;
        }
        fVar1 = *(float *)(param_1 + 0x54);
        iVar6 = (iVar6 >> 1) + (uint)(ushort)local_58;
        iVar12 = uVar11 + local_58._2_2_;
        uVar10 = (ulonglong)uVar11;
        iVar7 = iVar6 + 1 + uVar11;
        uVar11 = uVar11 + 1;
        fVar15 = ((float)(iVar12 + 1) * *(float *)(param_1 + 0x58) +
                 (float)iVar12 * *(float *)(param_1 + 0x58)) * fVar3;
        *(float *)(param_1 + uVar10 * 0x10 + 0x88) = (float)(iVar6 + -1) * fVar1;
        *(float *)(param_1 + uVar10 * 0x10 + 0x8c) = fVar15;
        *(float *)(param_1 + uVar10 * 0x10 + 0x90) = (float)iVar7 * fVar1;
        *(float *)(param_1 + uVar10 * 0x10 + 0x94) = fVar15;
      } while ((int)uVar11 < 0x21);
    }
  }
  return;
}


