// 0x1802a6f80  FUN_1802a6f80
// size=520 thunk=false
// signature: undefined FUN_1802a6f80()
// status: ok


float FUN_1802a6f80(void)

{
  float fVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float local_res8;
  float local_resc;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar8 = DAT_180381384;
  uVar7 = DAT_180381308;
  fVar6 = DAT_180380ba8;
  uVar11 = 0;
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  lVar5 = *(longlong *)(lVar4 + 0x2368);
  fVar13 = *(float *)(lVar4 + 0x1238);
  iVar12 = *(int *)(lVar5 + 0x6c);
  if (0 < iVar12) {
    do {
      if ((*(uint *)(*(longlong *)(lVar5 + 0x50) + ((longlong)(int)uVar11 >> 5) * 4) >>
           (uVar11 & 0x1f) & 1) != 0) {
        lVar9 = (longlong)(int)uVar11 * 0x74;
        if ((*(uint *)(lVar9 + *(longlong *)(lVar5 + 0x18)) & 0x1000) == 0) {
          if ((*(char *)(lVar5 + 0x239) == '\0') && ((int)*(short *)(lVar5 + 0x206) <= (int)uVar11))
          {
            puVar10 = &DAT_18033e5ea;
          }
          else {
            sVar2 = *(short *)(lVar9 + 0x54 + *(longlong *)(lVar5 + 0x18));
            if (sVar2 == -1) {
              puVar10 = &DAT_18033e5ea;
            }
            else {
              puVar10 = (undefined1 *)((longlong)sVar2 + *(longlong *)(lVar5 + 0x198));
            }
          }
          if (*(char *)(lVar3 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
            iVar12 = *(int *)(lVar5 + 0x6c);
          }
          fVar1 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238);
          if (puVar10 != (undefined1 *)0x0) {
            FUN_18029e350(&local_res8,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),fVar1,
                          uVar7,uVar8,puVar10,0,0,0);
            iVar12 = *(int *)(lVar5 + 0x6c);
            local_res8 = (float)(int)(local_res8 + fVar6);
            fVar1 = local_resc;
          }
          if (fVar13 <= fVar1) {
            fVar13 = fVar1;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar12);
  }
  return *(float *)(lVar4 + 0xce8) + *(float *)(lVar4 + 0xce8) + fVar13;
}


