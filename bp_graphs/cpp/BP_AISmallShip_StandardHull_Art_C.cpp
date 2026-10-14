// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AISmallShip_StandardHull_Art_C::UserConstructionScript (139 bytes)
void BP_AISmallShip_StandardHull_Art_C::UserConstructionScript()
{
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_232702, idx_232709);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(idx_232702, idx_232711);
    return;
}

// Recovered Kismet: BP_AISmallShip_StandardHull_Art_C::StartWetEffect (22 bytes)
void BP_AISmallShip_StandardHull_Art_C::StartWetEffect()
{
    ExecuteUbergraph_BP_AISmallShip_StandardHull_Art();
    return;
}

// Recovered Kismet: BP_AISmallShip_StandardHull_Art_C::HideWetDecals (22 bytes)
void BP_AISmallShip_StandardHull_Art_C::HideWetDecals()
{
    ExecuteUbergraph_BP_AISmallShip_StandardHull_Art();
    return;
}

// Recovered Kismet: BP_AISmallShip_StandardHull_Art_C::SetSailColour (40 bytes)
void BP_AISmallShip_StandardHull_Art_C::SetSailColour()
{
    ExecuteUbergraph_BP_AISmallShip_StandardHull_Art();
    return;
}

// Recovered Kismet: BP_AISmallShip_StandardHull_Art_C::ExecuteUbergraph_BP_AISmallShip_StandardHull_Art (2466 bytes)
void BP_AISmallShip_StandardHull_Art_C::ExecuteUbergraph_BP_AISmallShip_StandardHull_Art()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_32;
L_32:
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_232702);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    int CallFunc_Array_LastIndex_ReturnValue = UKismetArrayLibrary::Array_LastIndex(CallFunc_GetMaterials_ReturnValue);
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_59B;
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    CallFunc_Array_LastIndex_ReturnValue = UKismetArrayLibrary::Array_LastIndex(CallFunc_GetMaterials_ReturnValue);
    K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_Array_Get_Item2);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    auto CurrentMaterial = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
    auto idx_232682 = idx_232696;
    auto idx_232681 = idx_232696;
    idx_232681 = idx_232696;
    auto CallFunc_Conv_IntToFloat_ReturnValue2 = idx_232696;
    auto CallFunc_Conv_IntToFloat_ReturnValue = idx_232696;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_59B:
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    CallFunc_Array_LastIndex_ReturnValue = UKismetArrayLibrary::Array_LastIndex(CallFunc_GetMaterials_ReturnValue);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_Array_Get_Item->CreateDynamicMaterialInstance(CallFunc_Array_LastIndex_ReturnValue, CallFunc_Array_Get_Item2);
    CurrentMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_714;
L_714:
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_232748);
    if (!CallFunc_IsValid_ReturnValue) goto L_8DE;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, false);
    auto idx_232750 = CallFunc_K2_SetTimerDelegate_ReturnValue;
L_8DE:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = idx_232743->CreateDynamicMaterialInstance();
    auto idx_232748 = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    return;
}
