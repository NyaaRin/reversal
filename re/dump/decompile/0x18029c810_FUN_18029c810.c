// 0x18029c810  FUN_18029c810
// size=822 thunk=false
// signature: undefined FUN_18029c810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18029c810(longlong param_1,ushort param_2,float *param_3)

{
  ushort *puVar1;
  float fVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d8 [32];
  ushort local_b8;
  undefined8 *local_b0;
  float *local_a8;
  uint local_98 [2];
  float *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar8 = *(longlong *)(param_1 + 0x58);
  lVar4 = *(longlong *)(lVar8 + 8);
  local_90 = param_3;
  if ((*(char *)(lVar4 + 0x50) == '\0') && ((*(byte *)(lVar8 + 0x10) & 4) == 0)) {
    local_98[0] = CONCAT22(local_98[0]._2_2_,param_2);
    if (*(int *)(lVar8 + 0x38) != 0) {
      param_2 = FUN_180269200(lVar8 + 0x38,param_2,param_2);
    }
    if (((param_2 == *(ushort *)(lVar8 + 0x30)) && (*(char *)(lVar8 + 0x35) != '\0')) &&
       (lVar6 = FUN_18029a210(lVar4), lVar6 != 0)) {
      return lVar6;
    }
    plVar12 = *(longlong **)(lVar8 + 0x28);
    uVar11 = 0;
    lVar6 = *(longlong *)(param_1 + 0x60);
    local_88 = plVar12 + *(int *)(lVar8 + 0x20);
    if (plVar12 != local_88) {
      do {
        lVar8 = *plVar12;
        lVar9 = *(longlong *)(lVar8 + 0x88);
        if (lVar9 == 0) {
          lVar9 = *(longlong *)(lVar4 + 0x2b8);
        }
        puVar7 = *(ushort **)(lVar8 + 0x48);
        if (puVar7 != (ushort *)0x0) {
          uVar3 = *puVar7;
          while (uVar3 != 0) {
            if ((uVar3 <= param_2) && (param_2 <= puVar7[1])) goto LAB_18029c9b6;
            puVar1 = puVar7 + 2;
            puVar7 = puVar7 + 2;
            uVar3 = *puVar1;
          }
        }
        local_b8 = param_2;
        if (local_90 == (float *)0x0) {
          local_a8 = (float *)0x0;
          local_b0 = &local_80;
          local_80 = 0;
          local_58 = 0xffffffff;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          cVar5 = (**(code **)(lVar9 + 0x40))(lVar4);
          if (cVar5 != '\0') {
            local_80 = CONCAT44(local_80._4_4_,
                                ((local_98[0] & 0xffff) << 4 | uVar11 & 0xf) << 2 |
                                (uint)local_80 & 3);
            lVar8 = FUN_18029d4d0(lVar4,param_1,lVar8,&local_80);
            return lVar8;
          }
        }
        else {
          local_a8 = local_90;
          local_b0 = (undefined8 *)0x0;
          cVar5 = (**(code **)(lVar9 + 0x40))(lVar4,lVar8,param_1,lVar6);
          if (cVar5 != '\0') {
            fVar2 = *local_90;
            fVar14 = *(float *)(**(longlong **)(*(longlong *)(param_1 + 0x58) + 0x28) + 0x3c);
            fVar13 = DAT_180380bb0;
            if (fVar14 != 0.0) {
              fVar13 = *(float *)(param_1 + 0x14) / fVar14;
            }
            fVar14 = fVar13 * *(float *)(lVar8 + 0x58);
            if ((fVar14 <= fVar2) && (fVar14 = fVar13 * *(float *)(lVar8 + 0x5c), fVar2 <= fVar14))
            {
              fVar14 = fVar2;
            }
            if (*(char *)(lVar8 + 0x36) != '\0') {
              fVar14 = (float)(int)(fVar14 + DAT_180380ac0);
            }
            fVar2 = *(float *)(lVar8 + 0x60);
            iVar10 = param_2 + 1;
            if (*(int *)(param_1 + 0x20) < iVar10) {
              local_98[0] = 0xbf800000;
              FUN_1802a07e0(param_1,iVar10,local_98);
              local_98[0] = CONCAT22(local_98[0]._2_2_,0xffff);
              FUN_1802a09d0(param_1 + 0x20,iVar10,local_98);
            }
            *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2 * 4) = fVar14 + fVar2;
            return 0;
          }
        }
LAB_18029c9b6:
        lVar6 = lVar6 + *(longlong *)(lVar9 + 0x48);
        uVar11 = uVar11 + 1;
        plVar12 = plVar12 + 1;
      } while (plVar12 != local_88);
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x8000000) == 0) {
      if (*(int *)(param_1 + 0x40) == -1) {
        FUN_18029a4f0(param_1);
      }
      iVar10 = param_2 + 1;
      if (*(int *)(param_1 + 0x20) < iVar10) {
        local_98[0] = 0xbf800000;
        FUN_1802a07e0(param_1,iVar10,local_98);
        local_98[0] = CONCAT22(local_98[0]._2_2_,0xffff);
        FUN_1802a09d0(param_1 + 0x20,iVar10,local_98);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2 * 4) =
           *(undefined4 *)(param_1 + 0x10);
      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2) = 0xfffe;
    }
  }
  else if ((*(int *)(param_1 + 0x40) == -1) && ((*(uint *)(param_1 + 0x4c) & 0x8000000) == 0)) {
    FUN_18029a4f0();
  }
  return 0;
}


