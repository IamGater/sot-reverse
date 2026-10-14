// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GH_SelectItemSpawnDistribution_C::OnBeginCustom (359 bytes)
void BP_GH_SelectItemSpawnDistribution_C::OnBeginCustom()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_285560);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_151;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_285560);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_Clamp_ReturnValue = Rank;
    auto SelectedItem = CallFunc_Array_Get_Item;
L_151:
    return;
}
