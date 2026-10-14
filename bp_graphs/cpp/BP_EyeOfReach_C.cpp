// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_EyeOfReach_C::DoFireEffect (1799 bytes)
void BP_EyeOfReach_C::DoFireEffect()
{
    AActor* CallFunc_GetWielder_ReturnValue = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_1DD;
    auto CallFunc_GetIsUnderwater_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->this->GetIsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnEmitterAttachedWithOwner_ReturnValue = UVfxFunctionLibrary::AthenaSpawnEmitterAttachedWithOwner(vfx_picker_sniper_1st_attached_local, FirstPersonMesh, K2Node_DynamicCast_AsAthena_Player_Character, true, true, false, CallFunc_GetIsUnderwater_ReturnValue);
    CallFunc_GetIsUnderwater_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->this->GetIsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnShipRelativeEmitterAtSocketLocation_ReturnValue = UVfxFunctionLibrary::AthenaSpawnShipRelativeEmitterAtSocketLocation(vfx_picker_sniper_1st_notattached, K2Node_DynamicCast_AsAthena_Player_Character, FirstPersonMesh, true, true, false, CallFunc_GetIsUnderwater_ReturnValue);
L_1DD:
    AActor* CallFunc_GetWielder_ReturnValue3 = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character3 = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue3);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character3);
    if (!K2Node_DynamicCast_bSuccess3) goto L_4CF;
    bool CallFunc_IsUnderwater_ReturnValue = IsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnShipRelativeEmitterAtSocketLocation_ReturnValue2 = UVfxFunctionLibrary::AthenaSpawnShipRelativeEmitterAtSocketLocation(vfx_picker_sniper_3rd, K2Node_DynamicCast_AsAthena_Player_Character3, ThirdPersonMesh, true, false, true, CallFunc_IsUnderwater_ReturnValue);
    AActor* CallFunc_GetWielder_ReturnValue2 = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue2);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_5B3;
    bool CallFunc_IsLocallyControlled_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character2->IsLocallyControlled();
    if (!CallFunc_IsLocallyControlled_ReturnValue) goto L_5B3;
    determine sfx relationship(CallFunc_determine_sfx_relationship_relationship2);
    UWwiseObjectPoolWrapper* CallFunc_GetAudioEmitterPool_ReturnValue2 = GetAudioEmitterPool();
    FTransform CallFunc_GetSocketTransform_ReturnValue2 = FirstPersonMesh->GetSocketTransform();
    auto CallFunc_GetSocketLocation_ReturnValue3 = FirstPersonMesh->GetSocketLocation();
    auto CallFunc_TransformDirection_ReturnValue2 = CallFunc_GetSocketTransform_ReturnValue2;
    int CallFunc_WwisePostEventAtLocation_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(CallFunc_WwisePostEventAtLocation_Emitter2, Play_sfx_weapon_eyeofreach_fire, CallFunc_GetSocketLocation_ReturnValue3, CallFunc_TransformDirection_ReturnValue2, CallFunc_GetAudioEmitterPool_ReturnValue2, CallFunc_determine_sfx_relationship_relationship2);
L_4CF:
    FRotator CallFunc_K2_GetComponentRotation_ReturnValue = ThirdPersonMesh->K2_GetComponentRotation();
    auto CallFunc_GetSocketLocation_ReturnValue2 = ThirdPersonMesh->GetSocketLocation();
    CallFunc_IsUnderwater_ReturnValue = IsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnEmitterAtLocation_ReturnValue = UVfxFunctionLibrary::AthenaSpawnEmitterAtLocation(vfx_picker_sniper_3rd, CallFunc_GetSocketLocation_ReturnValue2, CallFunc_K2_GetComponentRotation_ReturnValue, true, CallFunc_IsUnderwater_ReturnValue);
L_5B3:
    determine sfx relationship(CallFunc_determine_sfx_relationship_relationship);
    UWwiseObjectPoolWrapper* CallFunc_GetAudioEmitterPool_ReturnValue = GetAudioEmitterPool();
    auto CallFunc_GetSocketLocation_ReturnValue = ThirdPersonMesh->GetSocketLocation();
    FTransform CallFunc_GetSocketTransform_ReturnValue = ThirdPersonMesh->GetSocketTransform();
    auto CallFunc_TransformDirection_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
    int CallFunc_WwisePostEventAtLocation_ReturnValue = UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(CallFunc_WwisePostEventAtLocation_Emitter, Play_sfx_weapon_eyeofreach_fire, CallFunc_GetSocketLocation_ReturnValue, CallFunc_TransformDirection_ReturnValue, CallFunc_GetAudioEmitterPool_ReturnValue, CallFunc_determine_sfx_relationship_relationship);
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::UserConstructionScript (261 bytes)
void BP_EyeOfReach_C::UserConstructionScript()
{
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(MT_post_scope);
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::OnWeaponFired (22 bytes)
void BP_EyeOfReach_C::OnWeaponFired()
{
    ExecuteUbergraph_BP_EyeOfReach();
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::ScopeOn (22 bytes)
void BP_EyeOfReach_C::ScopeOn()
{
    ExecuteUbergraph_BP_EyeOfReach();
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::ScopeOff (22 bytes)
void BP_EyeOfReach_C::ScopeOff()
{
    ExecuteUbergraph_BP_EyeOfReach();
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::ScopeTick (40 bytes)
void BP_EyeOfReach_C::ScopeTick()
{
    ExecuteUbergraph_BP_EyeOfReach();
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::ScopeOffImmediate (22 bytes)
void BP_EyeOfReach_C::ScopeOffImmediate()
{
    ExecuteUbergraph_BP_EyeOfReach();
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::GlintOn (22 bytes)
void BP_EyeOfReach_C::GlintOn()
{
    ExecuteUbergraph_BP_EyeOfReach();
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::GlintOff (22 bytes)
void BP_EyeOfReach_C::GlintOff()
{
    ExecuteUbergraph_BP_EyeOfReach();
    return;
}

// Recovered Kismet: BP_EyeOfReach_C::ExecuteUbergraph_BP_EyeOfReach (1374 bytes)
void BP_EyeOfReach_C::ExecuteUbergraph_BP_EyeOfReach()
{
    auto PostProcess = PostProcess;
    bool TurningOn = true;
    PostProcess = PostProcess;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    TurningOn = false;
    this->OnWeaponFired();
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_207;
L_207:
    DoFireEffect();
    if (!TurningOn) goto L_55B;
L_22D:
    TScriptInterface<UBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = TScriptInterface<UBlendableInterface>(DynamicMaterial);
    auto CallFunc_SelectFloat_ReturnValue = BlurInDuration;
    auto CallFunc_Divide_FloatFloat_ReturnValue = BlurTime;
    auto CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    if (!CallFunc_GreaterEqual_FloatFloat_ReturnValue) goto L_55B;
    TScriptInterface<UBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject2_CastInput = TScriptInterface<UBlendableInterface>(DynamicMaterial);
    if (!TurningOn) goto L_22D;
    auto CallFunc_Add_FloatFloat_ReturnValue2 = BlurTime;
    auto BlurTime = CallFunc_Add_FloatFloat_ReturnValue2;
    CallFunc_SelectFloat_ReturnValue = BlurInDuration;
    CallFunc_Divide_FloatFloat_ReturnValue = BlurTime;
    float CallFunc_GetFloatValue_ReturnValue = BlurCurve->GetFloatValue(CallFunc_Divide_FloatFloat_ReturnValue);
    auto K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;
    K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;
    PostProcess = PostProcess;
    PostProcess = PostProcess;
L_55B:
    return;
}
