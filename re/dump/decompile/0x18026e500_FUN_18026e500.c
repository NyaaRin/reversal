// 0x18026e500  FUN_18026e500
// size=1064 thunk=false
// signature: undefined FUN_18026e500()
// status: ok


longlong * FUN_18026e500(longlong *param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  void *pvVar7;
  uint uVar8;
  int iVar10;
  byte *pbVar11;
  ulonglong uVar9;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  plVar1 = param_1 + 0x5a;
  FUN_180291cd0(plVar1);
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  memset(param_1,0,0x438);
  *param_1 = param_2;
  sVar6 = strlen((char *)param_3);
  pvVar7 = (void *)FUN_18026f580(sVar6 + 1);
  pvVar7 = memcpy(pvVar7,param_3,sVar6 + 1);
  param_1[1] = (longlong)pvVar7;
  sVar6 = strlen((char *)param_3);
  *(int *)(param_1 + 0x11) = (int)sVar6 + 1;
  uVar9 = 0xffffffff;
  uVar8 = 0xffffffff;
  bVar2 = *param_3;
  while (bVar2 != 0) {
    pbVar11 = param_3 + 1;
    if (((bVar2 == 0x23) && (*pbVar11 == 0x23)) && (param_3[2] == 0x23)) {
      uVar9 = 0xffffffff;
      pbVar11 = param_3 + 3;
    }
    else {
      uVar9 = (ulonglong)
              ((uint)(uVar9 >> 8) ^
              *(uint *)(&DAT_180331380 + (uVar9 & 0xff ^ (ulonglong)bVar2) * 4));
    }
    uVar8 = (uint)uVar9;
    param_3 = pbVar11;
    bVar2 = *pbVar11;
  }
  *(uint *)(param_1 + 2) = ~uVar8;
  iVar5 = *(int *)((longlong)param_1 + 0x10c);
  if ((int)param_1[0x21] == iVar5) {
    iVar10 = (int)param_1[0x21] + 1;
    if (iVar5 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar5 / 2 + iVar5;
    }
    if (iVar10 < iVar4) {
      iVar10 = iVar4;
    }
    if (iVar5 < iVar10) {
      pvVar7 = (void *)FUN_18026f580((longlong)iVar10 << 2);
      if ((void *)param_1[0x22] != (void *)0x0) {
        memcpy(pvVar7,(void *)param_1[0x22],(longlong)(int)param_1[0x21] << 2);
        FUN_18026f680(param_1[0x22]);
      }
      param_1[0x22] = (longlong)pvVar7;
      *(int *)((longlong)param_1 + 0x10c) = iVar10;
    }
  }
  *(int *)(param_1[0x22] + (longlong)(int)param_1[0x21] * 4) = (int)param_1[2];
  lVar3 = param_1[0x21];
  *(int *)(param_1 + 0x21) = (int)lVar3 + 1;
  iVar5 = FUN_180268980("#MOVE",0,*(undefined4 *)(param_1[0x22] + (longlong)(int)lVar3 * 4));
  if (*(int *)(*param_1 + 0x1578) == iVar5) {
    FUN_1802899e0(iVar5,0xb,"#MOVE");
  }
  *(int *)((longlong)param_1 + 0x8c) = iVar5;
  *(undefined4 *)(param_1 + 0x15) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x16) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1d) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x20) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1f) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0xffffffff;
  param_1[0x59] = (longlong)plVar1;
  param_1[0x75] = param_1[1];
  FUN_180291ea0(plVar1,*param_1 + 0x1250);
  *(undefined4 *)(param_1 + 0x84) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x83) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x7f7fffff;
  return param_1;
}


