// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_SetSpotlightTriggerExtents_C::OnBeginCustom (925 bytes)
void BP_HeartOfFire_SetSpotlightTriggerExtents_C::OnBeginCustom()
{
    BP_HeartOfFire_SpotlightTrigger_C* idx_282242 = Cast<BP_HeartOfFire_SpotlightTrigger_C*>(idx_282244);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282242);
    if (!K2Node_DynamicCast_bSuccess) goto L_DD;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282242->this->FlushNetDormancy();
    idx_282242 = idx_282242;
    this->SignalComplete();
L_DD:
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(idx_282244);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Conv_StringToText_ReturnValue2 = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}
