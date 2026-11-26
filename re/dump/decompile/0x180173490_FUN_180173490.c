// 0x180173490  FUN_180173490
// size=571 thunk=false
// signature: undefined FUN_180173490()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_180173490(float *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                     int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong alStack_80 [13];
  
  alStack_80[7] = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if (param_5 == 0xd) {
    local_88 = 0;
    alStack_80[0] = 0;
    alStack_80[1] = 0;
    alStack_80[2] = 0;
    alStack_80[3] = 0;
    alStack_80[4] = 0;
    alStack_80[5] = 0;
    alStack_80[6] = 0;
    local_a8 = *param_4;
    uStack_a0 = *(undefined4 *)(param_4 + 1);
    uStack_9c = *(undefined4 *)((longlong)param_4 + 0xc);
    FUN_180172420(&local_88,param_3,&local_a8);
    uVar8 = ((((((((ulonglong)param_2 >> 8 & 0xff ^
                  ((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
                 ^ (ulonglong)param_2 >> 0x10 & 0xff) * 0x100000001b3 ^
                (ulonglong)param_2 >> 0x18 & 0xff) * 0x100000001b3 ^
               (ulonglong)param_2 >> 0x20 & 0xff) * 0x100000001b3 ^
              (ulonglong)param_2 >> 0x28 & 0xff) * 0x100000001b3 ^ (ulonglong)param_2 >> 0x30 & 0xff
             ) * 0x100000001b3 ^ (ulonglong)param_2 >> 0x38) * 0x100000001b3 & alStack_80[5];
    lVar5 = *(longlong *)(alStack_80[2] + 8 + uVar8 * 0x10);
    if (lVar5 == alStack_80[0]) {
LAB_1801735d8:
      lVar5 = 0;
    }
    else {
      plVar4 = *(longlong **)(lVar5 + 0x10);
      while (param_2 != plVar4) {
        if (lVar5 == *(longlong *)(alStack_80[2] + uVar8 * 0x10)) goto LAB_1801735d8;
        lVar5 = *(longlong *)(lVar5 + 8);
        plVar4 = *(longlong **)(lVar5 + 0x10);
      }
    }
    lVar7 = alStack_80[0];
    if (lVar5 != 0) {
      lVar7 = lVar5;
    }
    if (lVar7 == alStack_80[0]) {
      local_98 = *(undefined4 *)param_4;
      uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_90 = *(undefined4 *)(param_4 + 1);
      uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
      local_b8 = 0xd;
      pfVar6 = (float *)FUN_180171c50(&local_a8,param_2,param_3,&local_98);
    }
    else {
      local_a8 = *(undefined8 *)(lVar7 + 0x18);
      pfVar6 = (float *)&local_a8;
    }
    fVar1 = *pfVar6;
    fVar9 = pfVar6[1];
    FUN_180209700(alStack_80 + 2);
    FUN_180209930(alStack_80);
  }
  else {
    local_98 = *(undefined4 *)param_4;
    uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_90 = *(undefined4 *)(param_4 + 1);
    uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_b8 = param_5;
    pfVar6 = (float *)FUN_180171c50(&local_a8,param_2,param_3,&local_98);
    fVar1 = *pfVar6;
    fVar9 = pfVar6[1];
  }
  pfVar6 = (float *)(**(code **)(*param_2 + 0x10))(param_2,&local_a8);
  fVar2 = *pfVar6;
  fVar3 = pfVar6[1];
  *param_1 = fVar1;
  param_1[1] = fVar9;
  param_1[2] = fVar1 + fVar2;
  param_1[3] = fVar9 + fVar3;
  return param_1;
}


