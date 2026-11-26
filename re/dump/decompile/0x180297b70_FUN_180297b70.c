// 0x180297b70  FUN_180297b70
// size=810 thunk=false
// signature: undefined FUN_180297b70()
// status: ok


void FUN_180297b70(longlong param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  
  *(char *)(param_1 + 0x51) = param_3;
  if ((param_3 != '\0') &&
     (*(undefined1 *)(param_1 + 0x52) = 1, *(longlong *)(param_1 + 0x2b0) == 0)) {
    FUN_180299180();
  }
  if (*(char *)(param_1 + 0x51) == '\0') {
    if (*(char *)(param_1 + 0x52) == '\0') {
      FUN_18027e9c0(
                   "Backend does not support ImGuiBackendFlags_RendererHasTextures, and font atlas is not built! Update backend OR make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()."
                   );
      goto LAB_180297bba;
    }
  }
  else {
LAB_180297bba:
    if (*(char *)(param_1 + 0x52) == '\0') goto LAB_180297be2;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x2b0) + 0xb9) != '\0') &&
     (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_18027e9c0(
                 "Called ImFontAtlas::Build() before ImGuiBackendFlags_RendererHasTextures got set! With new backends: you don\'t need to call Build()."
                 );
  }
LAB_180297be2:
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  *(undefined4 *)(lVar1 + 0xa4) = param_2;
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  puVar16 = puVar11 + *(int *)(param_1 + 0x68);
  uVar13 = 0;
  for (; puVar11 != puVar16; puVar11 = puVar11 + 1) {
    *(undefined8 *)*puVar11 = 0;
  }
  if (0 < *(int *)(lVar1 + 0xe8)) {
    iVar7 = *(int *)(lVar1 + 0xc0);
    uVar12 = uVar13;
    uVar14 = uVar13;
    if (0 < iVar7) {
      do {
        uVar10 = uVar12 & 0x1f;
        uVar6 = uVar12;
        if ((int)uVar12 < 0) {
          uVar6 = uVar12 + 0x1f;
          uVar10 = uVar10 - 0x20;
        }
        puVar16 = (undefined8 *)
                  (*(longlong *)(*(longlong *)(lVar1 + 0xd0) + (longlong)((int)uVar6 >> 5) * 8) +
                  (longlong)(int)uVar10 * 0x68);
        if ((*(uint *)((longlong)puVar16 + 0x4c) & 0x4000000) == 0) {
          uVar10 = uVar14 & 0x1f;
          uVar6 = uVar14;
          if ((int)uVar14 < 0) {
            uVar6 = uVar14 + 0x1f;
            uVar10 = uVar10 - 0x20;
          }
          puVar11 = (undefined8 *)
                    (*(longlong *)(*(longlong *)(lVar1 + 0xd0) + (longlong)((int)uVar6 >> 5) * 8) +
                    (longlong)(int)uVar10 * 0x68);
          uVar14 = uVar14 + 1;
          if (puVar11 != puVar16) {
            uVar5 = puVar16[1];
            *puVar11 = *puVar16;
            puVar11[1] = uVar5;
            uVar5 = puVar16[3];
            puVar11[2] = puVar16[2];
            puVar11[3] = uVar5;
            uVar5 = puVar16[5];
            puVar11[4] = puVar16[4];
            puVar11[5] = uVar5;
            uVar5 = puVar16[7];
            puVar11[6] = puVar16[6];
            puVar11[7] = uVar5;
            uVar5 = puVar16[9];
            puVar11[8] = puVar16[8];
            puVar11[9] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar16 + 0x54);
            uVar3 = *(undefined4 *)(puVar16 + 0xb);
            uVar4 = *(undefined4 *)((longlong)puVar16 + 0x5c);
            *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(puVar16 + 10);
            *(undefined4 *)((longlong)puVar11 + 0x54) = uVar2;
            *(undefined4 *)(puVar11 + 0xb) = uVar3;
            *(undefined4 *)((longlong)puVar11 + 0x5c) = uVar4;
            puVar11[0xc] = puVar16[0xc];
            FUN_1802693f0(lVar1 + 0xd8,*(undefined4 *)((longlong)puVar11 + 0x54),puVar11);
          }
        }
        uVar12 = uVar12 + 1;
        iVar7 = *(int *)(lVar1 + 0xc0);
      } while ((int)uVar12 < iVar7);
    }
    *(int *)(lVar1 + 0xc0) = iVar7 - *(int *)(lVar1 + 0xe8);
    *(undefined4 *)(lVar1 + 0xe8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      lVar17 = (longlong)(int)uVar13;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar17 * 8);
      iVar7 = *(int *)(lVar1 + 4);
      if (iVar7 == 0) {
        iVar7 = *(int *)(lVar1 + 0x44);
        if (iVar7 < 0) {
          iVar8 = (iVar7 + 1 >> 1) + iVar7;
          iVar15 = 0;
          if (0 < iVar8) {
            iVar15 = iVar8;
          }
          if (iVar7 < iVar15) {
            pvVar9 = (void *)FUN_18026f580((longlong)iVar15 << 3);
            if (*(void **)(lVar1 + 0x48) != (void *)0x0) {
              memcpy(pvVar9,*(void **)(lVar1 + 0x48),(longlong)*(int *)(lVar1 + 0x40) << 3);
              FUN_18026f680(*(undefined8 *)(lVar1 + 0x48));
            }
            *(void **)(lVar1 + 0x48) = pvVar9;
            *(int *)(lVar1 + 0x44) = iVar15;
          }
        }
        *(undefined8 *)(lVar1 + 0x3c) = 0;
        *(undefined4 *)(lVar1 + 0x38) = 0xffffffff;
        iVar7 = *(int *)(lVar1 + 4);
      }
      if (*(char *)(lVar1 + 0x57) == '\0') {
        if (iVar7 != 4) goto LAB_180297dd4;
LAB_180297e53:
        if ((*(longlong *)(lVar1 + 0x10) == 0) && (*(longlong *)(lVar1 + 8) == 0)) {
          *(undefined4 *)(lVar1 + 4) = 1;
LAB_180297ddd:
          if (*(char *)(lVar1 + 0x57) == '\0') {
            *(undefined4 *)(lVar1 + 4) = 2;
          }
          else {
            if (*(longlong *)(lVar1 + 0x28) != 0) {
              FUN_18026f680();
            }
            *(undefined8 *)(lVar1 + 0x28) = 0;
            *(undefined1 *)(lVar1 + 0x56) = 0;
            if (*(longlong *)(lVar1 + 0x28) != 0) {
              FUN_18026f680();
            }
            *(undefined8 *)(lVar1 + 0x28) = 0;
            *(undefined1 *)(lVar1 + 0x56) = 0;
            if (*(longlong *)(lVar1 + 0x48) != 0) {
              FUN_18026f680();
            }
            FUN_18026f680(lVar1);
            pvVar9 = (void *)(*(longlong *)(param_1 + 0x48) + lVar17 * 8);
            memmove(pvVar9,(void *)((longlong)pvVar9 + 8),
                    (*(int *)(param_1 + 0x40) - lVar17) * 8 - 8);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
            uVar13 = uVar13 - 1;
          }
        }
        else {
LAB_180297e7b:
          *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
        }
      }
      else {
        if (iVar7 != 1) {
          if (iVar7 != 4) {
            *(undefined4 *)(lVar1 + 4) = 4;
          }
          goto LAB_180297e53;
        }
        iVar7 = 1;
LAB_180297dd4:
        if (iVar7 == 1) goto LAB_180297ddd;
        if (iVar7 == 4) goto LAB_180297e7b;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < *(int *)(param_1 + 0x40));
  }
  return;
}


