// 0x180152a90  FUN_180152a90
// size=4394 thunk=false
// signature: undefined FUN_180152a90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180152a90(undefined8 *param_1,byte param_2,undefined8 *param_3)

{
  wchar_t *_Str;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  wchar_t **ppwVar15;
  undefined4 uVar16;
  wchar_t **ppwVar17;
  undefined1 auStack_348 [32];
  undefined4 local_328;
  undefined4 local_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  wchar_t *local_2d0 [3];
  wchar_t *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  uint local_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  wchar_t *local_278 [4];
  wchar_t *local_258 [4];
  undefined1 local_238 [32];
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined1 local_1b0 [32];
  undefined1 local_190 [32];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 *puStack_148;
  undefined8 *local_140;
  undefined1 local_138 [32];
  ulonglong local_118 [4];
  undefined1 local_f8 [32];
  ulonglong local_d8 [4];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58 [4];
  
  local_58[0] = DAT_1803da4c0 ^ (ulonglong)auStack_348;
  local_328 = 0;
  local_324 = 0;
  local_300 = &local_320;
  local_320 = 0;
  uStack_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_2d8 = param_3;
  local_1d8 = param_1;
  FUN_180211510(&local_320,L"garrysmod",9);
  local_328 = 0;
  FUN_180066720(local_138,param_3,&local_320);
  FUN_18021e290(&local_320);
  DVar6 = GetCurrentProcessId();
  FUN_1801fc020(local_1b0,DVar6);
  local_328 = 0x1000000;
  puVar7 = (undefined8 *)FUN_180211640(local_1b0);
  local_2b8 = (wchar_t *)*puVar7;
  uStack_2b0 = puVar7[1];
  local_2a8 = puVar7[2];
  uStack_2a0 = puVar7[3];
  *(undefined2 *)puVar7 = 0;
  puVar7[2] = 0;
  puVar7[3] = 7;
  local_328 = 0x3000000;
  puVar8 = (undefined4 *)
           FUN_180211740(&local_2b8,
                         L" -ErrorAction SilentlyContinue;if($p){$p.WaitForExit()}}catch{};Start-Sleep -Milliseconds 750;"
                         ,0x5e);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar16 = puVar8[1];
  uVar1 = puVar8[2];
  uVar2 = puVar8[3];
  *(undefined4 *)param_1 = *puVar8;
  *(undefined4 *)((longlong)param_1 + 4) = uVar16;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  uVar16 = puVar8[5];
  uVar1 = puVar8[6];
  uVar2 = puVar8[7];
  *(undefined4 *)(param_1 + 2) = puVar8[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar16;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined2 *)puVar8 = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 7;
  local_328 = 0x1000001;
  FUN_18021e290(&local_2b8);
  local_328 = 1;
  FUN_18021e290(local_1b0);
  if ((param_2 & 1) != 0) {
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"data",4);
    local_328 = 1;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
  }
  if ((param_2 & 2) != 0) {
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"download",8);
    local_324 = 0;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"downloads",9);
    local_324 = 0;
    local_328 = 1;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"downloadlists",0xd);
    local_328 = 1;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
  }
  uVar16 = 1;
  if ((param_2 & 4) != 0) {
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"cache",5);
    local_324 = 0;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
  }
  uVar5 = _UNK_1803814a8;
  uVar9 = _DAT_1803814a0;
  if ((param_2 & 0x20) != 0) {
    local_2d0[0] = L"sv.db";
    local_2d0[1] = L"cl.db";
    local_2d0[2] = L"mn.db";
    local_278[0] = L"";
    local_278[1] = L"-journal";
    local_278[2] = L"-wal";
    local_278[3] = L"-shm";
    local_150 = 0;
    puStack_148 = (undefined8 *)0x0;
    local_140 = (undefined8 *)0x0;
    ppwVar17 = local_2d0;
    do {
      _Str = *ppwVar17;
      ppwVar15 = local_278;
      do {
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        sVar11 = wcslen(_Str);
        FUN_180211510(&local_1f8,_Str,sVar11);
        sVar11 = wcslen(*ppwVar15);
        puVar12 = (uint *)FUN_180211740(&local_1f8,*ppwVar15,sVar11);
        local_218 = *puVar12;
        uStack_294 = puVar12[1];
        uStack_290 = puVar12[2];
        uStack_28c = puVar12[3];
        local_208 = *(undefined8 *)(puVar12 + 4);
        uStack_200 = *(undefined8 *)(puVar12 + 6);
        uVar13 = 0;
        *(undefined2 *)puVar12 = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 7;
        puVar12[7] = 0;
        local_328 = 3;
        local_288 = uVar9;
        uStack_280 = uVar5;
        local_298 = local_218 & 0xffff0000;
        uStack_214 = uStack_294;
        uStack_210 = uStack_290;
        uStack_20c = uStack_28c;
        puVar8 = (undefined4 *)FUN_180066720(local_190,local_138,&local_218);
        if (puStack_148 == local_140) {
          FUN_180224130(&local_150,puStack_148,puVar8);
        }
        else {
          local_300 = puStack_148;
          *puStack_148 = 0;
          puStack_148[1] = 0;
          puStack_148[2] = 0;
          puStack_148[3] = 0;
          uVar1 = puVar8[1];
          uVar2 = puVar8[2];
          uVar3 = puVar8[3];
          *(undefined4 *)puStack_148 = *puVar8;
          *(undefined4 *)((longlong)puStack_148 + 4) = uVar1;
          *(undefined4 *)(puStack_148 + 1) = uVar2;
          *(undefined4 *)((longlong)puStack_148 + 0xc) = uVar3;
          uVar4 = *(undefined8 *)(puVar8 + 6);
          puStack_148[2] = *(undefined8 *)(puVar8 + 4);
          puStack_148[3] = uVar4;
          *(undefined2 *)puVar8 = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 7;
          puStack_148 = puStack_148 + 4;
        }
        FUN_18021e290(local_190);
        FUN_18021e290(&local_218);
        local_328 = uVar16;
        FUN_18021e290(&local_298);
        FUN_18021e290(&local_1f8);
        ppwVar15 = ppwVar15 + 1;
      } while (ppwVar15 != local_258);
      ppwVar17 = ppwVar17 + 1;
    } while (ppwVar17 != &local_2b8);
    FUN_180211740(param_1,L"$delete=@(",10);
    if ((longlong)puStack_148 - local_150 >> 5 != 0) {
      do {
        if (uVar13 != 0) {
          FUN_180211740(param_1,&DAT_18035f1d8,1);
        }
        puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar13 * 0x20 + local_150);
        puVar7 = puVar10 + 2;
        if (7 < (ulonglong)puVar10[3]) {
          puVar10 = (undefined8 *)*puVar10;
        }
        FUN_180211740(param_1,puVar10,*puVar7);
        FUN_18021e290(&local_170);
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)((longlong)puStack_148 - local_150 >> 5));
    }
    FUN_180211740(param_1,
                  L");for($n=0;$n -lt 40;$n++){foreach($f in $delete){Remove-Item -LiteralPath $f -Force -ErrorAction SilentlyContinue};$left=@($delete|Where-Object{Test-Path -LiteralPath $_});if($left.Count -eq 0){break};Start-Sleep -Milliseconds 250};"
                  ,0xe9);
    FUN_18021c690(&local_150);
    param_3 = local_2d8;
  }
  if ((param_2 & 8) != 0) {
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"crashes",7);
    local_328 = uVar16;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"crashes",7);
    local_328 = uVar16;
    uVar9 = FUN_180066720(&local_2f8,param_3,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    FUN_18020e540(local_118,param_3);
    FUN_18020e540(local_f8,local_138);
    puVar14 = local_118;
    do {
      FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
      puVar10 = (undefined8 *)FUN_180152530(&local_170,puVar14);
      puVar7 = puVar10 + 2;
      if (7 < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_180211740(param_1,puVar10,*puVar7);
      FUN_18021e290(&local_170);
      FUN_180211740(param_1,
                    L" -File -Force -ErrorAction SilentlyContinue|Where-Object{$_.Extension -in \'.dmp\',\'.mdmp\'}|Remove-Item -Force -ErrorAction SilentlyContinue;"
                    ,0x8b);
      puVar14 = puVar14 + 4;
    } while (puVar14 != local_d8);
    _eh_vector_destructor_iterator_(local_118,0x20,2,FUN_1800668e0);
  }
  if ((param_2 & 0x10) != 0) {
    local_300 = &local_2f8;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    FUN_180211510(&local_2f8,&DAT_18035eab0,3);
    local_2d8 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    local_328 = uVar16;
    FUN_180211510(&local_320,&DAT_18035eab8,3);
    local_328 = uVar16;
    uVar9 = FUN_180066720(local_258,local_138,&local_320);
    FUN_180066720(&local_170,uVar9,&local_2f8);
    FUN_18021e290(local_258);
    FUN_18021e290(&local_320);
    FUN_18021e290(&local_2f8);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(local_258,&local_170);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(local_258);
    FUN_180211740(param_1,
                  L" -Filter \'*.dll\' -File -Force -ErrorAction SilentlyContinue|ForEach-Object{Rename-Item -LiteralPath $_.FullName -NewName ($_.Name+\'.disabled\') -Force -ErrorAction SilentlyContinue};"
                  ,0xb5);
    FUN_18021e290(&local_170);
  }
  if ((param_2 & 0xc0) != 0) {
    FUN_180211740(param_1,L"$stamp=(Get-Date).AddDays(-(Get-Random -Minimum 150 -Maximum 901));",
                  0x43);
    local_300 = &local_2f8;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    FUN_180211510(&local_2f8,L"gameinfo.txt",0xc);
    local_328 = uVar16;
    FUN_180066720(local_d8,local_138,&local_2f8);
    FUN_18021e290(&local_2f8);
    local_2d8 = &local_170;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0;
    FUN_180211510(&local_170,L"base_vehicles.lua",0x11);
    local_1d0 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    local_328 = uVar16;
    FUN_180211510(&local_320,L"autorun",7);
    local_1c8 = &local_2f8;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_328 = uVar16;
    FUN_180211510(&local_2f8,&DAT_18035eab8,3);
    local_328 = uVar16;
    uVar9 = FUN_180066720(local_238,local_138,&local_2f8);
    uVar9 = FUN_180066720(local_258,uVar9,&local_320);
    FUN_180066720(local_b8,uVar9,&local_170);
    FUN_18021e290(local_258);
    FUN_18021e290(local_238);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    FUN_18021e290(&local_170);
    local_1c0 = &local_170;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0;
    FUN_180211510(&local_170,L"lights.rad",10);
    local_328 = uVar16;
    FUN_180066720(local_98,local_138,&local_170);
    FUN_18021e290(&local_170);
    local_1b8 = &local_170;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0;
    FUN_180211510(&local_170,L"sourceengine",0xc);
    local_328 = uVar16;
    FUN_180066720(local_78,param_3,&local_170);
    FUN_18021e290(&local_170);
    puVar14 = local_d8;
    do {
      FUN_180211740(param_1,L"$i=Get-Item -LiteralPath ",0x19);
      puVar10 = (undefined8 *)FUN_180152530(local_238,puVar14);
      puVar7 = puVar10 + 2;
      if (7 < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_180211740(param_1,puVar10,*puVar7);
      FUN_18021e290(local_238);
      FUN_180211740(param_1,
                    L" -Force -ErrorAction SilentlyContinue;if($i){$t=$stamp.AddSeconds((Get-Random -Minimum 0 -Maximum 172801));$i.CreationTime=$t;$i.LastAccessTime=$t;$i.LastWriteTime=$t};"
                    ,0xa8);
      puVar14 = puVar14 + 4;
    } while (puVar14 != local_58);
    if ((char)param_2 < '\0') {
      FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
      puVar10 = (undefined8 *)FUN_180152530(local_238,param_3);
      puVar7 = puVar10 + 2;
      if (7 < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_180211740(param_1,puVar10,*puVar7);
      FUN_18021e290(local_238);
      FUN_180211740(param_1,
                    L" -File -Force -ErrorAction SilentlyContinue|ForEach-Object{$t=$stamp.AddSeconds((Get-Random -Minimum 0 -Maximum 86401));$_.CreationTime=$t;$_.LastAccessTime=$t;$_.LastWriteTime=$t};"
                    ,0xb5);
    }
    _eh_vector_destructor_iterator_(local_d8,0x20,4,FUN_1800668e0);
  }
  FUN_18021e290(local_138);
  return param_1;
}


