// 0x18028d760  FUN_18028d760
// size=441 thunk=false
// signature: undefined FUN_18028d760()
// status: ok


undefined8 * FUN_18028d760(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  iVar1 = *(int *)(param_2 + 0x9c);
  pcVar2 = *(char **)(param_2 + 0x90);
  iVar4 = iVar1;
  if ((-1 < iVar1) && (iVar4 = 0, 0 < iVar1)) {
    iVar4 = 1;
    if (*pcVar2 != '\0') {
      if (*pcVar2 == '\x03') {
        if (iVar1 < 2) {
          uVar9 = 0;
          uVar8 = 0;
          bVar3 = 0;
        }
        else if (iVar1 < 3) {
          uVar8 = (uint)(byte)pcVar2[1] << 8;
          uVar9 = 0;
          bVar3 = 0;
          iVar4 = 2;
        }
        else {
          iVar4 = 3;
          uVar8 = (uint)CONCAT11(pcVar2[1],pcVar2[2]);
          if (iVar1 < 4) {
            uVar9 = 0;
            bVar3 = 0;
          }
          else {
            uVar9 = (uint)(byte)pcVar2[3];
            iVar4 = 4;
            if (iVar1 < 5) {
              bVar3 = 0;
            }
            else {
              bVar3 = pcVar2[4];
              iVar4 = 5;
            }
          }
        }
        iVar10 = 0;
        uVar9 = uVar9 << 8 | (uint)bVar3;
        if (uVar8 != 0) {
          do {
            if (iVar4 < iVar1) {
              iVar12 = iVar4 + 1;
              cVar11 = pcVar2[iVar4];
              if (iVar12 < iVar1) {
                iVar7 = iVar4 + 2;
                uVar6 = (uint)(byte)pcVar2[iVar12];
                if (iVar7 < iVar1) {
                  iVar4 = iVar4 + 3;
                  bVar3 = pcVar2[iVar7];
                }
                else {
                  bVar3 = 0;
                  iVar4 = iVar7;
                }
              }
              else {
                uVar6 = 0;
                bVar3 = 0;
                iVar4 = iVar12;
              }
            }
            else {
              cVar11 = '\0';
              uVar6 = 0;
              bVar3 = 0;
            }
            uVar6 = uVar6 << 8 | (uint)bVar3;
            if (((int)uVar9 <= param_3) && (param_3 < (int)uVar6)) goto LAB_18028d8c5;
            iVar10 = iVar10 + 1;
            uVar9 = uVar6;
          } while (iVar10 < (int)uVar8);
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
  }
  iVar4 = iVar4 + param_3;
  if (((iVar1 < iVar4) || (iVar4 < 0)) || (iVar1 <= iVar4)) {
    cVar11 = '\0';
  }
  else {
    cVar11 = pcVar2[iVar4];
  }
LAB_18028d8c5:
  local_68 = *(undefined4 *)(param_2 + 0x80);
  uStack_64 = *(undefined4 *)(param_2 + 0x84);
  uStack_60 = *(undefined4 *)(param_2 + 0x88);
  uStack_5c = *(undefined4 *)(param_2 + 0x8c);
  puVar5 = (undefined4 *)FUN_18028b790(local_48,&local_68,cVar11);
  local_58 = *(undefined4 *)(param_2 + 0x40);
  uStack_54 = *(undefined4 *)(param_2 + 0x44);
  uStack_50 = *(undefined4 *)(param_2 + 0x48);
  uStack_4c = *(undefined4 *)(param_2 + 0x4c);
  local_68 = *puVar5;
  uStack_64 = puVar5[1];
  uStack_60 = puVar5[2];
  uStack_5c = puVar5[3];
  FUN_18028b990(param_1,&local_58,&local_68);
  return param_1;
}


