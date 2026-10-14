// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ShowShipCannonPrompts_C::OnBeginCustom (1517 bytes)
void BP_ShowShipCannonPrompts_C::OnBeginCustom()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_229172);
    if (!CallFunc_IsValid_ReturnValue) goto L_C4;
    idx_229165* idx_229175 = Cast<idx_229165*>(idx_229172);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_229175);
    if (!K2Node_DynamicCast_bSuccess) goto L_2A7;
    this->SignalComplete();
L_C4:
    UClass* idx_229171 = UGameplayStatics::GetObjectClass();
    FString idx_229170 = UKismetSystemLibrary::GetClassDisplayName(idx_229171);
    FText idx_229168 = UKismetTextLibrary::Conv_StringToText(idx_229170);
    auto idx_229178 = idx_229178;
    idx_229178 = idx_229178;
    FText idx_229169 = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array2);
L_2A7:
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(idx_229172);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText idx_229167 = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto idx_229177 = idx_229177;
    idx_229177 = idx_229177;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}

// Recovered Kismet: BP_ShowShipCannonPrompts_C::ExecuteUbergraph_BP_ShowShipCannonPrompts (13 bytes)
void BP_ShowShipCannonPrompts_C::ExecuteUbergraph_BP_ShowShipCannonPrompts()
{
    return;
}
