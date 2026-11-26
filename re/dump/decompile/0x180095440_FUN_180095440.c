// 0x180095440  FUN_180095440
// size=331 thunk=false
// signature: undefined FUN_180095440()
// status: ok


undefined8 FUN_180095440(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  size_t sVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *_Buf1;
  undefined8 *****pppppuVar11;
  longlong lVar12;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 ****local_58;
  undefined8 uStack_50;
  size_t local_48;
  ulonglong local_40;
  
  plVar10 = (longlong *)FUN_180095180();
  local_58 = (undefined8 *****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_68 = param_1;
  local_60 = param_2;
  FUN_18001d080(&local_58,"homigrad_base",0xd);
  uVar7 = local_40;
  sVar6 = local_48;
  ppppuVar5 = local_58;
  pppppuVar11 = &local_58;
  if (0xf < local_40) {
    pppppuVar11 = (undefined8 *****)local_58;
  }
  sVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if ((sVar1 == local_48) &&
     ((sVar1 == 0 || (iVar9 = memcmp(param_1,pppppuVar11,sVar1), iVar9 == 0)))) {
LAB_180095542:
    bVar4 = true;
  }
  else {
    puVar2 = (undefined8 *)param_2[1];
    for (param_2 = (undefined8 *)*param_2; param_2 != puVar2; param_2 = param_2 + 4) {
      pppppuVar11 = &local_58;
      if (0xf < uVar7) {
        pppppuVar11 = (undefined8 *****)ppppuVar5;
      }
      sVar1 = param_2[2];
      _Buf1 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        _Buf1 = (undefined8 *)*param_2;
      }
      if ((sVar1 == sVar6) &&
         ((sVar1 == 0 || (iVar9 = memcmp(_Buf1,pppppuVar11,sVar1), iVar9 == 0)))) {
        if (param_2 != puVar2) goto LAB_180095542;
        break;
      }
    }
    bVar4 = false;
  }
  FUN_18020e450(&local_58);
  if (!bVar4) {
    lVar12 = *plVar10;
    lVar3 = plVar10[1];
    while( true ) {
      if (lVar12 == lVar3) {
        return 0;
      }
      cVar8 = FUN_1800937d0(&local_68,lVar12);
      if (cVar8 != '\0') break;
      lVar12 = lVar12 + 0x20;
    }
  }
  return 1;
}


