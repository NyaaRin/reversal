// 0x180103fe0  Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc01
// size=639 thunk=false
// signature: undefined Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc01()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc01
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 in_stack_ffffffffffffff40;
  undefined1 *puVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [48];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  cVar2 = FUN_1800da140();
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    _DAT_1803db439 = 0;
    return;
  }
  iVar4 = FUN_180103f20();
  if (iVar4 != 1) {
    DAT_1803db43a = 0;
    if (*(int *)(param_1 + 8) < 1) {
      _DAT_1803db439 = 0;
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    else {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      _DAT_1803db439 = CONCAT11(DAT_1803db43a,1);
      if (*(char *)(param_1 + 0x18) != '\0') {
        pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar7 = (*pcVar1)(DAT_1803fa360,uVar6);
        if (lVar7 != 0) {
          if ((((*(uint *)(param_1 + 0xc) & 0x7f800000) == 0x7f800000) ||
              ((*(uint *)(param_1 + 0x10) & 0x7f800000) == 0x7f800000)) ||
             ((*(uint *)(param_1 + 0x14) & 0x7f800000) == 0x7f800000)) {
            *(undefined1 *)(param_1 + 0x18) = 0;
          }
          else {
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            local_98 = 0;
            FUN_18001d080(&local_b0,"DT_HL2MP_Player",0xf,param_4,&local_b0,
                          CONCAT44(uVar5,*(uint *)(param_1 + 0x10)),*(uint *)(param_1 + 0xc));
            puVar11 = local_70;
            uVar8 = FUN_18016d4c0(local_70,&local_b0);
            uVar8 = FUN_180018ef0(&DAT_1803fac80,uVar8);
            FUN_18020e450(&local_b0);
            local_90 = 0;
            uStack_88 = 0;
            local_80 = 0;
            local_78 = 0;
            FUN_18001d080(&local_90,"m_angEyeAngles[0]",0x11,param_4,&local_90,puVar11);
            uVar9 = FUN_18016d4c0(local_50,&local_90);
            iVar4 = FUN_180018c10(uVar8,uVar9);
            lVar10 = (longlong)iVar4;
            FUN_18020e450(&local_90);
            *(undefined4 *)(lVar10 + lVar7) = *(undefined4 *)(param_1 + 0xc);
            *(undefined4 *)(lVar10 + 4 + lVar7) = *(undefined4 *)(param_1 + 0x10);
            *(undefined4 *)(lVar10 + 8 + lVar7) = *(undefined4 *)(param_1 + 0x14);
          }
          return;
        }
      }
    }
    return;
  }
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar7 = (*pcVar1)(DAT_1803fa360,uVar5);
  if (lVar7 != 0) {
    cVar2 = FUN_18001c330(lVar7);
    if (cVar2 != '\0') {
      bVar3 = 1;
      goto LAB_18010405c;
    }
  }
  bVar3 = 0;
LAB_18010405c:
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  _DAT_1803db439 = (ushort)bVar3 << 8;
  return;
}


