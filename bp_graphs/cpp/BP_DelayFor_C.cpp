// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DelayFor_C::OnBeginCustom (26 bytes)
void BP_DelayFor_C::OnBeginCustom()
{
    DelayFor(Delay);
    return;
}

// Recovered Kismet: BP_DelayFor_C::DelayFor (40 bytes)
void BP_DelayFor_C::DelayFor()
{
    ExecuteUbergraph_BP_DelayFor();
    return;
}

// Recovered Kismet: BP_DelayFor_C::ExecuteUbergraph_BP_DelayFor (92 bytes)
void BP_DelayFor_C::ExecuteUbergraph_BP_DelayFor()
{
    this->SignalComplete();
    this->Delay(idx_282558);
    return;
}
