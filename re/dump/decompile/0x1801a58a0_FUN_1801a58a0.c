// 0x1801a58a0  FUN_1801a58a0
// size=730 thunk=false
// signature: undefined FUN_1801a58a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801a58a0(undefined8 param_1,float *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  byte *_Str;
  byte *pbVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  for (_Str = &DAT_1803e7870; (bVar2 = *_Str, bVar2 == 0x20 || (bVar2 == 9)); _Str = _Str + 1) {
  }
  local_1c = 0;
  if (bVar2 == 0x23) {
    _Str = _Str + 1;
  }
  sVar4 = strlen((char *)_Str);
  if ((sVar4 == 6) &&
     (iVar3 = FUN_180012b90(_Str,&DAT_18033f57c,&local_1c), fVar8 = DAT_1803811c8, iVar3 == 1)) {
    *param_2 = (float)(local_1c >> 0x10 & 0xff) / DAT_1803811c8;
    param_2[1] = (float)(local_1c >> 8 & 0xff) / fVar8;
    param_2[2] = (float)(local_1c & 0xff) / fVar8;
    return 1;
  }
  bVar2 = *_Str;
  pbVar6 = _Str;
  while (bVar2 != 0) {
    iVar3 = isdigit((uint)bVar2);
    if (iVar3 == 0) goto LAB_1801a5a5f;
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    bVar2 = *pbVar1;
  }
  sVar4 = strlen((char *)_Str);
  fVar8 = DAT_1803811c8;
  if (sVar4 == 9) {
    iVar3 = (int)(char)_Str[2] + ((int)(char)_Str[1] + (char)*_Str * 10) * 10 + -0x14d0;
    iVar7 = (int)(char)_Str[5] + ((int)(char)_Str[4] + (char)_Str[3] * 10) * 10 + -0x14d0;
    local_20 = (int)(char)_Str[8] + (((int)(char)_Str[7] + (char)_Str[6] * 10) * 5 + -0xa68) * 2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    *param_2 = (float)iVar3 / DAT_1803811c8;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (0xff < iVar7) {
      iVar7 = 0xff;
    }
    param_2[1] = (float)iVar7 / fVar8;
    if (local_20 < 0) {
      local_20 = 0;
      goto LAB_1801a5b46;
    }
  }
  else {
LAB_1801a5a5f:
    local_38 = &local_20;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    iVar3 = FUN_180012b90(_Str,"rgb(%d,%d,%d)",&local_28,&local_24);
    if (iVar3 != 3) {
      local_38 = &local_20;
      iVar3 = FUN_180012b90(_Str,"%d,%d,%d",&local_28,&local_24);
      if (iVar3 != 3) {
        local_38 = &local_20;
        uVar5 = FUN_180012b90(_Str,"%d %d %d",&local_28,&local_24);
        if ((int)uVar5 != 3) {
          return uVar5 & 0xffffffffffffff00;
        }
      }
    }
    fVar8 = DAT_1803811c8;
    if (local_28 < 0) {
      local_28 = 0;
    }
    else if (0xff < local_28) {
      local_28 = 0xff;
    }
    *param_2 = (float)local_28 / DAT_1803811c8;
    if (local_24 < 0) {
      local_24 = 0;
    }
    else if (0xff < local_24) {
      local_24 = 0xff;
    }
    param_2[1] = (float)local_24 / fVar8;
    if (local_20 < 0) {
      local_20 = 0;
      goto LAB_1801a5b46;
    }
  }
  if (0xff < local_20) {
    local_20 = 0xff;
  }
LAB_1801a5b46:
  param_2[2] = (float)local_20 / fVar8;
  return 1;
}


