// 0x1800e9a30  FUN_1800e9a30
// size=797 thunk=false
// signature: undefined FUN_1800e9a30()
// status: ok


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1800e9a30(double param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  char *_Str;
  double *pdVar5;
  size_t sVar6;
  double *pdVar7;
  undefined4 uVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double local_res8 [2];
  double local_res18;
  double local_res20;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_dc;
  double local_d8 [3];
  double local_c0;
  double local_b8 [16];
  
  local_res8[0] = param_1;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    _Str = (char *)(**(code **)(*plVar4 + 0x158))(plVar4,3);
    fVar13 = DAT_180380bb0;
    if (_Str != (char *)0x0) {
      cVar9 = '\0';
      cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);
      fVar14 = fVar13;
      fVar15 = fVar13;
      if (((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3), cVar3 != '\0'))
         && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,6,3), dVar12 = DAT_180380e80,
            cVar3 != '\0')) {
        local_res20 = DAT_180380e80;
        local_res8[0] = 0.0;
        dVar10 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);
        local_d8[2] = dVar12;
        local_d8[0] = 0.0;
        local_res18 = dVar10;
        dVar11 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);
        local_e8 = dVar12;
        local_c0 = 0.0;
        local_d8[1] = dVar11;
        local_b8[0] = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,6);
        pdVar7 = local_res8;
        if (0.0 <= dVar10) {
          pdVar7 = &local_res18;
        }
        pdVar5 = &local_res20;
        if (dVar10 <= dVar12) {
          pdVar5 = pdVar7;
        }
        fVar15 = (float)*pdVar5 / DAT_1803811c8;
        pdVar7 = local_d8;
        if (0.0 <= dVar11) {
          pdVar7 = local_d8 + 1;
        }
        pdVar5 = local_d8 + 2;
        if (dVar11 <= dVar12) {
          pdVar5 = pdVar7;
        }
        fVar13 = (float)*pdVar5 / DAT_1803811c8;
        pdVar7 = &local_c0;
        if (0.0 <= local_b8[0]) {
          pdVar7 = local_b8;
        }
        pdVar5 = (double *)&local_e8;
        if (local_b8[0] <= dVar12) {
          pdVar5 = pdVar7;
        }
        fVar14 = (float)*pdVar5 / DAT_1803811c8;
        cVar9 = '\x01';
      }
      uVar8 = 4;
      if (cVar9 != '\0') {
        uVar8 = 7;
      }
      cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar8,3);
      dVar12 = DAT_180380d80;
      if ((cVar3 != '\0') &&
         ((dVar12 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,uVar8), dVar12 < 0.0 ||
          (DAT_180380f10 < dVar12)))) {
        dVar12 = 0.0;
      }
      local_b8[1] = 0.0;
      local_b8[2] = 0.0;
      local_b8[3] = 0.0;
      local_b8[4] = 0.0;
      sVar6 = strlen(_Str);
      FUN_18001d080(local_b8 + 1,_Str,sVar6);
      local_e8 = (double)CONCAT44(fVar13,fVar15);
      local_dc = 0x3f800000;
      local_e0 = fVar14;
      FUN_180020d40((int)dVar1,(int)dVar2,local_b8 + 1,cVar9,&local_e8,
                    (int)(longlong)(dVar12 * DAT_180380ec0));
      FUN_18020e450(local_b8 + 1);
    }
  }
  return 0;
}


