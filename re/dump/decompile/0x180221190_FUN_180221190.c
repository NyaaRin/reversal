// 0x180221190  FUN_180221190
// size=704 thunk=false
// signature: undefined FUN_180221190()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_180221190(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  char ****ppppcVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar10;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int *local_b0;
  int local_a8;
  char ***local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  undefined1 local_5c;
  ulonglong local_58;
  int *piVar9;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if ((param_1 != param_2) && (piVar6 = param_1 + 0x14, piVar6 != param_2)) {
    piVar10 = param_1 + 0x16;
    local_b8 = param_1 + 0x1e;
    local_b0 = param_2;
    do {
      piVar5 = param_1 + 2;
      local_a8 = *piVar6;
      local_a0 = *(char ****)piVar10;
      uStack_98 = *(undefined8 *)(piVar10 + 2);
      local_90 = *(undefined8 *)(piVar10 + 4);
      local_88 = *(ulonglong *)(piVar10 + 6);
      piVar10[6] = 0xf;
      piVar10[7] = 0;
      *(undefined1 *)piVar10 = 0;
      piVar10[4] = 0;
      piVar10[5] = 0;
      local_80 = *(undefined8 *)local_b8;
      uStack_78 = *(undefined8 *)(local_b8 + 2);
      local_70 = *(undefined8 *)(local_b8 + 4);
      local_68 = *(undefined8 *)(local_b8 + 6);
      *(undefined1 *)local_b8 = 0;
      local_b8[4] = 0;
      local_b8[5] = 0;
      local_b8[6] = 0xf;
      local_b8[7] = 0;
      local_60 = piVar6[0x12];
      local_5c = (undefined1)piVar6[0x13];
      piVar4 = piVar5;
      if (0xf < *(ulonglong *)(param_1 + 8)) {
        piVar4 = *(int **)piVar5;
      }
      ppppcVar3 = &local_a0;
      if (0xf < local_88) {
        ppppcVar3 = (char ****)local_a0;
      }
      iVar2 = _stricmp((char *)ppppcVar3,(char *)piVar4);
      if (iVar2 == 0) {
        bVar1 = local_a8 < *param_1;
      }
      else {
        bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
      }
      piVar4 = piVar6;
      piVar8 = piVar10;
      if (bVar1 == false) {
        while( true ) {
          piVar9 = piVar8 + -0x14;
          piVar7 = piVar4 + -0x14;
          piVar5 = piVar9;
          if (0xf < *(ulonglong *)(piVar8 + -0xe)) {
            piVar5 = *(int **)piVar9;
          }
          ppppcVar3 = &local_a0;
          if (0xf < local_88) {
            ppppcVar3 = (char ****)local_a0;
          }
          iVar2 = _stricmp((char *)ppppcVar3,(char *)piVar5);
          if (iVar2 == 0) {
            bVar1 = local_a8 < *piVar7;
          }
          else {
            bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
          }
          if (bVar1 == false) break;
          *piVar4 = *piVar7;
          FUN_18020e8a0(piVar4 + 2,piVar9);
          FUN_18020e8a0(piVar4 + 10,piVar4 + -10);
          piVar4[0x12] = piVar4[-2];
          *(char *)(piVar4 + 0x13) = (char)piVar4[-1];
          piVar4 = piVar7;
          piVar8 = piVar9;
        }
        *piVar4 = local_a8;
        FUN_18020e8a0(piVar4 + 2,&local_a0);
        FUN_18020e8a0(piVar4 + 10,&local_80);
        piVar4[0x12] = local_60;
        *(undefined1 *)(piVar4 + 0x13) = local_5c;
      }
      else {
        piVar4 = piVar6 + 0x14;
        piVar8 = piVar6;
        while (piVar8 != param_1) {
          piVar4[-0x14] = piVar8[-0x14];
          FUN_18020e8a0(piVar4 + -0x12,piVar8 + -0x12);
          FUN_18020e8a0(piVar4 + -10,piVar8 + -10);
          piVar4[-2] = piVar8[-2];
          *(char *)(piVar4 + -1) = (char)piVar8[-1];
          piVar4 = piVar4 + -0x14;
          piVar8 = piVar8 + -0x14;
        }
        *param_1 = local_a8;
        FUN_18020e8a0(piVar5,&local_a0);
        FUN_18020e8a0(param_1 + 10,&local_80);
        param_1[0x12] = local_60;
        *(undefined1 *)(param_1 + 0x13) = local_5c;
      }
      piVar6 = piVar6 + 0x14;
      FUN_18020e450(&local_80);
      FUN_18020e450(&local_a0);
      piVar10 = piVar10 + 0x14;
      local_b8 = local_b8 + 0x14;
      param_2 = local_b0;
    } while (piVar6 != local_b0);
  }
  return param_2;
}


