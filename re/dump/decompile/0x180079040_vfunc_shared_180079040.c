// 0x180079040  vfunc_shared_180079040
// size=538 thunk=false
// signature: undefined vfunc_shared_180079040()
// status: ok


float * vfunc_shared_180079040
                  (longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte *pbVar5;
  HMODULE pHVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar8;
  float fVar9;
  float local_res8 [8];
  float local_68 [18];
  
  fVar7 = (float)(**(code **)(*param_1 + 0x100))(param_1,(int)param_1[1],param_4);
  *(int *)(param_1 + 5) = (int)param_1[1];
  *(float *)((longlong)param_1 + 0x2c) = fVar7;
  if (0.0 < fVar7) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar4 = (*pcVar1)(DAT_1803fa360,uVar3);
    if ((lVar4 != 0) && (pbVar5 = (byte *)FUN_18001d710(lVar4,local_res8), (*pbVar5 & 2) != 0)) {
      fVar7 = fVar7 * DAT_180380b4c;
    }
    local_res8[0] = 0.0;
    local_68[0] = 0.0;
    fVar8 = (float)((uint)fVar7 ^ DAT_1803817f0);
    uVar3 = (**(code **)(*param_1 + 0x108))(param_1,param_4);
    cVar2 = FUN_180078520(uVar3,uVar3,fVar8,fVar7,local_res8,local_68);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x108))(param_1,param_4);
      FUN_180020770();
      if ((DAT_18042f184 & 1) == 0) {
        DAT_18042f184 = DAT_18042f184 | 1;
        pHVar6 = GetModuleHandleA("vstdlib.dll");
        DAT_1805c51e8 = GetProcAddress(pHVar6,"RandomFloat");
      }
      fVar9 = fVar8;
      if (DAT_1805c51e8 != (FARPROC)0x0) {
        (*DAT_1805c51e8)(fVar8,fVar7);
        fVar9 = extraout_XMM0_Da;
      }
      if ((DAT_18042f184 & 1) == 0) {
        DAT_18042f184 = DAT_18042f184 | 1;
        pHVar6 = GetModuleHandleA("vstdlib.dll");
        DAT_1805c51e8 = GetProcAddress(pHVar6,"RandomFloat");
      }
      if (DAT_1805c51e8 != (FARPROC)0x0) {
        (*DAT_1805c51e8)(fVar8,fVar7);
        fVar8 = extraout_XMM0_Da_00;
      }
      *param_2 = fVar9 * DAT_18038103c;
      param_2[1] = fVar8 * DAT_18038103c;
    }
    else {
      *param_2 = local_res8[0] * DAT_18038103c;
      param_2[1] = local_68[0] * DAT_18038103c;
    }
  }
  else {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
  }
  param_2[2] = 0.0;
  return param_2;
}


