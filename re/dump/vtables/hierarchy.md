# RTTI class hierarchy — m64.dll

Generated from the RTTI base-class descriptors in `re/dump/rtti_classes.tsv`.

- classes: 159
- total vtable slots: 2177

## Roots

| root | classes |
|---|---|
| `Features::FeatureBase` | 61 |
| `Features::Weapons::Backends::BaseWeaponBackend` | 22 |
| `std::_Node_base` | 12 |
| `std::exception` | 12 |
| `Features::Autowall::IPenetrationModel` | 10 |
| `Features::Visual::ESP::Editor::Elements::BaseElement` | 8 |
| `ITraceFilter` | 5 |
| `std::H::?$_Iosb` | 5 |
| `std::ios_base` | 5 |
| `std::std::D::DU?$char_traits::?$basic_ios` | 5 |
| `CUtlCharConversion` | 3 |
| `INetMessage` | 3 |
| `std::_Ref_count_base` | 3 |
| `std::std::D::DU?$char_traits::?$basic_istream` | 3 |
| `std::std::D::DU?$char_traits::?$basic_ostream` | 3 |
| `IGameEventListener` | 2 |
| `std::error_category` | 2 |
| `std::std::D::DU?$char_traits::?$basic_streambuf` | 2 |
| `std::std::std::E::EV?$allocator::X_JAEBV?$vector::?$_Func_base` | 2 |
| `Features::Visual::ESP::CGhostEntityListener` | 1 |
| `std::AEA_K::V12::V12::TextEditor::VIterator::?$_Func_base` | 1 |
| `std::TextEditor::XAEAUGlyph::?$_Func_base` | 1 |
| `std::V12::V12::TextEditor::VIterator::?$_Func_base` | 1 |
| `std::_Crt_new_delete` | 1 |
| `std::_Facet_base` | 1 |
| `std::_NG::?$_Func_base` | 1 |
| `std::locale::facet` | 1 |
| `std::std::D::DU?$char_traits::?$basic_iostream` | 1 |
| `type_info` | 1 |

## Classes

