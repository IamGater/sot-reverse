// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Cargo_AssignPickups_C::OnBeginCustom (240 bytes)
void BP_CT_Cargo_AssignPickups_C::OnBeginCustom()
{
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestCargoRunContractsService);
    TaleQuestCargoRunContractsService* idx_228755 = Cast<TaleQuestCargoRunContractsService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_228755);
    if (!K2Node_DynamicCast_bSuccess) goto L_ED;
    auto idx_228750 = idx_228755->this->AddContract(K2Node_MakeArray_Array, idx_228756, DeliverToNPC);
L_ED:
    return;
}
