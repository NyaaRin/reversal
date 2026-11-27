// 0x180157aa0  FUN_180157aa0
// size=917 thunk=false
// signature: undefined FUN_180157aa0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180157aa0(longlong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  
  if ((param_1 != 0) && (DAT_180409f60 != '\0')) {
    ppuVar12 = (undefined **)&DAT_1803101b0;
    do {
      if ((&DAT_180409d50)[(longlong)*(int *)ppuVar12 * 2] == 0) {
        puVar1 = ppuVar12[2];
        puVar2 = ppuVar12[3];
        puVar3 = ppuVar12[1];
        uVar4 = (*DAT_180409e50)(param_1);
        lVar9 = 0;
        (*DAT_180409f30)(param_1,puVar3);
        (*DAT_180409f38)(param_1,0xffffd8ee);
        iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
        if (iVar5 == 5) {
          (*DAT_180409f30)(param_1,puVar1);
          (*DAT_180409f38)(param_1,0xfffffffe);
          iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
          if (iVar5 == 6) {
            lVar9 = (*DAT_180409d48)(param_1,0xffffffff);
          }
        }
        (*DAT_180409f20)(param_1,uVar4);
        iVar5 = *(int *)ppuVar12;
        plVar11 = &DAT_180409d50 + (longlong)iVar5 * 2;
        if ((*plVar11 == 0) && (lVar9 != 0)) {
          iVar6 = FUN_180242fc0(lVar9,puVar2,plVar11);
          if ((iVar6 == 0) && (iVar7 = FUN_180243560(lVar9,1), iVar7 == 0)) {
            *(longlong *)(&DAT_180409d58 + (longlong)iVar5 * 0x10) = lVar9;
            FUN_180014410("[FSCLOAK] %s hooked @ %p\n",puVar1,lVar9);
            DAT_180409db4 = DAT_180409db4 + 1;
          }
          else {
            *plVar11 = 0;
            uVar10 = FUN_1802436b0(iVar6);
            FUN_180014410("[FSCLOAK] %s @ %p: %s\n",puVar1,lVar9,uVar10);
          }
        }
      }
      ppuVar12 = ppuVar12 + 4;
    } while (ppuVar12 != &Features::ForceDraw::ForceDrawFeature::vftable_meta_ptr);
    if ((DAT_180409da0 == 0) &&
       ((DVar8 = GetTickCount(), DAT_1803fd350 == 0 || (3000 < DVar8 - DAT_1803fd350)))) {
      DAT_1803fd350 = DVar8;
      uVar4 = (*DAT_180409e50)(param_1);
      lVar9 = 0;
      (*DAT_180409f30)(param_1,"package");
      (*DAT_180409f38)(param_1,0xffffd8ee);
      iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
      if (iVar5 == 5) {
        (*DAT_180409f30)(param_1,"loaded");
        (*DAT_180409f38)(param_1,0xfffffffe);
        iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
        if (iVar5 == 5) {
          (*DAT_180409f30)(param_1,"jit.util");
          (*DAT_180409f38)(param_1,0xfffffffe);
          iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
          if (iVar5 == 5) {
            (*DAT_180409f30)(param_1,"funcinfo");
            (*DAT_180409f38)(param_1,0xfffffffe);
            iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
            lVar9 = 0;
            if (iVar5 == 6) {
              lVar9 = (*DAT_180409d48)(param_1,0xffffffff);
            }
          }
        }
      }
      (*DAT_180409f20)(param_1,uVar4);
      if ((DAT_180409da0 == 0) && (lVar9 != 0)) {
        iVar5 = FUN_180242fc0(lVar9,FUN_180156320,&DAT_180409da0);
        if ((iVar5 == 0) && (iVar6 = FUN_180243560(lVar9,1), iVar6 == 0)) {
          _DAT_180409da8 = lVar9;
          FUN_180014410("[FSCLOAK] %s hooked @ %p\n","jit.util.funcinfo",lVar9);
          DAT_180409db4 = DAT_180409db4 + 1;
        }
        else {
          DAT_180409da0 = 0;
          uVar10 = FUN_1802436b0(iVar5);
          FUN_180014410("[FSCLOAK] %s @ %p: %s\n","jit.util.funcinfo",lVar9,uVar10);
        }
      }
    }
    DAT_180409db0 = 0 < DAT_180409db4;
  }
  return;
}