| class | immediate base(s) | all paths | slots |
|---|---|---|---|
| `CDoubleTraceFilter` | ITraceFilter | `CDoubleTraceFilter` : `ITraceFilter` | 3 |
| `CTraceFilter` | ITraceFilter | `CTraceFilter` : `ITraceFilter` | 3 |
| `CTripleTraceFilter` | ITraceFilter | `CTripleTraceFilter` : `ITraceFilter` | 3 |
| `CUtlCStringConversion` | CUtlCharConversion | `CUtlCStringConversion` : `CUtlCharConversion` | 1 |
| `CUtlCharConversion` | — | `CUtlCharConversion` | 1 |
| `CUtlNoEscConversion` | CUtlCharConversion | `CUtlNoEscConversion` : `CUtlCharConversion` | 1 |
| `Core::GameEvents::Sink` | IGameEventListener | `Core::GameEvents::Sink` : `IGameEventListener` | 2 |
| `Features::AccountSwitcher::AccountSwitcherFeature` | Features::FeatureBase | `Features::AccountSwitcher::AccountSwitcherFeature` : `Features::FeatureBase` | 17 |
| `Features::AimPoint::AimPointFeature` | Features::FeatureBase | `Features::AimPoint::AimPointFeature` : `Features::FeatureBase` | 17 |
| `Features::Aimbot::AimbotFeature` | Features::FeatureBase | `Features::Aimbot::AimbotFeature` : `Features::FeatureBase` | 17 |
| `Features::Airstuck::AirstuckFeature` | Features::FeatureBase | `Features::Airstuck::AirstuckFeature` : `Features::FeatureBase` | 17 |
| `Features::AutoFire::AutoFireFeature` | Features::FeatureBase | `Features::AutoFire::AutoFireFeature` : `Features::FeatureBase` | 17 |
| `Features::AutoReload::AutoReloadFeature` | Features::FeatureBase | `Features::AutoReload::AutoReloadFeature` : `Features::FeatureBase` | 17 |
| `Features::Autostrafe::AutostrafeFeature` | Features::FeatureBase | `Features::Autostrafe::AutostrafeFeature` : `Features::FeatureBase` | 17 |
| `Features::Autowall::ARC9Autowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::ARC9Autowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::ArcCWAutowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::ArcCWAutowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::AutowallFeature` | Features::FeatureBase | `Features::Autowall::AutowallFeature` : `Features::FeatureBase` | 17 |
| `Features::Autowall::CW20Autowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::CW20Autowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::FAS2Autowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::FAS2Autowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::HomigradAutowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::HomigradAutowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::M9KAutowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::M9KAutowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::SWBAutowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::SWBAutowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::SWCSAutowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::SWCSAutowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::TFAAutowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::TFAAutowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Autowall::TacRPAutowall` | Features::Autowall::IPenetrationModel | `Features::Autowall::TacRPAutowall` : `Features::Autowall::IPenetrationModel` | 12 |
| `Features::Backtrack::BacktrackFeature` | Features::FeatureBase | `Features::Backtrack::BacktrackFeature` : `Features::FeatureBase` | 17 |
| `Features::BulletPath::BulletPathFeature` | Features::FeatureBase | `Features::BulletPath::BulletPathFeature` : `Features::FeatureBase` | 17 |
| `Features::BulletTracers::BulletTracersFeature` | Features::FeatureBase | `Features::BulletTracers::BulletTracersFeature` : `Features::FeatureBase` | 17 |
| `Features::BunnyHop::BunnyHopFeature` | Features::FeatureBase | `Features::BunnyHop::BunnyHopFeature` : `Features::FeatureBase` | 17 |
| `Features::CameraView::CameraViewFeature` | Features::FeatureBase | `Features::CameraView::CameraViewFeature` : `Features::FeatureBase` | 17 |
| `Features::ChamsGlow::ChamsGlowFeature` | Features::FeatureBase | `Features::ChamsGlow::ChamsGlowFeature` : `Features::FeatureBase` | 17 |
| `Features::ChatSpam::ChatSpamFeature` | Features::FeatureBase | `Features::ChatSpam::ChatSpamFeature` : `Features::FeatureBase` | 17 |
| `Features::DamageFeed::DamageFeedFeature` | Features::FeatureBase | `Features::DamageFeed::DamageFeedFeature` : `Features::FeatureBase` | 17 |
| `Features::DamageLogger::DamageLoggerFeature` | Features::FeatureBase | `Features::DamageLogger::DamageLoggerFeature` : `Features::FeatureBase` | 17 |
| `Features::DataCleaner::DataCleanerFeature` | Features::FeatureBase | `Features::DataCleaner::DataCleanerFeature` : `Features::FeatureBase` | 17 |
| `Features::DoubleTap::DoubleTapFeature` | Features::FeatureBase | `Features::DoubleTap::DoubleTapFeature` : `Features::FeatureBase` | 17 |
| `Features::EdgeJump::EdgeJumpFeature` | Features::FeatureBase | `Features::EdgeJump::EdgeJumpFeature` : `Features::FeatureBase` | 17 |
| `Features::EntityChams::EntityChamsFeature` | Features::FeatureBase | `Features::EntityChams::EntityChamsFeature` : `Features::FeatureBase` | 17 |
| `Features::FakeDuck::FakeDuckFeature` | Features::FeatureBase | `Features::FakeDuck::FakeDuckFeature` : `Features::FeatureBase` | 17 |
| `Features::FakeLag::FakeLagFeature` | Features::FeatureBase | `Features::FakeLag::FakeLagFeature` : `Features::FeatureBase` | 17 |
| `Features::FakePing::FakePingFeature` | Features::FeatureBase | `Features::FakePing::FakePingFeature` : `Features::FeatureBase` | 17 |
| `Features::ForceDraw::ForceDrawFeature` | Features::FeatureBase | `Features::ForceDraw::ForceDrawFeature` : `Features::FeatureBase` | 17 |
| `Features::FreeCam::FreeCamFeature` | Features::FeatureBase | `Features::FreeCam::FreeCamFeature` : `Features::FeatureBase` | 17 |
| `Features::Fullbright::FullbrightFeature` | Features::FeatureBase | `Features::Fullbright::FullbrightFeature` : `Features::FeatureBase` | 17 |
| `Features::HVH::AntiAim::AntiAimFeature` | Features::FeatureBase | `Features::HVH::AntiAim::AntiAimFeature` : `Features::FeatureBase` | 17 |
| `Features::HVH::LagComp::LagCompFeature` | Features::FeatureBase | `Features::HVH::LagComp::LagCompFeature` : `Features::FeatureBase` | 17 |
| `Features::HVH::Resolver::ResolverFeature` | Features::FeatureBase | `Features::HVH::Resolver::ResolverFeature` : `Features::FeatureBase` | 17 |
| `Features::HVH::Visualize::VisualizeFeature` | Features::FeatureBase | `Features::HVH::Visualize::VisualizeFeature` : `Features::FeatureBase` | 17 |
| `Features::JumpBug::JumpBugFeature` | Features::FeatureBase | `Features::JumpBug::JumpBugFeature` : `Features::FeatureBase` | 17 |
| `Features::KillSay::KillSayFeature` | Features::FeatureBase | `Features::KillSay::KillSayFeature` : `Features::FeatureBase` | 17 |
| `Features::LeyHitregCompat::LeyHitregCompatFeature` | Features::FeatureBase | `Features::LeyHitregCompat::LeyHitregCompatFeature` : `Features::FeatureBase` | 17 |
| `Features::LoadingUrl::LoadingUrlFeature` | Features::FeatureBase | `Features::LoadingUrl::LoadingUrlFeature` : `Features::FeatureBase` | 17 |
| `Features::LookBeam::LookBeamFeature` | Features::FeatureBase | `Features::LookBeam::LookBeamFeature` : `Features::FeatureBase` | 17 |
| `Features::LuaFileCloak::LuaFileCloakFeature` | Features::FeatureBase | `Features::LuaFileCloak::LuaFileCloakFeature` : `Features::FeatureBase` | 17 |
| `Features::LuaLoader::LuaLoaderFeature` | Features::FeatureBase | `Features::LuaLoader::LuaLoaderFeature` : `Features::FeatureBase` | 17 |
| `Features::MoveFix::MoveFixFeature` | Features::FeatureBase | `Features::MoveFix::MoveFixFeature` : `Features::FeatureBase` | 17 |
| `Features::NetVars::NetVarsFeature` | Features::FeatureBase | `Features::NetVars::NetVarsFeature` : `Features::FeatureBase` | 17 |
| `Features::NoVisualRecoil::NoVisualRecoilFeature` | Features::FeatureBase | `Features::NoVisualRecoil::NoVisualRecoilFeature` : `Features::FeatureBase` | 17 |
| `Features::Nospread::NospreadFeature` | Features::FeatureBase | `Features::Nospread::NospreadFeature` : `Features::FeatureBase` | 17 |
| `Features::OctoCompat::OctoCompatFeature` | Features::FeatureBase | `Features::OctoCompat::OctoCompatFeature` : `Features::FeatureBase` | 17 |
| `Features::OctoCompat::OctoTickFeature` | Features::FeatureBase | `Features::OctoCompat::OctoTickFeature` : `Features::FeatureBase` | 17 |
| `Features::PTPCompat::PTPCompatFeature` | Features::FeatureBase | `Features::PTPCompat::PTPCompatFeature` : `Features::FeatureBase` | 17 |
| `Features::Radar::RadarFeature` | Features::FeatureBase | `Features::Radar::RadarFeature` : `Features::FeatureBase` | 17 |
| `Features::RageAim::RageAimFeature` | Features::FeatureBase | `Features::RageAim::RageAimFeature` : `Features::FeatureBase` | 17 |
| `Features::SetSkin::SetSkinFeature` | Features::FeatureBase | `Features::SetSkin::SetSkinFeature` : `Features::FeatureBase` | 17 |
| `Features::SkyEditor::SkyEditorFeature` | Features::FeatureBase | `Features::SkyEditor::SkyEditorFeature` : `Features::FeatureBase` | 17 |
| `Features::Spectators::SpectatorsFeature` | Features::FeatureBase | `Features::Spectators::SpectatorsFeature` : `Features::FeatureBase` | 17 |
| `Features::Speedhack::SpeedhackFeature` | Features::FeatureBase | `Features::Speedhack::SpeedhackFeature` : `Features::FeatureBase` | 17 |
| `Features::ThirdPerson::ThirdPersonFeature` | Features::FeatureBase | `Features::ThirdPerson::ThirdPersonFeature` : `Features::FeatureBase` | 17 |
| `Features::ThirdPerson::ThirdPersonFeature::CTraceFilterWorldOnly` | ITraceFilter | `Features::ThirdPerson::ThirdPersonFeature::CTraceFilterWorldOnly` : `ITraceFilter` | 3 |
| `Features::Toolbox::RawDisconnectMessage` | INetMessage | `Features::Toolbox::RawDisconnectMessage` : `INetMessage` | 12 |
| `Features::Toolbox::RawSetConVarMessage` | INetMessage | `Features::Toolbox::RawSetConVarMessage` : `INetMessage` | 12 |
| `Features::Toolbox::ToolboxFeature` | Features::FeatureBase | `Features::Toolbox::ToolboxFeature` : `Features::FeatureBase` | 17 |
| `Features::Triggerbot::TriggerbotFeature` | Features::FeatureBase | `Features::Triggerbot::TriggerbotFeature` : `Features::FeatureBase` | 17 |
| `Features::VMChams::VMChamsFeature` | Features::FeatureBase | `Features::VMChams::VMChamsFeature` : `Features::FeatureBase` | 17 |
| `Features::Visual::ESP::CGhostEntityListener` | — | `Features::Visual::ESP::CGhostEntityListener` | 2 |
| `Features::Visual::ESP::Editor::Elements::ArmorBarElement` | Features::Visual::ESP::Editor::Elements::HealthBarElement, Features::Visual::ESP::Editor::Elements::BaseElement | `Features::Visual::ESP::Editor::Elements::ArmorBarElement` : `Features::Visual::ESP::Editor::Elements::BaseElement`<br>`Features::Visual::ESP::Editor::Elements::ArmorBarElement` : `Features::Visual::ESP::Editor::Elements::HealthBarElement` : `Features::Visual::ESP::Editor::Elements::BaseElement` | 13 |
| `Features::Visual::ESP::Editor::Elements::BBoxElement` | Features::Visual::ESP::Editor::Elements::BaseElement | `Features::Visual::ESP::Editor::Elements::BBoxElement` : `Features::Visual::ESP::Editor::Elements::BaseElement` | 9 |
| `Features::Visual::ESP::Editor::Elements::BaseElement` | — | `Features::Visual::ESP::Editor::Elements::BaseElement` | 9 |
| `Features::Visual::ESP::Editor::Elements::BoxElement` | Features::Visual::ESP::Editor::Elements::BaseElement | `Features::Visual::ESP::Editor::Elements::BoxElement` : `Features::Visual::ESP::Editor::Elements::BaseElement` | 9 |
| `Features::Visual::ESP::Editor::Elements::CircleElement` | Features::Visual::ESP::Editor::Elements::BaseElement | `Features::Visual::ESP::Editor::Elements::CircleElement` : `Features::Visual::ESP::Editor::Elements::BaseElement` | 12 |
| `Features::Visual::ESP::Editor::Elements::DynamicTextElement` | Features::Visual::ESP::Editor::Elements::TextElement, Features::Visual::ESP::Editor::Elements::BaseElement | `Features::Visual::ESP::Editor::Elements::DynamicTextElement` : `Features::Visual::ESP::Editor::Elements::BaseElement`<br>`Features::Visual::ESP::Editor::Elements::DynamicTextElement` : `Features::Visual::ESP::Editor::Elements::TextElement` : `Features::Visual::ESP::Editor::Elements::BaseElement` | 12 |
| `Features::Visual::ESP::Editor::Elements::HealthBarElement` | Features::Visual::ESP::Editor::Elements::BaseElement | `Features::Visual::ESP::Editor::Elements::HealthBarElement` : `Features::Visual::ESP::Editor::Elements::BaseElement` | 13 |
| `Features::Visual::ESP::Editor::Elements::TextElement` | Features::Visual::ESP::Editor::Elements::BaseElement | `Features::Visual::ESP::Editor::Elements::TextElement` : `Features::Visual::ESP::Editor::Elements::BaseElement` | 12 |
| `Features::Visual::TeamList::TeamListFeature` | Features::FeatureBase | `Features::Visual::TeamList::TeamListFeature` : `Features::FeatureBase` | 17 |
| `Features::Visual::UserGroupList::GroupListFeature` | Features::FeatureBase | `Features::Visual::UserGroupList::GroupListFeature` : `Features::FeatureBase` | 17 |
| `Features::Warp::WarpFeature` | Features::FeatureBase | `Features::Warp::WarpFeature` : `Features::FeatureBase` | 17 |
| `Features::Watermark::WatermarkFeature` | Features::FeatureBase | `Features::Watermark::WatermarkFeature` : `Features::FeatureBase` | 17 |
| `Features::Weapons::Backends::ARC9WeaponBackend` | Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::ARC9WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 32 |
| `Features::Weapons::Backends::ArcCWWeaponBackend` | Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::ArcCWWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 32 |
| `Features::Weapons::Backends::CSGOWeaponBackend` | Features::Weapons::Backends::HL2WeaponBackend, Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::CSGOWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::CSGOWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::CSGOWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::CSGOWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::CW20WeaponBackend` | Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::CW20WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 34 |
| `Features::Weapons::Backends::CWBaseWeaponBackend` | Features::Weapons::Backends::CW20WeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::CWBaseWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::CWBaseWeaponBackend` : `Features::Weapons::Backends::CW20WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 37 |
| `Features::Weapons::Backends::CombineWeapWeaponBackend` | Features::Weapons::Backends::HL2WeaponBackend, Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::CombineWeapWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::CombineWeapWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::CombineWeapWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::CombineWeapWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::FAS2WeaponBackend` | Features::Weapons::Backends::CW20WeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::FAS2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::FAS2WeaponBackend` : `Features::Weapons::Backends::CW20WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 34 |
| `Features::Weapons::Backends::GenericWeaponBackend` | Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::HL2WeaponBackend` | Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::HVH2WeaponBackend` | Features::Weapons::Backends::HL2WeaponBackend, Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::HVH2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::HVH2WeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::HVH2WeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::HVH2WeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::M9KWeaponBackend` | Features::Weapons::Backends::HL2WeaponBackend, Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::M9KWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::M9KWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::M9KWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::M9KWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::ORPWeaponBackend` | Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::ORPWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::ORPWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::OctoWeaponBackend` | Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::OctoWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::OctoWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::PTPWeaponBackend` | Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::PTPWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::PTPWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::SWBWeaponBackend` | Features::Weapons::Backends::CWBaseWeaponBackend, Features::Weapons::Backends::CW20WeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::SWBWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::SWBWeaponBackend` : `Features::Weapons::Backends::CW20WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::SWBWeaponBackend` : `Features::Weapons::Backends::CWBaseWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::SWBWeaponBackend` : `Features::Weapons::Backends::CWBaseWeaponBackend` : `Features::Weapons::Backends::CW20WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 37 |
| `Features::Weapons::Backends::SWCSWeaponBackend` | Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::SWCSWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 32 |
| `Features::Weapons::Backends::TFAWeaponBackend` | Features::Weapons::Backends::HL2WeaponBackend, Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::TFAWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::TFAWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::TFAWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::TFAWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::TTTWeaponBackend` | Features::Weapons::Backends::HL2WeaponBackend, Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::TTTWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::TTTWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::TTTWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::TTTWeaponBackend` : `Features::Weapons::Backends::HL2WeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::Weapons::Backends::TacRPWeaponBackend` | Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::TacRPWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 32 |
| `Features::Weapons::Backends::UTSWBWeaponBackend` | Features::Weapons::Backends::CW20WeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::UTSWBWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::UTSWBWeaponBackend` : `Features::Weapons::Backends::CW20WeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 34 |
| `Features::Weapons::Backends::ZCityWeaponBackend` | Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::ZCityWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 32 |
| `Features::Weapons::Backends::ZSWeaponBackend` | Features::Weapons::Backends::GenericWeaponBackend, Features::Weapons::Backends::BaseWeaponBackend | `Features::Weapons::Backends::ZSWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend`<br>`Features::Weapons::Backends::ZSWeaponBackend` : `Features::Weapons::Backends::GenericWeaponBackend` : `Features::Weapons::Backends::BaseWeaponBackend` | 33 |
| `Features::WorldTint::WorldTintFeature` | Features::FeatureBase | `Features::WorldTint::WorldTintFeature` : `Features::FeatureBase` | 17 |
| `Features::ZCityCompat::ZCityCompatFeature` | Features::FeatureBase | `Features::ZCityCompat::ZCityCompatFeature` : `Features::FeatureBase` | 17 |
| `IGameEventListener` | — | `IGameEventListener` | 2 |
| `INetMessage` | — | `INetMessage` | 12 |
| `ITraceFilter` | — | `ITraceFilter` | 3 |
| `SE_Exception` | std::exception | `SE_Exception` : `std::exception` | 2 |
| `std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_istringstream` | std::std::D::DU?$char_traits::?$basic_istream, std::std::D::DU?$char_traits::?$basic_ios, std::ios_base, std::H::?$_Iosb | `std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_istringstream` : `std::H::?$_Iosb`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_istringstream` : `std::ios_base`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_istringstream` : `std::std::D::DU?$char_traits::?$basic_ios`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_istringstream` : `std::std::D::DU?$char_traits::?$basic_istream` | 1 |
| `std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_ostringstream` | std::std::D::DU?$char_traits::?$basic_ostream, std::std::D::DU?$char_traits::?$basic_ios, std::ios_base, std::H::?$_Iosb | `std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_ostringstream` : `std::H::?$_Iosb`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_ostringstream` : `std::ios_base`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_ostringstream` : `std::std::D::DU?$char_traits::?$basic_ios`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_ostringstream` : `std::std::D::DU?$char_traits::?$basic_ostream` | 1 |
| `std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringbuf` | std::std::D::DU?$char_traits::?$basic_streambuf | `std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringbuf` : `std::std::D::DU?$char_traits::?$basic_streambuf` | 15 |
| `std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` | std::std::D::DU?$char_traits::?$basic_iostream, std::std::D::DU?$char_traits::?$basic_istream, std::std::D::DU?$char_traits::?$basic_ios, std::ios_base, std::H::?$_Iosb, std::std::D::DU?$char_traits::?$basic_ostream, std::std::D::DU?$char_traits::?$basic_ios, std::ios_base, std::H::?$_Iosb | `std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::H::?$_Iosb`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::H::?$_Iosb`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::ios_base`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::ios_base`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::std::D::DU?$char_traits::?$basic_ios`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::std::D::DU?$char_traits::?$basic_ios`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::std::D::DU?$char_traits::?$basic_iostream`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::std::D::DU?$char_traits::?$basic_istream`<br>`std::2::D::V?$allocator::std::D::DU?$char_traits::?$basic_stringstream` : `std::std::D::DU?$char_traits::?$basic_ostream` | 1 |
| `std::3::XAEAUGlyph::Z::std::std::D::DU?$char_traits::0_KIAEBV?$basic_string_view::3::IEAAXUDocPos::TextEditor::?4??addSquiggle::V<lambda_1>::?$_Func_impl_no_alloc` | std::TextEditor::XAEAUGlyph::?$_Func_base | `std::3::XAEAUGlyph::Z::std::std::D::DU?$char_traits::0_KIAEBV?$basic_string_view::3::IEAAXUDocPos::TextEditor::?4??addSquiggle::V<lambda_1>::?$_Func_impl_no_alloc` : `std::TextEditor::XAEAUGlyph::?$_Func_base` | 6 |
| `std::8::std::E::EV?$allocator::X_JAEBV?$vector::Z::std::filesystem::AEBVpath::34::YA?AUDatabase::Features::Sqlite::?2??Read::V<lambda_1>::?$_Func_impl_no_alloc` | std::std::std::E::EV?$allocator::X_JAEBV?$vector::?$_Func_base | `std::8::std::E::EV?$allocator::X_JAEBV?$vector::Z::std::filesystem::AEBVpath::34::YA?AUDatabase::Features::Sqlite::?2??Read::V<lambda_1>::?$_Func_impl_no_alloc` : `std::std::std::E::EV?$allocator::X_JAEBV?$vector::?$_Func_base` | 6 |
| `std::8::std::E::EV?$allocator::X_JAEBV?$vector::Z::std::filesystem::AEBVpath::34::YA?AUDatabase::Features::Sqlite::?7??Read::V<lambda_2>::?$_Func_impl_no_alloc` | std::std::std::E::EV?$allocator::X_JAEBV?$vector::?$_Func_base | `std::8::std::E::EV?$allocator::X_JAEBV?$vector::Z::std::filesystem::AEBVpath::34::YA?AUDatabase::Features::Sqlite::?7??Read::V<lambda_2>::?$_Func_impl_no_alloc` : `std::std::std::E::EV?$allocator::X_JAEBV?$vector::?$_Func_base` | 6 |
| `std::AEA_K::V12::V12::ZV12::0AEA_K::V12::TextEditor::P6A?AVIterator::?$_Func_impl_no_alloc` | std::AEA_K::V12::V12::TextEditor::VIterator::?$_Func_base | `std::AEA_K::V12::V12::ZV12::0AEA_K::V12::TextEditor::P6A?AVIterator::?$_Func_impl_no_alloc` : `std::AEA_K::V12::V12::TextEditor::VIterator::?$_Func_base` | 6 |
| `std::D::?$_Node_str` | std::_Node_base | `std::D::?$_Node_str` : `std::_Node_base` | 1 |
| `std::D::?$collate` | std::locale::facet, std::_Facet_base, std::_Crt_new_delete | `std::D::?$collate` : `std::_Crt_new_delete`<br>`std::D::?$collate` : `std::_Facet_base`<br>`std::D::?$collate` : `std::locale::facet` | 6 |
| `std::TextEditor::VTransaction::?$_Ref_count_obj2` | std::_Ref_count_base | `std::TextEditor::VTransaction::?$_Ref_count_obj2` : `std::_Ref_count_base` | 4 |
| `std::V12::V12::ZV12::0::V12::TextEditor::P6A?AVIterator::?$_Func_impl_no_alloc` | std::V12::V12::TextEditor::VIterator::?$_Func_base | `std::V12::V12::ZV12::0::V12::TextEditor::P6A?AVIterator::?$_Func_impl_no_alloc` : `std::V12::V12::TextEditor::VIterator::?$_Func_base` | 6 |
| `std::Z_NG::P6A_NG::?$_Func_impl_no_alloc` | std::_NG::?$_Func_base | `std::Z_NG::P6A_NG::?$_Func_impl_no_alloc` : `std::_NG::?$_Func_base` | 6 |
| `std::_Generic_error_category` | std::error_category | `std::_Generic_error_category` : `std::error_category` | 6 |
| `std::_Node_assert` | std::_Node_base | `std::_Node_assert` : `std::_Node_base` | 1 |
| `std::_Node_back` | std::_Node_base | `std::_Node_back` : `std::_Node_base` | 1 |
| `std::_Node_base` | — | `std::_Node_base` | 1 |
| `std::_Node_capture` | std::_Node_base | `std::_Node_capture` : `std::_Node_base` | 1 |
| `std::_Node_end_group` | std::_Node_base | `std::_Node_end_group` : `std::_Node_base` | 1 |
| `std::_Node_end_rep` | std::_Node_base | `std::_Node_end_rep` : `std::_Node_base` | 1 |
| `std::_Node_endif` | std::_Node_base | `std::_Node_endif` : `std::_Node_base` | 1 |
| `std::_Node_if` | std::_Node_base | `std::_Node_if` : `std::_Node_base` | 1 |
| `std::_Node_rep` | std::_Node_base | `std::_Node_rep` : `std::_Node_base` | 1 |
| `std::_Root_node` | std::_Node_base | `std::_Root_node` : `std::_Node_base` | 1 |
| `std::_System_error` | std::runtime_error, std::exception | `std::_System_error` : `std::exception`<br>`std::_System_error` : `std::runtime_error` : `std::exception` | 2 |
| `std::_System_error_category` | std::error_category | `std::_System_error_category` : `std::error_category` | 6 |
| `std::bad_alloc` | std::exception | `std::bad_alloc` : `std::exception` | 2 |
| `std::bad_any_cast` | std::bad_cast, std::exception | `std::bad_any_cast` : `std::bad_cast` : `std::exception`<br>`std::bad_any_cast` : `std::exception` | 2 |
| `std::bad_array_new_length` | std::bad_alloc, std::exception | `std::bad_array_new_length` : `std::bad_alloc` : `std::exception`<br>`std::bad_array_new_length` : `std::exception` | 2 |
| `std::bad_cast` | std::exception | `std::bad_cast` : `std::exception` | 2 |
| `std::exception` | — | `std::exception` | 2 |
| `std::filesystem::filesystem_error` | std::system_error, std::_System_error, std::runtime_error, std::exception | `std::filesystem::filesystem_error` : `std::_System_error` : `std::exception`<br>`std::filesystem::filesystem_error` : `std::_System_error` : `std::runtime_error` : `std::exception`<br>`std::filesystem::filesystem_error` : `std::exception`<br>`std::filesystem::filesystem_error` : `std::runtime_error` : `std::exception`<br>`std::filesystem::filesystem_error` : `std::system_error` : `std::_System_error` : `std::exception`<br>`std::filesystem::filesystem_error` : `std::system_error` : `std::_System_error` : `std::runtime_error` : `std::exception`<br>`std::filesystem::filesystem_error` : `std::system_error` : `std::exception`<br>`std::filesystem::filesystem_error` : `std::system_error` : `std::runtime_error` : `std::exception` | 2 |
| `std::invalid_argument` | std::logic_error, std::exception | `std::invalid_argument` : `std::exception`<br>`std::invalid_argument` : `std::logic_error` : `std::exception` | 2 |
| `std::logic_error` | std::exception | `std::logic_error` : `std::exception` | 2 |
| `std::runtime_error` | std::exception | `std::runtime_error` : `std::exception` | 2 |
| `std::std::D::DU?$char_traits::?$basic_filebuf` | std::std::D::DU?$char_traits::?$basic_streambuf | `std::std::D::DU?$char_traits::?$basic_filebuf` : `std::std::D::DU?$char_traits::?$basic_streambuf` | 15 |
| `std::std::D::DU?$char_traits::?$basic_ifstream` | std::std::D::DU?$char_traits::?$basic_istream, std::std::D::DU?$char_traits::?$basic_ios, std::ios_base, std::H::?$_Iosb | `std::std::D::DU?$char_traits::?$basic_ifstream` : `std::H::?$_Iosb`<br>`std::std::D::DU?$char_traits::?$basic_ifstream` : `std::ios_base`<br>`std::std::D::DU?$char_traits::?$basic_ifstream` : `std::std::D::DU?$char_traits::?$basic_ios`<br>`std::std::D::DU?$char_traits::?$basic_ifstream` : `std::std::D::DU?$char_traits::?$basic_istream` | 1 |
| `std::std::D::DU?$char_traits::?$basic_ofstream` | std::std::D::DU?$char_traits::?$basic_ostream, std::std::D::DU?$char_traits::?$basic_ios, std::ios_base, std::H::?$_Iosb | `std::std::D::DU?$char_traits::?$basic_ofstream` : `std::H::?$_Iosb`<br>`std::std::D::DU?$char_traits::?$basic_ofstream` : `std::ios_base`<br>`std::std::D::DU?$char_traits::?$basic_ofstream` : `std::std::D::DU?$char_traits::?$basic_ios`<br>`std::std::D::DU?$char_traits::?$basic_ofstream` : `std::std::D::DU?$char_traits::?$basic_ostream` | 1 |
| `std::std::D::DV?$regex_traits::?$_Node_class` | std::_Node_base | `std::std::D::DV?$regex_traits::?$_Node_class` : `std::_Node_base` | 1 |
| `std::std::filesystem::U_Dir_enum_impl::?$_Ref_count_obj2` | std::_Ref_count_base | `std::std::filesystem::U_Dir_enum_impl::?$_Ref_count_obj2` : `std::_Ref_count_base` | 4 |
| `std::std::std::TextEditor::ULineSection::V?$allocator::TextEditor::ULineSection::V?$vector::?$_Ref_count_obj2` | std::_Ref_count_base | `std::std::std::TextEditor::ULineSection::V?$allocator::TextEditor::ULineSection::V?$vector::?$_Ref_count_obj2` : `std::_Ref_count_base` | 4 |
| `std::system_error` | std::_System_error, std::runtime_error, std::exception | `std::system_error` : `std::_System_error` : `std::exception`<br>`std::system_error` : `std::_System_error` : `std::runtime_error` : `std::exception`<br>`std::system_error` : `std::exception`<br>`std::system_error` : `std::runtime_error` : `std::exception` | 2 |
| `type_info` | — | `type_info` | 2 |
