// 0x18006f000  FUN_18006f000
// size=412 thunk=false
// signature: undefined FUN_18006f000()
// status: ok


void FUN_18006f000(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  char *_Str;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar6 = 0;
  FUN_18006ed50();
  _Str = "?";
  if (param_1 != (char *)0x0) {
    _Str = param_1;
  }
  sVar2 = strlen(_Str);
  FUN_180212700(&DAT_1803edd10,_Str,sVar2,param_4,uVar6);
  lVar1 = DAT_1803eb828;
  lVar5 = DAT_1803eb820;
  if (DAT_1803eb820 != DAT_1803eb828) {
    do {
      FUN_18020e450(lVar5);
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar1);
    DAT_1803eb828 = DAT_1803eb820;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_18001d080(&local_50,"net.Start(\"",0xb);
  puVar3 = &DAT_1803edd10;
  if (0xf < DAT_1803edd28) {
    puVar3 = DAT_1803edd10;
  }
  puVar3 = (undefined8 *)FUN_18021aef0(&local_50,puVar3,DAT_1803edd20);
  local_90 = *puVar3;
  uStack_88 = puVar3[1];
  local_80 = puVar3[2];
  uStack_78 = puVar3[3];
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar4 = (undefined4 *)FUN_18021aef0(&local_90,&DAT_18034675c,2,param_4,1);
  local_70 = *puVar4;
  uStack_6c = puVar4[1];
  uStack_68 = puVar4[2];
  uStack_64 = puVar4[3];
  local_60 = *(undefined8 *)(puVar4 + 4);
  uStack_58 = *(undefined8 *)(puVar4 + 6);
  *(undefined1 *)puVar4 = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0xf;
  FUN_180214300(&DAT_1803eb820,&local_70);
  FUN_18020e450(&local_70);
  FUN_18020e450(&local_90);
  FUN_18020e450(&local_50);
  DAT_1803feff0 = 1;
  return;
}


