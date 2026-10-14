// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::GetShroudBreakerObjectEmitterComponent (30 bytes)
void BP_Shroudbreaker_OnShip_C::GetShroudBreakerObjectEmitterComponent()
{
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::GetShipHullAudio (456 bytes)
void BP_Shroudbreaker_OnShip_C::GetShipHullAudio()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(ShipHullAudio);
    if (!CallFunc_IsValid_ReturnValue) goto L_59;
L_59:
    AActor* CallFunc_GetParentActor_ReturnValue = AActor::GetParentActor();
    TArray<AActor*> CallFunc_FindChildActorsByClass_ReturnValue = UActorFunctionLibrary::FindChildActorsByClass(CallFunc_GetParentActor_ReturnValue, ShipHullAudio);
    ShipHullAudio* K2Node_DynamicCast_AsShip_Hull_Audio = Cast<ShipHullAudio*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsShip_Hull_Audio);
    if (!K2Node_DynamicCast_bSuccess) goto L_14F;
    auto ShipHullAudioReturn = K2Node_DynamicCast_AsShip_Hull_Audio;
L_14F:
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerDeactivate (17 bytes)
void BP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerDeactivate()
{
    OnRepFunctionDeactivateShroudBreaker();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerEffectsActive (1015 bytes)
void BP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerEffectsActive()
{
    if (!ShroudBreakerEffectsActive) goto L_1D;
    AShroudBreakerOnShip::ActivateShroudBreakerCalculationsOnShip();
L_1D:
    AShroudBreakerOnShip::DeactivateShroudBreakerCalculationsOnShip();
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor3 = UniqueObjectNameForCooking_LinearColor3;
    UniqueObjectNameForCooking_LinearColor3 = UniqueObjectNameForCooking_LinearColor3;
    UniqueObjectNameForCooking_LinearColor3 = UniqueObjectNameForCooking_LinearColor3;
    UniqueObjectNameForCooking_LinearColor3 = UniqueObjectNameForCooking_LinearColor3;
    CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor2 = UniqueObjectNameForCooking_LinearColor2;
    UniqueObjectNameForCooking_LinearColor2 = UniqueObjectNameForCooking_LinearColor2;
    UniqueObjectNameForCooking_LinearColor2 = UniqueObjectNameForCooking_LinearColor2;
    UniqueObjectNameForCooking_LinearColor2 = UniqueObjectNameForCooking_LinearColor2;
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnRep_MusicZoneActive (86 bytes)
void BP_Shroudbreaker_OnShip_C::OnRep_MusicZoneActive()
{
    if (!MusicZoneActive) goto L_33;
L_33:
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::UnregisterShipEvent (118 bytes)
void BP_Shroudbreaker_OnShip_C::UnregisterShipEvent()
{
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered();
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_73;
L_73:
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::GetObjMsgDispatcher (401 bytes)
void BP_Shroudbreaker_OnShip_C::GetObjMsgDispatcher()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(ParentShipActor);
    if (!CallFunc_IsValid_ReturnValue) goto L_E2;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(ParentShipActor);
    bool CallFunc_IsObjectMessagingDispatcherValid_ReturnValue = UObjectMessagingFunctions::IsObjectMessagingDispatcherValid(CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue);
L_E2:
    AActor* CallFunc_GetParentActor_ReturnValue = AActor::GetParentActor();
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_GetParentActor_ReturnValue);
    if (!CallFunc_IsValid_ReturnValue2) goto L_163;
    CallFunc_GetParentActor_ReturnValue = AActor::GetParentActor();
    auto ParentShipActor = CallFunc_GetParentActor_ReturnValue;
L_163:
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::UserConstructionScript (3 bytes)
void BP_Shroudbreaker_OnShip_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::ReceiveBeginPlay (22 bytes)
void BP_Shroudbreaker_OnShip_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::ReceiveEndPlay (40 bytes)
void BP_Shroudbreaker_OnShip_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnShroudbreakerActivated (40 bytes)
void BP_Shroudbreaker_OnShip_C::OnShroudbreakerActivated()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnShroudbreakerDeactivated (40 bytes)
void BP_Shroudbreaker_OnShip_C::OnShroudbreakerDeactivated()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnShipDestroyed (40 bytes)
void BP_Shroudbreaker_OnShip_C::OnShipDestroyed()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnActivateEffects (40 bytes)
void BP_Shroudbreaker_OnShip_C::OnActivateEffects()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnDeactivateEffects (40 bytes)
void BP_Shroudbreaker_OnShip_C::OnDeactivateEffects()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::PlayerEnteredTP (40 bytes)
void BP_Shroudbreaker_OnShip_C::PlayerEnteredTP()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::PlayerLeftTP (40 bytes)
void BP_Shroudbreaker_OnShip_C::PlayerLeftTP()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnRepFunctionDeactivateShroudBreaker (22 bytes)
void BP_Shroudbreaker_OnShip_C::OnRepFunctionDeactivateShroudBreaker()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::OnShroudBreakerActivationStateChange (22 bytes)
void BP_Shroudbreaker_OnShip_C::OnShroudBreakerActivationStateChange()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::Stage1Activation (22 bytes)
void BP_Shroudbreaker_OnShip_C::Stage1Activation()
{
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
    ExecuteUbergraph_BP_Shroudbreaker_OnShip();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_OnShip_C::ExecuteUbergraph_BP_Shroudbreaker_OnShip (11854 bytes)
void BP_Shroudbreaker_OnShip_C::ExecuteUbergraph_BP_Shroudbreaker_OnShip()
{
    OnRep_MusicZoneActive();
    auto CallFunc_FlushNetDormancy_ReturnValue3 = this->FlushNetDormancy();
    bool ShroudBreakerEffectsActive = true;
    OnRep_ShroudBreakerEffectsActive();
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    bool MusicZoneActive = true;
    OnRep_MusicZoneActive();
    auto CallFunc_FlushNetDormancy_ReturnValue4 = this->FlushNetDormancy();
    ShroudBreakerEffectsActive = false;
    OnRep_ShroudBreakerEffectsActive();
    auto CallFunc_FlushNetDormancy_ReturnValue2 = this->FlushNetDormancy();
    MusicZoneActive = false;
    OnRep_ShroudBreakerDeactivate();
    auto CallFunc_FlushNetDormancy_ReturnValue5 = this->FlushNetDormancy();
    bool ShroudBreakerDeactivate = true;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, Play_sfx_interact_shroudbreaker_destroyed);
    SetActorHiddenInGame(true);
    GetShipHullAudio(CallFunc_GetShipHullAudio_ShipHullAudioRef);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_GetShipHullAudio_ShipHullAudioRef);
    OnRep_ShroudBreakerDeactivate();
    auto CallFunc_FlushNetDormancy_ReturnValue6 = this->FlushNetDormancy();
    ShroudBreakerDeactivate = false;
    float CallFunc_GetGameTimeInSeconds_ReturnValue6 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor10 = UniqueObjectNameForCooking_LinearColor10;
    UniqueObjectNameForCooking_LinearColor10 = UniqueObjectNameForCooking_LinearColor10;
    UniqueObjectNameForCooking_LinearColor10 = UniqueObjectNameForCooking_LinearColor10;
    UniqueObjectNameForCooking_LinearColor10 = UniqueObjectNameForCooking_LinearColor10;
    float CallFunc_GetGameTimeInSeconds_ReturnValue4 = UKismetSystemLibrary::GetGameTimeInSeconds();
    GetShipHullAudio(CallFunc_GetShipHullAudio_ShipHullAudioRef2);
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(CallFunc_GetShipHullAudio_ShipHullAudioRef2);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue5 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, Play_sfx_shroudbreaker_illuminate_level4);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, Play_mus_tt_v01_t09_break_shroud_jewel_04);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue6 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, Play_sfx_shroudbreaker_illuminate_level3);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, Play_mus_tt_v01_t09_break_shroud_jewel_03);
    GetShipHullAudio(CallFunc_GetShipHullAudio_ShipHullAudioRef3);
    auto CallFunc_IsValid_ReturnValue4 = KismetSystemLibrary->this->IsValid(CallFunc_GetShipHullAudio_ShipHullAudioRef3);
    auto UniqueObjectNameForCooking_LinearColor4 = UniqueObjectNameForCooking_LinearColor4;
    UniqueObjectNameForCooking_LinearColor4 = UniqueObjectNameForCooking_LinearColor4;
    UniqueObjectNameForCooking_LinearColor4 = UniqueObjectNameForCooking_LinearColor4;
    UniqueObjectNameForCooking_LinearColor4 = UniqueObjectNameForCooking_LinearColor4;
    auto UniqueObjectNameForCooking_LinearColor5 = UniqueObjectNameForCooking_LinearColor5;
    UniqueObjectNameForCooking_LinearColor5 = UniqueObjectNameForCooking_LinearColor5;
    UniqueObjectNameForCooking_LinearColor5 = UniqueObjectNameForCooking_LinearColor5;
    UniqueObjectNameForCooking_LinearColor5 = UniqueObjectNameForCooking_LinearColor5;
    GetObjMsgDispatcher(CallFunc_GetObjMsgDispatcher_Dispatcher, CallFunc_GetObjMsgDispatcher_Success);
    UnregisterShipEvent(CallFunc_GetObjMsgDispatcher_Dispatcher, ActivateShroudbreakerHandle);
    UnregisterShipEvent(CallFunc_GetObjMsgDispatcher_Dispatcher, DeactivateShroudbreakerHandle);
    UnregisterShipEvent(CallFunc_GetObjMsgDispatcher_Dispatcher, ShipDestroyedHandle);
    UnregisterShipEvent(CallFunc_GetObjMsgDispatcher_Dispatcher, ActivateEffectsHandle);
    UnregisterShipEvent(CallFunc_GetObjMsgDispatcher_Dispatcher, DeactivateEffectsHandle);
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    auto CallFunc_GetGameState_ReturnValue4 = GameplayStatics->this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue4);
    bool CallFunc_IsHandleRegistered_ReturnValue2 = UObjectMessagingFunctions::IsHandleRegistered(PlayerEnteredIslandVincityEventHandle);
    bool CallFunc_IsHandleRegistered_ReturnValue3 = UObjectMessagingFunctions::IsHandleRegistered(PlayerLeftIslandVincityEventHandle);
    GetObjMsgDispatcher(CallFunc_GetObjMsgDispatcher_Dispatcher2, CallFunc_GetObjMsgDispatcher_Success2);
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    auto CallFunc_GetGameState_ReturnValue = GameplayStatics->this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(PlayerEnteredIslandVincityEventHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_108A;
L_108A:
    bool CallFunc_IsHandleRegistered_ReturnValue4 = UObjectMessagingFunctions::IsHandleRegistered(PlayerLeftIslandVincityEventHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue4) goto L_1119;
L_1119:
    AActor* CallFunc_GetParentActor_ReturnValue = AActor::GetParentActor();
    FTransform CallFunc_GetTransformOfActorRelativeToAnother_ReturnValue = UActorFunctionLibrary::GetTransformOfActorRelativeToAnother(CallFunc_GetParentActor_ReturnValue);
    auto CallFunc_InvertTransform_ReturnValue = CallFunc_GetTransformOfActorRelativeToAnother_ReturnValue;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = ShieldPulseMesh->CreateDynamicMaterialInstance();
    auto ShieldPulseMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = ShieldMesh->CreateDynamicMaterialInstance();
    auto ShieldMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = StaticMesh->CreateDynamicMaterialInstance(gmp_tal_shroudbreaker_statue_01_a);
    auto Shroudbreaker = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    auto CallFunc_EqualEqual_NameName_ReturnValue = K2Node_CustomEvent_Ev2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(ShipProgressSpawnLoactionsAssetID);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1641;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    ProgressShipSpawnLocation* UniqueObjectNameForCooking_AsProgress_Ship_Spawn_Location = Cast<ProgressShipSpawnLocation*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsProgress_Ship_Spawn_Location);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(UniqueObjectNameForCooking_AsProgress_Ship_Spawn_Location);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    UniqueObjectNameForCooking_AsProgress_Ship_Spawn_Location = Cast<ProgressShipSpawnLocation*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsProgress_Ship_Spawn_Location);
    int CallFunc_Array_AddUnique_ReturnValue = UKismetArrayLibrary::Array_AddUnique(ShipProgressSpawnLocationsReference, UniqueObjectNameForCooking_AsProgress_Ship_Spawn_Location);
