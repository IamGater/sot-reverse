// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CargoRunCrate_Plants_Wieldable_C::UserConstructionScript (3 bytes)
void BP_CargoRunCrate_Plants_Wieldable_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_CargoRunCrate_Plants_Wieldable_C::ReceiveTick (40 bytes)
void BP_CargoRunCrate_Plants_Wieldable_C::ReceiveTick()
{
    ExecuteUbergraph_BP_CargoRunCrate_Plants_Wieldable();
    return;
}

// Recovered Kismet: BP_CargoRunCrate_Plants_Wieldable_C::ReceiveBeginPlay (22 bytes)
void BP_CargoRunCrate_Plants_Wieldable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_CargoRunCrate_Plants_Wieldable();
    return;
}

// Recovered Kismet: BP_CargoRunCrate_Plants_Wieldable_C::ExecuteUbergraph_BP_CargoRunCrate_Plants_Wieldable (961 bytes)
void BP_CargoRunCrate_Plants_Wieldable_C::ExecuteUbergraph_BP_CargoRunCrate_Plants_Wieldable()
{
L_A:
    UMaterialInstanceDynamic* idx_240196 = VisualHealthResponseComponent->GetMaterialInstance();
    auto DynamicMaterial = idx_240196;
L_4C:
    auto CallFunc_Multiply_FloatFloat_ReturnValue = idx_240194;
    auto CallFunc_FClamp_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto idx_240194 = CallFunc_FClamp_ReturnValue;
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_139;
L_139:
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue = UGameplayStatics::GetPlayerCharacter(CallFunc_GetPlayerController_ReturnValue);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetPlayerCharacter_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_3BE;
    auto CallFunc_GetVelocity_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetVelocity();
    auto CallFunc_VSize_ReturnValue = CallFunc_GetVelocity_ReturnValue;
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_VSize_ReturnValue;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_4C;
    CallFunc_GetVelocity_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetVelocity();
    CallFunc_VSize_ReturnValue = CallFunc_GetVelocity_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_VSize_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue = idx_240194;
    auto CallFunc_FClamp_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue;
    idx_240194 = CallFunc_FClamp_ReturnValue2;
    bool CallFunc_IsDedicatedServer_ReturnValue2 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue2) goto L_A;
L_3BE:
    return;
}
