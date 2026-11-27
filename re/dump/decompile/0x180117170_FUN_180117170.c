// 0x180117170  FUN_180117170
// size=725 thunk=false
// signature: undefined FUN_180117170()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_180117170(void)

{
  double dVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)FUN_18002e970();
  uVar4 = 0;
  if (plVar6 != (longlong *)0x0) {
    local_54 = 0;
    local_58 = 0;
    if (DAT_1803fa668 != (longlong *)0x0) {
      (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_54,&local_58);
    }
    if (((int)local_54 < 1) || ((int)local_58 < 1)) {
      uVar4 = 0;
    }
    else {
      dVar8 = (double)(int)local_54;
      dVar7 = (double)(int)local_58;
      dVar1 = 0.0;
      local_68 = 0.0;
      dVar2 = 0.0;
      local_60 = 0.0;
      local_78 = dVar8;
      local_70 = dVar7;
      cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,1,5);
      if (cVar3 != '\0') {
        FUN_18002db10(plVar6[1],1,&DAT_18033e664);
        iVar5 = (**(code **)(*plVar6 + 0x140))(plVar6,0xffffffff);
        if (iVar5 == 3) {
          dVar8 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,0xffffffff);
          local_78 = dVar8;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,1);
        FUN_18002db10(plVar6[1],1,&DAT_180351050);
        iVar5 = (**(code **)(*plVar6 + 0x140))(plVar6,0xffffffff);
        if (iVar5 == 3) {
          dVar7 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,0xffffffff);
          local_70 = dVar7;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,1);
        FUN_18002db10(plVar6[1],1,&DAT_18034ede4);
        iVar5 = (**(code **)(*plVar6 + 0x140))(plVar6,0xffffffff);
        if (iVar5 == 3) {
          local_68 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,0xffffffff);
          dVar1 = local_68;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,1);
        FUN_18002db10(plVar6[1],1,&DAT_18034ede8);
        iVar5 = (**(code **)(*plVar6 + 0x140))(plVar6,0xffffffff);
        if (iVar5 == 3) {
          local_60 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,0xffffffff);
          dVar2 = local_60;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,1);
      }
      if (((((int)dVar8 == local_54) && ((int)dVar7 == local_58)) && ((int)dVar1 == 0)) &&
         ((int)dVar2 == 0)) {
        cVar3 = FUN_1801169a0();
        uVar4 = 0;
        if (cVar3 != '\0') {
          iVar5 = 0;
          if (DAT_1803fa608 != 0) {
            iVar5 = *(int *)(DAT_1803fa608 + 4);
          }
          if (iVar5 == DAT_1803e78d4) {
            uVar4 = 0;
          }
          else {
            DAT_1803e78d4 = iVar5;
            if (DAT_1803fd348 < 3) {
              DAT_1803fd348 = DAT_1803fd348 + 1;
              FUN_180014410("[AntiSS] Lua render.RenderView owns the MAIN view (%dx%d, framebuffer) #%d -- camera/visual features stay live for it\n"
                            ,local_54,local_58);
            }
            uVar4 = 1;
          }
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


