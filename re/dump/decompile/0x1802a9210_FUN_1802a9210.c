// 0x1802a9210  FUN_1802a9210
// size=674 thunk=false
// signature: undefined FUN_1802a9210()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a9210(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_38;
  int local_34;
  char local_30 [4];
  int local_2c;
  undefined4 local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_34 = 0;
  local_38 = 0;
  local_2c = 0;
  iVar2 = FUN_1802671a0(param_4,"RefScale=%f",local_28);
  if (iVar2 == 1) {
    *(undefined4 *)(param_3 + 8) = local_28[0];
  }
  else {
    iVar2 = FUN_1802671a0(param_4,"Column %d%n",&local_34,&local_38);
    if (((iVar2 == 1) && (-1 < local_34)) && (local_34 < *(short *)(param_3 + 0xc))) {
      for (pcVar3 = (char *)(local_38 + param_4); (*pcVar3 == ' ' || (*pcVar3 == '\t'));
          pcVar3 = pcVar3 + 1) {
      }
      local_30[0] = '\0';
      lVar4 = (longlong)local_34 * 0x10;
      *(short *)(lVar4 + 0x1c + param_3) = (short)local_34;
      iVar2 = FUN_1802671a0(pcVar3,"UserID=0x%08X%n",&local_2c,&local_38);
      if (iVar2 == 1) {
        for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1)
        {
        }
        *(int *)(lVar4 + 0x18 + param_3) = local_2c;
      }
      iVar2 = FUN_1802671a0(pcVar3,"Width=%d%n",&local_2c,&local_38);
      if (iVar2 == 1) {
        for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1)
        {
        }
        pbVar1 = (byte *)(lVar4 + 0x22 + param_3);
        *pbVar1 = *pbVar1 & 0xef;
        *(float *)(lVar4 + 0x14 + param_3) = (float)local_2c;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
      }
      iVar2 = FUN_1802671a0(pcVar3,"Weight=%f%n",local_28,&local_38);
      if (iVar2 == 1) {
        for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1)
        {
        }
        pbVar1 = (byte *)(lVar4 + 0x22 + param_3);
        *pbVar1 = *pbVar1 | 0x10;
        *(undefined4 *)(lVar4 + 0x14 + param_3) = local_28[0];
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
      }
      iVar2 = FUN_1802671a0(pcVar3,"Visible=%d%n",&local_2c,&local_38);
      if (iVar2 == 1) {
        for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1)
        {
        }
        *(byte *)(lVar4 + 0x22 + param_3) =
             ((byte)local_2c & 3) << 2 | *(byte *)(lVar4 + 0x22 + param_3) & 0xf3;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 4;
      }
      iVar2 = FUN_1802671a0(pcVar3,"Order=%d%n",&local_2c,&local_38);
      if (iVar2 == 1) {
        for (pcVar3 = pcVar3 + local_38; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1)
        {
        }
        *(undefined2 *)(lVar4 + 0x1e + param_3) = (undefined2)local_2c;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 2;
      }
      local_48 = &local_38;
      iVar2 = FUN_1802671a0(pcVar3,"Sort=%d%c%n",&local_2c,local_30);
      if (iVar2 == 2) {
        *(undefined2 *)(lVar4 + 0x20 + param_3) = (undefined2)local_2c;
        *(byte *)(lVar4 + 0x22 + param_3) =
             (local_30[0] == '^') + 1U | *(byte *)(lVar4 + 0x22 + param_3) & 0xfc;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 8;
      }
    }
  }
  return;
}


