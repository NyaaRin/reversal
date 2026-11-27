// 0x1800eed30  FUN_1800eed30
// size=501 thunk=false
// signature: undefined FUN_1800eed30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800eed30(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong *puVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  float local_90;
  undefined4 local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60 [11];
  
  local_60[0] = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    puVar10 = (ulonglong *)&local_68;
    local_68 = 0;
    local_64 = 2;
    do {
      plVar8 = (longlong *)FUN_1800ebf80((int)*puVar10);
      if ((plVar8 != (longlong *)0x0) && (plVar8[1] == param_1)) {
        lVar9 = FUN_18003a890();
        if (lVar9 == 0) {
          return 0;
        }
        dVar1 = (double)(**(code **)(*plVar8 + 0x160))(plVar8,1);
        dVar2 = (double)(**(code **)(*plVar8 + 0x160))(plVar8,2);
        dVar3 = (double)(**(code **)(*plVar8 + 0x160))(plVar8,3);
        dVar4 = (double)(**(code **)(*plVar8 + 0x160))(plVar8,4);
        cVar6 = (**(code **)(*plVar8 + 0x138))(plVar8,6,3);
        fVar11 = DAT_180380bb0;
        if (cVar6 != '\0') {
          dVar5 = (double)(**(code **)(*plVar8 + 0xc0))(plVar8,6);
          fVar11 = (float)dVar5;
        }
        uVar7 = FUN_1800477e0(plVar8,5);
        local_78 = (float)dVar3 + (float)dVar1;
        local_88 = 0;
        local_74 = (float)dVar4 + (float)dVar2;
        local_98 = 0;
        local_90 = fVar11;
        local_70 = (float)dVar1;
        local_6c = (float)dVar2;
        FUN_180294f00(lVar9,&local_70,&local_78,uVar7);
        return 0;
      }
      puVar10 = (ulonglong *)((longlong)puVar10 + 4);
    } while (puVar10 != local_60);
  }
  return 0;
}


