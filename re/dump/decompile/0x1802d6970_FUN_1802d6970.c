// 0x1802d6970  FUN_1802d6970
// size=347 thunk=false
// signature: undefined FUN_1802d6970()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802d6970(byte *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [32];
  ulonglong uVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_158 [56];
  undefined1 local_120 [8] [32];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  pbVar1 = param_1 + param_2;
  if (param_2 < 0x15) {
    auVar5 = ZEXT1664((undefined1  [16])0x0);
    uVar4 = 0;
    while (param_1 != pbVar1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      auVar3 = vpmovzxbq_avx2(ZEXT416((uint)(1 << (bVar2 >> 3 & 0x18))));
      auVar3 = vpsllq_avx2(auVar3,ZEXT416(bVar2 & 0x3f));
      auVar3 = vpor_avx2(auVar3,auVar5._0_32_);
      auVar5 = ZEXT3264(auVar3);
      uVar4 = auVar3._0_8_;
    }
  }
  else {
    memset(local_120,0,0x100);
    for (; param_1 != pbVar1; param_1 = param_1 + 1) {
      local_120[0][*param_1] = 0xff;
    }
    uVar4 = (ulonglong)
            ((uint)(SUB321(local_120[0] >> 7,0) & 1) |
             (uint)(SUB321(local_120[0] >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(local_120[0] >> 0x17,0) & 1) << 2 |
             (uint)(SUB321(local_120[0] >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(local_120[0] >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(local_120[0] >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(local_120[0] >> 0x37,0) & 1) << 6 |
             (uint)(SUB321(local_120[0] >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(local_120[0] >> 0x47,0) & 1) << 8 |
             (uint)(SUB321(local_120[0] >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(local_120[0] >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(local_120[0] >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(local_120[0] >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(local_120[0] >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(local_120[0] >> 0x77,0) & 1) << 0xe |
             (uint)SUB321(local_120[0] >> 0x7f,0) << 0xf |
             (uint)(SUB321(local_120[0] >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(local_120[0] >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(local_120[0] >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(local_120[0] >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(local_120[0] >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(local_120[0] >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(local_120[0] >> 0xb7,0) & 1) << 0x16 |
             (uint)SUB321(local_120[0] >> 0xbf,0) << 0x17 |
             (uint)(SUB321(local_120[0] >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(local_120[0] >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(local_120[0] >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(local_120[0] >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(local_120[0] >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(local_120[0] >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(local_120[0] >> 0xf7,0) & 1) << 0x1e |
            (uint)(byte)(local_120[0][0x1f] >> 7) << 0x1f);
  }
  return uVar4;
}


