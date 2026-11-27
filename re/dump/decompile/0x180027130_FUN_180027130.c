// 0x180027130  FUN_180027130
// size=243 thunk=false
// signature: undefined FUN_180027130()
// status: ok


longlong FUN_180027130(undefined8 *param_1,byte *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char local_118 [256];
  
  sVar4 = strlen((char *)param_2);
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*plVar1 != 0) {
    lVar5 = *plVar1 + -1;
    lVar6 = -1;
    if (lVar5 != -1) {
      lVar6 = lVar5;
    }
    if (lVar6 + 1 + sVar4 < 0x10) {
      memset(local_118,0,0x100);
      pbVar2 = param_2 + sVar4;
      for (; param_2 != pbVar2; param_2 = param_2 + 1) {
        local_118[*param_2] = '\x01';
      }
      puVar7 = (undefined8 *)(lVar6 + (longlong)param_1);
      cVar3 = local_118[*(byte *)(lVar6 + (longlong)param_1)];
      while (cVar3 != '\0') {
        if (puVar7 == param_1) {
          return -1;
        }
        pbVar2 = (byte *)((longlong)puVar7 + -1);
        puVar7 = (undefined8 *)((longlong)puVar7 + -1);
        cVar3 = local_118[*pbVar2];
      }
      lVar6 = (longlong)puVar7 - (longlong)param_1;
    }
    else {
      lVar6 = thunk_FUN_1802d4c50(param_1,lVar6 + 1,param_2,sVar4);
    }
    return lVar6;
  }
  return -1;
}


