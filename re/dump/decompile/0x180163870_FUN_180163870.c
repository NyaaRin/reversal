// 0x180163870  FUN_180163870
// size=341 thunk=false
// signature: undefined FUN_180163870()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180163870(longlong *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 **local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar4 = local_10 & 0xffffffffffffff00;
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_18001d080(&local_50,"materials/",10);
    sVar2 = strlen(param_2);
    puVar3 = (undefined8 *)FUN_18021aef0(&local_50,param_2,sVar2);
    local_70 = *puVar3;
    uStack_68 = puVar3[1];
    local_60 = puVar3[2];
    uStack_58 = puVar3[3];
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    local_78 = 1;
    FUN_1801fc680(local_30,&local_70,&DAT_180360470);
    local_78 = 0;
    FUN_18020e450(&local_70);
    FUN_18020e450(&local_50);
    pppuVar5 = local_30;
    if (0xf < local_18) {
      pppuVar5 = (undefined8 ***)local_30[0];
    }
    cVar1 = FUN_18015e6e0(pppuVar5,*param_1);
    if ((cVar1 == '\0') || (*(longlong *)*param_1 == ((longlong *)*param_1)[1])) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_18020e450(local_30);
  }
  return uVar4;
}