L_1641:
    auto CallFunc_GetGameState_ReturnValue2 = GameplayStatics->this->GetGameState();
    FGuid CallFunc_GetCrewIdFromActor_ReturnValue = UCrewFunctions::GetCrewIdFromActor(CallFunc_GetGameState_ReturnValue2, K2Node_CustomEvent_Ev2);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_EqualEqual_NameName_ReturnValue2 = K2Node_CustomEvent_Ev;
    auto CallFunc_GetGameState_ReturnValue3 = GameplayStatics->this->GetGameState();
    FGuid CallFunc_GetCrewIdFromActor_ReturnValue2 = UCrewFunctions::GetCrewIdFromActor(CallFunc_GetGameState_ReturnValue3, K2Node_CustomEvent_Ev);
    if (!ShroudBreakerDeactivate) goto L_1932;
    auto UniqueObjectNameForCooking_LinearColor14 = UniqueObjectNameForCooking_LinearColor14;
    UniqueObjectNameForCooking_LinearColor14 = UniqueObjectNameForCooking_LinearColor14;
    UniqueObjectNameForCooking_LinearColor14 = UniqueObjectNameForCooking_LinearColor14;
    UniqueObjectNameForCooking_LinearColor14 = UniqueObjectNameForCooking_LinearColor14;
    AShroudBreakerOnShip::DeactivateShroudBreakerCalculationsOnShip();
