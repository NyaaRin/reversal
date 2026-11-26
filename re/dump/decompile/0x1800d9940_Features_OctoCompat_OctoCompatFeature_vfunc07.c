// 0x1800d9940  Features_OctoCompat_OctoCompatFeature_vfunc07
// size=680 thunk=false
// signature: undefined Features_OctoCompat_OctoCompatFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_OctoCompat_OctoCompatFeature_vfunc07
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [12];
  int local_44;
  int local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if (DAT_180423610 == '\0') {
    local_58 = param_1;
    uVar5 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar5 = FUN_180241610(uVar5,0xba33a12acf3fe1c3);
    pcVar6 = (char *)FUN_1801fcfc0(uVar5);
    if (*pcVar6 != '\0') {
      uVar5 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
      uVar5 = FUN_180241610(uVar5,0x3d5984117d619a29);
      pcVar6 = (char *)FUN_1801fcfc0(uVar5);
      if (*pcVar6 != '\0') {
        uVar5 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800);
        uVar5 = FUN_180241610(uVar5,0x402819404e703058);
        pcVar6 = (char *)FUN_1801fcfc0(uVar5);
        if (*pcVar6 == '\0') {
          local_44 = 0;
          local_40[0] = 0;
          if (DAT_1803fa668 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_44,local_40);
          if (local_44 < 1) {
            return;
          }
          if (local_40[0] < 1) {
            return;
          }
          if (*(int *)(param_3 + 0x10) != local_44) {
            return;
          }
          if (*(int *)(param_3 + 0x18) != local_40[0]) {
            return;
          }
          pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
          uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
          lVar7 = (*pcVar1)(DAT_1803fa360,uVar3);
          if ((((lVar7 != 0) && (cVar2 = FUN_18001c330(lVar7), cVar2 != '\0')) &&
              (lVar8 = FUN_18001dbf0(lVar7), lVar8 != 0)) &&
             (((pcVar6 = (char *)FUN_18001e410(lVar8), (char *)0x10000 < pcVar6 &&
               (iVar4 = strncmp(pcVar6,"weapon_octo_",0xc), iVar4 == 0)) &&
              ((DAT_1803fa608 != (float *)0x0 && (DAT_1803fa668 != (longlong *)0x0)))))) {
            local_30 = 0;
            local_34 = 0;
            local_38 = 0;
            (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_38);
            local_78 = FUN_18001c430(lVar7,local_50);
            local_60 = param_3 + 0x4c;
            local_68 = param_3 + 0x40;
            local_70 = &local_38;
            FUN_1800a45e0(param_1 + 0x18,lVar7,lVar8,(double)*DAT_1803fa608);
            return;
          }
          *(undefined1 *)(param_1 + 0x54) = 0;
          *(undefined8 *)(param_1 + 0x28) = 0xbff0000000000000;
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x18) = 0;
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


