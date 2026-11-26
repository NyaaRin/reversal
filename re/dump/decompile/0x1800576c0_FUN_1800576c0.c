// 0x1800576c0  FUN_1800576c0
// size=125 thunk=false
// signature: undefined FUN_1800576c0()
// status: ok


void FUN_1800576c0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 2) != '\0') {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar3 = *param_1;
    cVar4 = FUN_18003a090("PostDrawModelExecute");
    if (cVar4 != '\0') {
      local_38 = uVar3;
      local_30 = uVar2;
      local_2c = uVar1;
      FUN_180200dc0("PostDrawModelExecute",param_2,&local_38);
    }
  }
  if (*(char *)((longlong)param_1 + 0x11) != '\0') {
    DAT_1803ff8d0 = 0;
    DAT_1803ff8d8 = 0;
    DAT_1803ff8c0 = 0;
    DAT_1803ff8b0 = 0;
    DAT_1803ff8e0 = 0;
  }
  return;
}


