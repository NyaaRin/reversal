// 0x18010a0d0  FUN_18010a0d0
// size=1237 thunk=false
// signature: undefined FUN_18010a0d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18010a0d0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  char *local_58;
  char local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if ((DAT_180409678 == '\0') && (DAT_1803fa640 != (longlong *)0x0)) {
    plVar14 = (longlong *)0x0;
    plVar1 = DAT_180409680;
    if (DAT_180409680 == (longlong *)0x0) {
      local_98 = (longlong *)0x0;
      plVar11 = (longlong *)
                (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,"pp/add","Other textures",1);
      plVar1 = plVar14;
      if ((plVar11 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar11 + 0x150))(plVar11), cVar2 == '\0')) {
        (**(code **)(*plVar11 + 0x60))(plVar11);
        plVar1 = plVar11;
      }
    }
    DAT_180409680 = plVar1;
    plVar1 = DAT_180401628;
    if (DAT_180401628 == (longlong *)0x0) {
      local_98 = (longlong *)0x0;
      plVar11 = (longlong *)
                (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,"pp/blurx","Other textures",1);
      plVar1 = plVar14;
      if ((plVar11 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar11 + 0x150))(plVar11), cVar2 == '\0')) {
        (**(code **)(*plVar11 + 0x60))(plVar11);
        plVar1 = plVar11;
      }
    }
    DAT_180401628 = plVar1;
    plVar1 = DAT_1804096a0;
    if (DAT_1804096a0 == (longlong *)0x0) {
      local_98 = (longlong *)0x0;
      plVar11 = (longlong *)
                (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,"pp/blury","Other textures",1);
      plVar1 = plVar14;
      if ((plVar11 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar11 + 0x150))(plVar11), cVar2 == '\0')) {
        (**(code **)(*plVar11 + 0x60))(plVar11);
        plVar1 = plVar11;
      }
    }
    DAT_1804096a0 = plVar1;
    if (DAT_180409658 == (longlong *)0x0) {
      local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
      DAT_180409658 =
           (longlong *)
           (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,"_rt_FullFrameFB1","RenderTargets",0)
      ;
    }
    if (DAT_180409668 == (longlong *)0x0) {
      local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
      DAT_180409668 =
           (longlong *)
           (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,"_rt_SmallFB0","RenderTargets",0);
      if (DAT_180409668 == (longlong *)0x0) {
        local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
        DAT_180409668 =
             (longlong *)
             (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,"_rt_SmallFB1","RenderTargets",0);
      }
    }
    if (DAT_180409688 == (longlong *)0x0) {
      local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
      DAT_180409688 =
           (longlong *)
           (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,"_rt_FullFrameFB","RenderTargets",0);
      if (DAT_180409688 == (longlong *)0x0) {
        DAT_180409688 = DAT_180409668;
      }
    }
    if (DAT_180409668 == (longlong *)0x0) {
      DAT_180409668 = DAT_180409688;
    }
    DAT_180409690 = DAT_180409688;
    if ((((DAT_180409680 == (longlong *)0x0) || (DAT_180401628 == (longlong *)0x0)) ||
        (DAT_1804096a0 == (longlong *)0x0)) ||
       ((DAT_180409658 == (longlong *)0x0 || (DAT_180409688 == (longlong *)0x0)))) {
      local_98 = DAT_180409658;
      DAT_180409678 = '\x01';
      local_90 = DAT_180409688;
      FUN_180014410("[GLOW] content missing (add=%p blurx=%p blury=%p mask=%p scratch=%p) - outline disabled\n"
                    ,DAT_180409680,DAT_180401628,DAT_1804096a0);
      uVar12 = 0;
    }
    else {
      if (DAT_1803fecdc == '\0') {
        DAT_1803fecdc = '\x01';
        iVar3 = (**(code **)(*DAT_1803fa640 + 0x220))();
        local_38[0] = 0;
        DAT_18040964d = 0 < iVar3;
        local_3c = 0;
        local_48 = DAT_18040964d;
        if (DAT_1803fa668 != (longlong *)0x0) {
          (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,local_38,&local_3c);
          local_48 = DAT_18040964d;
        }
        DAT_18040964d = local_48;
        uVar4 = (**(code **)(*DAT_1803fa640 + 0x220))();
        local_44 = local_3c;
        local_40 = local_38[0];
        uVar5 = (**(code **)(*DAT_180409688 + 0x20))();
        uVar6 = (**(code **)(*DAT_180409688 + 0x18))();
        uVar12 = (**(code **)*DAT_180409688)();
        uVar7 = (**(code **)(*DAT_180409668 + 0x20))();
        uVar8 = (**(code **)(*DAT_180409668 + 0x18))();
        uVar13 = (**(code **)*DAT_180409668)();
        uVar9 = (**(code **)(*DAT_180409658 + 0x20))();
        uVar10 = (**(code **)(*DAT_180409658 + 0x18))();
        local_58 = "no stencil -> filled glow";
        if (local_48 != '\0') {
          local_58 = "ring";
        }
        local_68 = local_44;
        local_70 = local_40;
        local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar7);
        local_98 = (longlong *)CONCAT44(local_98._4_4_,uVar8);
        local_88 = uVar12;
        local_80 = uVar6;
        local_78 = uVar5;
        local_60 = uVar4;
        FUN_180014410("[GLOW] halo ready: mask=%dx%d soft=\'%s\' %dx%d sharp=\'%s\' %dx%d screen=%dx%d stencilBits=%d (%s)\n"
                      ,uVar10,uVar9,uVar13);
      }
      uVar12 = 1;
    }
    return uVar12;
  }
  return 0;
}


