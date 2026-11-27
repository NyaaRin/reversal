// 0x1800d8960  FUN_1800d8960
// size=596 thunk=false
// signature: undefined FUN_1800d8960()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d8960(longlong param_1)

{
  char *_Str1;
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  float local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  DAT_18040a240 = 0;
  if (((param_1 != 0) && (DAT_1803fa608 != 0)) &&
     (fVar8 = (float)*(double *)(DAT_1803fa608 + 0x10), 0.0 < fVar8)) {
    lVar5 = FUN_1800b4450();
    fVar1 = DAT_180380f00;
    if (lVar5 != 0) {
      if (lVar5 != DAT_1804259e8) {
        DAT_1803e739c = -1;
        local_58[0] = 0.0;
        local_68 = 0;
        DAT_1804259e8 = lVar5;
        FUN_1800b44d0(lVar5,0,&DAT_18042cd70,local_58);
        fVar7 = local_58[0];
        iVar6 = 0;
        if (0 < (int)local_58[0]) {
          do {
            if ((*(char **)(&DAT_18042cd80 + (longlong)iVar6 * 0x18) != (char *)0x0) &&
               (iVar3 = strcmp(*(char **)(&DAT_18042cd80 + (longlong)iVar6 * 0x18),
                               "m_flNextPrimaryAttack"), iVar3 == 0)) {
              DAT_1803e739c = *(int *)(&DAT_18042cd70 + (longlong)iVar6 * 0x18);
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)fVar7);
        }
        if (DAT_1803e739c < 0) {
          FUN_180014410(&DAT_18034db40,fVar7);
          iVar3 = 0;
          iVar6 = 0;
          fVar7 = local_58[0];
          if (0 < (int)local_58[0]) {
            do {
              if (0xb < iVar3) break;
              _Str1 = *(char **)(&DAT_18042cd80 + (longlong)iVar6 * 0x18);
              if ((_Str1 != (char *)0x0) && (iVar4 = strncmp(_Str1,"m_flNext",8), iVar4 == 0)) {
                FUN_180014410("[OCTO]   +0x%X %s\n",
                              *(undefined4 *)(&DAT_18042cd70 + (longlong)iVar6 * 0x18),_Str1);
                iVar3 = iVar3 + 1;
                fVar7 = local_58[0];
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)fVar7);
          }
        }
        else {
          FUN_180014410("[OCTO] m_flNextPrimaryAttack = +0x%X (weapon prediction datamap, %d fields)\n"
                        ,DAT_1803e739c,fVar7);
        }
      }
      if (0 < DAT_1803e739c) {
        local_58[0] = 0.0;
        cVar2 = FUN_1800b2030(DAT_1803e739c + param_1,local_58);
        if (((cVar2 != '\0') && (fVar8 < local_58[0])) && (local_58[0] - fVar8 < fVar1)) {
          DAT_18040a240 = 1;
        }
      }
    }
    if (((DAT_18040a238 == param_1) && (fVar8 < DAT_1803e8830)) && (DAT_1803e8830 - fVar8 < fVar1))
    {
      DAT_18040a240 = 1;
    }
  }
  return;
}


