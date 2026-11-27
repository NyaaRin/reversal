// 0x18003db30  FUN_18003db30
// size=729 thunk=false
// signature: undefined FUN_18003db30()
// status: ok


undefined8 FUN_18003db30(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float local_48;
  float local_44;
  float local_40;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar6 = (uint)dVar1;
  if ((((0 < (int)uVar6) && (uVar5 = (ulonglong)(uVar6 & 0xf), (uVar6 & 0xf) < 8)) &&
      ((&DAT_1803e75c0)[uVar5 * 0x30] != '\0')) &&
     (((*(uint *)(&DAT_1803e75c4 + uVar5 * 0x30) == uVar6 >> 4 && ((&DAT_1803e75d0)[uVar5 * 6] != 0)
       ) && ((&DAT_1803e75d8)[uVar5 * 6] != 0)))) {
    if (DAT_1803fb038 == (code *)0x0) {
      lVar7 = *plVar4;
    }
    else {
      iVar3 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar5 * 6],2);
      lVar7 = *plVar4;
      if (iVar3 != 0) {
        dVar1 = (double)(**(code **)(lVar7 + 0x160))(plVar4,2);
        cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
        dVar10 = 0.0;
        if (cVar2 == '\0') {
          dVar8 = 0.0;
        }
        else {
          dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
        }
        cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);
        if (cVar2 == '\0') {
          dVar9 = 0.0;
        }
        else {
          dVar9 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);
        }
        cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3);
        if (cVar2 != '\0') {
          dVar10 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);
        }
        if ((int)dVar1 == 10) {
          local_48 = (float)dVar8;
          local_40 = (float)dVar10;
          local_44 = (float)dVar9;
          (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar5 * 6] + 0x188))
                    ((longlong *)(&DAT_1803e75d0)[uVar5 * 6],&local_48);
          (**(code **)(*plVar4 + 0xf8))(plVar4,1);
        }
        else {
          if ((int)dVar1 != 0xb) {
            (**(code **)(*plVar4 + 0xf8))(plVar4,0);
            (**(code **)(*plVar4 + 0xe8))
                      (plVar4,"only VECTOR and ANGLE can be built from a script",0);
            return 2;
          }
          local_48 = (float)dVar8;
          local_44 = (float)dVar9;
          local_40 = (float)dVar10;
          (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar5 * 6] + 0x180))
                    ((longlong *)(&DAT_1803e75d0)[uVar5 * 6],&local_48);
          (**(code **)(*plVar4 + 0xf8))(plVar4,1);
        }
        return 1;
      }
    }
    (**(code **)(lVar7 + 0xf8))(plVar4,0);
    return 1;
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


