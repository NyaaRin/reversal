// 0x180268c20  FUN_180268c20
// size=396 thunk=false
// signature: undefined FUN_180268c20()
// status: ok


int FUN_180268c20(uint *param_1,byte *param_2,byte *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  
  bVar5 = *param_2;
  cVar2 = (&DAT_18037f750)[bVar5 >> 3];
  iVar11 = (uint)(cVar2 == '\0') + (int)cVar2;
  if (param_3 == (byte *)0x0) {
    param_3 = param_2 + iVar11;
  }
  if (param_3 <= param_2) {
    bVar5 = 0;
  }
  if (param_2 + 1 < param_3) {
    bVar7 = param_2[1];
  }
  else {
    bVar7 = 0;
  }
  if (param_2 + 2 < param_3) {
    bVar9 = param_2[2];
  }
  else {
    bVar9 = 0;
  }
  if (param_2 + 3 < param_3) {
    bVar8 = param_2[3];
  }
  else {
    bVar8 = 0;
  }
  lVar1 = (longlong)cVar2 * 4;
  uVar10 = ((((*(uint *)(&DAT_18037f788 + lVar1) & (uint)bVar5) << 6 | bVar7 & 0x3f) << 6 |
            bVar9 & 0x3f) << 6 | bVar8 & 0x3f) >>
           ((byte)*(undefined4 *)(&DAT_18037f738 + lVar1) & 0x1f);
  *param_1 = uVar10;
  uVar6 = 0;
  if ((uVar10 & 0xfffff800) == 0xd800) {
    uVar6 = 0x80;
  }
  uVar3 = 0;
  if (0xffff < uVar10) {
    uVar3 = 0x100;
  }
  if ((int)((((bVar9 & 0xc0 | (uint)(bVar8 >> 2)) >> 2 | bVar7 & 0xc0) >> 2 |
             -(uint)(uVar10 < *(uint *)(&DAT_18037f720 + lVar1)) & 0x40 | uVar6 | uVar3) ^ 0x2a) >>
      ((byte)*(undefined4 *)(&DAT_18037f770 + lVar1) & 0x1f) != 0) {
    *param_1 = 0xfffd;
    iVar4 = (uint)(bVar5 != 0) + (uint)(bVar8 != 0) + (uint)(bVar9 != 0) + (uint)(bVar7 != 0);
    if (iVar11 < iVar4) {
      iVar4 = iVar11;
    }
    return iVar4;
  }
  return iVar11;
}


