// 0x1801226a0  FUN_1801226a0
// size=905 thunk=false
// signature: undefined FUN_1801226a0()
// status: ok


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801226a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  longlong *plVar4;
  char *_Str;
  longlong lVar5;
  size_t sVar6;
  int *piVar7;
  byte *******pppppppbVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  uint uVar13;
  byte *******local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  byte *******local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  uVar10 = 0;
  if ((DAT_1803fa360 != (longlong *)0x0) && (DAT_1803fa608 != 0)) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init((ulonglong)_tls_index,DAT_1803fa360,param_3,param_4,0);
    }
    fVar12 = (float)*(double *)(*(longlong *)(lVar5 + 0xec0) + 0x10);
    if (DAT_180380bb0 <= fVar12 - _DAT_1803fed4c) {
      _DAT_1803fed4c = fVar12;
      iVar2 = (**(code **)(*DAT_1803fa360 + 0x30))(DAT_1803fa360);
      iVar11 = *(int *)(DAT_1803fa608 + 0x1c);
      while (iVar11 = iVar11 + 1, iVar11 <= iVar2) {
        plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar11);
        if ((((plVar4 != (longlong *)0x0) && (BVar3 = IsBadReadPtr(plVar4,8), BVar3 == 0)) &&
            (BVar3 = IsBadReadPtr((void *)*plVar4,8), BVar3 == 0)) &&
           ((((_Str = (char *)FUN_18001e410(plVar4), _Str != (char *)0x0 && (*_Str != '\0')) &&
             ((char *)0xffff < _Str)) ||
            ((lVar5 = (**(code **)(*plVar4 + 0x78))(plVar4), lVar5 != 0 &&
             (_Str = *(char **)(lVar5 + 0x10), (char *)0xffff < _Str)))))) {
          local_b0 = (byte *******)0x0;
          uStack_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          sVar6 = strlen(_Str);
          FUN_18001d080(&local_b0,_Str,sVar6);
          uVar10 = uVar10 | 1;
          if (local_a0 < 7) {
LAB_180122891:
            bVar1 = false;
          }
          else {
            piVar7 = (int *)FUN_18020e670(&local_b0,local_58,0,6,uVar10);
            uVar10 = 3;
            plVar4 = (longlong *)(piVar7 + 4);
            if (0xf < *(ulonglong *)(piVar7 + 6)) {
              piVar7 = *(int **)piVar7;
            }
            if (*plVar4 != 6) goto LAB_180122891;
            iVar9 = *piVar7 + -0x73616c63;
            if (iVar9 == 0) {
              iVar9 = *(ushort *)(piVar7 + 1) - 0x2073;
            }
            if (iVar9 != 0) goto LAB_180122891;
            bVar1 = true;
          }
          uVar13 = uVar10;
          if ((uVar10 & 2) != 0) {
            uVar10 = uVar10 & 0xfffffffd;
            uVar13 = uVar10;
            FUN_18020e450(local_58);
          }
          if (bVar1) {
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            if (local_a0 < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_18022ec00();
            }
            lVar5 = -1;
            if (local_a0 - 6 != -1) {
              lVar5 = local_a0 - 6;
            }
            pppppppbVar8 = (byte *******)&local_b0;
            if (0xf < local_98) {
              pppppppbVar8 = local_b0;
            }
            FUN_18001d080(&local_88,(byte *)((longlong)pppppppbVar8 + 6),lVar5);
            FUN_18020e8a0(&local_b0,&local_88);
            uVar13 = uVar10;
            FUN_18020e450(&local_88);
          }
          local_90 = (byte *******)&local_b0;
          if (0xf < local_98) {
            local_90 = local_b0;
          }
          pppppppbVar8 = (byte *******)&local_b0;
          if (0xf < local_98) {
            pppppppbVar8 = local_b0;
          }
          while (local_90 != (byte *******)((longlong)pppppppbVar8 + local_a0)) {
            if ((0x20 < *(byte *)local_90) && (*(byte *)local_90 != 0x7f)) {
              pppppppbVar8 = (byte *******)&local_b0;
              if (0xf < local_98) {
                pppppppbVar8 = local_b0;
              }
              if (local_a0 == 0xb) {
                lVar5 = (longlong)*pppppppbVar8 + -0x746e456573614243;
                if ((lVar5 == 0) &&
                   (lVar5 = (ulonglong)*(ushort *)(pppppppbVar8 + 1) - 0x7469, lVar5 == 0)) {
                  lVar5 = (ulonglong)*(byte *)((longlong)pppppppbVar8 + 10) - 0x79;
                }
                if (lVar5 == 0) break;
              }
              FUN_180219e20(&DAT_1805c7b10,local_68,&local_b0,local_b0,uVar13);
              break;
            }
            local_90 = (byte *******)((longlong)local_90 + 1);
          }
          uVar10 = uVar10 & 0xfffffffe;
          FUN_18020e450(&local_b0);
        }
      }
    }
  }
  return;
}


