// 0x18007e950  Features_Weapons_Backends_HVH2WeaponBackend_vfunc32
// size=788 thunk=false
// signature: undefined Features_Weapons_Backends_HVH2WeaponBackend_vfunc32()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018007ea65) */
/* WARNING: Removing unreachable block (ram,0x00018007eaa8) */

float * Features_Weapons_Backends_HVH2WeaponBackend_vfunc32
                  (undefined8 param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 ****_Buf1;
  bool bVar10;
  float fVar11;
  longlong local_90;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  float *local_58;
  undefined8 ***local_50;
  undefined8 uStack_48;
  longlong local_40;
  ulonglong uStack_38;
  
  local_58 = param_2;
  lVar7 = FUN_18001e4e0(param_3);
  if (lVar7 == 0) {
    pcVar8 = "";
  }
  else {
    pcVar8 = (char *)FUN_18001e4e0(param_3);
  }
  local_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  sVar9 = strlen(pcVar8);
  FUN_18001d080(&local_50,pcVar8,sVar9);
  _Buf1 = &local_50;
  if (0xf < uStack_38) {
    _Buf1 = (undefined8 ****)local_50;
  }
  if (local_40 == 8) {
    iVar5 = memcmp(_Buf1,"css_m249",8);
    bVar10 = iVar5 == 0;
  }
  else {
    bVar10 = false;
  }
  cVar4 = bVar10;
  FUN_18020e450(&local_50);
  if ((DAT_1803fa678 == 0) || (param_3 == 0)) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
  }
  else {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_18001bcd0(0,&local_78);
    if (local_78 == (longlong *)0x0) {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
    }
    else {
      fVar11 = 0.0;
      iVar5 = (**(code **)*local_78)();
      local_60 = iVar5;
      cVar3 = FUN_18001e2b0(param_3,local_78);
      if (cVar3 != '\0') {
        FUN_18002d9c0(local_78[1],0xffffffff,"Primary",param_4,cVar4);
        cVar4 = (**(code **)(*local_78 + 0x138))(local_78,0xffffffff,5);
        plVar2 = local_78;
        if (cVar4 != '\0') {
          pcVar8 = "Cone";
          if (bVar10 != false) {
            pcVar8 = "Spread";
          }
          (**(code **)(*local_78 + 0xe8))(local_78,pcVar8,0);
          (**(code **)(*plVar2 + 0xa8))(plVar2,0xfffffffe);
          cVar4 = (**(code **)(*local_78 + 0x138))(local_78,0xffffffff,3);
          if (cVar4 != '\0') {
            dVar1 = (double)(**(code **)(*local_78 + 0xc0))(local_78,0xffffffff);
            fVar11 = (float)dVar1;
          }
        }
      }
      iVar6 = (**(code **)*local_78)();
      while (iVar5 < iVar6) {
        (**(code **)(*local_78 + 0x10))(local_78,1);
        iVar6 = (**(code **)*local_78)();
      }
      if (bVar10 == false) {
        fVar11 = fVar11 / DAT_18038110c;
      }
      else {
        fVar11 = fVar11 * DAT_1803809ec;
      }
      *param_2 = fVar11;
      param_2[1] = fVar11;
      param_2[2] = 0.0;
      if (local_78 != (longlong *)0x0) {
        (**(code **)*local_78)();
        DAT_1803fa338 = local_68 != 0;
        DAT_1803fa330 = local_68;
        if (!(bool)DAT_1803fa338) {
          DAT_1803fa330 = local_90;
        }
        DAT_1803fa339 = local_87;
        DAT_1803fa33d = local_83;
        DAT_1803fa33f = local_81;
      }
    }
  }
  return param_2;
}


