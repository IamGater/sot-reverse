// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GH_WayfinderVoyage_SelectChestFillDistribution_C::OnBeginCustom (383 bytes)
void BP_GH_WayfinderVoyage_SelectChestFillDistribution_C::OnBeginCustom()
{
    auto idx_285619 = Rank;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_285615);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_171;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_285615);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_Clamp_ReturnValue = idx_285619;
L_171:
    return;
}
