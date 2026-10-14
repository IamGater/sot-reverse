// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EmissaryKilledAnotherEmissary_MA_C::UserConstructionScript (13 bytes)
void BP_PromptActor_EmissaryKilledAnotherEmissary_MA_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryKilledAnotherEmissary_MA_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EmissaryKilledAnotherEmissary_MA_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissaryKilledAnotherEmissary_MA();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryKilledAnotherEmissary_MA_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EmissaryKilledAnotherEmissary_MA_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissaryKilledAnotherEmissary_MA();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryKilledAnotherEmissary_MA_C::ExecuteUbergraph_BP_PromptActor_EmissaryKilledAnotherEmissary_MA (1264 bytes)
void BP_PromptActor_EmissaryKilledAnotherEmissary_MA_C::ExecuteUbergraph_BP_PromptActor_EmissaryKilledAnotherEmissary_MA()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(ExpectedVictimCompanies);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1C9;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* CallFunc_GetDefaultObject_ReturnValue2 = UObjectUtilities::GetDefaultObject(CallFunc_Array_Get_Item);
    Company* K2Node_DynamicCast_AsCompany2 = Cast<Company*>(CallFunc_GetDefaultObject_ReturnValue2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsCompany2);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(ExpectedVictimCompanyName, K2Node_DynamicCast_AsCompany2);
L_1C9:
    auto K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary = K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary = K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_307;
L_307:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_EmissaryKilledAnotherEmissary_C);
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary = Cast<BP_Prompt_EmissaryKilledAnotherEmissary_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary);
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary = K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary;
    UObject* CallFunc_GetDefaultObject_ReturnValue = UObjectUtilities::GetDefaultObject(Company);
    Company* K2Node_DynamicCast_AsCompany = Cast<Company*>(CallFunc_GetDefaultObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsCompany);
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary = K2Node_DynamicCast_AsBP_Prompt_Emissary_Killed_Another_Emissary;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    return;
}
