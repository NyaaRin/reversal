// 0x18014f070  FUN_18014f070
// size=978 thunk=false
// signature: undefined FUN_18014f070()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014f070(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  wchar_t ****ppppwVar7;
  ulonglong *puVar8;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  wchar_t ***local_160;
  wchar_t ***local_158;
  wchar_t ***local_150;
  undefined1 local_148 [32];
  wchar_t ***local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined1 local_d8 [32];
  ulonglong local_b8 [4];
  undefined1 local_98 [32];
  ulonglong local_78 [4];
  undefined1 local_58 [32];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_168 = 0;
  local_158 = (wchar_t ***)&local_128;
  local_128 = (wchar_t ***)0x0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_180211510(&local_128,L"garrysmod",9);
  local_168 = 0;
  FUN_180066720(local_d8,param_1,&local_128);
  FUN_18021e290(&local_128);
  local_150 = (wchar_t ***)&local_128;
  local_128 = (wchar_t ***)0x0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_180211510(&local_128,L"crashes",7);
  local_168 = 0;
  FUN_180066720(local_78,local_d8,&local_128);
  FUN_18021e290(&local_128);
  local_160 = (wchar_t ***)&local_128;
  local_128 = (wchar_t ***)0x0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_180211510(&local_128,L"crashes",7);
  local_168 = 0;
  FUN_180066720(local_58,param_1,&local_128);
  FUN_18021e290(&local_128);
  puVar8 = local_78;
  do {
    local_108 = 0;
    lStack_100 = 0;
    local_f8 = 0;
    cVar4 = FUN_18014e6f0(puVar8,&local_108,0);
    lVar3 = lStack_100;
    lVar2 = local_108;
    if (cVar4 != '\0') {
      for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
        ppppwVar7 = *(wchar_t *****)(param_2 + 8);
        if (ppppwVar7 == *(wchar_t *****)(param_2 + 0x10)) {
          FUN_180224360(param_2,ppppwVar7);
        }
        else {
          local_160 = (wchar_t ***)ppppwVar7;
          FUN_18020e540(ppppwVar7,lVar2);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
        }
      }
    }
    FUN_18021c690(&local_108);
    puVar8 = puVar8 + 4;
  } while (puVar8 != local_38);
  FUN_18020e540(local_b8,param_1);
  FUN_18020e540(local_98,local_d8);
  puVar8 = local_b8;
  do {
    local_f0 = 0;
    lStack_e8 = 0;
    local_e0 = 0;
    cVar4 = FUN_18014e6f0(puVar8,&local_f0,1);
    lVar3 = lStack_e8;
    lVar2 = local_f0;
    if (cVar4 != '\0') {
      for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
        uVar6 = FUN_180066000(lVar2,local_148);
        FUN_180065930(uVar6,&local_128);
        FUN_18021e290(local_148);
        ppppwVar7 = &local_128;
        if (7 < local_110) {
          ppppwVar7 = (wchar_t ****)local_128;
        }
        iVar5 = _wcsicmp((wchar_t *)ppppwVar7,L".mdmp");
        if (iVar5 == 0) {
LAB_18014f370:
          bVar1 = true;
        }
        else {
          ppppwVar7 = &local_128;
          if (7 < local_110) {
            ppppwVar7 = (wchar_t ****)local_128;
          }
          iVar5 = _wcsicmp((wchar_t *)ppppwVar7,L".dmp");
          if (iVar5 == 0) goto LAB_18014f370;
          bVar1 = false;
        }
        FUN_18021e290(&local_128);
        if (bVar1) {
          ppppwVar7 = *(wchar_t *****)(param_2 + 8);
          if (ppppwVar7 == *(wchar_t *****)(param_2 + 0x10)) {
            FUN_180224360(param_2,ppppwVar7,lVar2);
          }
          else {
            local_160 = (wchar_t ***)ppppwVar7;
            FUN_18020e540(ppppwVar7,lVar2);
            *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
          }
        }
      }
    }
    FUN_18021c690(&local_f0);
    puVar8 = puVar8 + 4;
    if (puVar8 == local_78) {
      _eh_vector_destructor_iterator_(local_b8,0x20,2,FUN_1800668e0);
      _eh_vector_destructor_iterator_(local_78,0x20,2,FUN_1800668e0);
      FUN_18021e290(local_d8);
      return;
    }
  } while( true );
}


