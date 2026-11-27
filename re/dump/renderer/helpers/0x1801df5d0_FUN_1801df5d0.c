// 1801df5d0  FUN_1801df5d0
// signature: undefined FUN_1801df5d0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801df5d0(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  float *pfVar3;
  bool bVar4;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  bVar4 = DAT_1803ffd74 == param_3;
  lVar2 = 0x38;
  if (bVar4) {
    lVar2 = 0x68;
  }
  FUN_18026a810(0x16,lVar2 + *param_1);
  lVar2 = *param_1;
  if (bVar4) {
    local_48 = (*(float *)(lVar2 + 0x58) - *(float *)(lVar2 + 0x68)) * (float)DAT_1803815e0 +
               *(float *)(lVar2 + 0x68);
    fStack_44 = (*(float *)(lVar2 + 0x5c) - *(float *)(lVar2 + 0x6c)) * DAT_1803815e0._4_4_ +
                *(float *)(lVar2 + 0x6c);
    fStack_40 = (*(float *)(lVar2 + 0x60) - *(float *)(lVar2 + 0x70)) * DAT_1803815e0._8_4_ +
                *(float *)(lVar2 + 0x70);
    fStack_3c = (*(float *)(lVar2 + 100) - *(float *)(lVar2 + 0x74)) * DAT_1803815e0._12_4_ +
                *(float *)(lVar2 + 0x74);
    FUN_18026a810(0x17,&local_48);
    lVar2 = *param_1;
    pfVar3 = &local_48;
    local_48 = (*(float *)(lVar2 + 0x58) - *(float *)(lVar2 + 0x68)) * 0.55 +
               *(float *)(lVar2 + 0x68);
    fStack_44 = (*(float *)(lVar2 + 0x5c) - *(float *)(lVar2 + 0x6c)) * 0.55 +
                *(float *)(lVar2 + 0x6c);
    fStack_40 = (*(float *)(lVar2 + 0x60) - *(float *)(lVar2 + 0x70)) * 0.55 +
                *(float *)(lVar2 + 0x70);
    fStack_3c = (*(float *)(lVar2 + 100) - *(float *)(lVar2 + 0x74)) * 0.55 +
                *(float *)(lVar2 + 0x74);
  }
  else {
    local_38 = (*(float *)(lVar2 + 0x68) - *(float *)(lVar2 + 0x38)) * (float)DAT_1803815e0 +
               *(float *)(lVar2 + 0x38);
    fStack_34 = (*(float *)(lVar2 + 0x6c) - *(float *)(lVar2 + 0x3c)) * DAT_1803815e0._4_4_ +
                *(float *)(lVar2 + 0x3c);
    fStack_30 = (*(float *)(lVar2 + 0x70) - *(float *)(lVar2 + 0x40)) * DAT_1803815e0._8_4_ +
                *(float *)(lVar2 + 0x40);
    fStack_2c = (*(float *)(lVar2 + 0x74) - *(float *)(lVar2 + 0x44)) * DAT_1803815e0._12_4_ +
                *(float *)(lVar2 + 0x44);
    FUN_18026a810(0x17,&local_38);
    lVar2 = *param_1;
    pfVar3 = &local_38;
    local_38 = (*(float *)(lVar2 + 0x68) - *(float *)(lVar2 + 0x38)) * 0.55 +
               *(float *)(lVar2 + 0x38);
    fStack_34 = (*(float *)(lVar2 + 0x6c) - *(float *)(lVar2 + 0x3c)) * 0.55 +
                *(float *)(lVar2 + 0x3c);
    fStack_30 = (*(float *)(lVar2 + 0x70) - *(float *)(lVar2 + 0x40)) * 0.55 +
                *(float *)(lVar2 + 0x40);
    fStack_2c = (*(float *)(lVar2 + 0x74) - *(float *)(lVar2 + 0x44)) * 0.55 +
                *(float *)(lVar2 + 0x44);
  }
  FUN_18026a810(0x18,pfVar3);
  FUN_18026a810(0,((ulonglong)bVar4 ^ 1) * 0x10 + *param_1 + 0xa8);
  cVar1 = FUN_1802abf60(param_2,param_1[1],0);
  FUN_18026a890(4);
  if (cVar1 != '\0') {
    DAT_1803ffd74 = param_3;
  }
  return;
}


