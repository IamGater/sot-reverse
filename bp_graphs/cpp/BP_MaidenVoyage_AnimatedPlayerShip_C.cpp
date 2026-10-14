// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_AnimatedPlayerShip_C::AngleBetweenVectors2D (279 bytes)
void BP_MaidenVoyage_AnimatedPlayerShip_C::AngleBetweenVectors2D()
{
    auto CallFunc_VSize_ReturnValue = v1;
    auto CallFunc_VSize_ReturnValue2 = v2;
    auto CallFunc_Dot_VectorVector_ReturnValue = v1;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_VSize_ReturnValue;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
    auto CallFunc_DegAcos_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    return;
}

// Recovered Kismet: BP_MaidenVoyage_AnimatedPlayerShip_C::FireNearMissOnTarget (983 bytes)
void BP_MaidenVoyage_AnimatedPlayerShip_C::FireNearMissOnTarget()
{
    BP_AILargeShip_StandardHull_C* idx_279172 = Cast<BP_AILargeShip_StandardHull_C*>(Ship);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_279172);
    if (!K2Node_DynamicCast_bSuccess) goto L_3D4;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = TargetShip->K2_GetActorLocation();
    FVector CallFunc_K2_GetActorLocation_ReturnValue2 = Ship->K2_GetActorLocation();
    FVector CallFunc_GetActorRightVector_ReturnValue = Ship->GetActorRightVector();
    auto CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
    AngleBetweenVectors2D(CallFunc_GetActorRightVector_ReturnValue, CallFunc_Subtract_VectorVector_ReturnValue, idx_279159);
    auto CallFunc_Greater_FloatFloat_ReturnValue = idx_279159;
    auto CallFunc_Less_FloatFloat_ReturnValue = idx_279159;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_3D4;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
    auto CallFunc_Add_VectorVector_ReturnValue = idx_279176;
    auto CallFunc_GetVelocity_ReturnValue = TargetShip->GetVelocity();
    CallFunc_K2_GetActorLocation_ReturnValue = TargetShip->K2_GetActorLocation();
    auto CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue;
    bool idx_279162 = UProjectileMaths::CalculateLaunchVelocity(idx_279161, idx_279160, idx_279163, CallFunc_Add_VectorVector_ReturnValue2, CallFunc_GetVelocity_ReturnValue, ProjectileSpeed, Gravity, false);
    if (!idx_279162) goto L_3D4;
    FireProjectile(idx_279163, idx_279161);
L_3D4:
    return;
}

// Recovered Kismet: BP_MaidenVoyage_AnimatedPlayerShip_C::UserConstructionScript (3 bytes)
void BP_MaidenVoyage_AnimatedPlayerShip_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_MaidenVoyage_AnimatedPlayerShip_C::ReceiveTick (40 bytes)
void BP_MaidenVoyage_AnimatedPlayerShip_C::ReceiveTick()
{
    ExecuteUbergraph_BP_MaidenVoyage_AnimatedPlayerShip();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_AnimatedPlayerShip_C::FireProjectile (58 bytes)
void BP_MaidenVoyage_AnimatedPlayerShip_C::FireProjectile()
{
    ExecuteUbergraph_BP_MaidenVoyage_AnimatedPlayerShip();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_AnimatedPlayerShip_C::ExecuteUbergraph_BP_MaidenVoyage_AnimatedPlayerShip (1709 bytes)
void BP_MaidenVoyage_AnimatedPlayerShip_C::ExecuteUbergraph_BP_MaidenVoyage_AnimatedPlayerShip()
{
    FireNearMissOnTarget();
    auto CallFunc_MakeRotator_ReturnValue = CallFunc_GetYawPitchFromVector_Yaw;
    auto CallFunc_MakeTransform_ReturnValue = idx_279171;
    AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = UGameplayStatics::BeginDeferredActorSpawnFromClass(BP_Projectile_CannonBall_MaidenVoyage_C, CallFunc_MakeTransform_ReturnValue);
    CallFunc_MakeRotator_ReturnValue = CallFunc_GetYawPitchFromVector_Yaw;
    CallFunc_MakeTransform_ReturnValue = idx_279171;
    auto CallFunc_FinishSpawningActor_ReturnValue = GameplayStatics->this->FinishSpawningActor(CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, CallFunc_MakeTransform_ReturnValue);
    USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue->K2_GetRootComponent();
    PrimitiveComponent* idx_279173 = Cast<PrimitiveComponent*>(CallFunc_K2_GetRootComponent_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_279173);
    if (!K2Node_DynamicCast_bSuccess) goto L_6AA;
    CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
    auto CallFunc_Normal_ReturnValue = idx_279170;
    int CallFunc_WwisePostEventAtLocation_ReturnValue = UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(CallFunc_WwisePostEventAtLocation_Emitter, Play_sfx_weapon_cannon_fire, idx_279171, CallFunc_Normal_ReturnValue, pool_weapons_cannon_fire);
    BP_AILargeShip_StandardHull_C* idx_279172 = Cast<BP_AILargeShip_StandardHull_C*>(Ship);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_279172);
    if (!K2Node_DynamicCast_bSuccess2) goto L_6AA;
    auto CallFunc_GetTransform_ReturnValue = idx_279172->this->GetTransform();
    auto CallFunc_InverseTransformLocation_ReturnValue = CallFunc_GetTransform_ReturnValue;
    auto CallFunc_MakeRotator_ReturnValue2 = CallFunc_GetYawPitchFromVector_Pitch2;
    UParticleSystemComponent* CallFunc_AthenaSpawnEmitterAttachedWithOwner_ReturnValue = UVfxFunctionLibrary::AthenaSpawnEmitterAttachedWithOwner(vfx_muzzle_cannon_3rd, idx_279172, idx_279172, CallFunc_MakeRotator_ReturnValue2, true, false, false, false);
    auto CallFunc_GreaterEqual_FloatFloat_ReturnValue = idx_279177;
    if (!CallFunc_GreaterEqual_FloatFloat_ReturnValue) goto L_6AA;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_59B;
L_59B:
    auto CallFunc_Add_FloatFloat_ReturnValue = K2Node_Event_DeltaSeconds;
    auto ElapsedTime = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue2 = K2Node_Event_DeltaSeconds;
    auto idx_279177 = CallFunc_Add_FloatFloat_ReturnValue2;
    auto CallFunc_Greater_FloatFloat_ReturnValue = ElapsedTime;
    auto CallFunc_Less_FloatFloat_ReturnValue = ElapsedTime;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_6AA;
L_6AA:
    return;
}
