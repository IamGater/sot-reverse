// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shipwreck_01_a_C::UserConstructionScript (3 bytes)
void BP_Shipwreck_01_a_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Shipwreck_01_a_C::ReceiveBeginPlay (22 bytes)
void BP_Shipwreck_01_a_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Shipwreck_01_a();
    return;
}

// Recovered Kismet: BP_Shipwreck_01_a_C::ReceiveEndPlay (40 bytes)
void BP_Shipwreck_01_a_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_Shipwreck_01_a();
    return;
}

// Recovered Kismet: BP_Shipwreck_01_a_C::OnResetTo (22 bytes)
void BP_Shipwreck_01_a_C::OnResetTo()
{
    ExecuteUbergraph_BP_Shipwreck_01_a();
    return;
}

// Recovered Kismet: BP_Shipwreck_01_a_C::ExecuteUbergraph_BP_Shipwreck_01_a (1346 bytes)
void BP_Shipwreck_01_a_C::ExecuteUbergraph_BP_Shipwreck_01_a()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_53F;
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(Seagulls);
    if (!CallFunc_IsValid_ReturnValue2) goto L_53F;
    USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue = AActor::K2_GetRootComponent();
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue->K2_GetComponentLocation();
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    bool CallFunc_K2_SetActorLocation_ReturnValue = Seagulls->K2_SetActorLocation(CallFunc_MakeVector_ReturnValue, false, CallFunc_K2_SetActorLocation_SweepHitResult, true);
    bool CallFunc_IsServer_ReturnValue2 = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue2) goto L_53F;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Seagulls);
    if (!CallFunc_IsValid_ReturnValue) goto L_53F;
    TArray<int> CallFunc_WwiseEmitterComponentPostEventOnAll_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEventOnAll(K2Node_MakeArray_Array, Play_sfx_underwater_shipwreck_creak);
    bool CallFunc_IsServer_ReturnValue3 = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue3) goto L_53F;
    CallFunc_K2_GetRootComponent_ReturnValue = AActor::K2_GetRootComponent();
    CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue->K2_GetComponentLocation();
    CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    auto CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_MakeVector_ReturnValue;
    AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = UGameplayStatics::BeginDeferredActorSpawnFromClass(BP_Seagull01_32POI_Circling_Shipwreck_C, CallFunc_Conv_VectorToTransform_ReturnValue);
    CallFunc_K2_GetRootComponent_ReturnValue = AActor::K2_GetRootComponent();
    CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue->K2_GetComponentLocation();
    CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_MakeVector_ReturnValue;
    auto CallFunc_FinishSpawningActor_ReturnValue = GameplayStatics->this->FinishSpawningActor(CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, CallFunc_Conv_VectorToTransform_ReturnValue);
    auto Seagulls = CallFunc_FinishSpawningActor_ReturnValue;
L_53F:
    return;
}
