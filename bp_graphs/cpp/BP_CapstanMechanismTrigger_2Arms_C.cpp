// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CapstanMechanismTrigger_2Arms_C::UserConstructionScript (13 bytes)
void BP_CapstanMechanismTrigger_2Arms_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_CapstanMechanismTrigger_2Arms_C::ReceiveBeginPlay (22 bytes)
void BP_CapstanMechanismTrigger_2Arms_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_CapstanMechanismTrigger_2Arms();
    return;
}

// Recovered Kismet: BP_CapstanMechanismTrigger_2Arms_C::ExecuteUbergraph_BP_CapstanMechanismTrigger_2Arms (150 bytes)
void BP_CapstanMechanismTrigger_2Arms_C::ExecuteUbergraph_BP_CapstanMechanismTrigger_2Arms()
{
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    TScriptInterface<UMechanismElementProxyInterface> idx_242227 = TScriptInterface<UMechanismElementProxyInterface>(CallFunc_GetOwner_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_242227);
    if (!K2Node_DynamicCast_bSuccess) goto L_93;
L_93:
    return;
}
