// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AshenLordAshCloud_C::UserConstructionScript (3 bytes)
void BP_AshenLordAshCloud_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AshenLordAshCloud_C::ReceiveBeginPlay (22 bytes)
void BP_AshenLordAshCloud_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AshenLordAshCloud();
    return;
}

// Recovered Kismet: BP_AshenLordAshCloud_C::UpdatePostSettingsBP (22 bytes)
void BP_AshenLordAshCloud_C::UpdatePostSettingsBP()
{
    ExecuteUbergraph_BP_AshenLordAshCloud();
    return;
}

// Recovered Kismet: BP_AshenLordAshCloud_C::SetDissipationDensityBP (40 bytes)
void BP_AshenLordAshCloud_C::SetDissipationDensityBP()
{
    ExecuteUbergraph_BP_AshenLordAshCloud();
    return;
}

// Recovered Kismet: BP_AshenLordAshCloud_C::ExecuteUbergraph_BP_AshenLordAshCloud (917 bytes)
void BP_AshenLordAshCloud_C::ExecuteUbergraph_BP_AshenLordAshCloud()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_48;
L_48:
    bool CallFunc_IsDedicatedServer_ReturnValue2 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue2) goto L_F7;
L_F7:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CloudMesh->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(M_post_ash_cloud);
    auto PostProcessDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    TScriptInterface<UBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = TScriptInterface<UBlendableInterface>(PostProcessDynamicMaterial);
    UpdatePostSettingsBP();
    bool CallFunc_IsDedicatedServer_ReturnValue3 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue3) goto L_228;
L_228:
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = CloudMesh->K2_GetComponentLocation();
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    return;
}
