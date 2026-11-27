// 0x1800cb360  FUN_1800cb360
// size=754 thunk=false
// signature: undefined FUN_1800cb360()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800cb360(longlong *param_1,longlong param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  char *pcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  int local_98;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (param_1 != (longlong *)0x0) {
    switch(param_3) {
    case 0:
      pcVar6 = "ValveBiped.Bip01_Pelvis";
      break;
    case 1:
      pcVar6 = "ValveBiped.Bip01_Spine";
      break;
    case 2:
      pcVar6 = "ValveBiped.Bip01_Spine1";
      break;
    case 3:
      pcVar6 = "ValveBiped.Bip01_Spine2";
      break;
    case 4:
      pcVar6 = "ValveBiped.Bip01_Spine4";
      break;
    case 5:
      pcVar6 = "ValveBiped.Bip01_Neck1";
      break;
    default:
      pcVar6 = "ValveBiped.Bip01_Head1";
      break;
    case 7:
      pcVar6 = "ValveBiped.Bip01_R_Calvicle";
      break;
    case 8:
      pcVar6 = "ValveBiped.Bip01_R_UpperArm";
      break;
    case 9:
      pcVar6 = "ValveBiped.Bip01_R_Forearm";
      break;
    case 10:
      pcVar6 = "ValveBiped.Bip01_R_Hand";
      break;
    case 0xb:
      pcVar6 = "ValveBiped.Bip01_L_Calvicle";
      break;
    case 0xc:
      pcVar6 = "ValveBiped.Bip01_L_UpperArm";
      break;
    case 0xd:
      pcVar6 = "ValveBiped.Bip01_L_Forearm";
      break;
    case 0xe:
      pcVar6 = "ValveBiped.Bip01_L_Hand";
      break;
    case 0xf:
      pcVar6 = "ValveBiped.Bip01_R_Thigh";
      break;
    case 0x10:
      pcVar6 = "ValveBiped.Bip01_R_Calf";
      break;
    case 0x11:
      pcVar6 = "ValveBiped.Bip01_R_Foot";
      break;
    case 0x12:
    case 0x16:
      pcVar6 = "ValveBiped.Bip01_R_Toe0";
      break;
    case 0x13:
      pcVar6 = "ValveBiped.Bip01_L_Thigh";
      break;
    case 0x14:
      pcVar6 = "ValveBiped.Bip01_L_Calf";
      break;
    case 0x15:
      pcVar6 = "ValveBiped.Bip01_L_Foot";
    }
    iVar1 = FUN_18001bdf0(param_1,pcVar6);
    lVar7 = (longlong)iVar1;
    if (-1 < iVar1) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
      lVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if ((lVar4 != 0) &&
         (lVar4 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar4), lVar4 != 0)) {
        iVar2 = FUN_18001da00(param_1);
        lVar4 = *(int *)(lVar4 + 0xb0) + lVar4 + (longlong)iVar2 * 0xc;
        if (lVar4 != 0) {
          local_98 = 0;
          while ((piVar5 = (int *)0x0, local_98 < *(int *)(lVar4 + 4) &&
                 ((piVar5 = (int *)((longlong)local_98 * 0x44 + lVar4 +
                                   (longlong)*(int *)(lVar4 + 8)), piVar5 == (int *)0x0 ||
                  (*piVar5 != iVar1))))) {
            local_98 = local_98 + 1;
          }
          if (piVar5 == (int *)0x0) {
            *param_4 = *(float *)(param_2 + 0xc + lVar7 * 0x30);
            param_4[1] = *(float *)(param_2 + 0x1c + lVar7 * 0x30);
            param_4[2] = *(float *)(param_2 + 0x2c + lVar7 * 0x30);
          }
          else {
            local_58 = *(undefined8 *)(piVar5 + 2);
            local_50 = piVar5[4];
            local_48 = *(undefined8 *)(piVar5 + 5);
            local_40 = piVar5[7];
            FUN_1802d46f0(&local_58,(longlong)*piVar5 * 0x30 + param_2,&local_68);
            FUN_1802d46f0(&local_48,(longlong)*piVar5 * 0x30 + param_2,&local_78);
            fVar9 = (local_74 + local_64) * DAT_180380ac0;
            fVar8 = (local_70 + local_60) * DAT_180380ac0;
            *param_4 = (local_78 + local_68) * DAT_180380ac0;
            param_4[1] = fVar9;
            param_4[2] = fVar8;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


