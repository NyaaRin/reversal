// 0x1800b2200  FUN_1800b2200
// size=948 thunk=false
// signature: undefined FUN_1800b2200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1800b2200(ulonglong *param_1,char *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  int iVar7;
  BOOL BVar8;
  size_t sVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  void *pvVar15;
  char *pcVar16;
  int iVar17;
  undefined1 auStack_1a8 [32];
  int local_188;
  size_t local_180;
  char *local_178;
  void *local_170;
  ulonglong local_168;
  ulonglong local_158 [35];
  
  local_158[0x20] = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  if ((((char)param_1[2] != '\0') && (param_2 != (char *)0x0)) &&
     (local_178 = param_2, sVar9 = strlen(param_2), sVar9 - 8 < 0x79)) {
    local_168 = *param_1;
    local_158[0] = 0;
    local_158[1] = 0;
    local_158[2] = 0;
    lVar11 = (longlong)*(int *)(local_168 + 0x3c) + local_168;
    local_158[3] = 0;
    local_158[4] = 0;
    local_158[5] = 0;
    local_158[6] = 0;
    uVar3 = *(ushort *)(lVar11 + 6);
    local_158[7] = 0;
    local_158[8] = 0;
    local_158[9] = 0;
    local_158[10] = 0;
    local_158[0xb] = 0;
    local_158[0xc] = 0;
    local_158[0xd] = 0;
    local_158[0xe] = 0;
    local_158[0xf] = 0;
    local_158[0x10] = 0;
    local_158[0x11] = 0;
    local_158[0x12] = 0;
    local_158[0x13] = 0;
    local_158[0x14] = 0;
    local_158[0x15] = 0;
    local_158[0x16] = 0;
    local_158[0x17] = 0;
    local_158[0x18] = 0;
    local_158[0x19] = 0;
    local_158[0x1a] = 0;
    local_158[0x1b] = 0;
    local_158[0x1c] = 0;
    local_158[0x1d] = 0;
    local_158[0x1e] = 0;
    local_158[0x1f] = 0;
    if (uVar3 != 0) {
      local_188 = 0;
      lVar11 = (ulonglong)*(ushort *)(lVar11 + 0x14) + lVar11;
      uVar13 = 0;
      do {
        if (0xf < local_188) break;
        if ((*(uint *)(lVar11 + 0x3c + uVar13 * 0x28) & 0x42000020) == 0x40000000) {
          uVar14 = *(uint *)(lVar11 + 0x24 + uVar13 * 0x28);
          if (((uVar14 != 0) && (uVar4 = *(uint *)(lVar11 + 0x20 + uVar13 * 0x28), uVar4 != 0)) &&
             ((ulonglong)uVar14 + (ulonglong)uVar4 <= param_1[1])) {
            lVar12 = (longlong)local_188;
            local_188 = local_188 + 1;
            local_158[lVar12 * 2] = uVar14 + local_168;
            local_158[lVar12 * 2 + 1] = (ulonglong)uVar4;
          }
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
      } while ((int)uVar14 < (int)(uint)uVar3);
      if (0 < local_188) {
        pvVar15 = (void *)0x0;
        local_170 = (void *)0x0;
        iVar17 = 0;
        local_180 = sVar9;
        do {
          iVar7 = local_188;
          if (pvVar15 != (void *)0x0) goto LAB_1800b248d;
          uVar13 = sVar9 + 1;
          uVar10 = local_158[(longlong)iVar17 * 2 + 1];
          pvVar6 = local_170;
          if (uVar13 < uVar10) {
            uVar5 = local_158[(longlong)iVar17 * 2];
            lVar11 = 0;
            cVar2 = *local_178;
            do {
              pvVar15 = (void *)(lVar11 + uVar5);
              if ((*(char *)(lVar11 + uVar5) == cVar2) &&
                 (iVar7 = memcmp(pvVar15,local_178,uVar13), sVar9 = local_180, pvVar6 = pvVar15,
                 iVar7 == 0)) break;
              lVar11 = lVar11 + 1;
              pvVar15 = local_170;
              pvVar6 = local_170;
            } while (sVar9 + 1 + lVar11 < uVar10);
          }
          local_170 = pvVar6;
          iVar17 = iVar17 + 1;
        } while (iVar17 < local_188);
        iVar7 = local_188;
        if (pvVar15 != (void *)0x0) {
LAB_1800b248d:
          if (local_168 <= (longlong)pvVar15 - 0x10U) {
            pcVar16 = (char *)(ulonglong)(uint)((int)((longlong)pvVar15 - 0x10U) - (int)local_168);
            local_188 = 0;
            local_178 = pcVar16;
            do {
              uVar13 = local_158[(longlong)local_188 * 2 + 1];
              if (0x1f < uVar13) {
                pvVar15 = (void *)local_158[(longlong)local_188 * 2];
                local_180 = 0;
                local_170 = pvVar15;
                local_168 = uVar13;
                do {
                  puVar1 = (uint *)(local_180 + (longlong)pvVar15);
                  if ((*(int *)(local_180 + 0xc + (longlong)pvVar15) == (int)pcVar16) &&
                     (*puVar1 < 2)) {
                    iVar17 = 0;
                    do {
                      uVar13 = local_158[(longlong)iVar17 * 2 + 1];
                      if (0x17 < uVar13) {
                        uVar10 = local_158[(longlong)iVar17 * 2];
                        lVar11 = 0;
                        do {
                          if (*(uint **)(lVar11 + uVar10) == puVar1) {
                            lVar12 = lVar11 + uVar10;
                            BVar8 = IsBadReadPtr((void *)(lVar12 + 8),0x28);
                            if (BVar8 == 0) {
                              return lVar12 + 8;
                            }
                          }
                          uVar5 = lVar11 + 0x18;
                          lVar11 = lVar11 + 8;
                        } while (uVar5 < uVar13);
                      }
                      iVar17 = iVar17 + 1;
                      uVar13 = local_168;
                      pvVar15 = local_170;
                      pcVar16 = local_178;
                    } while (iVar17 < iVar7);
                  }
                  uVar10 = local_180 + 0x1c;
                  local_180 = local_180 + 4;
                } while (uVar10 < uVar13);
              }
              local_188 = local_188 + 1;
            } while (local_188 < iVar7);
          }
        }
      }
    }
  }
  return 0;
}


