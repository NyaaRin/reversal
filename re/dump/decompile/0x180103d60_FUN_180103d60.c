// 0x180103d60  FUN_180103d60
// size=316 thunk=false
// signature: undefined FUN_180103d60()
// status: ok


void FUN_180103d60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar5 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67,param_3,param_4,0,param_1);
  uVar5 = FUN_180241610(uVar5,0xf13ca7dd4fb3e293);
  pcVar6 = (char *)FUN_1801fcfc0(uVar5);
  cVar1 = *pcVar6;
  if (cVar1 != *(char *)(param_1 + 0x194c)) {
    *(char *)(param_1 + 0x194c) = cVar1;
    if (cVar1 != '\0') {
      DAT_1803ffc30 = 2;
    }
    puVar8 = &DAT_18034c4b0;
    if (cVar1 != '\0') {
      puVar8 = &DAT_18034b584;
    }
    DAT_1803ffc34 = cVar1;
    FUN_180014410("[NWSTORE] native probe %s\n",puVar8,param_3,param_4,cVar1);
  }
  if ((cVar1 != '\0') && (DVar3 = GetTickCount(), *(uint *)(param_1 + 0x1948) <= DVar3)) {
    *(DWORD *)(param_1 + 0x1948) = DVar3 + 5000;
    if (DAT_1803fa668 == (longlong *)0x0) {
      iVar4 = -1;
    }
    else {
      iVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
    }
    if ((DAT_1803fa608 != 0) && (iVar2 = *(int *)(DAT_1803fa608 + 0x1c), 0 < iVar2)) {
      iVar9 = 1;
      iVar10 = 0x80;
      iVar11 = 0;
      if (iVar2 < 0x81) {
        iVar10 = iVar2;
        iVar11 = 0;
      }
      do {
        if (1 < iVar11) {
          return;
        }
        if (DAT_1803fa360 == (longlong *)0x0) {
          return;
        }
        lVar7 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar9);
        if ((lVar7 != 0) && ((iVar9 != iVar4 || (iVar11 < 1)))) {
          FUN_18006d430(iVar9,lVar7);
          iVar11 = iVar11 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 <= iVar10);
    }
  }
  return;
}


