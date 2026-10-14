// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_InteractableShipRailingLight_C::UserConstructionScript (3 bytes)
void BP_InteractableShipRailingLight_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_InteractableShipRailingLight_C::LightStateChanged (22 bytes)
void BP_InteractableShipRailingLight_C::LightStateChanged()
{
    ExecuteUbergraph_BP_InteractableShipRailingLight();
    return;
}

// Recovered Kismet: BP_InteractableShipRailingLight_C::ReceiveBeginPlay (22 bytes)
void BP_InteractableShipRailingLight_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_InteractableShipRailingLight();
    return;
}

// Recovered Kismet: BP_InteractableShipRailingLight_C::ExecuteUbergraph_BP_InteractableShipRailingLight (4599 bytes)
void BP_InteractableShipRailingLight_C::ExecuteUbergraph_BP_InteractableShipRailingLight()
{
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(DynamicGlowMaterial);
    auto CallFunc_GetFlameOfFateType_ReturnValue3 = GetFlameOfFateType();
    auto Temp_byte_Variable = CallFunc_GetFlameOfFateType_ReturnValue3;
    auto CallFunc_GetFlameOfFateType_ReturnValue = GetFlameOfFateType();
    auto CurrentFlameOfFateType = CallFunc_GetFlameOfFateType_ReturnValue;
    auto CallFunc_IsValid_ReturnValue4 = KismetSystemLibrary->this->IsValid(DynamicMaterial);
    FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue3 = DynamicMaterial->K2_GetVectorParameterValue();
    auto CallFunc_GetFlameOfFateType_ReturnValue6 = GetFlameOfFateType();
    auto Temp_byte_Variable2 = CallFunc_GetFlameOfFateType_ReturnValue6;
    auto CallFunc_IsValid_ReturnValue5 = KismetSystemLibrary->this->IsValid(DynamicGlowMaterial);
    auto CallFunc_GetFlameOfFateType_ReturnValue7 = GetFlameOfFateType();
    auto Temp_byte_Variable3 = CallFunc_GetFlameOfFateType_ReturnValue7;
    auto CallFunc_IsValid_ReturnValue6 = KismetSystemLibrary->this->IsValid(DynamicMaterial);
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_GetFlameOfFateType_ReturnValue8 = GetFlameOfFateType();
    auto CallFunc_NotEqual_ByteByte_ReturnValue2 = CallFunc_GetFlameOfFateType_ReturnValue8;
    auto CallFunc_SelectFloat_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
    auto CallFunc_GetFlameOfFateType_ReturnValue9 = GetFlameOfFateType();
    CurrentFlameOfFateType = CallFunc_GetFlameOfFateType_ReturnValue9;
    FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue = DynamicMaterial->K2_GetVectorParameterValue();
    auto CallFunc_GetFlameOfFateType_ReturnValue2 = GetFlameOfFateType();
    auto Temp_byte_Variable4 = CallFunc_GetFlameOfFateType_ReturnValue2;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(DynamicMaterial);
    auto CallFunc_GetFlameOfFateType_ReturnValue5 = GetFlameOfFateType();
    CurrentFlameOfFateType = CallFunc_GetFlameOfFateType_ReturnValue5;
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(DynamicMaterial);
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_GetFlameOfFateType_ReturnValue4 = GetFlameOfFateType();
    auto CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_GetFlameOfFateType_ReturnValue4;
    auto CallFunc_SelectFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue2 = DynamicGlowMaterial->K2_GetVectorParameterValue();
    auto DefaultGlowColour = CallFunc_K2_GetVectorParameterValue_ReturnValue2;
    auto CallFunc_IsValid_ReturnValue9 = KismetSystemLibrary->this->IsValid(DynamicMaterial);
    bool CallFunc_IsLightOn_ReturnValue2 = AInteractableLight::IsLightOn();
    auto Temp_bool_Variable = CallFunc_IsLightOn_ReturnValue2;
    auto CallFunc_IsValid_ReturnValue8 = KismetSystemLibrary->this->IsValid(DynamicGlowMaterial);
    bool CallFunc_IsLightOn_ReturnValue = AInteractableLight::IsLightOn();
    auto Temp_bool_Variable2 = CallFunc_IsLightOn_ReturnValue;
    if (!UsesGlow) goto L_10A9;
L_10A9:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = Light->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
    auto CallFunc_IsValid_ReturnValue7 = KismetSystemLibrary->this->IsValid(LanternGlow);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = LanternGlow->CreateDynamicMaterialInstance();
    auto DynamicGlowMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    return;
}
