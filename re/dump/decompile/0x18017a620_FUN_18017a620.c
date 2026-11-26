// 0x18017a620  FUN_18017a620
// size=494 thunk=false
// signature: undefined FUN_18017a620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18017a620(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte ******ppppppbVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  byte *****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 uStack_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (DAT_1803fb118 == DAT_1803fb120) {
    uVar3 = 0;
  }
  else {
    FUN_18016d4c0(local_30,DAT_1803fb120 + -0x20);
    FUN_18020e450(DAT_1803fb120 + -0x20);
    DAT_1803fb120 = DAT_1803fb120 + -0x20;
    local_40 = (longlong *)0x0;
    uStack_38 = 0;
    FUN_180179f10(&local_40,local_30);
    local_68 = (byte *****)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_18001d080(&local_68,"esp.selected",0xc);
    uVar5 = 0x14650fb0739d0383;
    ppppppbVar7 = (byte ******)local_68;
    if (uStack_50 < 0x10) {
      ppppppbVar7 = &local_68;
      goto LAB_18017a6e8;
    }
    for (; ppppppbVar7 != (byte ******)0x0; ppppppbVar7 = (byte ******)((longlong)ppppppbVar7 + 1))
    {
LAB_18017a6e8:
      if (*(byte *)ppppppbVar7 == 0) break;
      uVar5 = (uVar5 ^ *(byte *)ppppppbVar7) * 0x100000001b3;
    }
    plVar4 = (longlong *)local_40[1];
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
    plVar8 = local_40;
    while (cVar1 == '\0') {
      plVar6 = plVar4;
      if ((ulonglong)plVar4[4] < uVar5) {
        plVar4 = plVar4 + 2;
        plVar6 = plVar8;
      }
      plVar4 = (longlong *)*plVar4;
      plVar8 = plVar6;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
    if ((*(char *)((longlong)plVar8 + 0x19) != '\0') || (uVar5 < (ulonglong)plVar8[4])) {
      plVar8 = local_40;
    }
    if (plVar8 == local_40) {
      lVar2 = -1;
    }
    else {
      local_48 = (longlong *)0x0;
      plVar4 = plVar8 + 5;
      plVar6 = plVar4;
      if (0xf < (ulonglong)plVar8[8]) {
        plVar6 = (longlong *)*plVar4;
      }
      lVar2 = strtol((char *)plVar6,(char **)&local_48,10);
      if (0xf < (ulonglong)plVar8[8]) {
        plVar4 = (longlong *)*plVar4;
      }
      if (local_48 == plVar4) {
        lVar2 = -1;
      }
    }
    FUN_18020e450(&local_68);
    FUN_1801780f0(&local_40);
    if ((-1 < lVar2) && (lVar2 < (int)(DAT_1803fb108 - DAT_1803fb100 >> 3))) {
      DAT_1803fa5f8 = *(undefined8 *)(DAT_1803fb100 + (longlong)lVar2 * 8);
    }
    FUN_180209ce0(&DAT_1803fa860);
    DAT_1803fac7f = 0;
    FUN_180209a80(&local_40);
    FUN_18020e450(local_30);
    uVar3 = 1;
  }
  return uVar3;
}


