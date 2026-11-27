// 0x18026f180  FUN_18026f180
// size=772 thunk=false
// signature: undefined FUN_18026f180()
// status: ok


byte FUN_18026f180(float *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  float local_res20;
  float local_res24;
  float local_58;
  float local_54;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar5 = DAT_180380bb0;
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  if ((((param_2 != 0) && (*(int *)(lVar2 + 0x1580) == param_2)) && ((param_3 & 0x20) == 0)) &&
     (*(int *)(lVar2 + 0x1584) = *(int *)(lVar2 + 0x1584) + 1, *(int *)(lVar2 + 0x1574) == param_2))
  {
    local_res20 = param_1[2] + fVar5;
    local_res24 = param_1[3] + fVar5;
    local_58 = *param_1 - fVar5;
    local_54 = param_1[1] - fVar5;
    FUN_180294f00(*(undefined8 *)(lVar3 + 0x2c8),&local_58,&local_res20,0xff0000ff,0,DAT_180380d30,0
                 );
  }
  if ((((*(longlong *)(lVar2 + 0x1528) == lVar3) &&
       (cVar6 = FUN_18027bdd0(param_1,param_1 + 2,1), cVar6 != '\0')) &&
      ((*(int *)(lVar2 + 0x157c) == 0 ||
       ((*(int *)(lVar2 + 0x157c) == param_2 || (*(char *)(lVar2 + 0x1590) != '\0')))))) &&
     ((*(int *)(lVar2 + 0x1594) == 0 ||
      (((*(int *)(lVar2 + 0x1594) == param_2 || (*(char *)(lVar2 + 0x15a1) != '\0')) ||
       (*(char *)(lVar2 + 0x15a6) != '\0')))))) {
    if (((param_3 >> 0xd & 1) != 0) || (cVar6 = FUN_18026ed90(lVar3,0), cVar6 != '\0')) {
      if (param_2 != 0) {
        if (((*(char *)(lVar2 + 0x2298) != '\0') && (*(int *)(lVar2 + 0x22b4) == param_2)) &&
           ((*(byte *)(lVar2 + 0x229c) & 2) == 0)) {
          return 0;
        }
        FUN_18026ec90(param_2);
        if (((param_3 >> 0xe & 1) != 0) &&
           (*(undefined1 *)(lVar2 + 0x1590) = 1, *(int *)(lVar2 + 0x1580) != param_2)) {
          return 0;
        }
        if ((((param_2 == *(int *)(lVar2 + 0x1ef8)) && ((*(uint *)(lVar2 + 0x1f00) & 0x400) != 0))
            && (*(int *)(lVar2 + 0x1594) != param_2)) &&
           (cVar6 = FUN_18026ee60(0x11000), cVar6 != '\0')) {
          uVar8 = FUN_18027b190(*(undefined4 *)(lVar2 + 0x1f44));
          FUN_180280d00(&DAT_1803431ac,uVar8);
        }
      }
      if ((param_3 & 0x40) == 0) {
        if (param_2 != 0) {
          if ((*(char *)(lVar2 + 0x2921) != '\0') && (*(int *)(lVar2 + 0x1580) == param_2)) {
            if (*(char *)(lVar1 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            uVar8 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar1 + 0xec0) + 0x2060),1,
                                  "##Foreground");
            FUN_180294f00(uVar8,param_1,param_1 + 2,0xff00ffff,0,fVar5,0);
          }
          if (*(int *)(lVar2 + 0x2924) == param_2) {
            pcVar4 = (code *)swi(3);
            bVar7 = (*pcVar4)();
            return bVar7;
          }
        }
        if (*(char *)(lVar2 + 0x2069) == '\0') {
          return 1;
        }
        return (byte)(param_3 >> 0xf) & 1;
      }
      if ((*(int *)(lVar2 + 0x1594) == param_2) && (param_2 != 0)) {
        FUN_18026ea90(0,0);
      }
    }
    *(undefined1 *)(lVar2 + 0x1591) = 1;
  }
  return 0;
}


