// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_WaitForCaptainSkullPickup_C::OnBegin (40 bytes)
void BP_TheAshenDragon_WaitForCaptainSkullPickup_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForCaptainSkullPickup();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForCaptainSkullPickup_C::OnSkullPickup (22 bytes)
void BP_TheAshenDragon_WaitForCaptainSkullPickup_C::OnSkullPickup()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForCaptainSkullPickup();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForCaptainSkullPickup_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForCaptainSkullPickup (387 bytes)
void BP_TheAshenDragon_WaitForCaptainSkullPickup_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForCaptainSkullPickup()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TheAshenDragon_MarthaSkull_Proxy_C* idx_281942 = Cast<BP_TheAshenDragon_MarthaSkull_Proxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281942);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    auto CallFunc_GetItemInfo_ReturnValue = idx_281942->this->GetItemInfo();
    this->SignalComplete();
    return;
}
