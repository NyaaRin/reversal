// 0x1801cad50  FUN_1801cad50
// size=753 thunk=false
// signature: undefined FUN_1801cad50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801cad50(undefined8 param_1,char *param_2,uint *param_3,uint param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  char *pcVar5;
  float *pfVar6;
  uint uVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  uint local_140;
  float local_138;
  float local_134;
  byte local_130 [8];
  undefined1 local_128 [64];
  undefined1 local_e8 [96];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  FUN_180012ac0(local_88,0x40,"##%s_scope_btn",param_1);
  FUN_180012ac0(local_128,0x40,"%s_scope_pop",param_1);
  cVar2 = FUN_18019dc00(local_88,4,0);
  if (cVar2 != '\0') {
    FUN_180280fd0(local_128);
  }
  cVar2 = FUN_18026ee60(0);
  if (cVar2 != '\0') {
    pcVar5 = "Applies to ALL ESP text elements.\nClick to pick specific ones.";
    if (*param_2 == '\0') {
      pcVar5 = "Applies to selected ESP text elements only.\nClick to change the selection.";
    }
    FUN_180280d00(pcVar5);
  }
  cVar2 = FUN_18019a680(local_128);
  if (cVar2 != '\0') {
    FUN_1802aac00("Recolor which text elements");
    cVar2 = FUN_1801a0b60("All text elements",param_2);
    if (((cVar2 != '\0') && (*param_2 == '\0')) && (*param_3 == 0)) {
      *param_3 = param_4;
    }
    FUN_180279170(*param_2);
    uVar1 = DAT_180381384;
    pfVar6 = &local_138;
    local_134 = 1.5;
    local_138 = 0.75;
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar6 = &DAT_1803da6a4;
    }
    pfVar4 = &local_134;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar4 = pfVar6;
    }
    uVar7 = 0;
    fVar9 = *pfVar4 * DAT_18038116c;
    if (0 < (int)(DAT_1803fa810 - DAT_1803fa808 >> 5)) {
      do {
        local_130[0] = (*param_3 >> (uVar7 & 0x1f) & 1) != 0;
        puVar8 = (undefined8 *)((longlong)(int)uVar7 * 0x20 + DAT_1803fa808);
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        local_148 = param_1;
        local_140 = uVar7;
        FUN_180012ac0(local_e8,0x60,"%s##%s_sc%d",puVar8);
        cVar2 = FUN_1801a0b60(local_e8,local_130);
        if (cVar2 != '\0') {
          if (local_130[0] == 0) {
            uVar3 = *param_3 & ~(1 << (uVar7 & 0x1f));
          }
          else {
            uVar3 = *param_3 | 1 << (uVar7 & 0x1f);
          }
          *param_3 = uVar3;
        }
        if ((uVar7 & 1) == 0) {
          FUN_18027f5b0(fVar9,uVar1);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)(DAT_1803fa810 - DAT_1803fa808 >> 5));
    }
    if (((char)DAT_1803fa810 - (char)DAT_1803fa808 & 0x20U) != 0) {
      FUN_1802af3f0();
    }
    local_130[0] = (byte)(*param_3 >> 0x1f);
    FUN_180012ac0(local_e8,0x60,"Static text##%s_scst",param_1);
    cVar2 = FUN_1801a0b60(local_e8,local_130);
    if (cVar2 != '\0') {
      if (local_130[0] == 0) {
        uVar7 = *param_3 & 0x7fffffff;
      }
      else {
        uVar7 = *param_3 | 0x80000000;
      }
      *param_3 = uVar7;
    }
    cVar2 = FUN_18026ee60(0);
    if (cVar2 != '\0') {
      FUN_180280d00("Plain \"Text\" elements (fixed strings you typed yourself).");
    }
    FUN_180279200();
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  return;
}


