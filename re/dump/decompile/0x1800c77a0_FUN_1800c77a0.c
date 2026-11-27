// 0x1800c77a0  FUN_1800c77a0
// size=587 thunk=false
// signature: undefined FUN_1800c77a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800c77a0(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined1 auStack_d8 [32];
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 *local_88;
  undefined4 local_80 [2];
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar5 = (*pcVar1)(DAT_1803fa360,uVar3);
  local_80[0] = DAT_1803812a8;
  if ((lVar5 != 0) && (*param_1 != 0)) {
    FUN_18001c430(lVar5,local_58);
    local_80[0] = 0x461c3c00;
    local_98 = local_58;
    local_88 = local_80;
    local_90 = param_2;
    FUN_1800c79f0(&local_98,param_1 + 2);
    FUN_1800c79f0(&local_98,(longlong)param_1 + 0x1c);
    if (*(char *)((longlong)param_1 + 0x1844) != '\0') {
      plVar6 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x28))();
      lVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
      if ((lVar5 != 0) &&
         (lVar5 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar5), lVar5 != 0)) {
        iVar4 = FUN_18001da00(*param_1);
        fVar2 = DAT_180380ac0;
        lVar5 = lVar5 + *(int *)(lVar5 + 0xb0) + (longlong)iVar4 * 0xc;
        if (lVar5 != 0) {
          local_b8 = 0;
          while (iVar4 = local_b8, local_b8 < *(int *)(lVar5 + 4)) {
            puVar7 = (uint *)((longlong)*(int *)(lVar5 + 8) + (longlong)local_b8 * 0x44 + lVar5);
            if ((puVar7 == (uint *)0x0) || (0x7f < *puVar7)) {
              local_b8 = local_b8 + 1;
            }
            else {
              FUN_1802d46f0(puVar7 + 2,(longlong)(int)*puVar7 * 0x30 + 0x44 + (longlong)param_1,
                            &local_68);
              FUN_1802d46f0(puVar7 + 5,(longlong)(int)*puVar7 * 0x30 + 0x44 + (longlong)param_1,
                            &local_78);
              local_a8 = local_78 + local_68;
              local_a4 = local_74 + local_64;
              local_a0 = local_70 + local_60;
              local_b4 = local_a8 * fVar2;
              local_b0 = local_a4 * fVar2;
              local_ac = local_a0 * fVar2;
              FUN_1800c79f0(&local_98,&local_b4);
              local_b8 = iVar4 + 1;
            }
          }
        }
      }
    }
  }
  return local_80[0];
}


