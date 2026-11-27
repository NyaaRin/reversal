// 0x18011a0c0  Features_AutoReload_AutoReloadFeature_vfunc02
// size=661 thunk=false
// signature: undefined Features_AutoReload_AutoReloadFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_AutoReload_AutoReloadFeature_vfunc02
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong lVar10;
  double dVar11;
  undefined4 uVar12;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  if (param_3 != 0) {
    local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
    local_50 = 0x93fd561a96ab0c67;
    local_48 = 0x7d7f27bdaace2ddd;
    plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,&local_50);
    plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_60,&local_48);
    pcVar9 = (char *)FUN_1801fcfc0(*plVar8 + 0x28);
    if (*pcVar9 != '\0') {
      pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar10 = (*pcVar2)(DAT_1803fa360,uVar5);
      if ((lVar10 == 0) || (lVar10 = FUN_18001dbf0(lVar10), lVar10 == 0)) {
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        if (lVar10 != *(longlong *)(param_1 + 0x10)) {
          *(longlong *)(param_1 + 0x10) = lVar10;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined8 *)(param_1 + 0x18) = 0xbff0000000000000;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        local_78 = FUN_18001e5b0(lVar10);
        if (local_78 == 0) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          if (*(int *)(param_1 + 8) < 2) {
            return;
          }
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffff7fe;
          DAT_1803db438 = 0;
          DAT_1803db5ee = 0;
          DAT_1803db5f1 = 0;
          if (DAT_1803fa608 == 0) {
            uVar5 = 0;
            uVar12 = 0;
          }
          else {
            uVar5 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
            uVar12 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
          }
          dVar11 = *(double *)(param_1 + 0x18);
          uVar3 = 0;
          if ((((0.0 <= dVar11) && (uVar3 = DAT_1803db438, dVar11 <= (double)CONCAT44(uVar12,uVar5))
               ) && ((double)CONCAT44(uVar12,uVar5) - dVar11 < DAT_180380d88)) &&
             (((DAT_1803db438 = 0, iVar6 = FUN_18011a3c0(lVar10), -1 < iVar6 &&
               (cVar4 = FUN_18011a3b0(iVar6 + lVar10), cVar4 != '\0')) ||
              (cVar4 = FUN_18011a570(lVar10,CONCAT44(uVar12,uVar5)), uVar3 = DAT_1803db438,
              cVar4 != '\0')))) {
            *(undefined4 *)(param_1 + 0x20) = 4;
            return;
          }
          DAT_1803db438 = uVar3;
          cVar4 = FUN_18011a360(lVar10);
          dVar11 = DAT_180380d38;
          if (cVar4 != '\0') {
            dVar11 = DAT_180380c80;
          }
          dVar1 = *(double *)(param_1 + 0x18);
          if ((0.0 <= dVar1) && (dVar1 <= (double)CONCAT44(uVar12,uVar5))) {
            if (*(int *)(param_1 + 0x20) < 4) {
              uVar7 = *(int *)(param_1 + 0x20) + 1;
              *(uint *)(param_1 + 0x20) = uVar7;
              uVar7 = uVar7 & 0x80000001;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
              }
              if (uVar7 == 1) {
                DAT_1803db5f4 = 1;
              }
              if (DAT_1803db5f5 == '\0') {
                return;
              }
              *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x2000;
              return;
            }
            if ((double)CONCAT44(uVar12,uVar5) - dVar1 < dVar11) {
              return;
            }
          }
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(uVar12,uVar5);
          *(undefined4 *)(param_1 + 0x20) = 1;
          DAT_1803db5f4 = 1;
          if (DAT_1803db5f5 == '\0') {
            DAT_1803db5f4 = 1;
            return;
          }
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x2000;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0xbff0000000000000;
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}


