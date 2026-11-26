// 0x180189f20  FUN_180189f20
// size=609 thunk=false
// signature: undefined FUN_180189f20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180189f20(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    if ((DAT_18056ff84 & 1) == 0) {
      DAT_18056ff84 = DAT_18056ff84 | 1;
    }
    cVar3 = FUN_1800c1bb0(param_1,&DAT_1805c39e0);
    if (cVar3 != '\0') {
      puVar4 = (undefined8 *)FUN_18001daf0(param_1,&local_40);
      local_60 = *puVar4;
      local_58 = *(undefined4 *)(puVar4 + 1);
      iVar8 = 0;
      local_68 = 0;
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
      lVar6 = (**(code **)(*plVar5 + 0x48))(plVar5);
      if (lVar6 == 0) {
        return 0;
      }
      lVar6 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar6);
      if (lVar6 == 0) {
        return 0;
      }
      iVar1 = *(int *)(lVar6 + 0x9c);
      if (iVar1 < 1) {
        return 0;
      }
      if (0x80 < iVar1) {
        iVar1 = 0x80;
      }
      iVar9 = 0;
      while ((iVar9 < iVar1 && (iVar8 < 0x60))) {
        lVar7 = (longlong)iVar9 * 0xd8 + (longlong)*(int *)(lVar6 + 0xa0) + lVar6;
        if ((lVar7 == 0) || ((*(uint *)(lVar7 + 0xa0) & 0x100) == 0)) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar2 = *(int *)(lVar7 + 4);
          if ((iVar2 < 0) || (iVar1 <= iVar2)) {
            iVar9 = iVar9 + 1;
          }
          else {
            lVar7 = (longlong)iVar2 * 0xd8 + (longlong)*(int *)(lVar6 + 0xa0) + lVar6;
            if ((lVar7 == 0) || ((*(uint *)(lVar7 + 0xa0) & 0x100) == 0)) {
              iVar9 = iVar9 + 1;
            }
            else {
              local_64 = iVar9;
              FUN_1802d42f0(&DAT_1805c39e0 + (longlong)iVar9 * 0x30,3,&local_40);
              FUN_1802d42f0(&DAT_1805c39e0 + (longlong)iVar2 * 0x30,3,&local_50);
              cVar3 = FUN_180015580(&local_40,&local_60);
              if ((cVar3 == '\0') || (cVar3 = FUN_180015580(&local_50,&local_60), cVar3 == '\0')) {
                iVar9 = iVar9 + 1;
              }
              else {
                lVar7 = (longlong)iVar8;
                *(undefined8 *)(param_2 + lVar7 * 0x18) = local_40;
                *(undefined4 *)(param_2 + 8 + lVar7 * 0x18) = local_38;
                *(undefined4 *)(param_2 + 0xc + lVar7 * 0x18) = local_50;
                *(undefined4 *)(param_2 + 0x10 + lVar7 * 0x18) = local_4c;
                *(undefined4 *)(param_2 + 0x14 + lVar7 * 0x18) = local_48;
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 1;
                local_68 = iVar8;
              }
            }
          }
        }
      }
      return iVar8;
    }
  }
  return 0;
}


