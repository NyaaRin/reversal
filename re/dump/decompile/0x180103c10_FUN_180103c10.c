// 0x180103c10  FUN_180103c10
// size=326 thunk=false
// signature: undefined FUN_180103c10()
// status: ok


void FUN_180103c10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  
  lVar8 = param_1;
  uVar2 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67,param_3,param_4,1,param_1);
  uVar2 = FUN_180241610(uVar2,0x1efab65b168823bb);
  pcVar3 = (char *)FUN_1801fcfc0(uVar2);
  cVar7 = *pcVar3;
  DAT_1803faf30 = (code *)0x0;
  cVar6 = cVar7;
  if (DAT_1803ffc2c != '\0') {
    cVar6 = '\0';
  }
  if (cVar6 != '\0') {
    DAT_1803faf30 = FUN_18006d8f0;
  }
  if (cVar6 != *(char *)(param_1 + 0x194d)) {
    *(char *)(param_1 + 0x194d) = cVar6;
    if (cVar6 != '\0') {
      lVar5 = 0;
      do {
        (&DAT_1803ea31c)[lVar5 * 0x20] = 0;
        lVar1 = (&DAT_1803ea308)[lVar5 * 4];
        lVar4 = (&DAT_1803ea300)[lVar5 * 4];
        if (lVar4 != lVar1) {
          do {
            FUN_18020e450(lVar4 + 0x20);
            FUN_18020e450(lVar4);
            lVar4 = lVar4 + 0x50;
          } while (lVar4 != lVar1);
          (&DAT_1803ea308)[lVar5 * 4] = (&DAT_1803ea300)[lVar5 * 4];
          lVar8 = lVar4;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x81);
      DAT_1803ffc38 = 0;
      DAT_1803ffc2c = '\0';
      DAT_1803e7830 = 0xffffffffffffffff;
    }
    pcVar3 = "off";
    if (cVar6 != '\0') {
      pcVar3 = "ARMED";
    }
    FUN_180014410("[NWSTORE] native reads %s\n",pcVar3,param_3,param_4,cVar7,lVar8);
  }
  return;
}


