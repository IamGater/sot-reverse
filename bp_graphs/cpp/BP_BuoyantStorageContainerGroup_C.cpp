// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_BuoyantStorageContainerGroup_C::SpawnBarrelGroup (1447 bytes)
void BP_BuoyantStorageContainerGroup_C::SpawnBarrelGroup()
{
    auto CallFunc_Subtract_IntInt_ReturnValue = idx_230606;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    FRotator idx_230603 = AActor::K2_GetActorRotation();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    auto CallFunc_Conv_IntToFloat_ReturnValue = idx_230607;
    auto CallFunc_Conv_IntToFloat_ReturnValue2 = Temp_int_Variable;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue2;
    auto CallFunc_Percent_IntInt_ReturnValue = Temp_int_Variable;
    auto CallFunc_FFloor_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    auto CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
    auto CallFunc_Multiply_IntFloat_ReturnValue2 = CallFunc_FFloor_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue2;
    auto idx_230602 = CallFunc_MakeVector_ReturnValue;
    auto CallFunc_Add_VectorVector_ReturnValue = idx_230602;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
    AActor* idx_226676 = UGameplayStatics::BeginDeferredActorSpawnFromClass(idx_230600, CallFunc_MakeTransform_ReturnValue);
    idx_230603 = AActor::K2_GetActorRotation();
    CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    CallFunc_Conv_IntToFloat_ReturnValue = idx_230607;
    CallFunc_Conv_IntToFloat_ReturnValue2 = Temp_int_Variable;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue2;
    CallFunc_Percent_IntInt_ReturnValue = Temp_int_Variable;
    CallFunc_FFloor_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
    CallFunc_Multiply_IntFloat_ReturnValue2 = CallFunc_FFloor_ReturnValue;
    CallFunc_MakeVector_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue2;
    idx_230602 = CallFunc_MakeVector_ReturnValue;
    CallFunc_Add_VectorVector_ReturnValue = idx_230602;
    CallFunc_MakeTransform_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
    auto idx_226680 = GameplayStatics->this->FinishSpawningActor(idx_226676, CallFunc_MakeTransform_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_BuoyantStorageContainerGroup_C::UserConstructionScript (3 bytes)
void BP_BuoyantStorageContainerGroup_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_BuoyantStorageContainerGroup_C::ReceiveBeginPlay (22 bytes)
void BP_BuoyantStorageContainerGroup_C::ReceiveBeginPlay()
{
    idx:230605();
    return;
}

// Recovered Kismet: BP_BuoyantStorageContainerGroup_C::fn_idx_230605 (76 bytes)
void BP_BuoyantStorageContainerGroup_C::fn_idx_230605()
{
    SpawnBarrelGroup();
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_49;
L_49:
    return;
}
