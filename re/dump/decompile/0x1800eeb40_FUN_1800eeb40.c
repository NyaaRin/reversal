// 0x1800eeb40  FUN_1800eeb40
// size=481 thunk=false
// signature: undefined FUN_1800eeb40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800eeb40(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined4 local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60 [11];
  
  local_60[0] = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    puVar5 = (ulonglong *)&local_68;
    local_68 = 0;
    local_64 = 2;
    do {
      plVar3 = (longlong *)FUN_1800ebf80((int)*puVar5);
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
        lVar4 = FUN_18003a890();
        if (lVar4 == 0) {
          return 0;
        }
        dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
        dVar7 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
        dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);
        dVar9 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,4);
        cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,3);
        if (cVar1 == '\0') {
          local_88 = 0.0;
        }
        else {
          dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,6);
          local_88 = (float)dVar10;
        }
        uVar2 = FUN_1800477e0(plVar3,5);
        local_78 = (float)dVar8 + (float)dVar6;
        local_80 = 0;
        local_74 = (float)dVar9 + (float)dVar7;
        local_70 = (float)dVar6;
        local_6c = (float)dVar7;
        FUN_180295000(lVar4,&local_70,&local_78,uVar2);
        return 0;
      }
      puVar5 = (ulonglong *)((longlong)puVar5 + 4);
    } while (puVar5 != local_60);
  }
  return 0;
}


