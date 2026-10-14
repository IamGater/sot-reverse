// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HullDamage_C::Initialize Damage Materials (266 bytes)
void BP_HullDamage_C::Initialize Damage Materials()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_3E;
L_3E:
    bool CallFunc_WwiseEmitterSetRTPC_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPC(CannonballHitEmitter, HitStrenght);
    int CallFunc_WwisePostEventAtLocation_ReturnValue = UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(CallFunc_WwisePostEventAtLocation_Emitter, Play_sfx_cannonball_hit, HitLocation, pool_sfx_cannonballs);
    auto CannonballHitEmitter = CallFunc_WwisePostEventAtLocation_Emitter;
    return;
    auto L_HitPosition = HitPosition;
    auto L_HitNormal = HitNormal;
    auto L_HitStrength = HitStrength;
    auto L_HasDecal = HasDecal;
    Get Random Persistent Decal(CallFunc_Get_Random_Persistent_Decal_Decal_Texture);
    auto CallFunc_RandomFloatInRange_ReturnValue2 = Persistent;
    if (!L_HasDecal) goto L_2BE;
    Get Random Deferred Decal(CallFunc_Get_Random_Deferred_Decal_Decal_Material);
    auto CallFunc_Multiply_VectorFloat_ReturnValue = L_HitNormal;
    auto CallFunc_RandomFloatInRange_ReturnValue = Deferred;
    auto CallFunc_MakeRotFromXY_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue;
    UDecalComponent* CallFunc_SpawnDecalAttached_ReturnValue = UGameplayStatics::SpawnDecalAttached(CallFunc_Get_Random_Deferred_Decal_Decal_Material, CallFunc_MakeVector_ReturnValue2, Root, L_HitPosition, CallFunc_MakeRotFromXY_ReturnValue);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_SpawnDecalAttached_ReturnValue->CreateDynamicMaterialInstance();
L_2BE:
    return;
    L_HitPosition = this;
    L_HitNormal = this;
    auto L_HitVelocity = this;
    float CallFunc_CalculateHitStrengthForImpact_ReturnValue = AHullDamage::CalculateHitStrengthForImpact(L_HitNormal, L_HitVelocity, TEST_HitStrength);
    L_HitStrength = CallFunc_CalculateHitStrengthForImpact_ReturnValue;
    bool CallFunc_ShouldHitGenerateDecal_ReturnValue = AHullDamage::ShouldHitGenerateDecal(L_HitNormal, L_HitVelocity, L_HitStrength);
    L_HasDecal = CallFunc_ShouldHitGenerateDecal_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DamageZones);
    auto CallFunc_Clamp_ReturnValue = this;
    TArray<ADamageZone*> CallFunc_GetDamageZonesByDamagerType_ReturnValue = GetDamageZonesByDamagerType(this, L_HitPosition, CallFunc_Clamp_ReturnValue);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageZonesByDamagerType_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    TScriptInterface<UBP_DamageZoneInterface_C> UniqueObjectNameForCooking_AsBP_Damage_Zone_Interface = TScriptInterface<UBP_DamageZoneInterface_C>(CallFunc_Array_Get_Item);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsBP_Damage_Zone_Interface);
    auto CallFunc_FFloor_ReturnValue = this;
    auto CallFunc_GetTransform_ReturnValue = this->GetTransform();
    auto CallFunc_InverseTransformDirection_ReturnValue = CallFunc_GetTransform_ReturnValue;
    auto CallFunc_InverseTransformLocation_ReturnValue = CallFunc_GetTransform_ReturnValue;
    auto K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = Hit;
    auto CallFunc_Normal_ReturnValue = Hit;
    CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Normal_ReturnValue;
    auto CallFunc_Dot_VectorVector_ReturnValue = Hit;
    auto CallFunc_FClamp_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = Hit;
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue2;
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Deferred);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Persistent);
    CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_451;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    StaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component = Cast<StaticMeshComponent*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsStatic_Mesh_Component);
    auto L_CurrentMesh = K2Node_DynamicCast_AsStatic_Mesh_Component;
    bool L_MeshUsesDamage = false;
    int CallFunc_GetNumMaterials_ReturnValue = K2Node_DynamicCast_AsStatic_Mesh_Component->GetNumMaterials();
    CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    if (!CallFunc_LessEqual_IntInt_ReturnValue) goto L_4BD;
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = L_CurrentMesh->GetMaterial(Temp_int_Variable);
    auto L_CurrentMaterial = CallFunc_GetMaterial_ReturnValue;
    CallFunc_GetMaterial_ReturnValue = L_CurrentMesh->GetMaterial(Temp_int_Variable);
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(CallFunc_GetMaterial_ReturnValue);
    int CallFunc_FindSubstring_ReturnValue = UKismetStringLibrary::FindSubstring(CallFunc_GetDisplayName_ReturnValue, false, false);
    auto CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_FindSubstring_ReturnValue;
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(L_CurrentMaterial);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess2) goto L_53B;
    auto L_CurrentDynamicMaterial = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
    UTexture* CallFunc_GetTargetTexture_ReturnValue = ImpactDecalComponent->GetTargetTexture();
    L_MeshUsesDamage = true;
L_451:
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_4BD:
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue2;
L_53B:
    CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(L_CurrentMaterial);
    L_CurrentDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    return;
}

// Recovered Kismet: BP_HullDamage_C::UserConstructionScript (3 bytes)
void BP_HullDamage_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_HullDamage_C::ReceiveBeginPlay (22 bytes)
void BP_HullDamage_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_HullDamage();
    return;
}

// Recovered Kismet: BP_HullDamage_C::BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature (40 bytes)
void BP_HullDamage_C::BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_HullDamage();
    return;
}

// Recovered Kismet: BP_HullDamage_C::ExecuteUbergraph_BP_HullDamage (157 bytes)
void BP_HullDamage_C::ExecuteUbergraph_BP_HullDamage()
{
    Process Hit(K2Node_ComponentBoundEvent_ImpactDamageEvent);
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(StaticMeshComponent);
    Initialize Damage Materials(CallFunc_GetComponentsByClass_ReturnValue);
    return;
}
