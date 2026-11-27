// 0x1800a5580  FUN_1800a5580
// size=2383 thunk=false
// signature: undefined FUN_1800a5580()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800a5580(longlong *param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                       uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined8 ****ppppuVar12;
  byte bVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  char local_c0;
  undefined8 ***local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  if (DAT_1803faee8 != (code *)0x0) {
    lVar14 = param_1[1];
    FUN_180023010(&local_b8,lVar14);
    (*DAT_1803faee8)(lVar14,param_2,"MuzzlePos");
    if (((char)local_a0 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_b8,uStack_b0,local_a8 & 0xffffffff,local_a8._4_4_);
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,10);
  if (cVar5 != '\0') {
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x178))(param_1,0xffffffff);
    local_98 = *puVar9;
    local_90 = *(undefined4 *)(puVar9 + 1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  if (DAT_1803faee8 != (code *)0x0) {
    lVar14 = param_1[1];
    FUN_180023010(&local_b8,lVar14);
    (*DAT_1803faee8)(lVar14,param_2,"MuzzleAng");
    if (((char)local_a0 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_b8,uStack_b0,local_a8 & 0xffffffff,local_a8._4_4_);
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0xb);
  if (cVar6 != '\0') {
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
    local_88 = *puVar9;
    local_80 = *(undefined4 *)(puVar9 + 1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  if ((cVar5 == '\0') || (cVar6 == '\0')) {
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0xf;
    local_b8 = (undefined8 ****)0x0;
    FUN_1800a4f50(param_1,param_2,"ActiveHoldType",&local_b8);
    if (DAT_1803faee8 != (code *)0x0) {
      lVar14 = param_1[1];
      FUN_180023010(&local_d8,lVar14);
      (*DAT_1803faee8)(lVar14,param_2,"MuzzlePosAngPerHoldType");
      if ((local_c0 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_d8,local_d0,local_c8,local_c4);
      }
    }
    cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar5 == '\0') {
LAB_1800a587a:
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
    else {
      if (local_a8 == 0) {
LAB_1800a582a:
        (**(code **)(*param_1 + 0xe8))(param_1,"_default",0);
        (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
        cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
        if (cVar5 == '\0') {
          (**(code **)(*param_1 + 0x10))(param_1,1);
          goto LAB_1800a587a;
        }
      }
      else {
        ppppuVar12 = &local_b8;
        if (0xf < local_a0) {
          ppppuVar12 = (undefined8 ****)local_b8;
        }
        (**(code **)(*param_1 + 0xe8))(param_1,ppppuVar12,0);
        (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
        cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
        if (cVar5 == '\0') {
          (**(code **)(*param_1 + 0x10))(param_1,1);
          goto LAB_1800a582a;
        }
      }
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d08);
      (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
      cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,10);
      if (cVar5 != '\0') {
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x178))(param_1,0xffffffff);
        local_98 = *puVar9;
        local_90 = *(undefined4 *)(puVar9 + 1);
      }
      (**(code **)(*param_1 + 0x10))(param_1,1);
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d38);
      (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
      cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0xb);
      if (cVar6 != '\0') {
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
        local_88 = *puVar9;
        local_80 = *(undefined4 *)(puVar9 + 1);
      }
      (**(code **)(*param_1 + 0x10))(param_1,1);
      (**(code **)(*param_1 + 0x10))(param_1,2);
      if ((cVar5 != '\0') && (cVar6 != '\0')) {
        FUN_18020e450(&local_b8);
        goto LAB_1800a59c0;
      }
    }
    uVar10 = FUN_18020e450(&local_b8);
    goto LAB_1800a5892;
  }
LAB_1800a59c0:
  uVar10 = FUN_18001e2b0(param_3,param_1);
  if ((char)uVar10 == '\0') goto LAB_1800a5892;
  uVar7 = (**(code **)*param_1)(param_1);
  if (DAT_1803faee8 != (code *)0x0) {
    lVar14 = param_1[1];
    FUN_180023010(&local_d8,lVar14);
    (*DAT_1803faee8)(lVar14,uVar7,"LookupAttachment");
    if ((local_c0 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_d8,local_d0,local_c8,local_c4);
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  lVar14 = *param_1;
  if (cVar5 == '\0') {
LAB_1800a5a52:
    uVar10 = (**(code **)(lVar14 + 0x10))(param_1,2);
    goto LAB_1800a5892;
  }
  (**(code **)(lVar14 + 8))(param_1,uVar7);
  (**(code **)(*param_1 + 0xe8))(param_1,"anim_attachment_rh",0);
  iVar8 = FUN_180023180(param_1[1],2,1);
  lVar14 = *param_1;
  if (iVar8 == 0) {
    cVar5 = (**(code **)(lVar14 + 0x138))(param_1,0xffffffff,3);
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
    else {
      dVar4 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      (**(code **)(*param_1 + 0x10))(param_1,1);
      if (0 < (int)dVar4) {
        if (DAT_1803faee8 != (code *)0x0) {
          lVar14 = param_1[1];
          FUN_180023010(&local_d8,lVar14);
          (*DAT_1803faee8)(lVar14,uVar7,"GetAttachment");
          if ((local_c0 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
            (*DAT_1803fae90)(local_d8,local_d0,local_c8,local_c4);
          }
        }
        cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
        lVar14 = *param_1;
        if (cVar5 == '\0') goto LAB_1800a5a52;
        (**(code **)(lVar14 + 8))(param_1,uVar7);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)(int)dVar4);
        iVar8 = FUN_180023180(param_1[1],2,1);
        lVar14 = *param_1;
        if (iVar8 == 0) {
          cVar5 = (**(code **)(lVar14 + 0x138))(param_1,0xffffffff,5);
          lVar14 = *param_1;
          if (cVar5 != '\0') {
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            (**(code **)(lVar14 + 0xe8))(param_1,&DAT_180349e78,0);
            (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
            cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,10);
            if (cVar5 != '\0') {
              puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x178))(param_1,0xffffffff);
              local_78 = *puVar9;
              local_70 = *(undefined4 *)(puVar9 + 1);
            }
            (**(code **)(*param_1 + 0x10))(param_1,1);
            (**(code **)(*param_1 + 0xe8))(param_1,&DAT_180349e7c,0);
            (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
            cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0xb);
            if (cVar6 != '\0') {
              puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
              local_68 = *puVar9;
              local_60 = *(undefined4 *)(puVar9 + 1);
            }
            (**(code **)(*param_1 + 0x10))(param_1,1);
            uVar10 = (**(code **)(*param_1 + 0x10))(param_1,2);
            if ((cVar5 == '\0') || (cVar6 == '\0')) goto LAB_1800a5892;
            FUN_180023e60(param_1,0);
            FUN_18002db10(param_1[1],0xffffffff,"LocalToWorld");
            cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
            lVar14 = *param_1;
            if (cVar5 == '\0') goto LAB_1800a5a52;
            (**(code **)(lVar14 + 0x188))(param_1,&local_98);
            (**(code **)(*param_1 + 0x180))(param_1,&local_88);
            (**(code **)(*param_1 + 0x188))(param_1,&local_78);
            (**(code **)(*param_1 + 0x180))(param_1,&local_68);
            iVar8 = FUN_180023180(param_1[1],4,2);
            lVar14 = *param_1;
            if (iVar8 == 0) {
              bVar13 = 0;
              cVar5 = (**(code **)(lVar14 + 0x138))(param_1,0xffffffff,0xb);
              if (cVar5 != '\0') {
                puVar11 = (uint *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
                uVar1 = *puVar11;
                *param_4 = uVar1;
                uVar2 = puVar11[1];
                param_4[1] = uVar2;
                uVar3 = puVar11[2];
                param_4[2] = uVar3;
                if (((((uVar1 & 0x7f800000) != 0x7f800000) && ((uVar2 & 0x7f800000) != 0x7f800000))
                    && (bVar13 = 0, (uVar3 & 0x7f800000) != 0x7f800000)) &&
                   (bVar13 = 1, param_5 != (uint *)0x0)) {
                  cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xfffffffe,10);
                  if (cVar5 != '\0') {
                    puVar11 = (uint *)(**(code **)(*param_1 + 0x178))(param_1,0xfffffffe);
                    if ((((*puVar11 & 0x7f800000) != 0x7f800000) &&
                        (uVar1 = puVar11[1], (uVar1 & 0x7f800000) != 0x7f800000)) &&
                       (uVar2 = puVar11[2], (uVar2 & 0x7f800000) != 0x7f800000)) {
                      *param_5 = *puVar11;
                      param_5[1] = uVar1;
                      param_5[2] = uVar2;
                      goto LAB_1800a5e9d;
                    }
                  }
                  bVar13 = 0;
                }
              }
LAB_1800a5e9d:
              (**(code **)(*param_1 + 0x10))(param_1,3);
              return (ulonglong)bVar13;
            }
          }
        }
        goto LAB_1800a5a9a;
      }
    }
    uVar10 = (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  else {
LAB_1800a5a9a:
    uVar10 = (**(code **)(lVar14 + 0x10))(param_1,2);
  }
LAB_1800a5892:
  return uVar10 & 0xffffffffffffff00;
}