L_1932:
    AShroudBreakerOnShip::ActivateShroudBreakerCalculationsOnShip();
    SetActorHiddenInGame(false);
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor2 = UniqueObjectNameForCooking_LinearColor2;
    UniqueObjectNameForCooking_LinearColor2 = UniqueObjectNameForCooking_LinearColor2;
    UniqueObjectNameForCooking_LinearColor2 = UniqueObjectNameForCooking_LinearColor2;
    UniqueObjectNameForCooking_LinearColor2 = UniqueObjectNameForCooking_LinearColor2;
    auto UniqueObjectNameForCooking_LinearColor17 = UniqueObjectNameForCooking_LinearColor17;
    UniqueObjectNameForCooking_LinearColor17 = UniqueObjectNameForCooking_LinearColor17;
    UniqueObjectNameForCooking_LinearColor17 = UniqueObjectNameForCooking_LinearColor17;
    UniqueObjectNameForCooking_LinearColor17 = UniqueObjectNameForCooking_LinearColor17;
    auto UniqueObjectNameForCooking_LinearColor16 = UniqueObjectNameForCooking_LinearColor16;
    UniqueObjectNameForCooking_LinearColor16 = UniqueObjectNameForCooking_LinearColor16;
    UniqueObjectNameForCooking_LinearColor16 = UniqueObjectNameForCooking_LinearColor16;
    UniqueObjectNameForCooking_LinearColor16 = UniqueObjectNameForCooking_LinearColor16;
    auto UniqueObjectNameForCooking_LinearColor15 = UniqueObjectNameForCooking_LinearColor15;
    UniqueObjectNameForCooking_LinearColor15 = UniqueObjectNameForCooking_LinearColor15;
    UniqueObjectNameForCooking_LinearColor15 = UniqueObjectNameForCooking_LinearColor15;
    UniqueObjectNameForCooking_LinearColor15 = UniqueObjectNameForCooking_LinearColor15;
    float CallFunc_GetGameTimeInSeconds_ReturnValue3 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_SwitchEnum_CmpSuccess = ShroudBreakerActivationState;
    K2Node_SwitchEnum_CmpSuccess = ShroudBreakerActivationState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1DDF;
    K2Node_SwitchEnum_CmpSuccess = ShroudBreakerActivationState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1DD0;
    K2Node_SwitchEnum_CmpSuccess = ShroudBreakerActivationState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1E18;
    K2Node_SwitchEnum_CmpSuccess = ShroudBreakerActivationState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1E27;
