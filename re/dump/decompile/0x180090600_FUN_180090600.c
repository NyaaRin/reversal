// 0x180090600  FUN_180090600
// size=1687 thunk=false
// signature: undefined FUN_180090600()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001800906d1) */
/* WARNING: Removing unreachable block (ram,0x000180090764) */
/* WARNING: Removing unreachable block (ram,0x0001800906e4) */
/* WARNING: Removing unreachable block (ram,0x0001800906eb) */

ulonglong FUN_180090600(longlong param_1,int param_2,double param_3,double *param_4,double *param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double *pdVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 *puVar12;
  int *piVar13;
  double dVar14;
  ulonglong uVar15;
  int *piVar16;
  byte bVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong local_1a0;
  undefined4 local_197;
  undefined2 local_193;
  undefined1 local_191;
  longlong *local_190;
  undefined8 uStack_188;
  longlong local_180;
  int local_178 [4];
  int local_168;
  int local_160;
  double local_158;
  double *local_150;
  undefined4 local_147;
  undefined2 local_143;
  undefined1 local_141;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  char local_100;
  longlong local_f8;
  double *local_f0;
  char *local_e8;
  
  local_120 = param_5;
  puVar12 = (undefined1 *)register0x00000020;
  if (DAT_1803fa678 != 0) {
    local_190 = (longlong *)0x0;
    uStack_188 = 0;
    local_180 = 0;
    local_160 = param_2;
    local_150 = param_4;
    local_f8 = param_1;
    local_f0 = param_4;
    puVar12 = (undefined1 *)FUN_18001bcd0(param_1,&local_190);
    if (local_190 != (longlong *)0x0) {
      local_178[1] = 0x40;
      local_178[0] = 1;
      iVar1 = *(int *)(param_1 + 0x20);
      piVar16 = local_178;
      if (0 < iVar1) {
        piVar16 = (int *)(param_1 + 0x20);
      }
      piVar13 = local_178 + 1;
      if (iVar1 < 0x41) {
        piVar13 = piVar16;
      }
      iVar1 = *piVar13;
      local_e8 = (char *)(param_1 + 0x58);
      local_178[3] = iVar1;
      if ((((*local_e8 != '\0') && (*(int *)(param_1 + 0x34) == param_2)) &&
          (*(int *)(param_1 + 0x38) == iVar1)) && (*(double *)(param_1 + 0x40) == param_3)) {
        *param_4 = *(double *)(param_1 + 0x48);
        dVar14 = *(double *)(param_1 + 0x50);
        *param_5 = dVar14;
        if (local_190 != (longlong *)0x0) {
          (**(code **)*local_190)();
          DAT_1803fa338 = local_180 != 0;
          DAT_1803fa330 = local_1a0;
          if ((bool)DAT_1803fa338) {
            DAT_1803fa330 = local_180;
          }
          DAT_1803fa339 = local_197;
          DAT_1803fa33d = local_193;
          dVar14 = 0.0;
          DAT_1803fa33f = local_191;
        }
        return CONCAT71((int7)((ulonglong)dVar14 >> 8),1);
      }
      iVar9 = (**(code **)*local_190)(local_190);
      dVar14 = 0.0;
      local_130 = 0.0;
      dVar4 = 0.0;
      local_128 = 0.0;
      local_168 = iVar9;
      FUN_18002dc30(&local_118,local_190[1]);
      FUN_180023e60(local_190,0);
      FUN_18002db10(local_190[1],0xffffffff,&DAT_180341c48);
      uVar15 = (**(code **)(*local_190 + 0x138))(local_190,0xffffffff,5);
      plVar6 = local_190;
      if ((char)uVar15 == '\0') {
        if (local_190 != (longlong *)0x0) {
          uVar15 = (**(code **)*local_190)(local_190);
          if (iVar9 < (int)uVar15) {
            uVar15 = (**(code **)(*plVar6 + 0x10))(plVar6,(int)uVar15 - iVar9);
          }
        }
        if ((local_100 != '\0') && (uVar15 = 0, DAT_1803faf78 != (code *)0x0)) {
          uVar15 = (*DAT_1803faf78)(local_118,local_110,local_108,local_104);
        }
        if (local_190 != (longlong *)0x0) {
          (**(code **)*local_190)();
          if (local_180 == 0) {
            DAT_1803fa330 = local_1a0;
            DAT_1803fa339 = local_197;
            DAT_1803fa33d = local_193;
            local_141 = local_191;
          }
          else {
            DAT_1803fa330 = local_180;
            DAT_1803fa339 = local_147;
            DAT_1803fa33d = local_143;
          }
          DAT_1803fa338 = local_180 != 0;
          uVar15 = 0;
          DAT_1803fa33f = local_141;
        }
        return uVar15 & 0xffffffffffffff00;
      }
      uVar10 = (**(code **)*local_190)();
      uVar5 = DAT_180380e90;
      dVar3 = DAT_180380d08;
      bVar17 = 1;
      local_178[2] = 1;
      uVar19 = (undefined4)DAT_180380cb0;
      uVar20 = (undefined4)DAT_1803813c8;
      do {
        iVar11 = local_178[2];
        if (iVar1 < local_178[2]) {
LAB_180090a34:
          pdVar7 = local_150;
          plVar6 = local_190;
          if ((local_190 != (longlong *)0x0) &&
             (iVar11 = (**(code **)*local_190)(local_190), iVar9 < iVar11)) {
            (**(code **)(*plVar6 + 0x10))(plVar6,iVar11 - iVar9);
          }
          if (bVar17 != 0) {
            dVar3 = dVar3 / (double)iVar1;
            *pdVar7 = dVar3 * dVar14;
            *local_120 = dVar3 * dVar4;
            *(int *)(param_1 + 0x34) = param_2;
            *(int *)(param_1 + 0x38) = iVar1;
            *(double *)(param_1 + 0x40) = param_3;
            *(double *)(param_1 + 0x48) = *pdVar7;
            *(double *)(param_1 + 0x50) = *local_120;
            *local_e8 = '\x01';
          }
          if ((local_100 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
            (*DAT_1803faf78)(local_118,local_110,local_108,local_104);
          }
          if (local_190 != (longlong *)0x0) {
            (**(code **)*local_190)();
            if (local_180 != 0) {
              DAT_1803fa330 = local_180;
              DAT_1803fa338 = 1;
              DAT_1803fa339 = local_197;
              DAT_1803fa33d = local_193;
              DAT_1803fa33f = local_191;
              return (ulonglong)bVar17;
            }
            DAT_1803fa330 = local_1a0;
            DAT_1803fa338 = 0;
            DAT_1803fa339 = local_197;
            DAT_1803fa33d = local_193;
            DAT_1803fa33f = local_191;
          }
          return (ulonglong)bVar17;
        }
        cVar8 = FUN_18008fbf0(local_190,uVar10,param_2 + 1 + local_178[2]);
        if (cVar8 == '\0') {
          bVar17 = 0;
          goto LAB_180090a34;
        }
        local_140 = 0;
        local_158 = 0.0;
        local_138 = 0.0;
        cVar8 = FUN_18008fca0(local_190,uVar10,uVar19,dVar3,&local_140);
        if (((cVar8 == '\0') ||
            (cVar8 = FUN_18008fca0(local_190,uVar10,0,local_140,&local_158), cVar8 == '\0')) ||
           ((cVar8 = FUN_18008fca0(local_190,uVar10,uVar20,uVar5,&local_138), cVar8 == '\0' ||
            (local_158 < 0.0)))) {
          bVar17 = 0;
        }
        else {
          bVar17 = 1;
        }
        if (bVar17 == 0) goto LAB_180090a34;
        dVar2 = local_158 * param_3;
        dVar18 = cos(local_138);
        dVar14 = dVar14 + dVar18 * dVar2;
        local_130 = dVar14;
        dVar18 = sin(local_138);
        dVar4 = dVar4 + dVar18 * dVar2;
        local_178[2] = iVar11 + 1;
        local_128 = dVar4;
      } while( true );
    }
  }
  return (ulonglong)puVar12 & 0xffffffffffffff00;
}


