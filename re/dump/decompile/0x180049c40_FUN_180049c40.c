// 0x180049c40  FUN_180049c40
// size=376 thunk=false
// signature: undefined FUN_180049c40()
// status: ok


ulonglong FUN_180049c40(char param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_70;
  longlong lStack_68;
  longlong local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (((char *)DAT_1803edc38 != DAT_1803edc40) &&
     (pcVar1 = (char *)((longlong)DAT_1803edc40 + -1), *pcVar1 == param_1)) {
    DAT_1803edc40 = pcVar1;
    if ((byte)(param_1 - 1U) < 2) {
      pcVar1 = (char *)(ulonglong)DAT_1803ff8f0;
      if (0 < (int)DAT_1803ff8f0) {
        DAT_1803ff8f0 = DAT_1803ff8f0 - 1;
        pcVar1 = (char *)(ulonglong)DAT_1803ff8f0;
      }
    }
    return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
  }
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  FUN_18001d080(&local_30,"ImGui.",6,param_4,0);
  sVar2 = strlen(param_2);
  puVar3 = (undefined8 *)FUN_18021aef0(&local_30,param_2,sVar2);
  local_50 = *puVar3;
  uStack_48 = puVar3[1];
  local_40 = puVar3[2];
  uStack_38 = puVar3[3];
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  plVar4 = (longlong *)
           FUN_18021aef0(&local_50," with no matching Begin from this script -- ignored",0x33,
                         param_4,1);
  local_70 = (undefined8 **)*plVar4;
  lStack_68 = plVar4[1];
  local_60 = plVar4[2];
  uStack_58 = plVar4[3];
  *(undefined1 *)plVar4 = 0;
  plVar4[2] = 0;
  plVar4[3] = 0xf;
  pppuVar6 = &local_70;
  if (0xf < uStack_58) {
    pppuVar6 = (undefined8 ***)local_70;
  }
  FUN_180049960(pppuVar6);
  FUN_18020e450(&local_70);
  FUN_18020e450(&local_50);
  uVar5 = FUN_18020e450(&local_30);
  return uVar5 & 0xffffffffffffff00;
}


