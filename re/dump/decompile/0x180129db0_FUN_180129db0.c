// 0x180129db0  FUN_180129db0
// size=843 thunk=false
// signature: undefined FUN_180129db0()
// status: ok


void FUN_180129db0(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  longlong *local_res18 [2];
  
  if (DAT_1803fa640 != (longlong *)0x0) {
    if (DAT_1803eb478 != DAT_1803eb480) {
      DAT_1803eb480 = DAT_1803eb478;
    }
    if (DAT_1803e9f48 != DAT_1803e9f50) {
      DAT_1803e9f50 = DAT_1803e9f48;
    }
    uVar4 = (**(code **)(*DAT_1803fa640 + 0x350))();
    sVar2 = (**(code **)(*DAT_1803fa640 + 0x278))();
    for (sVar3 = (**(code **)(*DAT_1803fa640 + 0x268))(); sVar3 != sVar2;
        sVar3 = (**(code **)(*DAT_1803fa640 + 0x270))(DAT_1803fa640,sVar3)) {
      plVar5 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x280))(DAT_1803fa640,sVar3);
      local_res18[0] = plVar5;
      if ((((plVar5 != (longlong *)0x0) &&
           (cVar1 = (**(code **)(*plVar5 + 0x150))(plVar5), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*plVar5 + 0x1c0))(plVar5), cVar1 != '\0')) &&
         (((cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5), cVar1 == '\0' &&
           (pcVar6 = (char *)(**(code **)(*plVar5 + 8))(plVar5), pcVar6 != (char *)0x0)) &&
          ((pcVar7 = strstr(pcVar6,"World"), pcVar7 != (char *)0x0 ||
           (pcVar7 = strstr(pcVar6,"Model"), pcVar7 != (char *)0x0)))))) {
        if (param_1 == 3) {
          pcVar7 = (char *)(**(code **)(*plVar5 + 0x188))(plVar5);
          pcVar6 = strstr(pcVar6,"World");
          if (((pcVar6 == (char *)0x0) || (pcVar7 == (char *)0x0)) ||
             ((pcVar6 = strstr(pcVar7,"Lightmapped"), pcVar6 == (char *)0x0 &&
              (pcVar6 = strstr(pcVar7,"WorldVertex"), pcVar6 == (char *)0x0)))) goto LAB_18012a0b0;
        }
        pcVar6 = (char *)(**(code **)*plVar5)(plVar5);
        if ((pcVar6 == (char *)0x0) ||
           ((pcVar7 = strstr(pcVar6,"sky"), pcVar7 == (char *)0x0 &&
            (pcVar6 = strstr(pcVar6,"water"), pcVar6 == (char *)0x0)))) {
          (**(code **)(*plVar5 + 0xe0))(plVar5,param_2,param_2,param_2);
          if (DAT_1803eb480 == DAT_1803eb488) {
            FUN_180221c00(&DAT_1803eb478,DAT_1803eb480,local_res18);
          }
          else {
            *DAT_1803eb480 = plVar5;
            DAT_1803eb480 = DAT_1803eb480 + 1;
          }
          if (param_1 == 1) {
            pcVar6 = (char *)(**(code **)(*plVar5 + 8))(plVar5);
            pcVar7 = (char *)(**(code **)(*plVar5 + 0x188))(plVar5);
            if ((((pcVar6 != (char *)0x0) &&
                 (pcVar6 = strstr(pcVar6,"World"), pcVar6 != (char *)0x0)) &&
                (pcVar7 != (char *)0x0)) &&
               ((pcVar6 = strstr(pcVar7,"Lightmapped"), pcVar6 != (char *)0x0 ||
                (pcVar6 = strstr(pcVar7,"WorldVertex"), pcVar6 != (char *)0x0)))) {
              (**(code **)(*plVar5 + 0xe8))(plVar5,0x40,1);
              (**(code **)(*plVar5 + 0x80))(plVar5);
              if (DAT_1803e9f50 == DAT_1803e9f58) {
                FUN_180221c00(&DAT_1803e9f48,DAT_1803e9f50,local_res18);
              }
              else {
                *DAT_1803e9f50 = plVar5;
                DAT_1803e9f50 = DAT_1803e9f50 + 1;
              }
            }
          }
        }
      }
LAB_18012a0b0:
    }
    (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar4);
  }
  return;
}


