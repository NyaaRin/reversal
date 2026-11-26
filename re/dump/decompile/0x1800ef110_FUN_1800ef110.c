// 0x1800ef110  FUN_1800ef110
// size=496 thunk=false
// signature: undefined FUN_1800ef110()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ef110(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong *puVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28 [4];
  
  local_28[0] = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    puVar7 = (ulonglong *)&local_30;
    local_30 = 0;
    local_2c = 2;
    do {
      plVar5 = (longlong *)FUN_1800ebf80((int)*puVar7);
      if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_2)) {
        lVar6 = FUN_18003a890();
        if (lVar6 == 0) {
          return 0;
        }
        dVar1 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);
        dVar2 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
        local_38 = (float)dVar2;
        local_34 = (float)dVar1;
        dVar1 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);
        fVar8 = (float)dVar1;
        uVar4 = FUN_1800477e0(plVar5,4);
        cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,5,1);
        if ((cVar3 == '\0') || (cVar3 = (**(code **)(*plVar5 + 200))(plVar5,5), cVar3 == '\0')) {
          if ((uVar4 & 0xff000000) == 0) {
            return 0;
          }
          if (fVar8 < DAT_180380ac0) {
            return 0;
          }
          local_48 = 0x30;
          FUN_180293e00(lVar6,&local_38,fVar8 - DAT_180380ac0,0);
          local_48 = DAT_180380bb0;
          *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + -1;
          local_40 = 0x200;
          FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar4);
        }
        else {
          if ((uVar4 & 0xff000000) == 0) {
            return 0;
          }
          if (fVar8 < DAT_180380ac0) {
            return 0;
          }
          local_48 = 0x30;
          FUN_180293e00(lVar6,&local_38,fVar8,0);
          *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + -1;
          FUN_1802938c0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar4);
        }
        *(undefined4 *)(lVar6 + 0x50) = 0;
        return 0;
      }
      puVar7 = (ulonglong *)((longlong)puVar7 + 4);
    } while (puVar7 != local_28);
  }
  return 0;
}


