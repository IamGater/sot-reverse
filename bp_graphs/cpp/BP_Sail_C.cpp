// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Sail_C::Initialise (955 bytes)
void BP_Sail_C::Initialise()
{
    auto CallFunc_GetAnimInstance_ReturnValue = Mesh->GetAnimInstance();
    TScriptInterface<USailAnimInterface> UniqueObjectNameForCooking_AsSail_Anim_Interface = TScriptInterface<USailAnimInterface>(CallFunc_GetAnimInstance_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsSail_Anim_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_DF;
L_DF:
    ASail::SetForceScalarFromBPParams(SailForceScalar);
    float CallFunc_CalculateFurlValue_ReturnValue = ASail::CalculateFurlValue();
    auto Sail = CallFunc_CalculateFurlValue_ReturnValue;
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = Mesh->GetMaterials();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetMaterials_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetMaterials_ReturnValue = Mesh->GetMaterials();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_Array_Get_Item);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Sail_C::UserConstructionScript (3 bytes)
void BP_Sail_C::UserConstructionScript()
{
    return;
}
