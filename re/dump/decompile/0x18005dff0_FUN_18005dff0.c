// 0x18005dff0  FUN_18005dff0
// size=415 thunk=false
// signature: undefined FUN_18005dff0()
// status: ok


uint FUN_18005dff0(char param_1,int param_2,void *param_3,int param_4,int param_5,char param_6)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 local_res10 [2];
  
  if (param_2 - 1U < 0x10000) {
    uVar4 = 0;
    do {
      lVar5 = uVar4 * 0x68;
      if ((&DAT_1805b88e0)[lVar5] == '\0') {
        local_res10[0] = 0;
        uVar3 = param_2 + 3;
        FUN_18020e0d0(&DAT_1805b88f0 + uVar4 * 0xd,
                      (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 3U)) >> 2),local_res10);
        if ((param_3 != (void *)0x0) && (0 < param_4)) {
          iVar2 = param_2;
          if (param_4 < param_2) {
            iVar2 = param_4;
          }
          memcpy((void *)(&DAT_1805b88f0)[uVar4 * 0xd],param_3,(longlong)iVar2);
        }
        DAT_1803e7560 = DAT_1803e7560 + 1 & 0x3ffff;
        if (DAT_1803e7560 == 0) {
          DAT_1803e7560 = 1;
        }
        *(uint *)(&DAT_1805b88e4 + lVar5) = DAT_1803e7560;
        (&DAT_1805b88e8)[uVar4 * 0x1a] = param_2;
        (&DAT_1805b88e1)[lVar5] = param_1;
        (&DAT_1805b88e0)[lVar5] = 1;
        uVar1 = (&DAT_1805b88f0)[uVar4 * 0xd];
        if (param_1 == '\0') {
          if ((param_5 < 1) || (param_2 * 8 < param_5)) {
            param_5 = param_2 * 8;
          }
          *(undefined8 *)(&DAT_1805b8908 + lVar5) = uVar1;
          *(int *)(&DAT_1805b8910 + lVar5) = param_2;
          iVar2 = param_2 * 8;
          if (param_5 != -1) {
            iVar2 = param_5;
          }
          *(int *)(&DAT_1805b8914 + lVar5) = iVar2;
          *(undefined4 *)(&DAT_1805b8918 + lVar5) = 0;
          *(undefined2 *)(&DAT_1805b891c + lVar5) = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffc;
          (&DAT_1805b88e8)[uVar4 * 0x1a] = uVar3;
          *(undefined8 *)(&DAT_1805b8928 + lVar5) = uVar1;
          *(uint *)(&DAT_1805b8930 + lVar5) = uVar3;
          *(uint *)(&DAT_1805b8934 + lVar5) = uVar3 * 8;
          *(undefined4 *)(&DAT_1805b8938 + lVar5) = 0;
          *(undefined2 *)(&DAT_1805b893c + lVar5) = 0;
        }
        if (param_6 != '\0') {
          DAT_1803ff7b8 = DAT_1803ff7b8 + 1;
        }
        return *(int *)(&DAT_1805b88e4 + lVar5) << 6 | (uint)uVar4;
      }
      uVar3 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < 0x40);
  }
  return 0;
}


