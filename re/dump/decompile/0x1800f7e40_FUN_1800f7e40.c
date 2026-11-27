// 0x1800f7e40  FUN_1800f7e40
// size=620 thunk=false
// signature: undefined FUN_1800f7e40()
// status: ok


undefined8 *
FUN_1800f7e40(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  char *_Str;
  char *_Str_00;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 **local_d0;
  longlong lStack_c8;
  longlong local_c0;
  ulonglong uStack_b8;
  undefined8 **local_b0;
  longlong lStack_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [32];
  undefined1 local_70 [48];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  _Str_00 = " - ";
  if (*(char *)(param_2 + 0x94) == '\0') {
    if ((*(longlong *)(param_2 + 0x80) != 0) &&
       (puVar3 = (undefined8 *)(param_2 + 0x70), param_1 != puVar3)) {
      if (0xf < *(ulonglong *)(param_2 + 0x88)) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_180212700(param_1,puVar3,*(longlong *)(param_2 + 0x80),param_4,1);
    }
    if (-1 < *(int *)(param_2 + 0x90)) {
      uVar1 = FUN_180013ba0(local_90);
      _Str = " - ";
      if (param_1[2] == 0) {
        _Str = "";
      }
      strlen(_Str);
      puVar3 = (undefined8 *)FUN_18022a630(uVar1);
      local_f0 = *puVar3;
      uStack_e8 = puVar3[1];
      local_e0 = puVar3[2];
      uStack_d8 = puVar3[3];
      puVar3[3] = 0xf;
      *(undefined1 *)puVar3 = 0;
      puVar3[2] = 0;
      plVar2 = (longlong *)FUN_18021aef0(&local_f0,&DAT_18034fa34,3);
      local_d0 = (undefined8 **)*plVar2;
      lStack_c8 = plVar2[1];
      local_c0 = plVar2[2];
      uStack_b8 = plVar2[3];
      *(undefined1 *)plVar2 = 0;
      plVar2[2] = 0;
      plVar2[3] = 0xf;
      pppuVar4 = &local_d0;
      if (0xf < uStack_b8) {
        pppuVar4 = (undefined8 ***)local_d0;
      }
      FUN_18021aef0(param_1,pppuVar4,local_c0);
      FUN_18020e450(&local_d0);
      FUN_18020e450(&local_f0);
      FUN_18020e450(local_90);
    }
  }
  if ((DAT_1804096e6 != '\0') && (*(longlong *)(param_2 + 0x60) != 0)) {
    uVar1 = FUN_1800f7c20(local_70,param_2 + 0x50,0xe);
    if (param_1[2] == 0) {
      _Str_00 = "";
    }
    strlen(_Str_00);
    plVar2 = (longlong *)FUN_18022a630(uVar1);
    local_b0 = (undefined8 **)*plVar2;
    lStack_a8 = plVar2[1];
    local_a0 = plVar2[2];
    uStack_98 = plVar2[3];
    *(undefined1 *)plVar2 = 0;
    plVar2[2] = 0;
    plVar2[3] = 0xf;
    pppuVar4 = &local_b0;
    if (0xf < uStack_98) {
      pppuVar4 = (undefined8 ***)local_b0;
    }
    FUN_18021aef0(param_1,pppuVar4,local_a0);
    FUN_18020e450(&local_b0);
    FUN_18020e450(local_70);
  }
  return param_1;
}


