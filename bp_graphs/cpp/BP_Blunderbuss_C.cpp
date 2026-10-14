// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Blunderbuss_C::determine sfx relationship (126 bytes)
void BP_Blunderbuss_C::determine sfx relationship()
{
    auto CallFunc_Conv_BoolToFloat_ReturnValue = IsOn;
    TScriptInterface<UBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = TScriptInterface<UBlendableInterface>(DynamicMaterial);
    return;
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetOwner_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_D3;
    bool CallFunc_IsLocallyControlled_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->IsLocallyControlled();
    if (!CallFunc_IsLocallyControlled_ReturnValue) goto L_EC;
L_D3:
L_EC:
    return;
}

// Recovered Kismet: BP_Blunderbuss_C::DoFireEffect (1799 bytes)
void BP_Blunderbuss_C::DoFireEffect()
{
    AActor* CallFunc_GetWielder_ReturnValue = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_1DD;
    auto CallFunc_GetIsUnderwater_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->this->GetIsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnEmitterAttachedWithOwner_ReturnValue = UVfxFunctionLibrary::AthenaSpawnEmitterAttachedWithOwner(vfx_picker_blunderbuss_1st_attached_local, FirstPersonMesh, K2Node_DynamicCast_AsAthena_Player_Character, true, true, false, CallFunc_GetIsUnderwater_ReturnValue);
    CallFunc_GetIsUnderwater_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->this->GetIsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnShipRelativeEmitterAtSocketLocation_ReturnValue = UVfxFunctionLibrary::AthenaSpawnShipRelativeEmitterAtSocketLocation(vfx_picker_blunderbuss_1st_notattached, K2Node_DynamicCast_AsAthena_Player_Character, FirstPersonMesh, true, true, false, CallFunc_GetIsUnderwater_ReturnValue);
L_1DD:
    AActor* CallFunc_GetWielder_ReturnValue3 = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character3 = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue3);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character3);
    if (!K2Node_DynamicCast_bSuccess3) goto L_4CF;
    bool CallFunc_IsUnderwater_ReturnValue = IsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnShipRelativeEmitterAtSocketLocation_ReturnValue2 = UVfxFunctionLibrary::AthenaSpawnShipRelativeEmitterAtSocketLocation(vfx_picker_blunderbuss_3rd, K2Node_DynamicCast_AsAthena_Player_Character3, ThirdPersonMesh, true, false, true, CallFunc_IsUnderwater_ReturnValue);
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
    int CallFunc_WwisePostEventAtLocation_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(CallFunc_WwisePostEventAtLocation_Emitter2, Play_sfx_weapon_blunderbuss_fire, CallFunc_GetSocketLocation_ReturnValue3, CallFunc_TransformDirection_ReturnValue2, CallFunc_GetAudioEmitterPool_ReturnValue2, CallFunc_determine_sfx_relationship_relationship2);
L_4CF:
    FRotator CallFunc_K2_GetComponentRotation_ReturnValue = ThirdPersonMesh->K2_GetComponentRotation();
    auto CallFunc_GetSocketLocation_ReturnValue2 = ThirdPersonMesh->GetSocketLocation();
    CallFunc_IsUnderwater_ReturnValue = IsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnEmitterAtLocation_ReturnValue = UVfxFunctionLibrary::AthenaSpawnEmitterAtLocation(vfx_picker_blunderbuss_3rd, CallFunc_GetSocketLocation_ReturnValue2, CallFunc_K2_GetComponentRotation_ReturnValue, true, CallFunc_IsUnderwater_ReturnValue);
L_5B3:
    determine sfx relationship(CallFunc_determine_sfx_relationship_relationship);
    UWwiseObjectPoolWrapper* CallFunc_GetAudioEmitterPool_ReturnValue = GetAudioEmitterPool();
    auto CallFunc_GetSocketLocation_ReturnValue = ThirdPersonMesh->GetSocketLocation();
    FTransform CallFunc_GetSocketTransform_ReturnValue = ThirdPersonMesh->GetSocketTransform();
    auto CallFunc_TransformDirection_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
    int CallFunc_WwisePostEventAtLocation_ReturnValue = UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(CallFunc_WwisePostEventAtLocation_Emitter, Play_sfx_weapon_blunderbuss_fire, CallFunc_GetSocketLocation_ReturnValue, CallFunc_TransformDirection_ReturnValue, CallFunc_GetAudioEmitterPool_ReturnValue, CallFunc_determine_sfx_relationship_relationship);
    return;
}

// Recovered Kismet: BP_Blunderbuss_C::UserConstructionScript (74 bytes)
void BP_Blunderbuss_C::UserConstructionScript()
{
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(M_post_radialblur);
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    return;
}

// Recovered Kismet: BP_Blunderbuss_C::OnWeaponFired (22 bytes)
void BP_Blunderbuss_C::OnWeaponFired()
{
    ExecuteUbergraph_BP_Blunderbuss();
    return;
}

// Recovered Kismet: BP_Blunderbuss_C::RadialBlurOn (22 bytes)
void BP_Blunderbuss_C::RadialBlurOn()
{
    ExecuteUbergraph_BP_Blunderbuss();
    return;
}

// Recovered Kismet: BP_Blunderbuss_C::RadialBlurOff (22 bytes)
void BP_Blunderbuss_C::RadialBlurOff()
{
    ExecuteUbergraph_BP_Blunderbuss();
    return;
}

// Recovered Kismet: BP_Blunderbuss_C::ExecuteUbergraph_BP_Blunderbuss (154 bytes)
void BP_Blunderbuss_C::ExecuteUbergraph_BP_Blunderbuss()
{
    SetScopeEffectOn(false);
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_5C;
L_5C:
    DoFireEffect();
    this->OnWeaponFired();
    SetScopeEffectOn(true);
    return;
}
