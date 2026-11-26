// 0x18023bba0  FUN_18023bba0
// size=1601 thunk=false
// signature: undefined FUN_18023bba0()
// status: ok


char FUN_18023bba0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  cVar2 = '\0';
  iVar1 = (int)param_1[0xe];
  do {
    if ((iVar1 == -1) || (iVar1 == 0x7c)) {
      return cVar2;
    }
    if (iVar1 == 0x29) {
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        return cVar2;
      }
      if ((*(uint *)(param_1 + 0xc) >> 0x1b & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18023d7e0(0x29,5);
      }
LAB_18023bbf7:
      if (iVar1 == 0x24) {
        puVar3 = (undefined8 *)FUN_1802d8350(0x20);
        *puVar3 = vftable_std__Node_base;
        puVar3[1] = 3;
        puVar3[2] = 0;
        puVar3[3] = 0;
        FUN_18023c1f0(param_1 + 7,puVar3);
LAB_18023bc29:
        pcVar4 = (char *)*param_1;
        if (pcVar4 != (char *)param_1[1]) {
          if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
              (pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1])) &&
             ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
              (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
            *param_1 = *param_1 + 1;
          }
LAB_18023bc6b:
          *param_1 = *param_1 + 1;
        }
LAB_18023bc6e:
        FUN_180234da0(param_1);
        goto LAB_18023c160;
      }
      if (iVar1 == 0x2a) {
        if (((*(uint *)(param_1 + 0xc) >> 0x19 & 1) == 0) || (cVar2 != '\0')) goto LAB_18023c1a5;
LAB_18023c0ea:
        if ((iVar1 == 0x5d) && ((*(uint *)(param_1 + 0xc) >> 0x1c & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_18023d7e0(0x5d,4);
        }
      }
      else {
LAB_18023c17e:
        if (((iVar1 == 0x2b) || (iVar1 == 0x3f)) || (iVar1 == 0x7b)) {
LAB_18023c1a5:
                    /* WARNING: Subroutine does not return */
          FUN_18023d7e0(iVar1,10);
        }
        if (iVar1 != 0x7d) goto LAB_18023c0ea;
        if ((*(uint *)(param_1 + 0xc) >> 0x1b & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18023d7e0(0x7d,6);
        }
      }
      FUN_18023de30(param_1 + 7,*(undefined1 *)((longlong)param_1 + 0x75));
      pcVar4 = (char *)*param_1;
      pcVar5 = (char *)param_1[1];
      if (pcVar4 != pcVar5) {
        if (*pcVar4 == '\\') {
          bVar6 = *(char *)((longlong)param_1 + 0x74) == '\0';
LAB_18023c11f:
          if (bVar6) {
            pcVar4 = pcVar4 + 1;
            bVar6 = pcVar4 == pcVar5;
LAB_18023c128:
            if ((!bVar6) &&
               ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
                (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
              *param_1 = *param_1 + 1;
            }
          }
        }
LAB_18023c14d:
        *param_1 = *param_1 + 1;
      }
LAB_18023c150:
      FUN_180234da0(param_1);
LAB_18023c158:
      FUN_18023dbe0(param_1);
    }
    else {
      if (iVar1 == 0x2e) {
        puVar3 = (undefined8 *)FUN_1802d8350(0x20);
        *puVar3 = vftable_std__Node_base;
        puVar3[1] = 5;
        puVar3[2] = 0;
        puVar3[3] = 0;
        FUN_18023c1f0(param_1 + 7,puVar3);
        pcVar4 = (char *)*param_1;
        if (pcVar4 != (char *)param_1[1]) {
          if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
              (pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1])) &&
             ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
              (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
            *param_1 = (longlong)pcVar4;
          }
          goto LAB_18023c14d;
        }
        goto LAB_18023c150;
      }
      if (iVar1 == 0x5c) {
        pcVar4 = (char *)*param_1;
        if (pcVar4 != (char *)param_1[1]) {
          if (((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
             ((pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1] &&
              ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
               (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))))) {
            *param_1 = (longlong)pcVar4;
          }
          *param_1 = *param_1 + 1;
        }
        FUN_180234da0(param_1);
        if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
          if (*(char *)((longlong)param_1 + 0x75) == 'b') {
            puVar3 = (undefined8 *)FUN_1802d8350(0x20);
            *puVar3 = vftable_std__Node_base;
            puVar3[1] = 4;
            puVar3[2] = 0;
            puVar3[3] = 0;
            FUN_18023c1f0(param_1 + 7,puVar3);
            pcVar4 = (char *)*param_1;
            if (pcVar4 != (char *)param_1[1]) {
              if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
                  (pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1])) &&
                 ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
                  (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
                *param_1 = (longlong)pcVar4;
                *param_1 = *param_1 + 1;
                FUN_180234da0(param_1);
                goto LAB_18023c160;
              }
              goto LAB_18023bc6b;
            }
            goto LAB_18023bc6e;
          }
          if (*(char *)((longlong)param_1 + 0x75) == 'B') {
            puVar3 = (undefined8 *)FUN_1802d8350(0x20);
            *puVar3 = vftable_std__Node_base;
            puVar3[1] = 4;
            puVar3[2] = 0;
            puVar3[3] = 0;
            FUN_18023c1f0(param_1 + 7,puVar3);
            *(uint *)(param_1[8] + 0xc) = *(uint *)(param_1[8] + 0xc) ^ 1;
            goto LAB_18023bc29;
          }
        }
        FUN_18023d7f0(param_1);
        goto LAB_18023c158;
      }
      if (iVar1 == 0x5b) {
        *(char *)((longlong)param_1 + 0x74) = '\x01';
        if (*param_1 != param_1[1]) {
          *param_1 = *param_1 + 1;
        }
        FUN_180234da0(param_1);
        FUN_18023f080(param_1 + 7);
        if ((int)param_1[0xe] == 0x5e) {
          *(uint *)(param_1[8] + 0xc) = *(uint *)(param_1[8] + 0xc) ^ 1;
          pcVar4 = (char *)*param_1;
          pcVar5 = (char *)param_1[1];
          if (pcVar4 != pcVar5) {
            if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
                (pcVar4 = pcVar4 + 1, pcVar4 != pcVar5)) &&
               ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
                (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
              *param_1 = *param_1 + 1;
            }
            *param_1 = *param_1 + 1;
          }
          FUN_180234da0(param_1);
        }
        FUN_18023e790(param_1);
        *(undefined1 *)((longlong)param_1 + 0x74) = 0;
        if ((int)param_1[0xe] != 0x5d) {
                    /* WARNING: Subroutine does not return */
          FUN_18023d7e0();
        }
        pcVar4 = (char *)*param_1;
        pcVar5 = (char *)param_1[1];
        if (pcVar4 == pcVar5) goto LAB_18023c150;
        bVar6 = *pcVar4 == '\\';
        goto LAB_18023c11f;
      }
      if (iVar1 != 0x28) {
        if (iVar1 != 0x5e) goto LAB_18023bbf7;
        if (((*(uint *)(param_1 + 0xc) >> 0x18 & 1) != 0) && (cVar2 != '\0')) goto LAB_18023c17e;
        puVar3 = (undefined8 *)FUN_1802d8350(0x20);
        *puVar3 = vftable_std__Node_base;
        puVar3[1] = 2;
        puVar3[2] = 0;
        puVar3[3] = 0;
        FUN_18023c1f0(param_1 + 7,puVar3);
        pcVar4 = (char *)*param_1;
        if (pcVar4 != (char *)param_1[1]) {
          if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
              (pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1])) &&
             ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
              (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
            *param_1 = *param_1 + 1;
          }
          *param_1 = *param_1 + 1;
        }
        FUN_180234da0(param_1);
        if ((((*(uint *)(param_1 + 0xc) >> 0x19 & 1) == 0) || ((int)param_1[0xe] != 0x2a)) ||
           (cVar2 != '\0')) goto LAB_18023c160;
        FUN_18023de30(param_1 + 7,*(undefined1 *)((longlong)param_1 + 0x75));
        pcVar4 = (char *)*param_1;
        if (pcVar4 == (char *)param_1[1]) goto LAB_18023c150;
        if ((*pcVar4 != '\\') || (*(char *)((longlong)param_1 + 0x74) != '\0')) goto LAB_18023c14d;
        pcVar4 = pcVar4 + 1;
        bVar6 = pcVar4 == (char *)param_1[1];
        goto LAB_18023c128;
      }
      pcVar4 = (char *)*param_1;
      if (pcVar4 != (char *)param_1[1]) {
        if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1])) &&
           ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
            (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = *param_1 + 1;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      cVar2 = FUN_18023d9e0(param_1);
      if ((int)param_1[0xe] != 0x29) {
                    /* WARNING: Subroutine does not return */
        FUN_18023d7e0();
      }
      pcVar4 = (char *)*param_1;
      if (pcVar4 != (char *)param_1[1]) {
        if (((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
           ((pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1] &&
            ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
             (((param_1[0xc] & 0x10U) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))))) {
          *param_1 = *param_1 + 1;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      if (cVar2 != '\0') goto LAB_18023c158;
    }
LAB_18023c160:
    iVar1 = (int)param_1[0xe];
    cVar2 = '\x01';
  } while( true );
}


