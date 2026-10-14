// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PlayerPirate_Tavern_C::GetPxActorCapacityForPhysXAggregate (31 bytes)
void BP_PlayerPirate_Tavern_C::GetPxActorCapacityForPhysXAggregate()
{
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::TattoGlowDynamicMaterials (930 bytes)
void BP_PlayerPirate_Tavern_C::TattoGlowDynamicMaterials()
{
    int CallFunc_GetNumMaterials_ReturnValue = Mesh->GetNumMaterials();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = Mesh->GetMaterial(Temp_int_Variable);
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_GetMaterial_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_221;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
L_221:
    CallFunc_GetMaterial_ReturnValue = Mesh->GetMaterial(Temp_int_Variable);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_GetMaterial_ReturnValue);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::GetMouthPosition (105 bytes)
void BP_PlayerPirate_Tavern_C::GetMouthPosition()
{
    auto CallFunc_GetSocketLocation_ReturnValue = Mesh->GetSocketLocation();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::Update Athena Character (3 bytes)
void BP_PlayerPirate_Tavern_C::Update Athena Character()
{
    return;
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::CapstanRotationSpeed (40 bytes)
void BP_PlayerPirate_Tavern_C::CapstanRotationSpeed()
{
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::DockingInterface (40 bytes)
void BP_PlayerPirate_Tavern_C::DockingInterface()
{
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::CapstanForce (94 bytes)
void BP_PlayerPirate_Tavern_C::CapstanForce()
{
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::ReceiveBeginPlay (22 bytes)
void BP_PlayerPirate_Tavern_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::TriggerTattooGlow (22 bytes)
void BP_PlayerPirate_Tavern_C::TriggerTattooGlow()
{
    ExecuteUbergraph_BP_PlayerPirate_Tavern();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Tavern_C::ExecuteUbergraph_BP_PlayerPirate_Tavern (499 bytes)
void BP_PlayerPirate_Tavern_C::ExecuteUbergraph_BP_PlayerPirate_Tavern()
{
    TattoGlowDynamicMaterials(FirstPersonMesh);
    bool CallFunc_IsLocallyControlled_ReturnValue = IsLocallyControlled();
    if (!CallFunc_IsLocallyControlled_ReturnValue) goto L_1F0;
L_E7:
    CallFunc_IsLocallyControlled_ReturnValue = IsLocallyControlled();
    bool CallFunc_IsLocallyControlled_ReturnValue2 = IsLocallyControlled();
    if (!CallFunc_IsLocallyControlled_ReturnValue2) goto L_E7;
    TattoGlowDynamicMaterials(Mesh);
L_1F0:
    return;
}