L_1DD0:
    Deactivation Stage 2();
L_1DDF:
    Stage1Activation();
    Stage 2 Activation();
    Stage 3 Activation();
    Deactivation Stage 1();
L_1E18:
    Deactivation Stage 3();
L_1E27:
    Deactivation Stage 4();
    auto K2Node_SwitchEnum2_CmpSuccess = ShroudBreakerActivationState;
    K2Node_SwitchEnum2_CmpSuccess = ShroudBreakerActivationState;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_1F41;
    K2Node_SwitchEnum2_CmpSuccess = ShroudBreakerActivationState;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_1F32;
    K2Node_SwitchEnum2_CmpSuccess = ShroudBreakerActivationState;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_1F23;
    K2Node_SwitchEnum2_CmpSuccess = ShroudBreakerActivationState;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_1F14;
L_1F14:
    Stage 4 Activation();
L_1F23:
    Stage 3 Activation();
L_1F32:
    Stage 2 Activation();
L_1F41:
    Stage1Activation();
    auto K2Node_SwitchEnum3_CmpSuccess = TargetSafeZone;
    K2Node_SwitchEnum3_CmpSuccess = TargetSafeZone;
    if (!K2Node_SwitchEnum3_CmpSuccess) goto L_2044;
    K2Node_SwitchEnum3_CmpSuccess = TargetSafeZone;
    if (!K2Node_SwitchEnum3_CmpSuccess) goto L_1FD4;
