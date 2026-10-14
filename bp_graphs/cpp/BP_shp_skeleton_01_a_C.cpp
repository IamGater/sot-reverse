// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_shp_skeleton_01_a_C::UserConstructionScript (615 bytes)
void BP_shp_skeleton_01_a_C::UserConstructionScript()
{
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(SailMeshes, shp_skl_sails_01_a__sail_01_a);
    int CallFunc_Array_Add_ReturnValue9 = UKismetArrayLibrary::Array_Add(SailMeshes, shp_skl_sails_01_a__sail_02_a);
    int CallFunc_Array_Add_ReturnValue8 = UKismetArrayLibrary::Array_Add(SailMeshes, shp_skl_sails_01_a__sail_03_a);
    int CallFunc_Array_Add_ReturnValue7 = UKismetArrayLibrary::Array_Add(SailMeshes, shp_skl_sails_01_a__sail_04_a);
    int CallFunc_Array_Add_ReturnValue5 = UKismetArrayLibrary::Array_Add(SailMeshes, shp_skl_sails_01_a__sail_05_a);
    int CallFunc_Array_Add_ReturnValue6 = UKismetArrayLibrary::Array_Add(SailMeshes, shp_skl_sails_01_a__sail_03_a1);
    int CallFunc_Array_Add_ReturnValue4 = UKismetArrayLibrary::Array_Add(SailMeshes, shp_skl_sails_01_a__sail_01_a1);
    int CallFunc_Array_Add_ReturnValue3 = UKismetArrayLibrary::Array_Add(SailMeshes, shp_skl_sails_01_a__sail_02_a1);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(SailMeshes, sterncastle_cloth);
    return;
}

// Recovered Kismet: BP_shp_skeleton_01_a_C::StartWetEffect (22 bytes)
void BP_shp_skeleton_01_a_C::StartWetEffect()
{
    ExecuteUbergraph_BP_shp_skeleton_01_a();
    return;
}

// Recovered Kismet: BP_shp_skeleton_01_a_C::HideWetDecals (22 bytes)
void BP_shp_skeleton_01_a_C::HideWetDecals()
{
    ExecuteUbergraph_BP_shp_skeleton_01_a();
    return;
}

// Recovered Kismet: BP_shp_skeleton_01_a_C::SetSailColour (40 bytes)
void BP_shp_skeleton_01_a_C::SetSailColour()
{
    ExecuteUbergraph_BP_shp_skeleton_01_a();
    return;
}

// Recovered Kismet: BP_shp_skeleton_01_a_C::ExecuteUbergraph_BP_shp_skeleton_01_a (2466 bytes)
void BP_shp_skeleton_01_a_C::ExecuteUbergraph_BP_shp_skeleton_01_a()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_32;
L_32:
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(SailMeshes);
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
    auto CallFunc_Conv_ColorToLinearColor_ReturnValue2 = K2Node_CustomEvent_SailParams;
    auto CallFunc_Conv_ColorToLinearColor_ReturnValue = K2Node_CustomEvent_SailParams;
    CallFunc_Conv_ColorToLinearColor_ReturnValue = K2Node_CustomEvent_SailParams;
    auto CallFunc_Conv_IntToFloat_ReturnValue2 = K2Node_CustomEvent_SailParams;
    auto CallFunc_Conv_IntToFloat_ReturnValue = K2Node_CustomEvent_SailParams;
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
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(WetDynamicMaterial);
    if (!CallFunc_IsValid_ReturnValue) goto L_8DE;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, false);
    auto WetTimerHandle = CallFunc_K2_SetTimerDelegate_ReturnValue;
L_8DE:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = WetDecalPort->CreateDynamicMaterialInstance();
    auto WetDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    return;
}
