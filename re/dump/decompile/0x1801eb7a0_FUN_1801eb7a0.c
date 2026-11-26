// 0x1801eb7a0  FUN_1801eb7a0
// size=654 thunk=false
// signature: undefined FUN_1801eb7a0()
// status: ok


ulonglong FUN_1801eb7a0(longlong param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  uint local_48;
  uint local_44;
  uint local_40 [2];
  
  if (((param_1 != 0) && (param_2 != 0)) && (DAT_1803fa4f8 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_1803ff290);
    if (DAT_1803ff284 == '\0') {
      LOCK();
      DAT_1803ff274 = DAT_1803ff274 + 1;
      UNLOCK();
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
      uVar3 = FUN_180114de0(param_2);
      if ((char)uVar3 == '\0') {
        LOCK();
        DAT_1803ff274 = DAT_1803ff274 + -1;
        UNLOCK();
        return uVar3;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
      lVar6 = DAT_1803e7420;
      lVar5 = 0;
      if (DAT_1803ff284 == '\0') {
        puVar4 = &local_48;
        local_48 = (uint)(DAT_1803da6a0 == 0);
        local_44 = DAT_1803da6a0 == 0 ^ 1;
        do {
          uVar8 = *puVar4;
          if (((uVar8 != DAT_1803da6a0) && ((&DAT_1803ff268)[(int)uVar8] == '\0')) &&
             ((&DAT_1803ff278)[(int)uVar8] == 0)) {
            lVar7 = DAT_1803fa4c8;
            if ((uVar8 != 0) && (lVar7 = lVar5, uVar8 == 1)) {
              lVar7 = DAT_1803fa500;
            }
            if (lVar7 != 0) {
              (&DAT_1803ff268)[(int)uVar8] = 1;
              goto LAB_1801eb92d;
            }
          }
          puVar4 = puVar4 + 1;
        } while (puVar4 != local_40);
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
      }
      else {
        uVar8 = 0xffffffff;
        lVar7 = lVar5;
        lVar6 = lVar5;
LAB_1801eb92d:
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
        if ((-1 < (int)uVar8) && (lVar7 != 0)) {
          cVar1 = FUN_180114de0(lVar7);
          if (cVar1 == '\0') {
            FUN_180114540(param_2);
            LOCK();
            DAT_1803ff274 = DAT_1803ff274 + -1;
            UNLOCK();
            AcquireSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
            bVar9 = 0;
          }
          else {
            iVar2 = FUN_1801eb750(param_1,param_2,lVar7,0,0,0);
            FUN_180114540(lVar7);
            FUN_180114540(param_2);
            LOCK();
            DAT_1803ff274 = DAT_1803ff274 + -1;
            UNLOCK();
            bVar9 = 0;
            AcquireSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
            if (((-1 < iVar2) && (DAT_1803ff284 == '\0')) && (lVar6 == DAT_1803e7420)) {
              lVar6 = DAT_1803fa4c8;
              if ((uVar8 != 0) && (lVar6 = lVar5, uVar8 == 1)) {
                lVar6 = DAT_1803fa500;
              }
              if (lVar6 == lVar7) {
                DAT_1803fa455 = 1;
                bVar9 = 1;
                DAT_1803da6a0 = uVar8;
                DAT_1803fa453 = param_3;
              }
            }
          }
          if ((ulonglong)(longlong)(int)uVar8 < 2) {
            (&DAT_1803ff268)[(int)uVar8] = 0;
            ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
            return (ulonglong)bVar9;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1802d8348();
        }
      }
      uVar3 = FUN_180114540(param_2);
      LOCK();
      DAT_1803ff274 = DAT_1803ff274 + -1;
      UNLOCK();
      return uVar3 & 0xffffffffffffff00;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
    in_RAX = extraout_RAX;
  }
  return in_RAX & 0xffffffffffffff00;
}


