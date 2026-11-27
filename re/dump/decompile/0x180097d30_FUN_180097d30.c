// 0x180097d30  FUN_180097d30
// size=317 thunk=false
// signature: undefined FUN_180097d30()
// status: ok


ulonglong FUN_180097d30(void)

{
  float *pfVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  if (DAT_1803fa668 != (longlong *)0x0) {
    in_RAX = (**(code **)(*DAT_1803fa668 + 0x60))();
    if ((((((int)in_RAX - 1U < 0x80) && (0.0 <= DAT_1803e9228)) && (DAT_1803fa608 != (float *)0x0))
        && ((0.0 <= (double)*DAT_1803fa608 - DAT_1803e9228 &&
            ((double)*DAT_1803fa608 - DAT_1803e9228 <= DAT_180380cb0)))) &&
       (in_RAX = (ulonglong)(int)in_RAX, (&DAT_1804239a0)[in_RAX] != '\0')) {
      pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar5 = (*pcVar2)(DAT_1803fa360,uVar3);
      uVar6 = 0;
      if ((lVar5 != 0) && (uVar6 = FUN_18001e0a0(lVar5), (char)uVar6 == '\b')) {
        puVar7 = (uint *)FUN_18001bfe0(lVar5);
        if (((*puVar7 & 0x7f800000) != 0x7f800000) && ((puVar7[1] & 0x7f800000) != 0x7f800000)) {
          pfVar1 = (float *)(puVar7 + 2);
          uVar4 = (uint)*pfVar1 & 0x7f800000;
          puVar7 = (uint *)(ulonglong)uVar4;
          if (uVar4 != 0x7f800000) {
            return (ulonglong)CONCAT31((int3)(uVar4 >> 8),*pfVar1 < DAT_180380fa8);
          }
        }
        return (ulonglong)puVar7 & 0xffffffffffffff00;
      }
      return uVar6 & 0xffffffffffffff00;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


