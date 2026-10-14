// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetTriggerSphereProxyRadius_C::OnBeginCustom (947 bytes)
void BP_SetTriggerSphereProxyRadius_C::OnBeginCustom()
{
    BP_TriggerSphereProxy_C* idx_282629 = Cast<BP_TriggerSphereProxy_C*>(idx_282631);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282629);
    if (!K2Node_DynamicCast_bSuccess) goto L_8B;
    this->SignalComplete();
L_8B:
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(idx_282631);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Conv_StringToText_ReturnValue2 = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    auto UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}
