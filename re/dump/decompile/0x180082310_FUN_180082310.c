// 0x180082310  FUN_180082310
// size=2086 thunk=false
// signature: undefined FUN_180082310()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180082373) */
/* WARNING: Removing unreachable block (ram,0x00018008238b) */
/* WARNING: Removing unreachable block (ram,0x000180082382) */
/* WARNING: Removing unreachable block (ram,0x000180082397) */

void FUN_180082310(longlong param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong local_100;
  undefined4 local_f7;
  undefined2 local_f3;
  undefined1 local_f1;
  float local_f0;
  int local_ec;
  undefined4 local_df;
  undefined2 local_db;
  undefined1 local_d9;
  longlong local_d8;
  undefined4 local_cf;
  undefined2 local_cb;
  undefined1 local_c9;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined1 local_b9;
  longlong local_b8;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  longlong local_98;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  
  *(undefined1 *)(param_1 + 0x6d) = 0;
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  FUN_18001bcd0(param_1,&local_118);
  if (local_118 != (longlong *)0x0) {
    iVar3 = (**(code **)*local_118)();
    local_f0 = 0.0;
    local_ec = iVar3;
    FUN_180023e60(local_118,0);
    FUN_18002db10(local_118[1],0xffffffff,&DAT_1803476ec);
    FUN_18002db10(local_118[1],0xffffffff,"SinglePlayer");
    iVar4 = FUN_180023180(local_118[1],0,1);
    if (iVar4 == 0) {
      cVar2 = (**(code **)(*local_118 + 200))(local_118,0xffffffff);
      (**(code **)(*local_118 + 0x10))(local_118,3);
      if (cVar2 == '\0') {
        dVar10 = (double)*param_3;
      }
      else {
        dVar10 = *(double *)(DAT_1803fa608 + 0x10);
      }
      FUN_180023e60(local_118,0);
      FUN_18002db10(local_118[1],0xffffffff,&DAT_180341c48);
      FUN_18002db10(local_118[1],0xffffffff,"randomseed");
      FUN_18002db10(local_118[1],0xfffffffe,"Round");
      FUN_18002db10(local_118[1],0xfffffffc,&DAT_180340e34);
      FUN_18002db10(local_118[1],0xffffffff,"SharedRandom");
      (**(code **)(*local_118 + 0xe8))(local_118,param_4,0);
      (**(code **)(*local_118 + 0xf0))(local_118,(int)DAT_1803813e0);
      (**(code **)(*local_118 + 0xf0))(local_118,(int)DAT_180380ee8);
      (**(code **)(*local_118 + 0xf0))(local_118,SUB84(dVar10,0));
      iVar4 = FUN_180023180(local_118[1],4,1);
      if (iVar4 == 0) {
        dVar8 = (double)(**(code **)(*local_118 + 0xc0))(local_118,0xffffffff);
        (**(code **)(*local_118 + 0x10))(local_118,2);
        plVar7 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
        iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
        (**(code **)(*local_118 + 0xf0))
                  (local_118,SUB84((double)((float)(iVar4 % 0x7621) * (float)dVar8),0));
        iVar5 = FUN_180023180(local_118[1],1,1);
        if (iVar5 == 0) {
          dVar9 = (double)(**(code **)(*local_118 + 0xc0))(local_118,0xffffffff);
          (**(code **)(*local_118 + 0x10))(local_118,1);
          dVar1 = (double)(float)dVar9;
          local_f0 = (float)dVar9;
          (**(code **)(*local_118 + 0xf0))(local_118,SUB84(dVar1,0));
          iVar5 = FUN_180023180(local_118[1],1,0);
          if (iVar5 == 0) {
            *(undefined1 *)(param_1 + 0x6d) = 1;
            DAT_1803f8fcc = DAT_1803f8fcc + 1;
            if (DAT_1803f8fcc < 4) {
              FUN_180014410("[NS-SEED] OK: sr=%.4f modulo=%d rounded=%.0f seed=\'%s\' addSeed=%.0f\n"
                            ,(double)(float)dVar8,iVar4 % 0x7621,dVar1,param_4,dVar10);
            }
            iVar4 = (**(code **)*local_118)();
            while (iVar3 < iVar4) {
              (**(code **)(*local_118 + 0x10))(local_118,1);
              iVar4 = (**(code **)*local_118)();
            }
            if (local_118 != (longlong *)0x0) {
              (**(code **)*local_118)();
              DAT_1803fa338 = local_108 != 0;
              DAT_1803fa330 = local_100;
              if ((bool)DAT_1803fa338) {
                DAT_1803fa330 = local_108;
              }
              DAT_1803fa339 = local_f7;
              DAT_1803fa33d = local_f3;
              DAT_1803fa33f = local_f1;
            }
          }
          else {
            DAT_180425848 = DAT_180425848 + 1;
            if (DAT_180425848 < 4) {
              uVar6 = (**(code **)(*local_118 + 0xb8))(local_118,0xffffffff,0);
              FUN_180014410("[NS-SEED] pcall randomseed FAILED: %s\n",uVar6);
            }
            while (iVar4 = (**(code **)*local_118)(), iVar3 < iVar4) {
              (**(code **)(*local_118 + 0x10))(local_118,1);
            }
            if (local_118 != (longlong *)0x0) {
              (**(code **)*local_118)();
              if (local_108 == 0) {
                DAT_1803fa330 = local_100;
                DAT_1803fa339 = local_f7;
                DAT_1803fa33d = local_f3;
                local_79 = local_f1;
              }
              else {
                DAT_1803fa330 = local_108;
                DAT_1803fa339 = local_7f;
                DAT_1803fa33d = local_7b;
              }
              DAT_1803fa338 = local_108 != 0;
              DAT_1803fa33f = local_79;
            }
          }
        }
        else {
          while (iVar4 = (**(code **)*local_118)(), iVar3 < iVar4) {
            (**(code **)(*local_118 + 0x10))(local_118,1);
          }
          if (local_118 != (longlong *)0x0) {
            (**(code **)*local_118)();
            if (local_108 == 0) {
              DAT_1803fa330 = local_98;
              DAT_1803fa339 = local_8f;
              DAT_1803fa33d = local_8b;
              local_99 = local_89;
            }
            else {
              DAT_1803fa330 = local_108;
              DAT_1803fa339 = local_9f;
              DAT_1803fa33d = local_9b;
            }
            DAT_1803fa338 = local_108 != 0;
            DAT_1803fa33f = local_99;
          }
        }
      }
      else {
        DAT_1803f921c = DAT_1803f921c + 1;
        if (DAT_1803f921c < 4) {
          uVar6 = (**(code **)(*local_118 + 0xb8))(local_118,0xffffffff,0);
          FUN_180014410("[NS-SEED] pcall SharedRandom FAILED: %s\n",uVar6);
        }
        while (iVar4 = (**(code **)*local_118)(), iVar3 < iVar4) {
          (**(code **)(*local_118 + 0x10))(local_118,1);
        }
        if (local_118 != (longlong *)0x0) {
          (**(code **)*local_118)();
          if (local_108 == 0) {
            DAT_1803fa330 = local_b8;
            DAT_1803fa339 = local_af;
            DAT_1803fa33d = local_ab;
            local_b9 = local_a9;
          }
          else {
            DAT_1803fa330 = local_108;
            DAT_1803fa339 = local_bf;
            DAT_1803fa33d = local_bb;
          }
          DAT_1803fa338 = local_108 != 0;
          DAT_1803fa33f = local_b9;
        }
      }
    }
    else {
      DAT_1803feb0c = DAT_1803feb0c + 1;
      if (DAT_1803feb0c < 4) {
        uVar6 = (**(code **)(*local_118 + 0xb8))(local_118,0xffffffff,0);
        FUN_180014410("[NS-SEED] pcall SinglePlayer FAILED: %s\n",uVar6);
      }
      while (iVar4 = (**(code **)*local_118)(), iVar3 < iVar4) {
        (**(code **)(*local_118 + 0x10))(local_118,1);
      }
      if (local_118 != (longlong *)0x0) {
        (**(code **)*local_118)();
        if (local_108 == 0) {
          DAT_1803fa330 = local_d8;
          DAT_1803fa339 = local_cf;
          DAT_1803fa33d = local_cb;
          local_d9 = local_c9;
        }
        else {
          DAT_1803fa330 = local_108;
          DAT_1803fa339 = local_df;
          DAT_1803fa33d = local_db;
        }
        DAT_1803fa338 = local_108 != 0;
        DAT_1803fa33f = local_d9;
      }
    }
  }
  return;
}


