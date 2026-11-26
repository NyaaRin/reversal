// 0x18015e580  FUN_18015e580
// size=334 thunk=false
// signature: undefined FUN_18015e580()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_18015e580(undefined4 param_1)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  int *local_48 [2];
  undefined1 local_38 [16];
  undefined4 local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if ((DAT_1803fa608 == 0) || (DAT_1803fa360 == 0)) {
    puVar4 = &DAT_1803fcc80;
  }
  else {
    dVar1 = *(double *)(DAT_1803fa608 + 0x10);
    fVar5 = DAT_1803de110;
    local_28[0] = param_1;
    if ((float)dVar1 < DAT_1803de110) {
      fVar5 = (float)FUN_18020a4c0(&DAT_1803fad00);
      if (DAT_1803fad50 != 0) {
        if (DAT_1803fad50 < DAT_1803fad78 >> 3) {
          fVar5 = (float)FUN_18021bd90(&DAT_1803fad40,*(undefined8 *)DAT_1803fad48,DAT_1803fad48);
        }
        else {
          FUN_18022a280();
          *(int **)DAT_1803fad48 = DAT_1803fad48;
          *(int **)(DAT_1803fad48 + 2) = DAT_1803fad48;
          DAT_1803fad50 = 0;
          local_48[0] = DAT_1803fad48;
          fVar5 = (float)FUN_180214d00(DAT_1803fad58,DAT_1803fad60,local_48);
        }
      }
    }
    DAT_1803de110 = (float)dVar1;
    plVar3 = (longlong *)FUN_1802164e0(fVar5,local_38,local_28);
    lVar2 = *plVar3;
    local_48[0] = (int *)(lVar2 + 0x18);
    if (*local_48[0] == *(int *)(DAT_1803fa608 + 4)) {
      puVar4 = (undefined *)(lVar2 + 0x20);
    }
    else {
      *local_48[0] = *(int *)(DAT_1803fa608 + 4);
      FUN_18015de60(local_28[0],lVar2 + 0x20);
      puVar4 = (undefined *)(lVar2 + 0x20);
    }
  }
  return puVar4;
}


