// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_cmn_cannonball_Grenade_Scatter_Wieldable_C::UserConstructionScript (13 bytes)
void BP_cmn_cannonball_Grenade_Scatter_Wieldable_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_Grenade_Scatter_Wieldable_C::ReceiveBeginPlay (22 bytes)
void BP_cmn_cannonball_Grenade_Scatter_Wieldable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_cmn_cannonball_Grenade_Scatter_Wieldable();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_Grenade_Scatter_Wieldable_C::ReceiveTick (40 bytes)
void BP_cmn_cannonball_Grenade_Scatter_Wieldable_C::ReceiveTick()
{
    ExecuteUbergraph_BP_cmn_cannonball_Grenade_Scatter_Wieldable();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_Grenade_Scatter_Wieldable_C::ExecuteUbergraph_BP_cmn_cannonball_Grenade_Scatter_Wieldable (976 bytes)
void BP_cmn_cannonball_Grenade_Scatter_Wieldable_C::ExecuteUbergraph_BP_cmn_cannonball_Grenade_Scatter_Wieldable()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_48;
L_48:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = FirstPersonMesh->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    bool CallFunc_IsDedicatedServer_ReturnValue2 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue2) goto L_D2;
L_D2:
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue = UGameplayStatics::GetPlayerCharacter(CallFunc_GetPlayerController_ReturnValue);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetPlayerCharacter_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_3CD;
    auto CallFunc_GetVelocity_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetVelocity();
    auto CallFunc_VSize_ReturnValue = CallFunc_GetVelocity_ReturnValue;
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_VSize_ReturnValue;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_354;
    CallFunc_GetVelocity_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetVelocity();
    CallFunc_VSize_ReturnValue = CallFunc_GetVelocity_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_VSize_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue = JiggleAmount;
    auto CallFunc_FClamp_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue;
    auto JiggleAmount = CallFunc_FClamp_ReturnValue2;
L_354:
    auto CallFunc_Multiply_FloatFloat_ReturnValue = JiggleAmount;
    auto CallFunc_FClamp_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    JiggleAmount = CallFunc_FClamp_ReturnValue;
L_3CD:
    return;
}
