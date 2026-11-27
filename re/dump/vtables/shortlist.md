# Gameplay-relevant class shortlist

Ranking = subsystem weight (aim 10, visual/hvh 9, tick/ballistics 8, movement 7,
lua/account 6) + 2 per slot whose evidence string carries a log tag + 0.5 per
byte- or string-backed slot, capped at 20. Ties break on class name.

| # | class | score | slots | tag slots | basis | evidence |
|---|---|---|---|---|---|---|
| 1 | `Features::RageAim::RageAimFeature` | 112.5 | 17 | 2 | aim/trigger | slot02 `[EXPLOIT] cl_lagcompensation -> %d `<br>slot16 `[EXPLOIT] cl_lagcompensation restored on teardown ` |
| 2 | `Features::AutoFire::AutoFireFeature` | 110.5 | 17 | 1 | aim/trigger | slot02 `[AF-SEMI] dt=%.3f cps=%.1f readyLag=%.3f off=%dtick floor=%.3f ` |
| 3 | `Features::Triggerbot::TriggerbotFeature` | 110.5 | 17 | 1 | aim/trigger | slot02 `[TB] g_pEngineTrace is NULL! ` |
| 4 | `Features::Aimbot::AimbotFeature` | 109.5 | 17 | 1 | aim/trigger | slot02 `[AIM] shot held: post-kill snap delay, no tick named, the round could not regist` |
| 5 | `Features::AimPoint::AimPointFeature` | 108.0 | 17 | 0 | aim/trigger | — |
| 6 | `Features::HVH::LagComp::LagCompFeature` | 102.5 | 17 | 2 | hvh | slot01 `[LAGCOMP] interp abuse ON (was %.3f / %.1f) `<br>slot16 `[LAGCOMP] interp abuse restored on shutdown (%.3f / %.1f) ` |
| 7 | `Features::Weapons::Backends::HVH2WeaponBackend` | 102.0 | 33 | 1 | hvh | slot10 `"[WEAP] m_flNextPrimaryAttack netvar offset = 0x%X (hardcoded 0x%X) "` |
| 8 | `Features::VMChams::VMChamsFeature` | 100.5 | 17 | 1 | visual/esp | slot15 `[VMCHAMS] DME vm ent %d '%s' (pass=%d) ` |
| 9 | `Features::ChamsGlow::ChamsGlowFeature` | 100.0 | 17 | 1 | visual/esp | slot05 `[GLOW] toggle -> %s (through walls=%d, style=%s, blur=%.1f, sharp=%dpx) ` |
| 10 | `Features::HVH::AntiAim::AntiAimFeature` | 100.0 | 17 | 1 | hvh | slot02 `[ANIMPROBE] server.dll went away or moved (%p -> %p) - disarming ` |
| 11 | `Features::HVH::Resolver::ResolverFeature` | 99.5 | 17 | 1 | hvh | slot01 `[RESOLVER] player_hurt subscribed but never delivered on this server -- verdicts` |
| 12 | `Features::DamageFeed::DamageFeedFeature` | 98.0 | 17 | 0 | visual/esp | — |
| 13 | `Features::EntityChams::EntityChamsFeature` | 98.0 | 17 | 0 | visual/esp | — |
| 14 | `Features::HVH::Visualize::VisualizeFeature` | 98.0 | 17 | 0 | visual/esp | — |
| 15 | `Features::Visual::TeamList::TeamListFeature` | 98.0 | 17 | 0 | visual/esp | — |
| 16 | `Features::Visual::UserGroupList::GroupListFeature` | 98.0 | 17 | 0 | visual/esp | — |
| 17 | `Features::Watermark::WatermarkFeature` | 98.0 | 17 | 0 | visual/esp | — |
| 18 | `Features::Radar::RadarFeature` | 97.5 | 17 | 0 | visual/esp | — |
| 19 | `Features::Spectators::SpectatorsFeature` | 97.5 | 17 | 0 | visual/esp | — |
| 20 | `Features::Weapons::Backends::ARC9WeaponBackend` | 97.5 | 32 | 4 | ballistics | slot04 `[ARC9-NS] %s dist=%.1f baseTick=%d bestTick=%d luaTick=%d tickoff=%d lat=%d chok`<br>slot10 `"[WEAP] m_flNextPrimaryAttack netvar offset = 0x%X (hardcoded 0x%X) "`<br>slot30 `[ARC9-DIAG] predTick=%d actualTick=%d off=%d luaTickOffset=%d loopback=%d path=%` |
| 21 | `Features::DamageLogger::DamageLoggerFeature` | 97.0 | 17 | 0 | visual/esp | — |
| 22 | `Features::BulletTracers::BulletTracersFeature` | 96.5 | 17 | 0 | visual/esp | — |
| 23 | `Features::LookBeam::LookBeamFeature` | 96.0 | 17 | 0 | visual/esp | — |
| 24 | `Features::Weapons::Backends::UTSWBWeaponBackend` | 96.0 | 34 | 3 | ballistics | slot10 `"[WEAP] m_flNextPrimaryAttack netvar offset = 0x%X (hardcoded 0x%X) "`<br>slot25 `[UTSWB] cache: convar=%d confirmed=%d m9k=%d viewaff=%d lastview=%d layout=%s co`<br>slot30 `[UTSWB-DIAG] NOT CONFIRMED (convar=%d) -- stock CW20 fallback active ` |
| 25 | `Features::NoVisualRecoil::NoVisualRecoilFeature` | 95.5 | 17 | 0 | visual/esp | — |
