// 0x18029dd40  FUN_18029dd40
// size=994 thunk=false
// signature: undefined FUN_18029dd40()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029dd40(void)

{
  uint uVar1;
  sbyte sVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint local_res8 [2];
  
  if ((_DAT_1803fccc8 & 0x3000000) == 0) {
    uVar5 = 0;
    do {
      (&DAT_1803fccc0)[uVar5 >> 4] = (&DAT_1803fccc0)[uVar5 >> 4] & 0xfffffffc | 2;
      (&DAT_1803fccc0)[uVar5 + 1 >> 4] = (&DAT_1803fccc0)[uVar5 + 1 >> 4] & 0xfffffff3 | 8;
      (&DAT_1803fccc0)[uVar5 + 2 >> 4] = (&DAT_1803fccc0)[uVar5 + 2 >> 4] & 0xffffffcf | 0x20;
      (&DAT_1803fccc0)[uVar5 + 3 >> 4] = (&DAT_1803fccc0)[uVar5 + 3 >> 4] & 0xffffff3f | 0x80;
      (&DAT_1803fccc0)[uVar5 + 4 >> 4] = (&DAT_1803fccc0)[uVar5 + 4 >> 4] & 0xfffffcff | 0x200;
      (&DAT_1803fccc0)[uVar5 + 5 >> 4] = (&DAT_1803fccc0)[uVar5 + 5 >> 4] & 0xfffff3ff | 0x800;
      (&DAT_1803fccc0)[uVar5 + 6 >> 4] = (&DAT_1803fccc0)[uVar5 + 6 >> 4] & 0xffffcfff | 0x2000;
      (&DAT_1803fccc0)[uVar5 + 7 >> 4] = (&DAT_1803fccc0)[uVar5 + 7 >> 4] & 0xffff3fff | 0x8000;
      (&DAT_1803fccc0)[uVar5 + 8 >> 4] = (&DAT_1803fccc0)[uVar5 + 8 >> 4] & 0xfffcffff | 0x20000;
      (&DAT_1803fccc0)[uVar5 + 9 >> 4] = (&DAT_1803fccc0)[uVar5 + 9 >> 4] & 0xfff3ffff | 0x80000;
      (&DAT_1803fccc0)[uVar5 + 10 >> 4] = (&DAT_1803fccc0)[uVar5 + 10 >> 4] & 0xffcfffff | 0x200000;
      (&DAT_1803fccc0)[uVar5 + 0xb >> 4] =
           (&DAT_1803fccc0)[uVar5 + 0xb >> 4] & 0xff3fffff | 0x800000;
      (&DAT_1803fccc0)[uVar5 + 0xc >> 4] =
           (&DAT_1803fccc0)[uVar5 + 0xc >> 4] & 0xfcffffff | 0x2000000;
      (&DAT_1803fccc0)[uVar5 + 0xd >> 4] =
           (&DAT_1803fccc0)[uVar5 + 0xd >> 4] & 0xf3ffffff | 0x8000000;
      (&DAT_1803fccc0)[uVar5 + 0xe >> 4] =
           (&DAT_1803fccc0)[uVar5 + 0xe >> 4] & 0xcfffffff | 0x20000000;
      uVar1 = uVar5 + 0xf;
      uVar5 = uVar5 + 0x10;
      (&DAT_1803fccc0)[uVar1 >> 4] = (&DAT_1803fccc0)[uVar1 >> 4] & 0x3fffffff | 0x80000000;
    } while (uVar5 < 0x80);
    pcVar4 = " \t";
    do {
      iVar3 = FUN_180268c20(local_res8,pcVar4,&DAT_180340eb6);
      pcVar4 = pcVar4 + iVar3;
      (&DAT_1803fccc0)[local_res8[0] >> 4] =
           (&DAT_1803fccc0)[local_res8[0] >> 4] & ~(3 << ((byte)local_res8[0] & 0xf) * '\x02');
    } while (*pcVar4 != '\0');
    pcVar4 = ".,;!?\"";
    do {
      iVar3 = FUN_180268c20(local_res8,pcVar4,&DAT_18037fc16);
      pcVar4 = pcVar4 + iVar3;
      sVar2 = ((byte)local_res8[0] & 0xf) * '\x02';
      (&DAT_1803fccc0)[local_res8[0] >> 4] =
           ~(3 << sVar2) & (&DAT_1803fccc0)[local_res8[0] >> 4] | 1 << sVar2;
    } while (*pcVar4 != '\0');
    DAT_1803fcbec = DAT_1803fcbec & 0xeaaaaa94 | 0x2aaaaa94;
  }
  return;
}


