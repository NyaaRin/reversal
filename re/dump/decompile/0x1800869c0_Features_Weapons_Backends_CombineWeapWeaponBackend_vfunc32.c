// 0x1800869c0  Features_Weapons_Backends_CombineWeapWeaponBackend_vfunc32
// size=529 thunk=false
// signature: undefined Features_Weapons_Backends_CombineWeapWeaponBackend_vfunc32()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180086a49) */
/* WARNING: Removing unreachable block (ram,0x000180086a8c) */

float * Features_Weapons_Backends_CombineWeapWeaponBackend_vfunc32
                  (undefined8 param_1,float *param_2,longlong param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  longlong local_68;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  longlong *local_50;
  undefined8 uStack_48;
  longlong local_40;
  int local_38;
  float *local_30;
  
  fVar5 = DAT_180380980;
  if ((DAT_1803fa678 == 0) || (param_3 == 0)) {
    *param_2 = 0.01;
    param_2[1] = 0.01;
    param_2[2] = 0.0;
  }
  else {
    local_50 = (longlong *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_30 = param_2;
    FUN_18001bcd0(0,&local_50);
    if (local_50 == (longlong *)0x0) {
      *param_2 = 0.01;
      param_2[1] = 0.01;
      param_2[2] = 0.0;
    }
    else {
      iVar3 = (**(code **)*local_50)();
      local_38 = iVar3;
      cVar2 = FUN_18001e2b0(param_3,local_50);
      if (cVar2 != '\0') {
        FUN_18002d9c0(local_50[1],0xffffffff,"CurCone");
        cVar2 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,3);
        if (cVar2 != '\0') {
          dVar1 = (double)(**(code **)(*local_50 + 0xc0))(local_50,0xffffffff);
          fVar5 = (float)dVar1;
        }
      }
      iVar4 = (**(code **)*local_50)();
      while (iVar3 < iVar4) {
        (**(code **)(*local_50 + 0x10))(local_50,1);
        iVar4 = (**(code **)*local_50)();
      }
      *param_2 = fVar5;
      param_2[1] = fVar5;
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


