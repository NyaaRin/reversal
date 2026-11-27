// 0x180083920  Features_Weapons_Backends_CSGOWeaponBackend_vfunc32
// size=585 thunk=false
// signature: undefined Features_Weapons_Backends_CSGOWeaponBackend_vfunc32()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180083995) */
/* WARNING: Removing unreachable block (ram,0x0001800839d8) */

float * Features_Weapons_Backends_CSGOWeaponBackend_vfunc32
                  (undefined8 param_1,float *param_2,longlong param_3)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  longlong local_68;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  longlong *local_50;
  undefined8 uStack_48;
  longlong local_40;
  int local_38;
  float *local_30;
  
  if ((DAT_1803fa678 == 0) || (param_3 == 0)) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
  }
  else {
    local_50 = (longlong *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_30 = param_2;
    FUN_18001bcd0(0,&local_50);
    if (local_50 == (longlong *)0x0) {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
    }
    else {
      fVar6 = 0.0;
      iVar4 = (**(code **)*local_50)();
      local_38 = iVar4;
      cVar3 = FUN_18001e2b0(param_3,local_50);
      if (cVar3 != '\0') {
        FUN_18002d9c0(local_50[1],0xffffffff,"Primary");
        cVar3 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,5);
        plVar2 = local_50;
        if (cVar3 != '\0') {
          (**(code **)(*local_50 + 0xe8))(local_50,"Spread",0);
          (**(code **)(*plVar2 + 0xa8))(plVar2,0xfffffffe);
          cVar3 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,3);
          if (cVar3 != '\0') {
            dVar1 = (double)(**(code **)(*local_50 + 0xc0))(local_50,0xffffffff);
            fVar6 = (float)dVar1;
          }
        }
      }
      iVar5 = (**(code **)*local_50)();
      while (iVar4 < iVar5) {
        (**(code **)(*local_50 + 0x10))(local_50,1);
        iVar5 = (**(code **)*local_50)();
      }
      *param_2 = fVar6;
      param_2[1] = fVar6;
      param_2[2] = 0.0;
      if (local_50 != (longlong *)0x0) {
        (**(code **)*local_50)();
        DAT_1803fa338 = local_40 != 0;
        DAT_1803fa330 = local_40;
        if (!(bool)DAT_1803fa338) {
          DAT_1803fa330 = local_68;
        }
        DAT_1803fa339 = local_5f;
        DAT_1803fa33d = local_5b;
        DAT_1803fa33f = local_59;
      }
    }
  }
  return param_2;
}


