// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CompanyOnboardingStarter_C::HasPrerequisites (447 bytes)
void BP_CompanyOnboardingStarter_C::HasPrerequisites()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(AthenaPlayerController);
    if (!CallFunc_IsValid_ReturnValue) goto L_1A9;
    bool CallFunc_HasCompanyRank_ReturnValue = UPlayerEntitlementBlueprintFunctionLibrary::HasCompanyRank(AthenaPlayerController, BP_GH_Rank01_RankDesc_C);
    bool CallFunc_HasCompletedTale_ReturnValue = UPlayerEntitlementBlueprintFunctionLibrary::HasCompletedTale(AthenaPlayerController, BP_CT_Rank_0_XMarks_C);
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_HasCompanyRank_ReturnValue;
    auto CallFunc_Not_PreBool_ReturnValue2 = CallFunc_HasCompletedTale_ReturnValue;
    bool CallFunc_HasBoughtVoyage_ReturnValue = UPlayerEntitlementBlueprintFunctionLibrary::HasBoughtVoyage(AthenaPlayerController, Proposal_CompanyTales_GH_Rank0_C);
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_HasBoughtVoyage_ReturnValue;
L_1A9:
    return;
}
