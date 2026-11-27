// 0x1800bdd70  Features_HVH_AntiAim_AntiAimFeature_vfunc01
// size=5 thunk=true
// signature: undefined Features_HVH_AntiAim_AntiAimFeature_vfunc01()
// status: ok


void Features_HVH_AntiAim_AntiAimFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  int *piVar7;
  bool bVar8;
  char cStackX_8;
  char cStackX_9;
  
  cVar5 = FUN_1800bcc80();
  if (cVar5 == '\0') {
    DAT_180409ce0 = 0;
    DAT_180409cfa = '\0';
  }
  else {
    uVar6 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar6 = FUN_180241610(uVar6,0xb13946245d7c0048);
    piVar7 = (int *)FUN_1802029c0(uVar6);
    iVar1 = *piVar7;
    uVar6 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77,param_3,param_4,iVar1);
    uVar6 = FUN_180241610(uVar6,0x59dd15dc32d48bd);
    piVar7 = (int *)FUN_1802029c0(uVar6);
    iVar2 = *piVar7;
    uVar6 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar6 = FUN_180241610(uVar6,0xf702e5968aa6c59a);
    piVar7 = (int *)FUN_1802029c0(uVar6);
    iVar3 = *piVar7;
    uVar6 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar6 = FUN_180241610(uVar6,0xaae97fae090a88e9);
    piVar7 = (int *)FUN_1802029c0(uVar6);
    iVar4 = *piVar7;
    if (((iVar1 != 0) && (FUN_180024720(&cStackX_8,iVar1), cStackX_8 == '\0')) &&
       (cStackX_9 != '\0')) {
      DAT_180409ce0 = (uint)(DAT_180409ce0 != 1);
    }
    if (((iVar2 != 0) && (FUN_180024720(&cStackX_8,iVar2), cStackX_8 == '\0')) &&
       ((cStackX_9 != '\0' && (bVar8 = DAT_180409ce0 == 2, DAT_180409ce0 = 2, bVar8)))) {
      DAT_180409ce0 = 0;
    }
    if (((iVar3 != 0) && (FUN_180024720(&cStackX_8,iVar3), cStackX_8 == '\0')) &&
       ((cStackX_9 != '\0' && (bVar8 = DAT_180409ce0 == 3, DAT_180409ce0 = 3, bVar8)))) {
      DAT_180409ce0 = 0;
    }
    if (((iVar4 != 0) && (FUN_180024720(&cStackX_8,iVar4), cStackX_8 == '\0')) &&
       (cStackX_9 != '\0')) {
      DAT_180409cfa = DAT_180409cfa == '\0';
    }
    if ((((iVar1 == 0) && (DAT_180409ce0 == 1)) || ((iVar2 == 0 && (DAT_180409ce0 == 2)))) ||
       ((iVar3 == 0 && (DAT_180409ce0 == 3)))) {
      DAT_180409ce0 = 0;
    }
    if (iVar4 == 0) {
      DAT_180409cfa = '\0';
    }
  }
  return;
}


