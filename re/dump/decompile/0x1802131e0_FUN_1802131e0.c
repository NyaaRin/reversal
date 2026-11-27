// 0x1802131e0  FUN_1802131e0
// size=507 thunk=false
// signature: undefined FUN_1802131e0()
// status: ok


void FUN_1802131e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  basic_streambuf<char,std::char_traits<char>_> *pbVar4;
  basic_streambuf<char,std::char_traits<char>_> *this;
  char cVar5;
  char cVar6;
  undefined1 *local_res8 [4];
  
  local_res8[0] = (undefined1 *)*param_1;
  this = (basic_streambuf<char,std::char_traits<char>_> *)*param_2;
  do {
    cVar5 = *(char *)(param_2 + 1);
    pbVar4 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    if (cVar5 == '\0') {
      if ((this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
         (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this), iVar3 == -1)) {
        *param_2 = 0;
      }
      else {
        *(char *)((longlong)param_2 + 9) = (char)iVar3;
        pbVar4 = this;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar5 = '\x01';
      this = pbVar4;
    }
    cVar6 = (char)param_3[1];
    if (cVar6 == '\0') {
      if (((basic_streambuf<char,std::char_traits<char>_> *)*param_3 ==
           (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
         (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                            ((basic_streambuf<char,std::char_traits<char>_> *)*param_3), iVar3 == -1
         )) {
        *param_3 = 0;
      }
      else {
        *(char *)((longlong)param_3 + 9) = (char)iVar3;
      }
      *(undefined1 *)(param_3 + 1) = 1;
      cVar6 = '\x01';
    }
    pbVar4 = (basic_streambuf<char,std::char_traits<char>_> *)*param_3;
    if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
      if (pbVar4 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) goto LAB_18021327d;
    }
    else if (pbVar4 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_18021327d:
      uVar2 = *(undefined1 *)((longlong)param_2 + 9);
      param_1[1] = local_res8[0];
      if (cVar5 != '\0') goto LAB_180213357;
      do {
        if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) goto LAB_180213335;
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this);
        if (iVar3 == -1) goto LAB_180213335;
        uVar2 = (undefined1)iVar3;
        while( true ) {
          cVar5 = '\x01';
          if (cVar6 == '\0') {
            if ((pbVar4 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
               (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(pbVar4),
               iVar3 == -1)) {
              pbVar4 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
            }
            cVar6 = '\x01';
          }
LAB_180213357:
          if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
            if (pbVar4 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
              return;
            }
          }
          else if (pbVar4 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
            return;
          }
          if (cVar5 == '\0') {
            if ((this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
               (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this), iVar3 == -1
               )) {
              this = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
            }
            else {
              uVar2 = (undefined1)iVar3;
            }
          }
          puVar1 = (undefined1 *)param_1[1];
          local_res8[0] = (undefined1 *)CONCAT71(local_res8[0]._1_7_,uVar2);
          if (puVar1 == (undefined1 *)param_1[2]) {
            FUN_1802281d0(param_1,puVar1,local_res8);
          }
          else {
            *puVar1 = uVar2;
            param_1[1] = param_1[1] + 1;
          }
          if ((this != (basic_streambuf<char,std::char_traits<char>_> *)0x0) &&
             (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sbumpc(this), iVar3 != -1)
             ) break;
LAB_180213335:
          this = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
        }
      } while( true );
    }
    if (local_res8[0] == (undefined1 *)param_1[1]) goto LAB_18021327d;
    if (*(char *)(param_2 + 1) == '\0') {
      if ((this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
         (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this), iVar3 == -1)) {
        *param_2 = 0;
        this = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      }
      else {
        *(char *)((longlong)param_2 + 9) = (char)iVar3;
      }
    }
    puVar1 = local_res8[0];
    *local_res8[0] = *(undefined1 *)((longlong)param_2 + 9);
    if ((this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) ||
       (iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sbumpc(this), iVar3 == -1)) {
      this = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      *param_2 = 0;
      local_res8[0] = puVar1 + 1;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      local_res8[0] = puVar1 + 1;
      *(undefined1 *)(param_2 + 1) = 0;
    }
  } while( true );
}


