// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CharacterVFXComponent_C::GetWindService (221 bytes)
void BP_CharacterVFXComponent_C::GetWindService()
{
    auto CallFunc_GetGameState_ReturnValue = GameplayStatics->this->GetGameState();
    TScriptInterface<UGameServiceProviderInterface> UniqueObjectNameForCooking_AsGame_Service_Provider_Interface = TScriptInterface<UGameServiceProviderInterface>(CallFunc_GetGameState_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsGame_Service_Provider_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_CA;
    auto CallFunc_GetService_ReturnValue = UniqueObjectNameForCooking_AsGame_Service_Provider_Interface->GetService(WindInterface);
L_CA:
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::WindVFX_DebugTick (751 bytes)
void BP_CharacterVFXComponent_C::WindVFX_DebugTick()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(WindVFX);
    if (!CallFunc_IsValid_ReturnValue) goto L_9A;
L_9A:
    auto CallFunc_IsActive_ReturnValue = WindVFX->IsActive();
    if (!CallFunc_IsActive_ReturnValue) goto L_13A;
L_13A:
    if (!DEBUG_WindActive) goto L_19F;
L_19F:
    float CallFunc_GetWorldDeltaSeconds_ReturnValue = UGameplayStatics::GetWorldDeltaSeconds();
    auto CallFunc_Subtract_FloatFloat_ReturnValue = DEBUG_WindToggleTimer;
    auto DEBUG_WindToggleTimer = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = DEBUG_WindToggleTimer;
    if (!CallFunc_LessEqual_FloatFloat_ReturnValue) goto L_2EC;
    if (!DEBUG_WindActive) goto L_2AE;
    bool DEBUG_WindActive = false;
L_2AE:
    DEBUG_WindActive = true;
L_2EC:
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::WindVFX_Destroy (101 bytes)
void BP_CharacterVFXComponent_C::WindVFX_Destroy()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(WindVFX);
    if (!CallFunc_IsValid_ReturnValue) goto L_62;
L_62:
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::WindVFX_Create (507 bytes)
void BP_CharacterVFXComponent_C::WindVFX_Create()
{
    bool CallFunc_WindVFX_CanProcessWind_ReturnValue = UCharacterVfxComponent::WindVFX_CanProcessWind();
    if (!CallFunc_WindVFX_CanProcessWind_ReturnValue) goto L_1F8;
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetOwner_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_1F8;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(WindVFX);
    USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->K2_GetRootComponent();
    UParticleSystemComponent* CallFunc_AthenaSpawnEmitterAttachedWithOwner_ReturnValue = UVfxFunctionLibrary::AthenaSpawnEmitterAttachedWithOwner(vfx_wind_ship, CallFunc_K2_GetRootComponent_ReturnValue, K2Node_DynamicCast_AsAthena_Player_Character, WindOffsetFromShip, false, true, false, false);
    auto WindVFX = CallFunc_AthenaSpawnEmitterAttachedWithOwner_ReturnValue;
    WindVFX_Deactivate();
L_1F8:
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::Play Foot Splash (106 bytes)
void BP_CharacterVFXComponent_C::Play Foot Splash()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(WindVFX);
    if (!CallFunc_IsValid_ReturnValue) goto L_67;
L_67:
    return;
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    AthenaCharacter* K2Node_DynamicCast_AsAthena_Character = Cast<AthenaCharacter*>(CallFunc_GetOwner_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_192;
    if (!Event) goto L_130;
    CallFunc_GetOwner_ReturnValue = this->GetOwner();
    UParticleSystemComponent* CallFunc_AthenaSpawnEmitterAttachedWithOwner_ReturnValue = UVfxFunctionLibrary::AthenaSpawnEmitterAttachedWithOwner(vfx_bubbles_underwater_ambient_player_1st, K2Node_DynamicCast_AsAthena_Character, CallFunc_GetOwner_ReturnValue, true, true, false, true);
    auto vfx_player_underwater_ambient = CallFunc_AthenaSpawnEmitterAttachedWithOwner_ReturnValue;
L_130:
    CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(vfx_player_underwater_ambient);
    if (!CallFunc_IsValid_ReturnValue) goto L_192;
L_192:
    return;
    auto CallFunc_GetOwner_ReturnValue2 = this->GetOwner();
    K2Node_DynamicCast_AsAthena_Character = Cast<AthenaCharacter*>(CallFunc_GetOwner_ReturnValue2);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_270;
    auto CallFunc_HasValidWaterHeight_ReturnValue = K2Node_DynamicCast_AsAthena_Character->HasValidWaterHeight();
    if (!CallFunc_HasValidWaterHeight_ReturnValue) goto L_270;
    CallFunc_GetOwner_ReturnValue = this->GetOwner();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_GetOwner_ReturnValue->K2_GetActorLocation();
    auto CallFunc_GetWaterHeight_ReturnValue = K2Node_DynamicCast_AsAthena_Character->GetWaterHeight();
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    UParticleSystemComponent* CallFunc_SelectSpawnVfx_ReturnValue = UVfxSelectorFunctionLibrary::SelectSpawnVfx(K2Node_DynamicCast_AsAthena_Character, PlayerImpactWaterSplashVfxSelector, FallingSpeed, CallFunc_MakeVector_ReturnValue, true, false, true, false);
    UParticleSystemComponent* CallFunc_SelectSpawnVfxAttachedWithOwner_ReturnValue = UVfxSelectorFunctionLibrary::SelectSpawnVfxAttachedWithOwner(PlayerImpactWaterSplashUnderwaterVfxSelector, FallingSpeed, K2Node_DynamicCast_AsAthena_Character, K2Node_DynamicCast_AsAthena_Character, true, false, false, true);
L_270:
    return;
    bool CallFunc_IsFeatureEnabled_ReturnValue = UFeatureConfigBlueprintFunctionLibrary::IsFeatureEnabled();
    if (!CallFunc_IsFeatureEnabled_ReturnValue) goto L_2CD;
    CallFunc_GetOwner_ReturnValue = this->GetOwner();
    K2Node_DynamicCast_AsAthena_Character = Cast<AthenaCharacter*>(CallFunc_GetOwner_ReturnValue);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_2CD;
    bool CallFunc_IsSwimming_ReturnValue = K2Node_DynamicCast_AsAthena_Character->IsSwimming();
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_IsSwimming_ReturnValue;
    bool CallFunc_IsFalling_ReturnValue = K2Node_DynamicCast_AsAthena_Character->IsFalling();
    auto CallFunc_Not_PreBool_ReturnValue2 = CallFunc_IsFalling_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_2CD;
    CallFunc_GetOwner_ReturnValue2 = this->GetOwner();
    auto CallFunc_GetVelocity_ReturnValue = CallFunc_GetOwner_ReturnValue2->GetVelocity();
    CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    auto CallFunc_VSize_ReturnValue = CallFunc_MakeVector_ReturnValue;
    CallFunc_SelectSpawnVfx_ReturnValue = UVfxSelectorFunctionLibrary::SelectSpawnVfx(K2Node_DynamicCast_AsAthena_Character, PlayerFootWaterSplashVfxSelector, CallFunc_VSize_ReturnValue, Location, true, false, false, false);
L_2CD:
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::ReceiveEndPlay (40 bytes)
void BP_CharacterVFXComponent_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_CharacterVFXComponent();
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::ReceiveBeginPlay (22 bytes)
void BP_CharacterVFXComponent_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_CharacterVFXComponent();
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::PlayerViewUnderWaterEvent (40 bytes)
void BP_CharacterVFXComponent_C::PlayerViewUnderWaterEvent()
{
    ExecuteUbergraph_BP_CharacterVFXComponent();
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::FallingIntoWaterEvent (40 bytes)
void BP_CharacterVFXComponent_C::FallingIntoWaterEvent()
{
    ExecuteUbergraph_BP_CharacterVFXComponent();
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::WaterStateChanged (40 bytes)
void BP_CharacterVFXComponent_C::WaterStateChanged()
{
    ExecuteUbergraph_BP_CharacterVFXComponent();
    return;
    ExecuteUbergraph_BP_CharacterVFXComponent();
    return;
}

// Recovered Kismet: BP_CharacterVFXComponent_C::ExecuteUbergraph_BP_CharacterVFXComponent (2186 bytes)
void BP_CharacterVFXComponent_C::ExecuteUbergraph_BP_CharacterVFXComponent()
{
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue);
L_8B:
    WindVFX_Destroy();
    bool CallFunc_IsHandleRegistered_ReturnValue7 = UObjectMessagingFunctions::IsHandleRegistered(WindDirectionChangedHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue7) goto L_887;
    GetWindService(CallFunc_GetWindService_WindInterface);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue7 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetWindService_WindInterface);
    auto CallFunc_GetOwner_ReturnValue2 = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue2);
L_1E4:
    bool CallFunc_IsHandleRegistered_ReturnValue5 = UObjectMessagingFunctions::IsHandleRegistered(ExitShipEventHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue5) goto L_8B;
    auto CallFunc_GetOwner_ReturnValue3 = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue3 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue3);
L_2AB:
    bool CallFunc_IsHandleRegistered_ReturnValue6 = UObjectMessagingFunctions::IsHandleRegistered(EnterShipEventHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue6) goto L_1E4;
    auto CallFunc_GetOwner_ReturnValue4 = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue4 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue4);
L_372:
    bool CallFunc_IsHandleRegistered_ReturnValue3 = UObjectMessagingFunctions::IsHandleRegistered(PlayerViewUnderWaterHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue3) goto L_2AB;
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_3F6;
L_3F6:
    auto CallFunc_GetOwner_ReturnValue7 = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue10 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue7);
    CallFunc_GetOwner_ReturnValue7 = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue9 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue7);
    CallFunc_GetOwner_ReturnValue7 = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue8 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue7);
    WindVFX_Create();
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(EnterWaterEvent);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_702;
    auto CallFunc_GetOwner_ReturnValue6 = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue6 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue6);
L_702:
    bool CallFunc_IsHandleRegistered_ReturnValue2 = UObjectMessagingFunctions::IsHandleRegistered(UnderwaterStateChanged);
    if (!CallFunc_IsHandleRegistered_ReturnValue2) goto L_7C4;
    auto CallFunc_GetOwner_ReturnValue5 = this->GetOwner();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue5 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwner_ReturnValue5);
L_7C4:
    bool CallFunc_IsHandleRegistered_ReturnValue4 = UObjectMessagingFunctions::IsHandleRegistered(FallingIntoWaterHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue4) goto L_372;
    Play View Under Water FX(K2Node_CustomEvent_Event2);
    Play Falling Splash(K2Node_CustomEvent_Event);
    Play Foot Splash(K2Node_CustomEvent_Enter_Water);
L_887:
    return;
}
