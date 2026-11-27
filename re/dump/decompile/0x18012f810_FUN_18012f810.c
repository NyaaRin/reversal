// 0x18012f810  FUN_18012f810
// size=1113 thunk=false
// signature: undefined FUN_18012f810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012f810(char *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if ((((param_1 == (char *)0x0) || (DAT_180400e60 == '\0')) ||
      (iVar2 = strcmp(param_1,&DAT_180400e60), iVar2 != 0)) || (DAT_180400bd0 == (longlong *)0x0)) {
    DAT_180400e60 = '\0';
    DAT_180400bd0 = (longlong *)0x0;
    DAT_180400bd8 = (longlong *)0x0;
    _DAT_180400be0 = (longlong *)0x0;
    _DAT_180400be8 = (longlong *)0x0;
    _DAT_180400bf0 = (longlong *)0x0;
    _DAT_180400bf8 = (longlong *)0x0;
    if ((param_1 != (char *)0x0) && (DAT_1803fa640 != (longlong *)0x0)) {
      local_a0 = PTR_DAT_18033bf38;
      uVar5 = 0;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar3 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      if (plVar3 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3);
        if (cVar1 == '\0') {
          DAT_180400bd0 = plVar3;
        }
        uVar5 = (uint)(cVar1 == '\0');
      }
      local_a0 = PTR_DAT_18033bf40;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar6 = uVar5;
      plVar3 = DAT_180400bd8;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar6 = uVar5 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar6 = uVar5;
          plVar3 = DAT_180400bd8;
        }
      }
      DAT_180400bd8 = plVar3;
      local_a0 = PTR_DAT_18033bf48;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar5 = uVar6;
      plVar3 = _DAT_180400be0;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar5 = uVar6 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar5 = uVar6;
          plVar3 = _DAT_180400be0;
        }
      }
      _DAT_180400be0 = plVar3;
      local_a0 = PTR_DAT_18033bf50;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar6 = uVar5;
      plVar3 = _DAT_180400be8;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar6 = uVar5 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar6 = uVar5;
          plVar3 = _DAT_180400be8;
        }
      }
      _DAT_180400be8 = plVar3;
      local_a0 = PTR_DAT_18033bf58;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar5 = uVar6;
      plVar3 = _DAT_180400bf0;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar5 = uVar6 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar5 = uVar6;
          plVar3 = _DAT_180400bf0;
        }
      }
      _DAT_180400bf0 = plVar3;
      local_a0 = PTR_DAT_18033bf60;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar6 = uVar5;
      plVar3 = _DAT_180400bf8;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar6 = uVar5 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar6 = uVar5;
          plVar3 = _DAT_180400bf8;
        }
      }
      _DAT_180400bf8 = plVar3;
      if (((DAT_1803da558 != uVar6) || (iVar2 = strcmp(&DAT_1803ff710,param_1), iVar2 != 0)) &&
         ((DAT_1803da55c != uVar6 || (iVar2 = strcmp(&DAT_1803ff750,param_1), iVar2 != 0)))) {
        FUN_180014410("[SKY] ResolveFaces: sky=\'%s\' -> %d/6 faces\n",param_1,uVar6);
        strncpy_s(&DAT_1803ff710 + (longlong)(int)DAT_1803fece0 * 0x40,0x40,param_1,
                  0xffffffffffffffff);
        (&DAT_1803da558)[(int)DAT_1803fece0] = uVar6;
        DAT_1803fece0 = DAT_1803fece0 ^ 1;
      }
      if (uVar6 != 0) {
        strncpy_s(&DAT_180400e60,0x40,param_1,0xffffffffffffffff);
      }
    }
  }
  return;
}


