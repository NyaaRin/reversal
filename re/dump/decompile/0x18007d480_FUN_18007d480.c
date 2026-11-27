// 0x18007d480  FUN_18007d480
// size=922 thunk=false
// signature: undefined FUN_18007d480()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018007d4ca) */
/* WARNING: Removing unreachable block (ram,0x00018007d4e2) */
/* WARNING: Removing unreachable block (ram,0x00018007d4d9) */
/* WARNING: Removing unreachable block (ram,0x00018007d4ee) */

ulonglong FUN_18007d480(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  undefined1 uVar6;
  longlong *local_50;
  undefined8 uStack_48;
  longlong local_40;
  int local_38;
  
  if ((DAT_1803fa678 != 0) && (param_2 != 0)) {
    local_50 = (longlong *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    in_RAX = FUN_18001bcd0(0,&local_50);
    if (local_50 != (longlong *)0x0) {
      iVar2 = (**(code **)*local_50)();
      uVar5 = 0;
      uVar6 = 0;
      local_38 = iVar2;
      FUN_18001e2b0(param_2,local_50);
      cVar1 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,9,*local_50,uVar6);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)*local_50)();
        FUN_18002d9c0(local_50[1],uVar3,"Ironsights");
        cVar1 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,1);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*local_50 + 200))(local_50,0xffffffff);
          uVar5 = (ulonglong)(cVar1 != '\0');
        }
        (**(code **)(*local_50 + 0x10))(local_50,1);
        if ((char)uVar5 == '\0') {
          FUN_18002d9c0(local_50[1],uVar3,"GetNWBool");
          cVar1 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,6);
          if (cVar1 != '\0') {
            (**(code **)(*local_50 + 8))(local_50,uVar3);
            (**(code **)(*local_50 + 0xe8))(local_50,"M9K_Ironsights",0);
            (**(code **)(*local_50 + 0xf8))(local_50,0);
            iVar4 = FUN_180023180(local_50[1],3,1);
            if ((iVar4 == 0) &&
               (cVar1 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,1), cVar1 != '\0')) {
              cVar1 = (**(code **)(*local_50 + 200))(local_50,0xffffffff);
              uVar5 = (ulonglong)(cVar1 != '\0');
            }
          }
          (**(code **)(*local_50 + 0x10))(local_50,1);
          if ((char)uVar5 == '\0') {
            FUN_18002d9c0(local_50[1],uVar3,&DAT_180347258);
            cVar1 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,5);
            if (cVar1 != '\0') {
              FUN_18002d9c0(local_50[1],0xffffffff,"Ironsights");
              cVar1 = (**(code **)(*local_50 + 0x138))(local_50,0xffffffff,1);
              if (cVar1 != '\0') {
                cVar1 = (**(code **)(*local_50 + 200))(local_50,0xffffffff);
                uVar5 = (ulonglong)(cVar1 != '\0');
              }
              (**(code **)(*local_50 + 0x10))(local_50,1);
            }
            (**(code **)(*local_50 + 0x10))(local_50,1);
          }
        }
      }
      if ((local_50 != (longlong *)0x0) && (iVar4 = (**(code **)*local_50)(), iVar2 < iVar4)) {
        (**(code **)(*local_50 + 0x10))(local_50,iVar4 - iVar2);
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)*local_50)();
        if (local_40 != 0) {
          DAT_1803fa330 = (longlong *)local_40;
          DAT_1803fa338 = 1;
          DAT_1803fa339 = uStack_48._1_4_;
          DAT_1803fa33d = uStack_48._5_2_;
          DAT_1803fa33f = uStack_48._7_1_;
          return uVar5;
        }
        DAT_1803fa330 = local_50;
        DAT_1803fa338 = 0;
        DAT_1803fa339 = uStack_48._1_4_;
        DAT_1803fa33d = uStack_48._5_2_;
        DAT_1803fa33f = uStack_48._7_1_;
      }
      return uVar5;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


