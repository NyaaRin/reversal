// 0x18029cdc0  FUN_18029cdc0
// size=208 thunk=false
// signature: undefined FUN_18029cdc0()
// status: ok


undefined8 FUN_18029cdc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(param_2 + 0x35) == '\0') {
    lVar3 = *(longlong *)(param_2 + 0x90);
    lVar6 = (longlong)*(int *)(lVar3 + 0x24);
    lVar4 = *(longlong *)(lVar3 + 8);
    fVar8 = (*(float *)(lVar3 + 0xa0) * *(float *)(param_3 + 0x14)) / *(float *)(param_2 + 0x74);
    bVar1 = *(byte *)(lVar6 + 6 + lVar4);
    bVar2 = *(byte *)(lVar6 + 7 + lVar4);
    fVar7 = ceilf((float)(int)(short)((ushort)*(byte *)(lVar6 + 4 + lVar4) * 0x100 +
                                     (ushort)*(byte *)(lVar6 + 5 + lVar4)) * fVar8);
    *(float *)(param_3 + 0x44) = fVar7;
    fVar8 = (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2) * fVar8;
    iVar5 = (int)fVar8;
    if ((fVar8 < 0.0) && ((float)iVar5 != fVar8)) {
      iVar5 = iVar5 + -1;
    }
    *(float *)(param_3 + 0x48) = (float)iVar5;
  }
  return 1;
}


