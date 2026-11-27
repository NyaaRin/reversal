// 0x18010af30  FUN_18010af30
// size=861 thunk=false
// signature: undefined FUN_18010af30()
// status: ok


void FUN_18010af30(longlong *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  int param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if ((((DAT_180409680 != (longlong *)0x0) && (DAT_180409658 != (longlong *)0x0)) &&
      (((DAT_180409688 != (longlong *)0x0 &&
        (plVar5 = DAT_180409688, DAT_180409688 != DAT_180409658)) ||
       ((DAT_180409668 != (longlong *)0x0 &&
        (plVar5 = DAT_180409668, DAT_180409668 != DAT_180409658)))))) &&
     (plVar3 = (longlong *)(**(code **)(*DAT_180409680 + 0x58))(DAT_180409680,"$basetexture",0,0),
     plVar3 != (longlong *)0x0)) {
    uVar1 = (**(code **)(*plVar5 + 0x18))(plVar5);
    iVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
    uVar7 = param_2;
    if ((int)uVar1 < (int)param_2) {
      uVar7 = uVar1;
    }
    iVar6 = param_3;
    if (iVar2 < param_3) {
      iVar6 = iVar2;
    }
    (**(code **)(*plVar3 + 0x70))(plVar3,DAT_180409658);
    uVar8 = uVar7;
    (**(code **)(*param_1 + 0x340))(param_1,plVar5,0,0,uVar7,iVar6);
    (**(code **)(*param_1 + 0x238))(param_1,0,0,0,uVar8 & 0xffffff00);
    (**(code **)(*param_1 + 0x50))(param_1,1,0,0);
    lVar4 = 0;
    do {
      uVar8 = uVar7;
      (**(code **)(*param_1 + 0x328))
                (param_1,DAT_180409680,param_6 * (&DAT_18033b138)[lVar4],
                 param_6 * (&DAT_18033dba8)[lVar4],uVar7,iVar6,0,0,(float)(int)(param_2 - 1),
                 (float)(param_3 + -1),param_4,param_5,0,1,1,0);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 8);
    (**(code **)(*param_1 + 0x358))(param_1);
    (**(code **)(*plVar3 + 0x70))(plVar3,plVar5);
    FUN_18010a5b0(param_1);
    (**(code **)(*param_1 + 0x238))(param_1,0,0,0,uVar8 & 0xffffff00);
    (**(code **)(*param_1 + 0x50))(param_1,1,0,0);
    (**(code **)(*param_1 + 0x328))
              (param_1,DAT_180409680,0,0,param_2,param_3,0,0,(float)(int)(uVar7 - 1),
               (float)(iVar6 + -1),uVar1,iVar2,0,1,1,0);
    (**(code **)(*param_1 + 0x358))(param_1);
  }
  return;
}


