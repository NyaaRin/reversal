// 0x180159750  FUN_180159750
// size=522 thunk=false
// signature: undefined FUN_180159750()
// status: ok


undefined8 * FUN_180159750(undefined8 *param_1,int param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  char *_Str1;
  size_t sVar8;
  undefined1 *puVar9;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  if (param_2 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(0,&DAT_18033e9cc,1,param_4,0);
  }
  else {
    lVar5 = (**(code **)(*DAT_1803fa360 + 0x18))();
    if (lVar5 == 0) {
      uVar6 = FUN_180013ba0(local_58,param_2);
      puVar7 = (undefined4 *)FUN_18022a630(uVar6);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)param_1 = *puVar7;
      *(undefined4 *)((longlong)param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      uVar1 = puVar7[5];
      uVar2 = puVar7[6];
      uVar3 = puVar7[7];
      *(undefined4 *)(param_1 + 2) = puVar7[4];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
      *(undefined1 *)puVar7 = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0xf;
      puVar9 = local_58;
    }
    else {
      if (lVar5 == param_3) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        FUN_18001d080(param_1,&DAT_1803601d8,3);
        return param_1;
      }
      _Str1 = (char *)FUN_18001f750(lVar5);
      if (((_Str1 != (char *)0x0) && (*_Str1 != '\0')) &&
         (iVar4 = _stricmp(_Str1,"unknown"), iVar4 != 0)) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        sVar8 = strlen(_Str1);
        FUN_18001d080(param_1,_Str1,sVar8);
        return param_1;
      }
      uVar6 = FUN_180013ba0(local_38,param_2);
      puVar7 = (undefined4 *)FUN_18022a630(uVar6);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)param_1 = *puVar7;
      *(undefined4 *)((longlong)param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      uVar1 = puVar7[5];
      uVar2 = puVar7[6];
      uVar3 = puVar7[7];
      *(undefined4 *)(param_1 + 2) = puVar7[4];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
      *(undefined1 *)puVar7 = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0xf;
      puVar9 = local_38;
    }
    FUN_18020e450(puVar9);
  }
  return param_1;
}


