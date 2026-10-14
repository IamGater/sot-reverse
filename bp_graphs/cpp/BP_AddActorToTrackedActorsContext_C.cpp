// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AddActorToTrackedActorsContext_C::OnBeginCustom (714 bytes)
void BP_AddActorToTrackedActorsContext_C::OnBeginCustom()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Actor);
    if (!CallFunc_IsValid_ReturnValue) goto L_F0;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(CallFunc_GetVariables_OutStruct, Actor);
    auto idx_285136 = idx_285136;
    UBlueprintStepBase::SetVariables(idx_285136);
    this->SignalComplete();
L_F0:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}
