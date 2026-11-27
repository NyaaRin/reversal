// 0x18029cbf0  FUN_18029cbf0
// size=355 thunk=false
// signature: undefined FUN_18029cbf0()
// status: ok


ulonglong FUN_18029cbf0(undefined8 param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  
  lVar5 = FUN_18026f580(0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  iVar4 = FUN_180291060(uVar7,*(undefined4 *)(param_2 + 100));
  if (iVar4 < 0) {
    if (lVar5 != 0) {
      FUN_18026f680(lVar5);
    }
    uVar6 = FUN_18027e9c0(
                         "stbtt_GetFontOffsetForIndex(): FontData is incorrect, or FontNo cannot be found."
                         );
    return uVar6 & 0xffffffffffffff00;
  }
  iVar4 = FUN_18028bb00(lVar5,uVar7,iVar4);
  if (iVar4 != 0) {
    *(longlong *)(param_2 + 0x90) = lVar5;
    fVar1 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x80) + 0x28) + 0x3c);
    if ((*(char *)(param_2 + 0x35) != '\0') && (*(float *)(param_2 + 0x3c) == 0.0)) {
      *(float *)(param_2 + 0x3c) = fVar1;
    }
    lVar8 = (longlong)*(int *)(lVar5 + 0x24);
    lVar2 = *(longlong *)(lVar5 + 8);
    sVar3 = (ushort)*(byte *)(lVar8 + 7 + lVar2) + (ushort)*(byte *)(lVar8 + 6 + lVar2) * 0x100;
    fVar9 = DAT_180380bb0 /
            (float)((int)(short)((ushort)*(byte *)(lVar8 + 4 + lVar2) * 0x100 +
                                (ushort)*(byte *)(lVar8 + 5 + lVar2)) - (int)sVar3);
    *(float *)(lVar5 + 0xa0) = fVar9;
    if (((*(char *)(param_2 + 0x35) != '\0') && (*(float *)(param_2 + 0x3c) != 0.0)) &&
       (fVar1 != 0.0)) {
      fVar9 = (*(float *)(param_2 + 0x3c) / fVar1) * fVar9;
      *(float *)(lVar5 + 0xa0) = fVar9;
    }
    *(float *)(lVar5 + 0xa0) = fVar9 * *(float *)(param_2 + 0x74);
    return CONCAT71((uint7)(uint3)(int3)(char)((ushort)sVar3 >> 8),1);
  }
  if (lVar5 != 0) {
    FUN_18026f680(lVar5);
  }
  uVar6 = FUN_18027e9c0(
                       "stbtt_InitFont(): failed to parse FontData. It is correct and complete? Check FontDataSize."
                       );
  return uVar6 & 0xffffffffffffff00;
}


