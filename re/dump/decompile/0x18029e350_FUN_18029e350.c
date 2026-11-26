// 0x18029e350  FUN_18029e350
// size=706 thunk=false
// signature: undefined FUN_18029e350()
// status: ok


float * FUN_18029e350(float *param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                     char *param_6,char *param_7,char *param_8,undefined8 *param_9,
                     undefined8 param_10,uint param_11)

{
  float fVar1;
  int iVar2;
  size_t sVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  uint local_res18 [4];
  
  if (param_8 == (char *)0x0) {
    sVar3 = strlen(param_6);
    param_8 = param_6 + sVar3;
  }
  if (param_7 == (char *)0x0) {
    param_7 = param_8;
  }
  puVar4 = (uint *)FUN_18029db30(param_2,param_3,DAT_180381384);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  fVar8 = 0.0;
  fVar1 = (float)puVar4[5];
  pcVar5 = (char *)0x0;
  if (param_6 < param_7) {
    do {
      if (0.0 < param_5) {
        if (pcVar5 == (char *)0x0) {
          pcVar5 = (char *)FUN_18029e130(param_2,param_3,param_6,param_8,param_5 - fVar8,param_11);
        }
        if (param_6 < pcVar5) goto LAB_18029e4c3;
        if (*param_1 <= fVar8 && fVar8 != *param_1) {
          *param_1 = fVar8;
        }
        fVar8 = 0.0;
        param_1[1] = param_3 + param_1[1];
        if ((param_11 & 2) == 0) {
          for (; param_6 < param_8; param_6 = param_6 + 1) {
            if ((*param_6 != ' ') && (*param_6 != '\t')) goto LAB_18029e4a5;
          }
        }
        else {
LAB_18029e4a5:
          if ((param_6 < param_8) && (*param_6 == '\n')) {
            param_6 = param_6 + 1;
          }
        }
        if ((param_11 & 4) != 0) break;
        pcVar5 = (char *)0x0;
        pcVar6 = param_6;
        fVar7 = fVar8;
      }
      else {
LAB_18029e4c3:
        local_res18[0] = (uint)*param_6;
        if (local_res18[0] < 0x80) {
          pcVar6 = param_6 + 1;
        }
        else {
          iVar2 = FUN_180268c20(local_res18,param_6,param_8);
          pcVar6 = param_6 + iVar2;
        }
        if (local_res18[0] == 10) {
          fVar7 = *param_1;
          if (*param_1 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = 0.0;
          *param_1 = fVar7;
          param_1[1] = param_3 + param_1[1];
          param_6 = pcVar6;
          fVar7 = fVar8;
          if ((param_11 & 4) != 0) break;
        }
        else {
          fVar7 = fVar8;
          if (local_res18[0] != 0xd) {
            if ((*puVar4 <= local_res18[0]) ||
               (fVar7 = *(float *)(*(longlong *)(puVar4 + 2) + (ulonglong)local_res18[0] * 4),
               fVar7 < 0.0)) {
              fVar7 = (float)FUN_18029cb50(puVar4);
            }
            fVar7 = fVar7 * (param_3 / fVar1) + fVar8;
            if (param_4 <= fVar7) break;
          }
        }
      }
      fVar8 = fVar7;
      param_6 = pcVar6;
    } while (pcVar6 < param_7);
    if (*param_1 <= fVar8 && fVar8 != *param_1) {
      *param_1 = fVar8;
    }
    if (fVar8 <= 0.0) goto LAB_18029e591;
  }
  else {
LAB_18029e591:
    if (param_1[1] != 0.0) goto LAB_18029e5a8;
  }
  param_1[1] = param_3 + param_1[1];
LAB_18029e5a8:
  if (param_9 != (undefined8 *)0x0) {
    *param_9 = param_6;
  }
  return param_1;
}


