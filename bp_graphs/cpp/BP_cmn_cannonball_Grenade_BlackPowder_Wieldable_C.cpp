// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_cmn_cannonball_Grenade_BlackPowder_Wieldable_C::UserConstructionScript (13 bytes)
void BP_cmn_cannonball_Grenade_BlackPowder_Wieldable_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_Grenade_BlackPowder_Wieldable_C::ReceiveBeginPlay (22 bytes)
void BP_cmn_cannonball_Grenade_BlackPowder_Wieldable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_cmn_cannonball_Grenade_BlackPowder_Wieldable();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_Grenade_BlackPowder_Wieldable_C::ReceiveTick (40 bytes)
void BP_cmn_cannonball_Grenade_BlackPowder_Wieldable_C::ReceiveTick()
{
    ExecuteUbergraph_BP_cmn_cannonball_Grenade_BlackPowder_Wieldable();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_Grenade_BlackPowder_Wieldable_C::ExecuteUbergraph_BP_cmn_cannonball_Grenade_BlackPowder_Wieldable (981 bytes)
void BP_cmn_cannonball_Grenade_BlackPowder_Wieldable_C::ExecuteUbergraph_BP_cmn_cannonball_Grenade_BlackPowder_Wieldable()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_48;
L_48:
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue = UGameplayStatics::GetPlayerCharacter(CallFunc_GetPlayerController_ReturnValue);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetPlayerCharacter_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_3D2;
    auto CallFunc_GetVelocity_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetVelocity();
    auto CallFunc_VSize_ReturnValue = CallFunc_GetVelocity_ReturnValue;
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_VSize_ReturnValue;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_2CA;
    CallFunc_GetVelocity_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetVelocity();
    CallFunc_VSize_ReturnValue = CallFunc_GetVelocity_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_VSize_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue = JiggleAmount;
    auto CallFunc_FClamp_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue;
    auto JiggleAmount = CallFunc_FClamp_ReturnValue2;
L_2CA:
    auto CallFunc_Multiply_FloatFloat_ReturnValue = JiggleAmount;
    auto CallFunc_FClamp_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    JiggleAmount = CallFunc_FClamp_ReturnValue;
    bool CallFunc_IsDedicatedServer_ReturnValue2 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue2) goto L_381;
L_381:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = FirstPersonMesh->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
L_3D2:
    return;
}
