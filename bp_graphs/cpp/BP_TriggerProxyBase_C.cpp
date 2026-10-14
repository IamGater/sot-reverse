// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TriggerProxyBase_C::GetClassName (199 bytes)
void BP_TriggerProxyBase_C::GetClassName()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    return;
}

// Recovered Kismet: BP_TriggerProxyBase_C::IsAthenaPlayerCharacter (817 bytes)
void BP_TriggerProxyBase_C::IsAthenaPlayerCharacter()
{
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(Actor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_72;
L_72:
    auto CallFunc_GetClassName_ReturnValue = GetClassName();
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(Actor);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    auto UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}

// Recovered Kismet: BP_TriggerProxyBase_C::UserConstructionScript (3 bytes)
void BP_TriggerProxyBase_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TriggerProxyBase_C::TriggerActivated (40 bytes)
void BP_TriggerProxyBase_C::TriggerActivated()
{
    ExecuteUbergraph_BP_TriggerProxyBase();
    return;
}

// Recovered Kismet: BP_TriggerProxyBase_C::ExecuteUbergraph_BP_TriggerProxyBase (165 bytes)
void BP_TriggerProxyBase_C::ExecuteUbergraph_BP_TriggerProxyBase()
{
    IsAthenaPlayerCharacter(K2Node_CustomEvent_Actor, CallFunc_IsAthenaPlayerCharacter_Result, CallFunc_IsAthenaPlayerCharacter_AthenaPlayerCharacter);
    if (!CallFunc_IsAthenaPlayerCharacter_Result) goto L_A2;
    IsAthenaPlayerCharacter(K2Node_CustomEvent_Actor, CallFunc_IsAthenaPlayerCharacter_Result, CallFunc_IsAthenaPlayerCharacter_AthenaPlayerCharacter);
L_A2:
    return;
}

// Recovered Kismet: BP_TriggerProxyBase_C::OnTriggered__DelegateSignature (3 bytes)
void BP_TriggerProxyBase_C::OnTriggered__DelegateSignature()
{
    return;
}

// Recovered Kismet: BP_TriggerProxyBase_C::OnPlayerEnteredTrigger__DelegateSignature (3 bytes)
void BP_TriggerProxyBase_C::OnPlayerEnteredTrigger__DelegateSignature()
{
    return;
}
