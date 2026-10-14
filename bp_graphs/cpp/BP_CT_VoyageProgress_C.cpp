// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_VoyageProgress_C::IsPurchaseable (120 bytes)
void BP_CT_VoyageProgress_C::IsPurchaseable()
{
    auto CallFunc_Not_PreBool_ReturnValue = NoLongerPurchaseable;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = VoyageState;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_VoyageProgress_C::IsCurrently (30 bytes)
void BP_CT_VoyageProgress_C::TutorialVoyageInternalState__NewEnumerator3()
{
    auto VoyageState = NewProgress;
    return;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = ProgressState;
    return;
}

// Recovered Kismet: BP_CT_VoyageProgress_C::IsPast (60 bytes)
void BP_CT_VoyageProgress_C::IsPast()
{
    auto CallFunc_GreaterEqual_ByteByte_ReturnValue = VoyageState;
    return;
}

// Recovered Kismet: BP_CT_VoyageProgress_C::PopulateExistingState (281 bytes)
void BP_CT_VoyageProgress_C::TutorialVoyageInternalState__NewEnumerator1()
{
    bool CallFunc_HasCompanyRank_ReturnValue = UPlayerEntitlementBlueprintFunctionLibrary::HasCompanyRank(AthenaPlayerController, MaximumRank);
    bool NoLongerPurchaseable = true;
    bool CallFunc_HasBoughtVoyage_ReturnValue = UPlayerEntitlementBlueprintFunctionLibrary::HasBoughtVoyage(AthenaPlayerController, AssignedVoyageProposalDescClass);
    if (!CallFunc_HasBoughtVoyage_ReturnValue) goto L_BB;
L_BB:
    bool CallFunc_HasCompletedTale_ReturnValue = UPlayerEntitlementBlueprintFunctionLibrary::HasCompletedTale(AthenaPlayerController, AssignedTaleRankDescClass);
    return;
}

// Recovered Kismet: BP_CT_VoyageProgress_C::Initialise (40 bytes)
void BP_CT_VoyageProgress_C::Initialise()
{
    ExecuteUbergraph_BP_CT_VoyageProgress();
    return;
}

// Recovered Kismet: BP_CT_VoyageProgress_C::ExecuteUbergraph_BP_CT_VoyageProgress (66 bytes)
void BP_CT_VoyageProgress_C::ExecuteUbergraph_BP_CT_VoyageProgress()
{
L_A:
    PopulateExistingState();
    if (!K2Node_CustomEvent_Disabled) goto L_A;
    return;
}
