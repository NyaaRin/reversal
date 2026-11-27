// 0x1800e7d70  FUN_1800e7d70
// size=1125 thunk=false
// signature: undefined FUN_1800e7d70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e7d70(longlong *param_1,longlong param_2,int param_3,char param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3);
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edf0);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x1854));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"RecordedTick");
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined8 *)(param_2 + 0x1848));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"SimulationTime");
  FUN_1800e7cb0(param_1,"Origin",param_2 + 0x1858);
  FUN_1800e7cb0(param_1,&DAT_18034ee20,param_2 + 0x10);
  FUN_1800e7cb0(param_1,"Center",param_2 + 0x1c);
  FUN_1800e7cb0(param_1,"AimPoint",param_2 + 0x28);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x34));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Hitgroup");
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x40));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"FromSnapshot");
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1864));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"TeleportEdge");
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1844));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"BonesValid");
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x38));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"PoseCount");
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x3c));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"PoseCoverage");
  if ((param_4 != '\0') && (*(char *)(param_2 + 0x1844) != '\0')) {
    (**(code **)(*param_1 + 0x30))(param_1);
    iVar1 = 0;
    do {
      local_44 = 0;
      local_48 = 0.0;
      FUN_1802d4200(param_2 + 0x44 + (longlong)iVar1 * 0x30,&local_48);
      FUN_1802d42f0(param_2 + 0x44 + (longlong)iVar1 * 0x30,3,&local_58);
      if (((local_58 != 0.0) || (local_54 != 0.0)) || (local_50 != 0.0)) {
        (**(code **)(*param_1 + 0xf0))(param_1,(double)(iVar1 + 1));
        (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar1);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"BoneID");
        (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_58);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_54);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_50);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Origin");
        (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_48);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034eea8);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)(float)local_44);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_44._4_4_);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18033e668);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Angles");
        (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x80);
    (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Bones");
  }
  return;
}