L_1FD4:
L_2044:
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, ShroudBreakerAmbientLoopingWwiseEvent);
    auto UniqueObjectNameForCooking_LinearColor7 = UniqueObjectNameForCooking_LinearColor7;
    UniqueObjectNameForCooking_LinearColor7 = UniqueObjectNameForCooking_LinearColor7;
    UniqueObjectNameForCooking_LinearColor7 = UniqueObjectNameForCooking_LinearColor7;
    UniqueObjectNameForCooking_LinearColor7 = UniqueObjectNameForCooking_LinearColor7;
    float CallFunc_GetGameTimeInSeconds_ReturnValue7 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor12 = UniqueObjectNameForCooking_LinearColor12;
    UniqueObjectNameForCooking_LinearColor12 = UniqueObjectNameForCooking_LinearColor12;
    UniqueObjectNameForCooking_LinearColor12 = UniqueObjectNameForCooking_LinearColor12;
    UniqueObjectNameForCooking_LinearColor12 = UniqueObjectNameForCooking_LinearColor12;
    CallFunc_GetGameTimeInSeconds_ReturnValue7 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor11 = UniqueObjectNameForCooking_LinearColor11;
    UniqueObjectNameForCooking_LinearColor11 = UniqueObjectNameForCooking_LinearColor11;
    UniqueObjectNameForCooking_LinearColor11 = UniqueObjectNameForCooking_LinearColor11;
    UniqueObjectNameForCooking_LinearColor11 = UniqueObjectNameForCooking_LinearColor11;
    int CallFunc_WwiseEmitterPostEvent_ReturnValue8 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, Play_sfx_shroudbreaker_illuminate_level1);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue4 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, Play_mus_tt_v01_t09_break_shroud_jewel_01);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue3 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, Play_mus_tt_v01_t09_break_shroud_jewel_02);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue7 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, Play_sfx_shroudbreaker_illuminate_level2);
    float CallFunc_GetGameTimeInSeconds_ReturnValue5 = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_GetGameTimeInSeconds_ReturnValue5 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue5;
    auto UniqueObjectNameForCooking_LinearColor9 = UniqueObjectNameForCooking_LinearColor9;
    UniqueObjectNameForCooking_LinearColor9 = UniqueObjectNameForCooking_LinearColor9;
    UniqueObjectNameForCooking_LinearColor9 = UniqueObjectNameForCooking_LinearColor9;
    UniqueObjectNameForCooking_LinearColor9 = UniqueObjectNameForCooking_LinearColor9;
    auto UniqueObjectNameForCooking_LinearColor8 = UniqueObjectNameForCooking_LinearColor8;
    UniqueObjectNameForCooking_LinearColor8 = UniqueObjectNameForCooking_LinearColor8;
    UniqueObjectNameForCooking_LinearColor8 = UniqueObjectNameForCooking_LinearColor8;
    UniqueObjectNameForCooking_LinearColor8 = UniqueObjectNameForCooking_LinearColor8;
    auto UniqueObjectNameForCooking_LinearColor13 = UniqueObjectNameForCooking_LinearColor13;
    UniqueObjectNameForCooking_LinearColor13 = UniqueObjectNameForCooking_LinearColor13;
    UniqueObjectNameForCooking_LinearColor13 = UniqueObjectNameForCooking_LinearColor13;
    UniqueObjectNameForCooking_LinearColor13 = UniqueObjectNameForCooking_LinearColor13;
    auto UniqueObjectNameForCooking_LinearColor6 = UniqueObjectNameForCooking_LinearColor6;
    UniqueObjectNameForCooking_LinearColor6 = UniqueObjectNameForCooking_LinearColor6;
    UniqueObjectNameForCooking_LinearColor6 = UniqueObjectNameForCooking_LinearColor6;
    UniqueObjectNameForCooking_LinearColor6 = UniqueObjectNameForCooking_LinearColor6;
    auto UniqueObjectNameForCooking_LinearColor3 = UniqueObjectNameForCooking_LinearColor3;
    UniqueObjectNameForCooking_LinearColor3 = UniqueObjectNameForCooking_LinearColor3;
    UniqueObjectNameForCooking_LinearColor3 = UniqueObjectNameForCooking_LinearColor3;
    UniqueObjectNameForCooking_LinearColor3 = UniqueObjectNameForCooking_LinearColor3;
    Deactivation Stage 4();
    Deactivation Stage 3();
    Deactivation Stage 2();
    Deactivation Stage 1();
    bool CallFunc_WwiseEmitterStop_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterStop(WwiseEmitter);
    float CallFunc_GetGameTimeInSeconds_ReturnValue8 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto UniqueObjectNameForCooking_LinearColor18 = UniqueObjectNameForCooking_LinearColor18;
    UniqueObjectNameForCooking_LinearColor18 = UniqueObjectNameForCooking_LinearColor18;
    UniqueObjectNameForCooking_LinearColor18 = UniqueObjectNameForCooking_LinearColor18;
    UniqueObjectNameForCooking_LinearColor18 = UniqueObjectNameForCooking_LinearColor18;
    return;
}
