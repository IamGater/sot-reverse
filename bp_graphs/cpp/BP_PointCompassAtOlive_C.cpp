// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PointCompassAtOlive_C::OnBegin (40 bytes)
void BP_PointCompassAtOlive_C::OnBegin()
{
    ExecuteUbergraph_BP_PointCompassAtOlive();
    return;
}

// Recovered Kismet: BP_PointCompassAtOlive_C::ExecuteUbergraph_BP_PointCompassAtOlive (70 bytes)
void BP_PointCompassAtOlive_C::ExecuteUbergraph_BP_PointCompassAtOlive()
{
    UBlueprintStepBase::ChangeCompassTargetByActor();
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    return;
}
