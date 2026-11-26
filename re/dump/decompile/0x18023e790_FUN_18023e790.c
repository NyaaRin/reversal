// 0x18023e790  FUN_18023e790
// size=648 thunk=false
// signature: undefined FUN_18023e790()
// status: ok


void FUN_18023e790(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 extraout_XMM0_Da;
  
  iVar5 = FUN_18023fa90(param_1,1);
  while( true ) {
    if (iVar5 == 0) {
      return;
    }
    if (((iVar5 == 1) && ((*(uint *)(param_1 + 0xc) >> 0x13 & 1) == 0)) &&
       (*(char *)((longlong)param_1 + 0x76) == '\0')) break;
    if ((int)param_1[0xe] == 0x2d) {
      pcVar8 = (char *)*param_1;
      bVar2 = *(byte *)((longlong)param_1 + 0x76);
      bVar4 = *(byte *)((longlong)param_1 + 0x75);
      if (pcVar8 != (char *)param_1[1]) {
        if ((((*pcVar8 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar8 = pcVar8 + 1, pcVar8 != (char *)param_1[1])) &&
           ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar8 - 0x28U) < 2)) ||
            (((param_1[0xc] & 0x10U) == 0 && ((*pcVar8 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = (longlong)pcVar8;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      iVar6 = FUN_18023fa90(param_1,0);
      if (iVar6 == 0) {
        if (iVar5 != 2) {
          if ((*(uint *)(param_1 + 9) & 0x100) != 0) {
            bVar2 = std::ctype<char>::tolower(*(ctype<char> **)(param_1[10] + 8),bVar2);
          }
          lVar1 = param_1[8];
          puVar7 = *(undefined8 **)(lVar1 + 0x28);
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)FUN_1802d8350(0x20);
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *(undefined8 **)(lVar1 + 0x28) = puVar7;
          }
          pbVar9 = (byte *)((longlong)puVar7 + (ulonglong)(bVar2 >> 3));
          *pbVar9 = *pbVar9 | (byte)(1 << (bVar2 & 7));
        }
        if ((*(uint *)(param_1 + 9) & 0x100) != 0) {
          bVar4 = std::ctype<char>::tolower(*(ctype<char> **)(param_1[10] + 8),bVar4);
        }
        lVar1 = param_1[8];
        puVar7 = *(undefined8 **)(lVar1 + 0x28);
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)FUN_1802d8350(0x20);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(undefined8 **)(lVar1 + 0x28) = puVar7;
        }
        *(byte *)((ulonglong)(bVar4 >> 3) + (longlong)puVar7) =
             *(byte *)((ulonglong)(bVar4 >> 3) + (longlong)puVar7) | (byte)(1 << (bVar4 & 7));
        return;
      }
      if ((iVar5 == 2) || (iVar6 == 2)) {
                    /* WARNING: Subroutine does not return */
        FUN_18023d7e0(extraout_XMM0_Da,8);
      }
      cVar3 = *(char *)((longlong)param_1 + 0x76);
      if ((*(uint *)(param_1 + 0xd) & 0x100) != 0) {
        bVar2 = std::ctype<char>::tolower(*(ctype<char> **)(param_1[0xb] + 8),bVar2);
        cVar3 = std::ctype<char>::tolower(*(ctype<char> **)(param_1[0xb] + 8),cVar3);
      }
      FUN_18023fc80(param_1 + 7,bVar2,cVar3);
    }
    else if (iVar5 == 1) {
      bVar2 = *(byte *)((longlong)param_1 + 0x76);
      if ((*(uint *)(param_1 + 9) & 0x100) != 0) {
        bVar2 = std::ctype<char>::tolower(*(ctype<char> **)(param_1[10] + 8),bVar2);
      }
      lVar1 = param_1[8];
      puVar7 = *(undefined8 **)(lVar1 + 0x28);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)FUN_1802d8350(0x20);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined8 **)(lVar1 + 0x28) = puVar7;
      }
      pbVar9 = (byte *)((longlong)puVar7 + (ulonglong)(bVar2 >> 3));
      *pbVar9 = *pbVar9 | (byte)(1 << (bVar2 & 7));
    }
    iVar5 = FUN_18023fa90(param_1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_18023d7e0(*(uint *)(param_1 + 0xc),2);
}


