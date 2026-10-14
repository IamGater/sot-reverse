// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Pause_C::OnBegin (40 bytes)
void BP_Pause_C::OnBegin()
{
    ExecuteUbergraph_BP_Pause();
    return;
}

// Recovered Kismet: BP_Pause_C::ExecuteUbergraph_BP_Pause (88 bytes)
void BP_Pause_C::ExecuteUbergraph_BP_Pause()
{
    this->SignalComplete();
    this->Delay();
    return;
}
