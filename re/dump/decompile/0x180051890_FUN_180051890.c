// 0x180051890  FUN_180051890
// size=492 thunk=false
// signature: undefined FUN_180051890()
// status: ok


undefined8 FUN_180051890(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined **ppuVar5;
  char *_Str2;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  
  local_res8 = param_1;
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      _Str2 = "";
    }
    else {
      pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      _Str2 = "";
      if (pcVar4 != (char *)0x0) {
        _Str2 = pcVar4;
      }
    }
    if (*_Str2 != '\0') {
      ppuVar5 = &PTR_s_Alpha_18033e000;
      do {
        iVar2 = _stricmp(*ppuVar5,_Str2);
        if (iVar2 == 0) {
          iVar2 = *(int *)(ppuVar5 + 1);
          if (-1 < iVar2) {
            if (&DAT_180331c70 + (longlong)iVar2 * 4 == (char *)0x0) {
              return 0;
            }
            if ((&DAT_180331c70)[(longlong)iVar2 * 4] != '\x02') {
              cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
              if (cVar1 == '\0') {
                FUN_18026a940(iVar2,0);
                DAT_1803ff7ac = DAT_1803ff7ac + 1;
                return 0;
              }
              dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
              FUN_18026a940(iVar2,(float)dVar6);
              DAT_1803ff7ac = DAT_1803ff7ac + 1;
              return 0;
            }
            cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
            fVar7 = 0.0;
            if (cVar1 == '\0') {
              fVar8 = 0.0;
            }
            else {
              dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
              fVar8 = (float)dVar6;
            }
            cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
            if (cVar1 != '\0') {
              dVar6 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
              fVar7 = (float)dVar6;
            }
            local_res8 = CONCAT44(fVar8,fVar7);
            FUN_18026aad0(iVar2,&local_res8);
            DAT_1803ff7ac = DAT_1803ff7ac + 1;
            return 0;
          }
          break;
        }
        ppuVar5 = ppuVar5 + 2;
      } while (ppuVar5 != &Features::EntityChams::EntityChamsFeature::vftable_meta_ptr);
    }
    FUN_180049960("ImGui.PushStyleVar with an unknown variable name -- ignored");
  }
  return 0;
}


