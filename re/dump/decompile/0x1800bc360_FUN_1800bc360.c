// 0x1800bc360  FUN_1800bc360
// size=790 thunk=false
// signature: undefined FUN_1800bc360()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bc360(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  float *_Src;
  char cVar6;
  int iVar7;
  BOOL BVar8;
  int iVar9;
  longlong *lp;
  longlong *plVar10;
  int iVar11;
  float *pfVar12;
  size_t _Size;
  longlong lVar13;
  float *pfVar14;
  double dVar15;
  undefined1 auStack_88 [32];
  float *local_68;
  float *local_58;
  char *local_50;
  char local_48 [4];
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if ((DAT_1803fa608 != 0) && (DAT_1803fa360 != (longlong *)0x0)) {
    local_44 = (float)*(double *)(DAT_1803fa608 + 0x10);
    local_48[0] = FUN_1800b83a0();
    iVar9 = DAT_1803ff708;
    if ((local_48[0] == '\0') && (iVar11 = 0, 0 < DAT_1803ff708)) {
      do {
        lVar13 = (longlong)iVar11 * 0x58;
        if (((char *)(&DAT_1803eb898)[(longlong)iVar11 * 0xb] != (char *)0x0) &&
           (iVar7 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar11 * 0xb],"player_hurt"),
           iVar7 == 0)) {
          if ((lVar13 != -0x1803eb890) &&
             (((((&DAT_1803eb8e4)[lVar13] != '\0' && (DAT_1803e8708 < DAT_180381438)) &&
               (DAT_1803ff0b8 == '\0')) && (DAT_1803e9e08 != DAT_1803e9e10)))) {
            DAT_1803ff0b8 = '\x01';
            FUN_180014410(
                         "[RESOLVER] player_hurt subscribed but never delivered on this server -- verdicts come from the health poll (kills always count)\n"
                         );
          }
          break;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar9);
    }
    pfVar14 = DAT_1803e9e10;
    dVar5 = DAT_180380ae8;
    if (DAT_1803e9e08 != DAT_1803e9e10) {
      local_58 = DAT_1803e9e10;
      pfVar12 = DAT_1803e9e08;
      while (_Src = DAT_1803e9e10, local_68 = pfVar12, pfVar12 != pfVar14) {
        if ((((*(char *)(pfVar12 + 0xc) == '\0') &&
             (lp = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,*pfVar12),
             lp != (longlong *)0x0)) &&
            ((BVar8 = IsBadReadPtr(lp,8), BVar8 == 0 &&
             ((BVar8 = IsBadReadPtr((void *)*lp,8), BVar8 == 0 &&
              (plVar10 = (longlong *)(**(code **)(*lp + 0x20))(lp), plVar10 != (longlong *)0x0))))))
           && (cVar6 = (**(code **)(*plVar10 + 0x40))(plVar10), cVar6 == '\0')) {
          dVar15 = (double)FUN_18001c0d0(lp);
          if ((((uint)((ulonglong)dVar15 >> 0x34) & 0x7ff) != 0x7ff) &&
             (*(double *)(pfVar12 + 4) + dVar5 < dVar15)) {
            *(double *)(pfVar12 + 4) = dVar15;
            pfVar12[6] = (float)((int)pfVar12[6] + 1);
          }
          if (local_48[0] == '\0') {
            cVar6 = FUN_18001c330(lp);
            if (cVar6 == '\0') {
              *(undefined1 *)(pfVar12 + 0xc) = 1;
              FUN_1800bb8a0(*pfVar12,pfVar12[8],pfVar12);
              goto LAB_1800bc59d;
            }
            fVar1 = pfVar12[1];
            iVar9 = FUN_18001c680(lp);
            if (iVar9 < (int)fVar1) {
              *(undefined1 *)(pfVar12 + 0xc) = 1;
              FUN_1800bb8a0(*pfVar12,pfVar12[8],pfVar12);
            }
          }
          pfVar12 = pfVar12 + 0x14;
        }
        else {
LAB_1800bc59d:
          pfVar12 = pfVar12 + 0x14;
        }
      }
      local_58 = &local_44;
      local_50 = local_48;
      pfVar14 = DAT_1803e9e08;
      if (DAT_1803e9e08 != DAT_1803e9e10) {
        do {
          cVar6 = FUN_1800bc690(&local_58,pfVar14);
          if (cVar6 != '\0') break;
          pfVar14 = pfVar14 + 0x14;
        } while (pfVar14 != _Src);
        if (pfVar14 != _Src) {
          pfVar12 = pfVar14 + 0x14;
          if (pfVar12 != _Src) {
            do {
              cVar6 = FUN_1800bc690(&local_58,pfVar12);
              if (cVar6 == '\0') {
                uVar4 = *(undefined8 *)(pfVar12 + 2);
                *(undefined8 *)pfVar14 = *(undefined8 *)pfVar12;
                *(undefined8 *)(pfVar14 + 2) = uVar4;
                uVar4 = *(undefined8 *)(pfVar12 + 6);
                *(undefined8 *)(pfVar14 + 4) = *(undefined8 *)(pfVar12 + 4);
                *(undefined8 *)(pfVar14 + 6) = uVar4;
                uVar4 = *(undefined8 *)(pfVar12 + 10);
                *(undefined8 *)(pfVar14 + 8) = *(undefined8 *)(pfVar12 + 8);
                *(undefined8 *)(pfVar14 + 10) = uVar4;
                uVar4 = *(undefined8 *)(pfVar12 + 0xe);
                *(undefined8 *)(pfVar14 + 0xc) = *(undefined8 *)(pfVar12 + 0xc);
                *(undefined8 *)(pfVar14 + 0xe) = uVar4;
                fVar1 = pfVar12[0x11];
                fVar2 = pfVar12[0x12];
                fVar3 = pfVar12[0x13];
                pfVar14[0x10] = pfVar12[0x10];
                pfVar14[0x11] = fVar1;
                pfVar14[0x12] = fVar2;
                pfVar14[0x13] = fVar3;
                pfVar14 = pfVar14 + 0x14;
              }
              pfVar12 = pfVar12 + 0x14;
            } while (pfVar12 != _Src);
            if (pfVar14 == _Src) {
              return;
            }
          }
          _Size = (longlong)DAT_1803e9e10 - (longlong)_Src;
          memmove(pfVar14,_Src,_Size);
          DAT_1803e9e10 = (float *)(_Size + (longlong)pfVar14);
        }
      }
    }
  }
  return;
}


